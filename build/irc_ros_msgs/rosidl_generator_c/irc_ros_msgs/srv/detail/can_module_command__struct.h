// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irc_ros_msgs:srv/CanModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__STRUCT_H_
#define IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__STRUCT_H_

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
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_NONE = 0
};

/// Constant 'TYPE_PING'.
enum
{
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_PING = 1
};

/// Constant 'TYPE_ERROR_RESET'.
enum
{
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_ERROR_RESET = 2
};

/// Constant 'TYPE_ENABLE_MOTOR'.
enum
{
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_ENABLE_MOTOR = 3
};

/// Constant 'TYPE_DISABLE_MOTOR'.
enum
{
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_DISABLE_MOTOR = 4
};

/// Constant 'TYPE_REFERENCE'.
enum
{
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_REFERENCE = 5
};

/// Constant 'TYPE_SET_POS_TO_ZERO'.
enum
{
  irc_ros_msgs__srv__CanModuleCommand_Request__TYPE_SET_POS_TO_ZERO = 6
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CanModuleCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__srv__CanModuleCommand_Request
{
  rosidl_runtime_c__String name;
  uint8_t type;
} irc_ros_msgs__srv__CanModuleCommand_Request;

// Struct for a sequence of irc_ros_msgs__srv__CanModuleCommand_Request.
typedef struct irc_ros_msgs__srv__CanModuleCommand_Request__Sequence
{
  irc_ros_msgs__srv__CanModuleCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__srv__CanModuleCommand_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CanModuleCommand in the package irc_ros_msgs.
typedef struct irc_ros_msgs__srv__CanModuleCommand_Response
{
  bool success;
} irc_ros_msgs__srv__CanModuleCommand_Response;

// Struct for a sequence of irc_ros_msgs__srv__CanModuleCommand_Response.
typedef struct irc_ros_msgs__srv__CanModuleCommand_Response__Sequence
{
  irc_ros_msgs__srv__CanModuleCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irc_ros_msgs__srv__CanModuleCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__STRUCT_H_
