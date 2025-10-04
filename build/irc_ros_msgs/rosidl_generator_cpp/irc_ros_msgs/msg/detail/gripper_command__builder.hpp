// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCommand_grip
{
public:
  explicit Init_GripperCommand_grip(::irc_ros_msgs::msg::GripperCommand & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::GripperCommand grip(::irc_ros_msgs::msg::GripperCommand::_grip_type arg)
  {
    msg_.grip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::GripperCommand msg_;
};

class Init_GripperCommand_header
{
public:
  Init_GripperCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCommand_grip header(::irc_ros_msgs::msg::GripperCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperCommand_grip(msg_);
  }

private:
  ::irc_ros_msgs::msg::GripperCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::GripperCommand>()
{
  return irc_ros_msgs::msg::builder::Init_GripperCommand_header();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
