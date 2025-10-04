// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__STRUCT_H_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'can_id'
// Member 'hardware_ident'
// Member 'reset_state'
// Member 'motor_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CanModuleState in the package irc_ros_msgs.
/**
  * Identifier
 */
typedef struct irc_ros_msgs__msg__CanModuleState
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String can_id;
  /// Device information
  rosidl_runtime_c__String hardware_ident;
  /// string controller_type
  int8_t version_major;
  int8_t version_minor;
  /// Environmental information
  double temperature_motor;
  double temperature_board;
  double supply_voltage;
  double motor_current;
  /// Status
  int8_t error_state;
  rosidl_runtime_c__String reset_state;
  rosidl_runtime_c__String motor_state;
  int8_t command_mode;
} irc_ros_msgs__msg__CanModuleState;

// Struct for a sequence of irc_ros_msgs__msg__CanModuleState.
typedef struct irc_ros_msgs__msg__CanModuleState__Sequence
{
  irc_ros_msgs__msg__CanModuleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__msg__CanModuleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATE__STRUCT_H_
