import os
from pathlib import Path

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
    TimerAction,
)
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import (
    Command,
    FindExecutable,
    LaunchConfiguration,
    PathJoinSubstitution,
)
from launch_param_builder import load_yaml
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from nav2_common.launch import ReplaceString


def opaque_test(context, *args, **kwargs):
    use_rviz = LaunchConfiguration("use_rviz")
    gripper = LaunchConfiguration("gripper")
    namespace = LaunchConfiguration("namespace")
    prefix = LaunchConfiguration("prefix")
    hardware_protocol = LaunchConfiguration("hardware_protocol")
    rebel_version = LaunchConfiguration("rebel_version")

    # Get actual values for debugging
    namespace_str = namespace.perform(context)
    prefix_str = prefix.perform(context)
    
    print(f"=== LAUNCH CONFIGURATION ===")
    print(f"Namespace: '{namespace_str}'")
    print(f"Prefix: '{prefix_str}'")
    print(f"Hardware Protocol: {hardware_protocol.perform(context)}")
    print(f"============================")

    rviz_file = PathJoinSubstitution(
        [FindPackageShare("irc_ros_moveit_config"), "rviz", "moveit.rviz"]
    )

    # Robot description
    robot_description_file = PathJoinSubstitution([
        FindPackageShare("irc_ros_description"),
        "urdf",
        "igus_rebel_6dof.urdf.xacro",
    ])
    robot_description = Command([
        FindExecutable(name="xacro"),
        " ",
        robot_description_file,
        " prefix:=",
        prefix,
        " hardware_protocol:=",
        hardware_protocol,
        " gripper:=",
        gripper,
        " rebel_version:=",
        rebel_version,
    ])
    
    robot_description_semantic_file = PathJoinSubstitution([
        FindPackageShare("irc_ros_moveit_config"),
        "config",
        "igus_rebel_6dof.srdf.xacro",
    ])
    robot_description_semantic = Command([
        FindExecutable(name="xacro"),
        " ",
        robot_description_semantic_file,
        " prefix:=",
        prefix,
    ])

    # Load configuration files with proper replacement
    joint_limits_file = PathJoinSubstitution([
        FindPackageShare("irc_ros_moveit_config"),
        "config",
        "joint_limits.yaml",
    ])
    joint_limits = ReplaceString(
        source_file=joint_limits_file,
        replacements={
            "<namespace>": namespace_str,
            "<prefix>": prefix_str,
        },
    )

    # Load controllers configuration
    controllers_file = PathJoinSubstitution([
        FindPackageShare("irc_ros_moveit_config"),
        "config",
        "controllers.yaml",
    ])
    controllers = ReplaceString(
        source_file=controllers_file,
        replacements={
            "<namespace>": namespace_str,
            "<prefix>": prefix_str,
        },
    )
    controllers_dict = load_yaml(Path(controllers.perform(context)))
    
    print(f"=== CONTROLLERS LOADED ===")
    print(f"Controllers: {controllers_dict}")
    print("==========================")

    # Load OMPL configuration
    ompl_file = PathJoinSubstitution([
        FindPackageShare("irc_ros_moveit_config"),
        "config",
        "ompl.yaml",
    ])
    ompl = {"ompl": load_yaml(Path(ompl_file.perform(context)))}

    # MoveIt controller manager configuration
    moveit_controllers = {
        "moveit_simple_controller_manager": controllers_dict,
        "moveit_controller_manager": "moveit_simple_controller_manager/MoveItSimpleControllerManager",
    }

    # Load kinematics configuration
    robot_description_kinematics_file = PathJoinSubstitution([
        FindPackageShare("irc_ros_moveit_config"),
        "config",
        "kinematics.yaml",
    ])
    robot_description_kinematics = ReplaceString(
        source_file=robot_description_kinematics_file,
        replacements={
            "<namespace>": namespace_str,
            "<prefix>": prefix_str,
        },
    )

    # Planning pipeline configuration
    planning_pipeline = {
        "move_group": {
            "planning_plugin": "ompl_interface/OMPLPlanner",
            "request_adapters": """default_planner_request_adapters/AddTimeOptimalParameterization default_planner_request_adapters/FixWorkspaceBounds default_planner_request_adapters/FixStartStateBounds default_planner_request_adapters/FixStartStateCollision default_planner_request_adapters/FixStartStatePathConstraints""",
            "start_state_max_bounds_error": 0.1,
        },
    }

    # Planning scene monitor parameters
    planning_scene_monitor_parameters = {
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
        "planning_scene_monitor_options": {
            "name": "planning_scene_monitor",
            "robot_description": "robot_description",
            "joint_state_topic": "/joint_states",
            "attached_collision_object_topic": "/move_group/planning_scene_monitor",
            "publish_planning_scene_topic": "/move_group/publish_planning_scene",
            "monitored_planning_scene_topic": "/move_group/monitored_planning_scene",
            "wait_for_initial_state_timeout": 10.0,
        },
    }

    # Resolve Command objects to strings
    robot_description_str = robot_description.perform(context)
    robot_description_semantic_str = robot_description_semantic.perform(context)

    # Combine all MoveIt parameters
    moveit_config_dicts = [
        {"robot_description": robot_description_str},
        {"robot_description_semantic": robot_description_semantic_str},
        load_yaml(Path(robot_description_kinematics.perform(context))),
        load_yaml(Path(joint_limits.perform(context))),
        moveit_controllers,
        planning_scene_monitor_parameters,
        planning_pipeline,
        {
            "publish_robot_description": True,
            "publish_robot_description_semantic": True,
        },
        ompl,
    ]
    
    moveit_args = {}
    for config_dict in moveit_config_dicts:
        moveit_args.update(config_dict)

    print("=== MOVEIT CONFIGURATION COMPLETE ===")

    # Include the bringup launch file
    bringup_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare("irc_ros_bringup"),
                "launch",
                "rebel.launch.py"
            ])
        ]),
        launch_arguments={
            "namespace": namespace_str,
            "prefix": prefix_str,
            "hardware_protocol": hardware_protocol.perform(context),
            "gripper": gripper.perform(context),
            "rebel_version": rebel_version.perform(context),
        }.items(),
    )

    # MoveIt move_group node
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        namespace=namespace_str,
        parameters=[moveit_args],
        output="screen",
        emulate_tty=True,
    )

    # RViz with MoveIt configuration
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        arguments=["-d", rviz_file],
        parameters=[
            {"robot_description": robot_description_str},
            {"robot_description_semantic": robot_description_semantic_str},
        ],
        condition=IfCondition(use_rviz),
        output="screen",
        emulate_tty=True,
    )

    # Return launch actions with proper timing
    return [
        bringup_launch,
        # Add a small delay to ensure controllers are loaded before MoveIt starts
        TimerAction(
            period=3.0,
            actions=[move_group_node],
        ),
        rviz_node,
    ]


