// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/CanModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_COMMAND__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/can_module_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_CanModuleCommand_type
{
public:
  explicit Init_CanModuleCommand_type(::irc_ros_msgs::msg::CanModuleCommand & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::CanModuleCommand type(::irc_ros_msgs::msg::CanModuleCommand::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleCommand msg_;
};

class Init_CanModuleCommand_name
{
public:
  Init_CanModuleCommand_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanModuleCommand_type name(::irc_ros_msgs::msg::CanModuleCommand::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CanModuleCommand_type(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::CanModuleCommand>()
{
  return irc_ros_msgs::msg::builder::Init_CanModuleCommand_name();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_COMMAND__BUILDER_HPP_
