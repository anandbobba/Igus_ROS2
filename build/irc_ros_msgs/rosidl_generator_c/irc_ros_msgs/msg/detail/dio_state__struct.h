// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:msg/DioState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__STRUCT_H_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__STRUCT_H_

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
// Member 'names'
#include "rosidl_runtime_c/string.h"
// Member 'inputs'
// Member 'outputs'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DioState in the package irc_ros_msgs.
typedef struct irc_ros_msgs__msg__DioState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__boolean__Sequence inputs;
  rosidl_runtime_c__boolean__Sequence outputs;
} irc_ros_msgs__msg__DioState;

// Struct for a sequence of irc_ros_msgs__msg__DioState.
typedef struct irc_ros_msgs__msg__DioState__Sequence
{
  irc_ros_msgs__msg__DioState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__msg__DioState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__STRUCT_H_
