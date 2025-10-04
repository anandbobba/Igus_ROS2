// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperState_grasped
{
public:
  explicit Init_GripperState_grasped(::irc_ros_msgs::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::GripperState grasped(::irc_ros_msgs::msg::GripperState::_grasped_type arg)
  {
    msg_.grasped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::GripperState msg_;
};

class Init_GripperState_header
{
public:
  Init_GripperState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_grasped header(::irc_ros_msgs::msg::GripperState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperState_grasped(msg_);
  }

private:
  ::irc_ros_msgs::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::GripperState>()
{
  return irc_ros_msgs::msg::builder::Init_GripperState_header();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
