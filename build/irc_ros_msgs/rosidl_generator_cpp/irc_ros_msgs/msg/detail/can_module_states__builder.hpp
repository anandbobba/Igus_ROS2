// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/CanModuleStates.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/can_module_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_CanModuleStates_module_states
{
public:
  explicit Init_CanModuleStates_module_states(::irc_ros_msgs::msg::CanModuleStates & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::CanModuleStates module_states(::irc_ros_msgs::msg::CanModuleStates::_module_states_type arg)
  {
    msg_.module_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleStates msg_;
};

class Init_CanModuleStates_header
{
public:
  Init_CanModuleStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanModuleStates_module_states header(::irc_ros_msgs::msg::CanModuleStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CanModuleStates_module_states(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::CanModuleStates>()
{
  return irc_ros_msgs::msg::builder::Init_CanModuleStates_header();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__BUILDER_HPP_
