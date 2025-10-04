// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/DioStates.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_STATES__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/dio_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_DioStates_dio_states
{
public:
  explicit Init_DioStates_dio_states(::irc_ros_msgs::msg::DioStates & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::DioStates dio_states(::irc_ros_msgs::msg::DioStates::_dio_states_type arg)
  {
    msg_.dio_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioStates msg_;
};

class Init_DioStates_header
{
public:
  Init_DioStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioStates_dio_states header(::irc_ros_msgs::msg::DioStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioStates_dio_states(msg_);
  }

private:
  ::irc_ros_msgs::msg::DioStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::DioStates>()
{
  return irc_ros_msgs::msg::builder::Init_DioStates_header();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_STATES__BUILDER_HPP_
