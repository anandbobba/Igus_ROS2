// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:srv/CanModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__BUILDER_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/srv/detail/can_module_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_CanModuleCommand_Request_type
{
public:
  explicit Init_CanModuleCommand_Request_type(::irc_ros_msgs::srv::CanModuleCommand_Request & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::srv::CanModuleCommand_Request type(::irc_ros_msgs::srv::CanModuleCommand_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::srv::CanModuleCommand_Request msg_;
};

class Init_CanModuleCommand_Request_name
{
public:
  Init_CanModuleCommand_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanModuleCommand_Request_type name(::irc_ros_msgs::srv::CanModuleCommand_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CanModuleCommand_Request_type(msg_);
  }

private:
  ::irc_ros_msgs::srv::CanModuleCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::srv::CanModuleCommand_Request>()
{
  return irc_ros_msgs::srv::builder::Init_CanModuleCommand_Request_name();
}

}  // namespace irc_ros_msgs


namespace irc_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_CanModuleCommand_Response_success
{
public:
  Init_CanModuleCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irc_ros_msgs::srv::CanModuleCommand_Response success(::irc_ros_msgs::srv::CanModuleCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::srv::CanModuleCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::srv::CanModuleCommand_Response>()
{
  return irc_ros_msgs::srv::builder::Init_CanModuleCommand_Response_success();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__BUILDER_HPP_
