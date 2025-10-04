// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/srv/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperCommand_Request_grip
{
public:
  Init_GripperCommand_Request_grip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irc_ros_msgs::srv::GripperCommand_Request grip(::irc_ros_msgs::srv::GripperCommand_Request::_grip_type arg)
  {
    msg_.grip = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::srv::GripperCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::srv::GripperCommand_Request>()
{
  return irc_ros_msgs::srv::builder::Init_GripperCommand_Request_grip();
}

}  // namespace irc_ros_msgs


namespace irc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_GripperCommand_Response_gripped
{
public:
  Init_GripperCommand_Response_gripped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irc_ros_msgs::srv::GripperCommand_Response gripped(::irc_ros_msgs::srv::GripperCommand_Response::_gripped_type arg)
  {
    msg_.gripped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::srv::GripperCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::srv::GripperCommand_Response>()
{
  return irc_ros_msgs::srv::builder::Init_GripperCommand_Response_gripped();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__BUILDER_HPP_
