// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:srv/DioCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__BUILDER_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/srv/detail/dio_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_DioCommand_Request_outputs
{
public:
  explicit Init_DioCommand_Request_outputs(::irc_ros_msgs::srv::DioCommand_Request & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::srv::DioCommand_Request outputs(::irc_ros_msgs::srv::DioCommand_Request::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::srv::DioCommand_Request msg_;
};

class Init_DioCommand_Request_names
{
public:
  explicit Init_DioCommand_Request_names(::irc_ros_msgs::srv::DioCommand_Request & msg)
  : msg_(msg)
  {}
  Init_DioCommand_Request_outputs names(::irc_ros_msgs::srv::DioCommand_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_DioCommand_Request_outputs(msg_);
  }

private:
  ::irc_ros_msgs::srv::DioCommand_Request msg_;
};

class Init_DioCommand_Request_header
{
public:
  Init_DioCommand_Request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DioCommand_Request_names header(::irc_ros_msgs::srv::DioCommand_Request::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DioCommand_Request_names(msg_);
  }

private:
  ::irc_ros_msgs::srv::DioCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::srv::DioCommand_Request>()
{
  return irc_ros_msgs::srv::builder::Init_DioCommand_Request_header();
}

}  // namespace irc_ros_msgs


namespace irc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_DioCommand_Response_success
{
public:
  Init_DioCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irc_ros_msgs::srv::DioCommand_Response success(::irc_ros_msgs::srv::DioCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::srv::DioCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::srv::DioCommand_Response>()
{
  return irc_ros_msgs::srv::builder::Init_DioCommand_Response_success();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__BUILDER_HPP_
