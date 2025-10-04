#!/usr/bin/env python3
"""
Pick and Place Executor - Uses your saved positions
"""

import rclpy
from rclpy.node import Node
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from rclpy.action import ActionClient
import json
import time

class PickAndPlaceExecutor(Node):
    def __init__(self):
        super().__init__('pick_and_place_executor')
        
        # Action client to move robot
        self.action_client = ActionClient(
            self,
            FollowJointTrajectory,
            '/rebel_6dof_controller/follow_joint_trajectory'
        )
        
        self.joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        self.positions = {}
        
        # Load saved positions
        self.load_positions()
        
        self.get_logger().info('Pick and Place Executor Ready!')

    def load_positions(self):
        """Load positions from saved file"""
        try:
            with open('robot_positions.json', 'r') as f:
                self.positions = json.load(f)
            self.get_logger().info(f'Loaded {len(self.positions)} positions')
            
            # Show loaded positions
            for name, data in self.positions.items():
                joints = data['joints']
                self.get_logger().info(f'  {name}: {[f"{j:.3f}" for j in joints]}')
                
        except FileNotFoundError:
            self.get_logger().error('robot_positions.json not found! Please teach positions first.')
            return False
        except Exception as e:
            self.get_logger().error(f'Failed to load positions: {e}')
            return False
        return True

    def move_to_position(self, position_name):
        """Move robot to a saved position"""
        if position_name not in self.positions:
            self.get_logger().error(f'Position "{position_name}" not found!')
            return False

        if not self.action_client.wait_for_server(timeout_sec=5.0):
            self.get_logger().error('Action server not available!')
            return False

        joint_values = self.positions[position_name]['joints']
        
        goal_msg = FollowJointTrajectory.Goal()
        trajectory = JointTrajectory()
        trajectory.joint_names = self.joint_names
        
        point = JointTrajectoryPoint()
        point.positions = joint_values
        point.time_from_start.sec = 3  # 3 seconds to reach position
        trajectory.points = [point]
        
        goal_msg.trajectory = trajectory
        
        self.get_logger().info(f'Moving to "{position_name}"...')
        
        future = self.action_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            self.get_logger().info(f'Reached "{position_name}"')
            return True
        else:
            self.get_logger().error(f'Failed to reach "{position_name}"')
            return False

    def simulate_gripper(self, action):
        """Simulate gripper action (replace with real gripper control later)"""
        if action == "close":
            self.get_logger().info('GRIPPER: Closing to grasp object')
        elif action == "open":
            self.get_logger().info('GRIPPER: Opening to release object')
        time.sleep(1.0)  # Simulate gripper action time

    def run_pick_and_place_sequence(self):
        """Execute the complete pick and place sequence"""
        
        # Check required positions
        required_positions = ['home', 'above_picking_tray', 'pick_position', 
                            'above_good_tray', 'place_position']
        
        missing = [pos for pos in required_positions if pos not in self.positions]
        if missing:
            self.get_logger().error(f'Missing required positions: {missing}')
            self.get_logger().info('Please teach these positions first using the position recorder')
            return False

        self.get_logger().info('Starting Pick and Place Sequence')
        self.get_logger().info('=' * 50)

        # Step 1: Go to home
        if not self.move_to_position('home'):
            return False
        time.sleep(1)

        # Step 2: Move above picking tray
        if not self.move_to_position('above_picking_tray'):
            return False
        time.sleep(1)

        # Step 3: Move down to pick position
        if not self.move_to_position('pick_position'):
            return False
        time.sleep(1)

        # Step 4: Close gripper (simulate)
        self.simulate_gripper('close')

        # Step 5: Move back up above picking tray
        if not self.move_to_position('above_picking_tray'):
            return False
        time.sleep(1)

        # Step 6: Move above good tray
        if not self.move_to_position('above_good_tray'):
            return False
        time.sleep(1)

        # Step 7: Move down to place position
        if not self.move_to_position('place_position'):
            return False
        time.sleep(1)

        # Step 8: Open gripper (simulate)
        self.simulate_gripper('open')

        # Step 9: Move back up above good tray
        if not self.move_to_position('above_good_tray'):
            return False
        time.sleep(1)

        # Step 10: Return home
        if not self.move_to_position('home'):
            return False

        self.get_logger().info('=' * 50)
        self.get_logger().info('Pick and Place Sequence COMPLETED!')
        return True

    def run_interactive(self):
        """Interactive mode for testing"""
        import threading
        
        def command_loop():
            while rclpy.ok():
                try:
                    print('\nCommands:')
                    print('  run - Execute pick and place sequence')
                    print('  goto <position> - Move to specific position')
                    print('  list - Show available positions')
                    print('  quit - Exit')
                    
                    cmd = input('Command: ').strip()
                    
                    if cmd.lower() in ['quit', 'exit']:
                        rclpy.shutdown()
                        break
                    elif cmd.lower() == 'run':
                        self.run_pick_and_place_sequence()
                    elif cmd.lower() == 'list':
                        self.get_logger().info('Available positions:')
                        for name in self.positions.keys():
                            self.get_logger().info(f'  - {name}')
                    elif cmd.lower().startswith('goto '):
                        position = cmd[5:].strip()
                        self.move_to_position(position)
                    else:
                        print('Unknown command')
                        
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
    
    executor = PickAndPlaceExecutor()
    
    # Check if positions loaded successfully
    if not executor.positions:
        executor.get_logger().error('No positions loaded. Exiting.')
        executor.destroy_node()
        rclpy.shutdown()
        return
    
    executor.run_interactive()
    
    try:
        rclpy.spin(executor)
    except KeyboardInterrupt:
        pass
    finally:
        executor.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()