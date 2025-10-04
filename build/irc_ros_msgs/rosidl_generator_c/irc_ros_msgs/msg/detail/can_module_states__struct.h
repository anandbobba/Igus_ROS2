// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:msg/CanModuleStates.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__STRUCT_H_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'module_states'
#include "irc_ros_msgs/msg/detail/can_module_state__struct.h"

/// Struct defined in msg/CanModuleStates in the package irc_ros_msgs.
typedef struct irc_ros_msgs__msg__CanModuleStates
{
  std_msgs__msg__Header header;
  irc_ros_msgs__msg__CanModuleState__Sequence module_states;
} irc_ros_msgs__msg__CanModuleStates;

// Struct for a sequence of irc_ros_msgs__msg__CanModuleStates.
typedef struct irc_ros_msgs__msg__CanModuleStates__Sequence
{
  irc_ros_msgs__msg__CanModuleStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__msg__CanModuleStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__STRUCT_H_
