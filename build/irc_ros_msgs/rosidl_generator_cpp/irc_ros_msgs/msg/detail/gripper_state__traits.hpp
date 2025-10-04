// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irc_ros_msgs:msg/GripperState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irc_ros_msgs/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GripperState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: grasped
  {
    out << "grasped: ";
    rosidl_generator_traits::value_to_yaml(msg.grasped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: grasped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasped: ";
    rosidl_generator_traits::value_to_yaml(msg.grasped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperState & msg, bool use_flow_style = false)
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
  const irc_ros_msgs::msg::GripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::msg::GripperState & msg)
{
  return irc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::msg::GripperState>()
{
  return "irc_ros_msgs::msg::GripperState";
}

template<>
inline const char * name<irc_ros_msgs::msg::GripperState>()
{
  return "irc_ros_msgs/msg/GripperState";
}

template<>
struct has_fixed_size<irc_ros_msgs::msg::GripperState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irc_ros_msgs::msg::GripperState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irc_ros_msgs::msg::GripperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRC_ROS_MSGS__MSG__DETAIL__GRIPPER_STATE__TRAITS_HPP_
