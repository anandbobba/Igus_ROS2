// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__BUILDER_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irc_ros_msgs/msg/detail/can_module_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irc_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_CanModuleState_command_mode
{
public:
  explicit Init_CanModuleState_command_mode(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  ::irc_ros_msgs::msg::CanModuleState command_mode(::irc_ros_msgs::msg::CanModuleState::_command_mode_type arg)
  {
    msg_.command_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_motor_state
{
public:
  explicit Init_CanModuleState_motor_state(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_command_mode motor_state(::irc_ros_msgs::msg::CanModuleState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return Init_CanModuleState_command_mode(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_reset_state
{
public:
  explicit Init_CanModuleState_reset_state(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_motor_state reset_state(::irc_ros_msgs::msg::CanModuleState::_reset_state_type arg)
  {
    msg_.reset_state = std::move(arg);
    return Init_CanModuleState_motor_state(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_error_state
{
public:
  explicit Init_CanModuleState_error_state(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_reset_state error_state(::irc_ros_msgs::msg::CanModuleState::_error_state_type arg)
  {
    msg_.error_state = std::move(arg);
    return Init_CanModuleState_reset_state(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_motor_current
{
public:
  explicit Init_CanModuleState_motor_current(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_error_state motor_current(::irc_ros_msgs::msg::CanModuleState::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return Init_CanModuleState_error_state(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_supply_voltage
{
public:
  explicit Init_CanModuleState_supply_voltage(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_motor_current supply_voltage(::irc_ros_msgs::msg::CanModuleState::_supply_voltage_type arg)
  {
    msg_.supply_voltage = std::move(arg);
    return Init_CanModuleState_motor_current(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_temperature_board
{
public:
  explicit Init_CanModuleState_temperature_board(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_supply_voltage temperature_board(::irc_ros_msgs::msg::CanModuleState::_temperature_board_type arg)
  {
    msg_.temperature_board = std::move(arg);
    return Init_CanModuleState_supply_voltage(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_temperature_motor
{
public:
  explicit Init_CanModuleState_temperature_motor(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_temperature_board temperature_motor(::irc_ros_msgs::msg::CanModuleState::_temperature_motor_type arg)
  {
    msg_.temperature_motor = std::move(arg);
    return Init_CanModuleState_temperature_board(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_version_minor
{
public:
  explicit Init_CanModuleState_version_minor(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_temperature_motor version_minor(::irc_ros_msgs::msg::CanModuleState::_version_minor_type arg)
  {
    msg_.version_minor = std::move(arg);
    return Init_CanModuleState_temperature_motor(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_version_major
{
public:
  explicit Init_CanModuleState_version_major(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_version_minor version_major(::irc_ros_msgs::msg::CanModuleState::_version_major_type arg)
  {
    msg_.version_major = std::move(arg);
    return Init_CanModuleState_version_minor(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_hardware_ident
{
public:
  explicit Init_CanModuleState_hardware_ident(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_version_major hardware_ident(::irc_ros_msgs::msg::CanModuleState::_hardware_ident_type arg)
  {
    msg_.hardware_ident = std::move(arg);
    return Init_CanModuleState_version_major(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_can_id
{
public:
  explicit Init_CanModuleState_can_id(::irc_ros_msgs::msg::CanModuleState & msg)
  : msg_(msg)
  {}
  Init_CanModuleState_hardware_ident can_id(::irc_ros_msgs::msg::CanModuleState::_can_id_type arg)
  {
    msg_.can_id = std::move(arg);
    return Init_CanModuleState_hardware_ident(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

class Init_CanModuleState_name
{
public:
  Init_CanModuleState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CanModuleState_can_id name(::irc_ros_msgs::msg::CanModuleState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CanModuleState_can_id(msg_);
  }

private:
  ::irc_ros_msgs::msg::CanModuleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irc_ros_msgs::msg::CanModuleState>()
{
  return irc_ros_msgs::msg::builder::Init_CanModuleState_name();
}

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__BUILDER_HPP_
