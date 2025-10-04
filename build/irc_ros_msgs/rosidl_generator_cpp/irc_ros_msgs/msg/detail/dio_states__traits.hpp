// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irc_ros_msgs:msg/DioStates.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_STATES__TRAITS_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irc_ros_msgs/msg/detail/dio_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'dio_states'
#include "irc_ros_msgs/msg/detail/dio_state__traits.hpp"

namespace irc_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DioStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: dio_states
  {
    if (msg.dio_states.size() == 0) {
      out << "dio_states: []";
    } else {
      out << "dio_states: [";
      size_t pending_items = msg.dio_states.size();
      for (auto item : msg.dio_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DioStates & msg,
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

  // member: dio_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dio_states.size() == 0) {
      out << "dio_states: []\n";
    } else {
      out << "dio_states:\n";
      for (auto item : msg.dio_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DioStates & msg, bool use_flow_style = false)
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
  const irc_ros_msgs::msg::DioStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::msg::DioStates & msg)
{
  return irc_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::msg::DioStates>()
{
  return "irc_ros_msgs::msg::DioStates";
}

template<>
inline const char * name<irc_ros_msgs::msg::DioStates>()
{
  return "irc_ros_msgs/msg/DioStates";
}

template<>
struct has_fixed_size<irc_ros_msgs::msg::DioStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irc_ros_msgs::msg::DioStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irc_ros_msgs::msg::DioStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_STATES__TRAITS_HPP_
