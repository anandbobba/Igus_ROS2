// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irc_ros_msgs:msg/DioState.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__STRUCT_HPP_
#define IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__msg__DioState __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__msg__DioState __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DioState_
{
  using Type = DioState_<ContainerAllocator>;

  explicit DioState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit DioState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _names_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _names_type names;
  using _inputs_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _inputs_type inputs;
  using _outputs_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _outputs_type outputs;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__names(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->names = _arg;
    return *this;
  }
  Type & set__inputs(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->inputs = _arg;
    return *this;
  }
  Type & set__outputs(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->outputs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irc_ros_msgs::msg::DioState_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::msg::DioState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::msg::DioState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::msg::DioState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__msg__DioState
    std::shared_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__msg__DioState
    std::shared_ptr<irc_ros_msgs::msg::DioState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DioState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->names != other.names) {
      return false;
    }
    if (this->inputs != other.inputs) {
      return false;
    }
    if (this->outputs != other.outputs) {
      return false;
    }
    return true;
  }
  bool operator!=(const DioState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DioState_

// alias to use template instance with default allocator
using DioState =
  irc_ros_msgs::msg::DioState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__MSG__DETAIL__DIO_STATE__STRUCT_HPP_
