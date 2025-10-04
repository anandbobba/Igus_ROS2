// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/DioCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_COMMAND__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/dio_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DioCommand_outputs
{
public:
  explicit Init_DioCommand_outputs(::irc_ros_msgs::msg::DioCommand & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::DioCommand outputs(::irc_ros_msgs::msg::DioCommand::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioCommand msg_;
};

class Init_DioCommand_names
{
public:
  explicit Init_DioCommand_names(::irc_ros_msgs::msg::DioCommand & msg)
  : msg_(msg)
  {}
  Init_DioCommand_outputs names(::irc_ros_msgs::msg::DioCommand::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_DioCommand_outputs(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioCommand msg_;
};

class Init_DioCommand_header
{
public:
  Init_DioCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioCommand_names header(::irc_ros_msgs::msg::DioCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioCommand_names(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::DioCommand>()
{
  return irc_ros_msgs::msg::builder::Init_DioCommand_header();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_COMMAND__BUILDER_HPP_
