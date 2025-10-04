// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__TRAITS_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irc_ros_msgs/msg/detail/can_module_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CanModuleState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: can_id
  {
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << ", ";
  }

  // member: hardware_ident
  {
    out << "hardware_ident: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_ident, out);
    out << ", ";
  }

  // member: version_major
  {
    out << "version_major: ";
    rosidl_generator_traits::value_to_yaml(msg.version_major, out);
    out << ", ";
  }

  // member: version_minor
  {
    out << "version_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.version_minor, out);
    out << ", ";
  }

  // member: temperature_motor
  {
    out << "temperature_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_motor, out);
    out << ", ";
  }

  // member: temperature_board
  {
    out << "temperature_board: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_board, out);
    out << ", ";
  }

  // member: supply_voltage
  {
    out << "supply_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_voltage, out);
    out << ", ";
  }

  // member: motor_current
  {
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << ", ";
  }

  // member: error_state
  {
    out << "error_state: ";
    rosidl_generator_traits::value_to_yaml(msg.error_state, out);
    out << ", ";
  }

  // member: reset_state
  {
    out << "reset_state: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_state, out);
    out << ", ";
  }

  // member: motor_state
  {
    out << "motor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_state, out);
    out << ", ";
  }

  // member: command_mode
  {
    out << "command_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.command_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CanModuleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: can_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_id: ";
    rosidl_generator_traits::value_to_yaml(msg.can_id, out);
    out << "\n";
  }

  // member: hardware_ident
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_ident: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_ident, out);
    out << "\n";
  }

  // member: version_major
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_major: ";
    rosidl_generator_traits::value_to_yaml(msg.version_major, out);
    out << "\n";
  }

  // member: version_minor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version_minor: ";
    rosidl_generator_traits::value_to_yaml(msg.version_minor, out);
    out << "\n";
  }

  // member: temperature_motor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_motor: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_motor, out);
    out << "\n";
  }

  // member: temperature_board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_board: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_board, out);
    out << "\n";
  }

  // member: supply_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_voltage, out);
    out << "\n";
  }

  // member: motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << "\n";
  }

  // member: error_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_state: ";
    rosidl_generator_traits::value_to_yaml(msg.error_state, out);
    out << "\n";
  }

  // member: reset_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reset_state: ";
    rosidl_generator_traits::value_to_yaml(msg.reset_state, out);
    out << "\n";
  }

  // member: motor_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_state, out);
    out << "\n";
  }

  // member: command_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.command_mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CanModuleState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace irc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irc_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irc_ros_msgs::msg::CanModuleState & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::msg::CanModuleState & msg)
{
  return irc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::msg::CanModuleState>()
{
  return "irc_ros_msgs::msg::CanModuleState";
}

template<>
inline const char * name<irc_ros_msgs::msg::CanModuleState>()
{
  return "irc_ros_msgs/msg/CanModuleState";
}

template<>
struct has_fixed_size<irc_ros_msgs::msg::CanModuleState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irc_ros_msgs::msg::CanModuleState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irc_ros_msgs::msg::CanModuleState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__TRAITS_HPP_
