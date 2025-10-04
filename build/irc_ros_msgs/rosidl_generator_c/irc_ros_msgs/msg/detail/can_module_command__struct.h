// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:msg/CanModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_COMMAND__STRUCT_H_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_NONE'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_NONE = 0
};

/// Constant 'TYPE_PING'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_PING = 1
};

/// Constant 'TYPE_ERROR_RESET'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_ERROR_RESET = 1
};

/// Constant 'TYPE_ENABLE_MOTOR'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_ENABLE_MOTOR = 2
};

/// Constant 'TYPE_DISABLE_MOTOR'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_DISABLE_MOTOR = 3
};

/// Constant 'TYPE_REFERENCE'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_REFERENCE = 4
};

/// Constant 'TYPE_SET_POS_TO_ZERO'.
enum
{
  irc_ros_msgs__msg__CanModuleCommand__TYPE_SET_POS_TO_ZERO = 5
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CanModuleCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__msg__CanModuleCommand
{
  rosidl_runtime_c__String name;
  uint8_t type;
} irc_ros_msgs__msg__CanModuleCommand;

// Struct for a sequence of irc_ros_msgs__msg__CanModuleCommand.
typedef struct irc_ros_msgs__msg__CanModuleCommand__Sequence
{
  irc_ros_msgs__msg__CanModuleCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__msg__CanModuleCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_COMMAND__STRUCT_H_
