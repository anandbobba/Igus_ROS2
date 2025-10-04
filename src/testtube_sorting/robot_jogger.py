#!/usr/bin/env python3
"""
Manual Robot Jogger - Control individual joints precisely
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from rclpy.action import ActionClient
import json
import threading

class RobotJogger(Node):
    def __init__(self):
        super().__init__('robot_jogger')
        
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
        
        self.current_joints = [0.0] * 6
        self.joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']
        self.positions = {}
        
        # Jog increment (radians)
        self.jog_increment = 0.1  # Default 0.1 radians (~5.7 degrees)
        
        self.get_logger().info('Robot Jogger Ready!')
        self.print_help()

    def joint_state_callback(self, msg):
        """Store current joint states"""
        if len(msg.position) >= 6:
            self.current_joints = list(msg.position[:6])

    def print_help(self):
        """Print available commands"""
        print('\n' + '='*60)
        print('ROBOT JOGGER - Manual Joint Control')
        print('='*60)
        print('\nJOINT CONTROL:')
        print('  j1+ / j1-     Jog joint 1 forward/backward')
        print('  j2+ / j2-     Jog joint 2 forward/backward')
        print('  j3+ / j3-     Jog joint 3 forward/backward')
        print('  j4+ / j4-     Jog joint 4 forward/backward')
        print('  j5+ / j5-     Jog joint 5 forward/backward')
        print('  j6+ / j6-     Jog joint 6 forward/backward')
        print('\nSETTINGS:')
        print('  inc <value>   Set jog increment (radians, e.g., inc 0.05)')
        print('  speed <sec>   Set movement speed (seconds, e.g., speed 1)')
        print('\nPOSITIONS:')
        print('  current       Show current joint values')
        print('  zero          Move all joints to zero')
        print('  goto <j1> <j2> <j3> <j4> <j5> <j6>')
        print('                Move to specific joint values')
        print('  record <n>    Save current position')
        print('  list          Show saved positions')
        print('  load <n>      Move to saved position')
        print('  save          Save positions to file')
        print('\nOTHER:')
        print('  help          Show this help')
        print('  quit          Exit')
        print('='*60)
        print(f'\nCurrent increment: {self.jog_increment:.4f} rad (~{self.jog_increment*57.3:.1f}°)')
        print('='*60 + '\n')

    def move_to_joints(self, joint_values, duration=2.0):
        """Move robot to specified joint values"""
        if not self.action_client.wait_for_server(timeout_sec=2.0):
            self.get_logger().error('Action server not available!')
            return False

        goal_msg = FollowJointTrajectory.Goal()
        trajectory = JointTrajectory()
        trajectory.joint_names = self.joint_names
        
        point = JointTrajectoryPoint()
        point.positions = joint_values
        point.time_from_start.sec = int(duration)
        point.time_from_start.nanosec = int((duration - int(duration)) * 1e9)
        trajectory.points = [point]
        
        goal_msg.trajectory = trajectory
        
        future = self.action_client.send_goal_async(goal_msg)
        rclpy.spin_until_future_complete(self, future, timeout_sec=duration+1.0)
        
        return future.result() is not None

    def jog_joint(self, joint_index, direction):
        """Jog a single joint"""
        if joint_index < 0 or joint_index >= 6:
            self.get_logger().error('Invalid joint index')
            return
            
        new_joints = self.current_joints.copy()
        new_joints[joint_index] += direction * self.jog_increment
        
        self.get_logger().info(
            f'Jogging joint{joint_index+1} {direction*self.jog_increment:+.4f} rad '
            f'to {new_joints[joint_index]:.4f} rad'
        )
        
        self.move_to_joints(new_joints, duration=0.5)

    def show_current(self):
        """Show current joint values"""
        print('\nCurrent Joint Values:')
        for i, (name, value) in enumerate(zip(self.joint_names, self.current_joints)):
            print(f'  {name}: {value:+.4f} rad ({value*57.3:+.1f}°)')
        print()

    def record_position(self, name):
        """Record current position"""
        self.positions[name] = {'joints': self.current_joints.copy()}
        self.get_logger().info(f'Position "{name}" recorded')

    def list_positions(self):
        """List saved positions"""
        if not self.positions:
            print('No positions saved yet\n')
            return
            
        print('\nSaved Positions:')
        for name, data in self.positions.items():
            joints = data['joints']
            print(f'  {name}: {[f"{j:.3f}" for j in joints]}')
        print()

    def save_positions_to_file(self):
        """Save positions to file"""
        try:
            with open('robot_positions.json', 'w') as f:
                json.dump(self.positions, f, indent=2)
            self.get_logger().info('Positions saved to robot_positions.json')
        except Exception as e:
            self.get_logger().error(f'Save failed: {e}')

    def load_position(self, name):
        """Load and move to saved position"""
        if name not in self.positions:
            self.get_logger().error(f'Position "{name}" not found')
            return
            
        joints = self.positions[name]['joints']
        self.get_logger().info(f'Moving to "{name}"...')
        self.move_to_joints(joints, duration=3.0)

    def run_interactive(self):
        """Interactive command loop"""
        movement_speed = 2.0
        
        def command_loop():
            nonlocal movement_speed
            
            while rclpy.ok():
                try:
                    cmd = input('> ').strip().lower()
                    
                    if not cmd:
                        continue
                    
                    # Quit
                    if cmd in ['quit', 'exit', 'q']:
                        rclpy.shutdown()
                        break
                    
                    # Help
                    elif cmd == 'help':
                        self.print_help()
                    
                    # Current position
                    elif cmd == 'current':
                        self.show_current()
                    
                    # Zero position
                    elif cmd == 'zero':
                        self.get_logger().info('Moving to zero position...')
                        self.move_to_joints([0.0]*6, duration=movement_speed)
                    
                    # Set increment
                    elif cmd.startswith('inc '):
                        try:
                            self.jog_increment = float(cmd.split()[1])
                            print(f'Jog increment set to {self.jog_increment:.4f} rad '
                                  f'(~{self.jog_increment*57.3:.1f}°)\n')
                        except:
                            print('Usage: inc <value>  (e.g., inc 0.05)\n')
                    
                    # Set speed
                    elif cmd.startswith('speed '):
                        try:
                            movement_speed = float(cmd.split()[1])
                            print(f'Movement speed set to {movement_speed:.1f} seconds\n')
                        except:
                            print('Usage: speed <seconds>  (e.g., speed 1.5)\n')
                    
                    # Jog joints
                    elif cmd.startswith('j') and len(cmd) >= 3:
                        try:
                            joint_num = int(cmd[1])
                            direction = 1 if cmd[2] == '+' else -1
                            if 1 <= joint_num <= 6:
                                self.jog_joint(joint_num-1, direction)
                            else:
                                print('Invalid joint number (1-6)\n')
                        except:
                            print('Usage: j<1-6>+ or j<1-6>-  (e.g., j1+ or j2-)\n')
                    
                    # Goto specific position
                    elif cmd.startswith('goto '):
                        try:
                            values = [float(x) for x in cmd.split()[1:]]
                            if len(values) == 6:
                                self.get_logger().info('Moving to specified position...')
                                self.move_to_joints(values, duration=movement_speed)
                            else:
                                print('Usage: goto <j1> <j2> <j3> <j4> <j5> <j6>\n')
                        except:
                            print('Invalid joint values\n')
                    
                    # Record position
                    elif cmd.startswith('record '):
                        name = cmd[7:].strip()
                        if name:
                            self.record_position(name)
                        else:
                            print('Usage: record <n>\n')
                    
                    # List positions
                    elif cmd == 'list':
                        self.list_positions()
                    
                    # Load position
                    elif cmd.startswith('load '):
                        name = cmd[5:].strip()
                        if name:
                            self.load_position(name)
                        else:
                            print('Usage: load <n>\n')
                    
                    # Save positions
                    elif cmd == 'save':
                        self.save_positions_to_file()
                    
                    else:
                        print(f'Unknown command: {cmd}')
                        print('Type "help" for available commands\n')
                        
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
    
    jogger = RobotJogger()
    jogger.run_interactive()
    
    try:
        rclpy.spin(jogger)
    except KeyboardInterrupt:
        pass
    finally:
        jogger.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()