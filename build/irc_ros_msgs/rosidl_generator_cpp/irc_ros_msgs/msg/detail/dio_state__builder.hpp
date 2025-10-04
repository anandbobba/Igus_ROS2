// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/DioState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/dio_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DioState_outputs
{
public:
  explicit Init_DioState_outputs(::irc_ros_msgs::msg::DioState & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::DioState outputs(::irc_ros_msgs::msg::DioState::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioState msg_;
};

class Init_DioState_inputs
{
public:
  explicit Init_DioState_inputs(::irc_ros_msgs::msg::DioState & msg)
  : msg_(msg)
  {}
  Init_DioState_outputs inputs(::irc_ros_msgs::msg::DioState::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_DioState_outputs(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioState msg_;
};

class Init_DioState_names
{
public:
  explicit Init_DioState_names(::irc_ros_msgs::msg::DioState & msg)
  : msg_(msg)
  {}
  Init_DioState_inputs names(::irc_ros_msgs::msg::DioState::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_DioState_inputs(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioState msg_;
};

class Init_DioState_header
{
public:
  Init_DioState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioState_names header(::irc_ros_msgs::msg::DioState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioState_names(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::DioState>()
{
  return irc_ros_msgs::msg::builder::Init_DioState_header();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__BUILDER_HPP_
