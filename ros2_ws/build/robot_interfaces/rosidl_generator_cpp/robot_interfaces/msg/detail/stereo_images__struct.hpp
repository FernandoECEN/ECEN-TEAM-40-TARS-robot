// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/StereoImages.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__StereoImages __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__StereoImages __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StereoImages_
{
  using Type = StereoImages_<ContainerAllocator>;

  explicit StereoImages_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit StereoImages_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _shape_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _shape_type shape;
  using _cam1_image_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _cam1_image_type cam1_image;
  using _cam2_image_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _cam2_image_type cam2_image;

  // setters for named parameter idiom
  Type & set__shape(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__cam1_image(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->cam1_image = _arg;
    return *this;
  }
  Type & set__cam2_image(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->cam2_image = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::StereoImages_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::StereoImages_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::StereoImages_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::StereoImages_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__StereoImages
    std::shared_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__StereoImages
    std::shared_ptr<robot_interfaces::msg::StereoImages_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StereoImages_ & other) const
  {
    if (this->shape != other.shape) {
      return false;
    }
    if (this->cam1_image != other.cam1_image) {
      return false;
    }
    if (this->cam2_image != other.cam2_image) {
      return false;
    }
    return true;
  }
  bool operator!=(const StereoImages_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StereoImages_

// alias to use template instance with default allocator
using StereoImages =
  robot_interfaces::msg::StereoImages_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__STRUCT_HPP_