def generate_launch_description():
    namespace_arg = DeclareLaunchArgument(
        "namespace", 
        default_value="",
        description="Robot namespace"
    )
    prefix_arg = DeclareLaunchArgument(
        "prefix", 
        default_value="",
        description="Joint prefix"
    )
    
    use_rviz_arg = DeclareLaunchArgument(
        "use_rviz",
        default_value="true",
        choices=["0", "1", "false", "true", "False", "True"],
        description="Whether to start rviz with the launch file",
    )
    
    gripper_arg = DeclareLaunchArgument(
        "gripper",
        default_value="ext_dio_gripper",
        choices=["none", "schmalz_ecbpmi", "ext_dio_gripper"],
        description="Which gripper to attach to the flange",
    )
    
    hardware_protocol_arg = DeclareLaunchArgument(
        "hardware_protocol",
        default_value="mock_hardware",
        choices=["mock_hardware", "gazebo", "cprcanv2", "cri"],
        description="Which hardware protocol or mock hardware should be used",
    )
    
    rebel_version_arg = DeclareLaunchArgument(
        "rebel_version",
        default_value="01",
        choices=["pre", "00", "01"],
        description="Which version of the igus ReBeL to use",
    )

    ld = LaunchDescription()

    ld.add_action(namespace_arg)
    ld.add_action(prefix_arg)
    ld.add_action(use_rviz_arg)
    ld.add_action(gripper_arg)
    ld.add_action(hardware_protocol_arg)
    ld.add_action(rebel_version_arg)

    ld.add_action(OpaqueFunction(function=opaque_test))

    return ld