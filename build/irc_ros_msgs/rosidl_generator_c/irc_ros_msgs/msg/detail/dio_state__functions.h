// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from irc_ros_msgs:msg/DioState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__FUNCTIONS_H_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "irc_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "irc_ros_msgs/msg/detail/dio_state__struct.h"

/// Initialize msg/DioState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * irc_ros_msgs__msg__DioState
 * )) before or use
 * irc_ros_msgs__msg__DioState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__DioState__init(irc_ros_msgs__msg__DioState * msg);

/// Finalize msg/DioState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__DioState__fini(irc_ros_msgs__msg__DioState * msg);

/// Create msg/DioState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * irc_ros_msgs__msg__DioState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__msg__DioState *
irc_ros_msgs__msg__DioState__create();

/// Destroy msg/DioState message.
/**
 * It calls
 * irc_ros_msgs__msg__DioState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__DioState__destroy(irc_ros_msgs__msg__DioState * msg);

/// Check for msg/DioState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__DioState__are_equal(const irc_ros_msgs__msg__DioState * lhs, const irc_ros_msgs__msg__DioState * rhs);

/// Copy a msg/DioState message.
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
irc_ros_msgs__msg__DioState__copy(
  const irc_ros_msgs__msg__DioState * input,
  irc_ros_msgs__msg__DioState * output);

/// Initialize array of msg/DioState messages.
/**
 * It allocates the memory for the number of elements and calls
 * irc_ros_msgs__msg__DioState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__DioState__Sequence__init(irc_ros_msgs__msg__DioState__Sequence * array, size_t size);

/// Finalize array of msg/DioState messages.
/**
 * It calls
 * irc_ros_msgs__msg__DioState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__DioState__Sequence__fini(irc_ros_msgs__msg__DioState__Sequence * array);

/// Create array of msg/DioState messages.
/**
 * It allocates the memory for the array and calls
 * irc_ros_msgs__msg__DioState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
irc_ros_msgs__msg__DioState__Sequence *
irc_ros_msgs__msg__DioState__Sequence__create(size_t size);

/// Destroy array of msg/DioState messages.
/**
 * It calls
 * irc_ros_msgs__msg__DioState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
void
irc_ros_msgs__msg__DioState__Sequence__destroy(irc_ros_msgs__msg__DioState__Sequence * array);

/// Check for msg/DioState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_irc_ros_msgs
bool
irc_ros_msgs__msg__DioState__Sequence__are_equal(const irc_ros_msgs__msg__DioState__Sequence * lhs, const irc_ros_msgs__msg__DioState__Sequence * rhs);

/// Copy an array of msg/DioState messages.
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
irc_ros_msgs__msg__DioState__Sequence__copy(
  const irc_ros_msgs__msg__DioState__Sequence * input,
  irc_ros_msgs__msg__DioState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__FUNCTIONS_H_
