// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irc_ros_msgs:srv/CanModuleCommand.idl
// generated code does not contain a copyright notice

#ifndef IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__STRUCT_HPP_
#define IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Request __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanModuleCommand_Request_
{
  using Type = CanModuleCommand_Request_<ContainerAllocator>;

  explicit CanModuleCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = 0;
    }
  }

  explicit CanModuleCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->type = 0;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_NONE =
    0u;
  static constexpr uint8_t TYPE_PING =
    1u;
  static constexpr uint8_t TYPE_ERROR_RESET =
    2u;
  static constexpr uint8_t TYPE_ENABLE_MOTOR =
    3u;
  static constexpr uint8_t TYPE_DISABLE_MOTOR =
    4u;
  static constexpr uint8_t TYPE_REFERENCE =
    5u;
  static constexpr uint8_t TYPE_SET_POS_TO_ZERO =
    6u;

  // pointer types
  using RawPtr =
    irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Request
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Request
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanModuleCommand_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanModuleCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanModuleCommand_Request_

// alias to use template instance with default allocator
using CanModuleCommand_Request =
  irc_ros_msgs::srv::CanModuleCommand_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_PING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_ERROR_RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_ENABLE_MOTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_DISABLE_MOTOR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_REFERENCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t CanModuleCommand_Request_<ContainerAllocator>::TYPE_SET_POS_TO_ZERO;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace irc_ros_msgs


#ifndef _WIN32
# define DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Response __declspec(deprecated)
#endif

namespace irc_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CanModuleCommand_Response_
{
  using Type = CanModuleCommand_Response_<ContainerAllocator>;

  explicit CanModuleCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit CanModuleCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Response
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irc_ros_msgs__srv__CanModuleCommand_Response
    std::shared_ptr<irc_ros_msgs::srv::CanModuleCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CanModuleCommand_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const CanModuleCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CanModuleCommand_Response_

// alias to use template instance with default allocator
using CanModuleCommand_Response =
  irc_ros_msgs::srv::CanModuleCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irc_ros_msgs

namespace irc_ros_msgs
{

namespace srv
{

struct CanModuleCommand
{
  using Request = irc_ros_msgs::srv::CanModuleCommand_Request;
  using Response = irc_ros_msgs::srv::CanModuleCommand_Response;
};

}  // namespace srv

}  // namespace irc_ros_msgs

#endif  // IRC_ROS_MSGS__SRV__DETAIL__CAN_MODULE_COMMAND__STRUCT_HPP_
