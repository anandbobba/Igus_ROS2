from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    
    # Launch arguments
    hardware_protocol_arg = DeclareLaunchArgument(
        "hardware_protocol",
        default_value="mock_hardware",  # Safe default for teaching
        choices=["mock_hardware", "gazebo", "cprcanv2", "cri"],
        description="Hardware protocol to use",
    )
    
    # Include MoveIt launch file
    moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare("irc_ros_moveit_config"),
                "launch",
                "rebel.launch.py"
            ])
        ]),
        launch_arguments={
            "hardware_protocol": LaunchConfiguration("hardware_protocol"),
            "use_rviz": "true",
        }.items(),
    )
    
    # Position teacher node
    position_teacher_node = Node(
        package="testtube_sorting",
        executable="position_teacher",
        name="position_teacher",
        output="screen",
        parameters=[{
            "use_sim_time": False,
        }],
    )
    
    return LaunchDescription([
        hardware_protocol_arg,
        moveit_launch,
        position_teacher_node,
    ])