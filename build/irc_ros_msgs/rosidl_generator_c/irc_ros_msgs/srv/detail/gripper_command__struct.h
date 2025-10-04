// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:srv/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_H_
#define IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GripperCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__srv__GripperCommand_Request
{
  bool grip;
} irc_ros_msgs__srv__GripperCommand_Request;

// Struct for a sequence of irc_ros_msgs__srv__GripperCommand_Request.
typedef struct irc_ros_msgs__srv__GripperCommand_Request__Sequence
{
  irc_ros_msgs__srv__GripperCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__srv__GripperCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/GripperCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__srv__GripperCommand_Response
{
  bool gripped;
} irc_ros_msgs__srv__GripperCommand_Response;

// Struct for a sequence of irc_ros_msgs__srv__GripperCommand_Response.
typedef struct irc_ros_msgs__srv__GripperCommand_Response__Sequence
{
  irc_ros_msgs__srv__GripperCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__srv__GripperCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__SRV__DETAIL__GRIPPER_COMMAND__STRUCT_H_
