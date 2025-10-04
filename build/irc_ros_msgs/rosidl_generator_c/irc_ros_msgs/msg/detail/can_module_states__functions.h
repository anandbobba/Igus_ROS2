// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irc_ros_msgs:msg/CanModuleStates.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__FUNCTIONS_H_
#define IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irc_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irc_ros_msgs/msg/detail/can_module_states__struct.h"

/// Initialize msg/CanModuleStates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irc_ros_msgs__msg__CanModuleStates
 * )) before or use
 * irc_ros_msgs__msg__CanModuleStates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__CanModuleStates__init(irc_ros_msgs__msg__CanModuleStates * msg);

/// Finalize msg/CanModuleStates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__CanModuleStates__fini(irc_ros_msgs__msg__CanModuleStates * msg);

/// Create msg/CanModuleStates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irc_ros_msgs__msg__CanModuleStates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__msg__CanModuleStates *
irc_ros_msgs__msg__CanModuleStates__create();

/// Destroy msg/CanModuleStates message.
/**
 * It calls
 * irc_ros_msgs__msg__CanModuleStates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__CanModuleStates__destroy(irc_ros_msgs__msg__CanModuleStates * msg);

/// Check for msg/CanModuleStates message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__CanModuleStates__are_equal(const irc_ros_msgs__msg__CanModuleStates * lhs, const irc_ros_msgs__msg__CanModuleStates * rhs);

/// Copy a msg/CanModuleStates message.
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
irc_ros_msgs__msg__CanModuleStates__copy(
  const irc_ros_msgs__msg__CanModuleStates * input,
  irc_ros_msgs__msg__CanModuleStates * output);

/// Initialize array of msg/CanModuleStates messages.
/**
 * It allocates the memory for the number of elements and calls
 * irc_ros_msgs__msg__CanModuleStates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__CanModuleStates__Sequence__init(irc_ros_msgs__msg__CanModuleStates__Sequence * array, size_t size);

/// Finalize array of msg/CanModuleStates messages.
/**
 * It calls
 * irc_ros_msgs__msg__CanModuleStates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__CanModuleStates__Sequence__fini(irc_ros_msgs__msg__CanModuleStates__Sequence * array);

/// Create array of msg/CanModuleStates messages.
/**
 * It allocates the memory for the array and calls
 * irc_ros_msgs__msg__CanModuleStates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__msg__CanModuleStates__Sequence *
irc_ros_msgs__msg__CanModuleStates__Sequence__create(size_t size);

/// Destroy array of msg/CanModuleStates messages.
/**
 * It calls
 * irc_ros_msgs__msg__CanModuleStates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__CanModuleStates__Sequence__destroy(irc_ros_msgs__msg__CanModuleStates__Sequence * array);

/// Check for msg/CanModuleStates message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__CanModuleStates__Sequence__are_equal(const irc_ros_msgs__msg__CanModuleStates__Sequence * lhs, const irc_ros_msgs__msg__CanModuleStates__Sequence * rhs);

/// Copy an array of msg/CanModuleStates messages.
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
irc_ros_msgs__msg__CanModuleStates__Sequence__copy(
  const irc_ros_msgs__msg__CanModuleStates__Sequence * input,
  irc_ros_msgs__msg__CanModuleStates__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__MSG__DETAIL__CAN_MODULE_STATES__FUNCTIONS_H_
