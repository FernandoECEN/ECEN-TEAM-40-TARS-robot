// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:msg/StereoImages.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_interfaces/msg/detail/stereo_images__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StereoImages_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_interfaces::msg::StereoImages(_init);
}

void StereoImages_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_interfaces::msg::StereoImages *>(message_memory);
  typed_message->~StereoImages();
}

size_t size_function__StereoImages__shape(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StereoImages__shape(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StereoImages__shape(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StereoImages__shape(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__StereoImages__shape(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__StereoImages__shape(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__StereoImages__shape(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__StereoImages__shape(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StereoImages__cam1_image(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StereoImages__cam1_image(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StereoImages__cam1_image(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StereoImages__cam1_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__StereoImages__cam1_image(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__StereoImages__cam1_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__StereoImages__cam1_image(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__StereoImages__cam1_image(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StereoImages__cam2_image(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StereoImages__cam2_image(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StereoImages__cam2_image(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StereoImages__cam2_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__StereoImages__cam2_image(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__StereoImages__cam2_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__StereoImages__cam2_image(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__StereoImages__cam2_image(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StereoImages_message_member_array[3] = {
  {
    "shape",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::StereoImages, shape),  // bytes offset in struct
    nullptr,  // default value
    size_function__StereoImages__shape,  // size() function pointer
    get_const_function__StereoImages__shape,  // get_const(index) function pointer
    get_function__StereoImages__shape,  // get(index) function pointer
    fetch_function__StereoImages__shape,  // fetch(index, &value) function pointer
    assign_function__StereoImages__shape,  // assign(index, value) function pointer
    resize_function__StereoImages__shape  // resize(index) function pointer
  },
  {
    "cam1_image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::StereoImages, cam1_image),  // bytes offset in struct
    nullptr,  // default value
    size_function__StereoImages__cam1_image,  // size() function pointer
    get_const_function__StereoImages__cam1_image,  // get_const(index) function pointer
    get_function__StereoImages__cam1_image,  // get(index) function pointer
    fetch_function__StereoImages__cam1_image,  // fetch(index, &value) function pointer
    assign_function__StereoImages__cam1_image,  // assign(index, value) function pointer
    resize_function__StereoImages__cam1_image  // resize(index) function pointer
  },
  {
    "cam2_image",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces::msg::StereoImages, cam2_image),  // bytes offset in struct
    nullptr,  // default value
    size_function__StereoImages__cam2_image,  // size() function pointer
    get_const_function__StereoImages__cam2_image,  // get_const(index) function pointer
    get_function__StereoImages__cam2_image,  // get(index) function pointer
    fetch_function__StereoImages__cam2_image,  // fetch(index, &value) function pointer
    assign_function__StereoImages__cam2_image,  // assign(index, value) function pointer
    resize_function__StereoImages__cam2_image  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StereoImages_message_members = {
  "robot_interfaces::msg",  // message namespace
  "StereoImages",  // message name
  3,  // number of fields
  sizeof(robot_interfaces::msg::StereoImages),
  StereoImages_message_member_array,  // message members
  StereoImages_init_function,  // function to initialize message memory (memory has to be allocated)
  StereoImages_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StereoImages_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StereoImages_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::msg::StereoImages>()
{
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::StereoImages_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, msg, StereoImages)() {
  return &::robot_interfaces::msg::rosidl_typesupport_introspection_cpp::StereoImages_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
