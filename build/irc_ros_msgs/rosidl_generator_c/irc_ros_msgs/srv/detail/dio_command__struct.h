// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:srv/DioCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__STRUCT_H_
#define IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__STRUCT_H_

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
// Member 'outputs'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/DioCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__srv__DioCommand_Request
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence names;
  rosidl_runtime_c__boolean__Sequence outputs;
} irc_ros_msgs__srv__DioCommand_Request;

// Struct for a sequence of irc_ros_msgs__srv__DioCommand_Request.
typedef struct irc_ros_msgs__srv__DioCommand_Request__Sequence
{
  irc_ros_msgs__srv__DioCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__srv__DioCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/DioCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__srv__DioCommand_Response
{
  bool success;
} irc_ros_msgs__srv__DioCommand_Response;

// Struct for a sequence of irc_ros_msgs__srv__DioCommand_Response.
typedef struct irc_ros_msgs__srv__DioCommand_Response__Sequence
{
  irc_ros_msgs__srv__DioCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__srv__DioCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__SRV__DETAIL__DIO_COMMAND__STRUCT_H_
