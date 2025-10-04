// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irc_ros_msgs:srv/CanModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__FUNCTIONS_H_
#define IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irc_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irc_ros_msgs/srv/detail/can_module_command__struct.h"

/// Initialize srv/CanModuleCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irc_ros_msgs__srv__CanModuleCommand_Request
 * )) before or use
 * irc_ros_msgs__srv__CanModuleCommand_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Request__init(irc_ros_msgs__srv__CanModuleCommand_Request * msg);

/// Finalize srv/CanModuleCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Request__fini(irc_ros_msgs__srv__CanModuleCommand_Request * msg);

/// Create srv/CanModuleCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irc_ros_msgs__srv__CanModuleCommand_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__srv__CanModuleCommand_Request *
irc_ros_msgs__srv__CanModuleCommand_Request__create();

/// Destroy srv/CanModuleCommand message.
/**
 * It calls
 * irc_ros_msgs__srv__CanModuleCommand_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Request__destroy(irc_ros_msgs__srv__CanModuleCommand_Request * msg);

/// Check for srv/CanModuleCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Request__are_equal(const irc_ros_msgs__srv__CanModuleCommand_Request * lhs, const irc_ros_msgs__srv__CanModuleCommand_Request * rhs);

/// Copy a srv/CanModuleCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Request__copy(
  const irc_ros_msgs__srv__CanModuleCommand_Request * input,
  irc_ros_msgs__srv__CanModuleCommand_Request * output);

/// Initialize array of srv/CanModuleCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * irc_ros_msgs__srv__CanModuleCommand_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__init(irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * array, size_t size);

/// Finalize array of srv/CanModuleCommand messages.
/**
 * It calls
 * irc_ros_msgs__srv__CanModuleCommand_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__fini(irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * array);

/// Create array of srv/CanModuleCommand messages.
/**
 * It allocates the memory for the array and calls
 * irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence *
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__create(size_t size);

/// Destroy array of srv/CanModuleCommand messages.
/**
 * It calls
 * irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__destroy(irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * array);

/// Check for srv/CanModuleCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__are_equal(const irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * lhs, const irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * rhs);

/// Copy an array of srv/CanModuleCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Request__Sequence__copy(
  const irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * input,
  irc_ros_msgs__srv__CanModuleCommand_Request__Sequence * output);

/// Initialize srv/CanModuleCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irc_ros_msgs__srv__CanModuleCommand_Response
 * )) before or use
 * irc_ros_msgs__srv__CanModuleCommand_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Response__init(irc_ros_msgs__srv__CanModuleCommand_Response * msg);

/// Finalize srv/CanModuleCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Response__fini(irc_ros_msgs__srv__CanModuleCommand_Response * msg);

/// Create srv/CanModuleCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irc_ros_msgs__srv__CanModuleCommand_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__srv__CanModuleCommand_Response *
irc_ros_msgs__srv__CanModuleCommand_Response__create();

/// Destroy srv/CanModuleCommand message.
/**
 * It calls
 * irc_ros_msgs__srv__CanModuleCommand_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Response__destroy(irc_ros_msgs__srv__CanModuleCommand_Response * msg);

/// Check for srv/CanModuleCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Response__are_equal(const irc_ros_msgs__srv__CanModuleCommand_Response * lhs, const irc_ros_msgs__srv__CanModuleCommand_Response * rhs);

/// Copy a srv/CanModuleCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Response__copy(
  const irc_ros_msgs__srv__CanModuleCommand_Response * input,
  irc_ros_msgs__srv__CanModuleCommand_Response * output);

/// Initialize array of srv/CanModuleCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * irc_ros_msgs__srv__CanModuleCommand_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__init(irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * array, size_t size);

/// Finalize array of srv/CanModuleCommand messages.
/**
 * It calls
 * irc_ros_msgs__srv__CanModuleCommand_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__fini(irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * array);

/// Create array of srv/CanModuleCommand messages.
/**
 * It allocates the memory for the array and calls
 * irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence *
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__create(size_t size);

/// Destroy array of srv/CanModuleCommand messages.
/**
 * It calls
 * irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__destroy(irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * array);

/// Check for srv/CanModuleCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__are_equal(const irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * lhs, const irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * rhs);

/// Copy an array of srv/CanModuleCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__srv__CanModuleCommand_Response__Sequence__copy(
  const irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * input,
  irc_ros_msgs__srv__CanModuleCommand_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__FUNCTIONS_H_
