#!/usr/bin/env python3
"""
Position recorder that works without moveit_commander
Uses ROS2 services to move robot and topics to get positions
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from rclpy.action import ActionClient
import json
import threading

class PositionRecorder(Node):
    def __init__(self):
        super().__init__('position_recorder')
        
        # Subscribe to joint states
        self.joint_subscription = self.create_subscription(
            JointState,
            '/joint_states',
            self.joint_state_callback,
            10
        )
        
        # Action client to move robot
        self.action_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/rebel_6dof_controller/follow_joint_trajectory'
        )
        
        self.current_joints = None
        self.joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        self.positions = {}
        
        # Predefined safe positions
        self.safe_positions = {
            'home': [0.0, -0.5, 0.5, 0.0, 0.5, 0.0],
            'pick_approach': [1.0, -0.3, 0.8, 0.0, 0.3, 0.0],
            'pick_low': [1.0, -0.1, 1.2, 0.0, 0.1, 0.0],
            'place_approach': [-1.0, -0.3, 0.8, 0.0, 0.3, 0.0],
            'place_low': [-1.0, -0.1, 1.2, 0.0, 0.1, 0.0],
        }
        
        self.get_logger().info('Position Recorder Ready!')
        self.get_logger().info('Commands:')
        self.get_logger().info('  move <preset> - Move to preset position')
        self.get_logger().info('  record <n> - Record current position')
        self.get_logger().info('  list - Show positions')
        self.get_logger().info('  save - Save to file')
        self.get_logger().info('  presets - Show preset positions')
        self.get_logger().info('  current - Show current joints')
        self.get_logger().info('  quit - Exit')

    def joint_state_callback(self, msg):
        """Store current joint states"""
        if len(msg.position) >= 6:
            self.current_joints = list(msg.position[:6])

    def move_to_joints(self, joint_values):
        """Move robot to specified joint values"""
        if not self.action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('Action server not available!')
            return False

        goal_msg = FollowJointTrajectory.Goal()
        trajectory = JointTrajectory()
        trajectory.joint_names = self.joint_names
        
        point = JointTrajectoryPoint()
        point.positions = joint_values
        point.time_from_start.sec = 3  # 3 seconds to reach position
        trajectory.points = [point]
        
        goal_msg.trajectory = trajectory
        
        self.get_logger().info(f'Moving to: {[f"{j:.3f}" for j in joint_values]}')
        
        future = self.action_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            self.get_logger().info('Movement completed!')
            return True
        else:
            self.get_logger().error('Movement failed!')
            return False

    def record_position(self, name):
        """Record current position"""
        if self.current_joints is None:
            self.get_logger().error('No joint data received!')
            return
            
        self.positions[name] = {
            'joints': self.current_joints.copy()
        }
        
        self.get_logger().info(f'Position "{name}" recorded:')
        self.get_logger().info(f'  {[f"{j:.3f}" for j in self.current_joints]}')

    def show_current(self):
        """Show current joint values"""
        if self.current_joints is None:
            self.get_logger().error('No joint data received!')
            return
            
        self.get_logger().info('Current joints:')
        self.get_logger().info(f'  {[f"{j:.3f}" for j in self.current_joints]}')

    def list_positions(self):
        """List recorded positions"""
        if not self.positions:
            self.get_logger().info('No positions recorded')
            return
            
        self.get_logger().info('Recorded positions:')
        for name, data in self.positions.items():
            joints = data['joints']
            self.get_logger().info(f'  {name}: {[f"{j:.3f}" for j in joints]}')

    def show_presets(self):
        """Show preset positions"""
        self.get_logger().info('Preset positions:')
        for name, joints in self.safe_positions.items():
            self.get_logger().info(f'  {name}: {[f"{j:.3f}" for j in joints]}')

    def save_positions(self):
        """Save positions to file"""
        try:
            with open('robot_positions.json', 'w') as f:
                json.dump(self.positions, f, indent=2)
            self.get_logger().info('Positions saved to robot_positions.json')
        except Exception as e:
            self.get_logger().error(f'Save failed: {e}')

    def run_interactive(self):
        """Interactive command loop"""
        def command_loop():
            while rclpy.ok():
                try:
                    cmd = input('\nCommand: ').strip()
                    
                    if cmd.lower() in ['quit', 'exit']:
                        rclpy.shutdown()
                        break
                    elif cmd.lower() == 'current':
                        self.show_current()
                    elif cmd.lower() == 'list':
                        self.list_positions()
                    elif cmd.lower() == 'presets':
                        self.show_presets()
                    elif cmd.lower() == 'save':
                        self.save_positions()
                    elif cmd.lower().startswith('move '):
                        preset = cmd[5:].strip()
                        if preset in self.safe_positions:
                            self.move_to_joints(self.safe_positions[preset])
                        else:
                            self.get_logger().error(f'Unknown preset: {preset}')
                    elif cmd.lower().startswith('record '):
                        name = cmd[7:].strip()
                        if name:
                            self.record_position(name)
                        else:
                            self.get_logger().error('Specify position name')
                    else:
                        self.get_logger().error('Unknown command')
                        
                except EOFError:
                    rclpy.shutdown()
                    break
                except Exception as e:
                    self.get_logger().error(f'Error: {e}')
        
        thread = threading.Thread(target=command_loop)
        thread.daemon = True
        thread.start()

def main():
    rclpy.init()
    
    recorder = PositionRecorder()
    recorder.run_interactive()
    
    try:
        rclpy.spin(recorder)
    except KeyboardInterrupt:
        pass
    finally:
        recorder.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()