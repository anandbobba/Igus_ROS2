// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irc_ros_msgs:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irc_ros_msgs/srv/detail/gripper_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irc_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: grip
  {
    out << "grip: ";
    rosidl_generator_traits::value_to_yaml(msg.grip, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: grip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grip: ";
    rosidl_generator_traits::value_to_yaml(msg.grip, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace irc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irc_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irc_ros_msgs::srv::GripperCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::srv::GripperCommand_Request & msg)
{
  return irc_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::srv::GripperCommand_Request>()
{
  return "irc_ros_msgs::srv::GripperCommand_Request";
}

template<>
inline const char * name<irc_ros_msgs::srv::GripperCommand_Request>()
{
  return "irc_ros_msgs/srv/GripperCommand_Request";
}

template<>
struct has_fixed_size<irc_ros_msgs::srv::GripperCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irc_ros_msgs::srv::GripperCommand_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irc_ros_msgs::srv::GripperCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irc_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GripperCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripped
  {
    out << "gripped: ";
    rosidl_generator_traits::value_to_yaml(msg.gripped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GripperCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripped: ";
    rosidl_generator_traits::value_to_yaml(msg.gripped, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GripperCommand_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace irc_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irc_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irc_ros_msgs::srv::GripperCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::srv::GripperCommand_Response & msg)
{
  return irc_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::srv::GripperCommand_Response>()
{
  return "irc_ros_msgs::srv::GripperCommand_Response";
}

template<>
inline const char * name<irc_ros_msgs::srv::GripperCommand_Response>()
{
  return "irc_ros_msgs/srv/GripperCommand_Response";
}

template<>
struct has_fixed_size<irc_ros_msgs::srv::GripperCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irc_ros_msgs::srv::GripperCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irc_ros_msgs::srv::GripperCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irc_ros_msgs::srv::GripperCommand>()
{
  return "irc_ros_msgs::srv::GripperCommand";
}

template<>
inline const char * name<irc_ros_msgs::srv::GripperCommand>()
{
  return "irc_ros_msgs/srv/GripperCommand";
}

template<>
struct has_fixed_size<irc_ros_msgs::srv::GripperCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<irc_ros_msgs::srv::GripperCommand_Request>::value &&
    has_fixed_size<irc_ros_msgs::srv::GripperCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<irc_ros_msgs::srv::GripperCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<irc_ros_msgs::srv::GripperCommand_Request>::value &&
    has_bounded_size<irc_ros_msgs::srv::GripperCommand_Response>::value
  >
{
};

template<>
struct is_service<irc_ros_msgs::srv::GripperCommand>
  : std::true_type
{
};

template<>
struct is_service_request<irc_ros_msgs::srv::GripperCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irc_ros_msgs::srv::GripperCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
