// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irc_ros_msgs:srv/DioCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__TRAITS_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irc_ros_msgs/srv/detail/dio_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irc_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DioCommand_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: names
  {
    if (msg.names.size() == 0) {
      out << "names: []";
    } else {
      out << "names: [";
      size_t pending_items = msg.names.size();
      for (auto item : msg.names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outputs
  {
    if (msg.outputs.size() == 0) {
      out << "outputs: []";
    } else {
      out << "outputs: [";
      size_t pending_items = msg.outputs.size();
      for (auto item : msg.outputs) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const DioCommand_Request & msg,
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

  // member: names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.names.size() == 0) {
      out << "names: []\n";
    } else {
      out << "names:\n";
      for (auto item : msg.names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: outputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outputs.size() == 0) {
      out << "outputs: []\n";
    } else {
      out << "outputs:\n";
      for (auto item : msg.outputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DioCommand_Request & msg, bool use_flow_style = false)
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
  const irc_ros_msgs::srv::DioCommand_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::srv::DioCommand_Request & msg)
{
  return irc_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::srv::DioCommand_Request>()
{
  return "irc_ros_msgs::srv::DioCommand_Request";
}

template<>
inline const char * name<irc_ros_msgs::srv::DioCommand_Request>()
{
  return "irc_ros_msgs/srv/DioCommand_Request";
}

template<>
struct has_fixed_size<irc_ros_msgs::srv::DioCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irc_ros_msgs::srv::DioCommand_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irc_ros_msgs::srv::DioCommand_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irc_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DioCommand_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DioCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DioCommand_Response & msg, bool use_flow_style = false)
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
  const irc_ros_msgs::srv::DioCommand_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irc_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irc_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const irc_ros_msgs::srv::DioCommand_Response & msg)
{
  return irc_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irc_ros_msgs::srv::DioCommand_Response>()
{
  return "irc_ros_msgs::srv::DioCommand_Response";
}

template<>
inline const char * name<irc_ros_msgs::srv::DioCommand_Response>()
{
  return "irc_ros_msgs/srv/DioCommand_Response";
}

template<>
struct has_fixed_size<irc_ros_msgs::srv::DioCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irc_ros_msgs::srv::DioCommand_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irc_ros_msgs::srv::DioCommand_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irc_ros_msgs::srv::DioCommand>()
{
  return "irc_ros_msgs::srv::DioCommand";
}

template<>
inline const char * name<irc_ros_msgs::srv::DioCommand>()
{
  return "irc_ros_msgs/srv/DioCommand";
}

template<>
struct has_fixed_size<irc_ros_msgs::srv::DioCommand>
  : std::integral_constant<
    bool,
    has_fixed_size<irc_ros_msgs::srv::DioCommand_Request>::value &&
    has_fixed_size<irc_ros_msgs::srv::DioCommand_Response>::value
  >
{
};

template<>
struct has_bounded_size<irc_ros_msgs::srv::DioCommand>
  : std::integral_constant<
    bool,
    has_bounded_size<irc_ros_msgs::srv::DioCommand_Request>::value &&
    has_bounded_size<irc_ros_msgs::srv::DioCommand_Response>::value
  >
{
};

template<>
struct is_service<irc_ros_msgs::srv::DioCommand>
  : std::true_type
{
};

template<>
struct is_service_request<irc_ros_msgs::srv::DioCommand_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irc_ros_msgs::srv::DioCommand_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__TRAITS_HPP_
