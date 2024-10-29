// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/StereoImages.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/stereo_images__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/stereo_images__functions.h"
#include "robot_interfaces/msg/detail/stereo_images__struct.h"


// Include directives for member types
// Member `shape`
// Member `cam1_image`
// Member `cam2_image`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__StereoImages__init(message_memory);
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_fini_function(void * message_memory)
{
  robot_interfaces__msg__StereoImages__fini(message_memory);
}

size_t robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__size_function__StereoImages__shape(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__shape(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__shape(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__fetch_function__StereoImages__shape(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__shape(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__assign_function__StereoImages__shape(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__shape(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__resize_function__StereoImages__shape(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__size_function__StereoImages__cam1_image(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__cam1_image(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__cam1_image(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__fetch_function__StereoImages__cam1_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__cam1_image(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__assign_function__StereoImages__cam1_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__cam1_image(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__resize_function__StereoImages__cam1_image(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__size_function__StereoImages__cam2_image(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__cam2_image(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__cam2_image(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__fetch_function__StereoImages__cam2_image(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__cam2_image(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__assign_function__StereoImages__cam2_image(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__cam2_image(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__resize_function__StereoImages__cam2_image(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_member_array[3] = {
  {
    "shape",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__StereoImages, shape),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__size_function__StereoImages__shape,  // size() function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__shape,  // get_const(index) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__shape,  // get(index) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__fetch_function__StereoImages__shape,  // fetch(index, &value) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__assign_function__StereoImages__shape,  // assign(index, value) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__resize_function__StereoImages__shape  // resize(index) function pointer
  },
  {
    "cam1_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__StereoImages, cam1_image),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__size_function__StereoImages__cam1_image,  // size() function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__cam1_image,  // get_const(index) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__cam1_image,  // get(index) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__fetch_function__StereoImages__cam1_image,  // fetch(index, &value) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__assign_function__StereoImages__cam1_image,  // assign(index, value) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__resize_function__StereoImages__cam1_image  // resize(index) function pointer
  },
  {
    "cam2_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__StereoImages, cam2_image),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__size_function__StereoImages__cam2_image,  // size() function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_const_function__StereoImages__cam2_image,  // get_const(index) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__get_function__StereoImages__cam2_image,  // get(index) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__fetch_function__StereoImages__cam2_image,  // fetch(index, &value) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__assign_function__StereoImages__cam2_image,  // assign(index, value) function pointer
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__resize_function__StereoImages__cam2_image  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_members = {
  "robot_interfaces__msg",  // message namespace
  "StereoImages",  // message name
  3,  // number of fields
  sizeof(robot_interfaces__msg__StereoImages),
  robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_member_array,  // message members
  robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_type_support_handle = {
  0,
  &robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, StereoImages)() {
  if (!robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__StereoImages__rosidl_typesupport_introspection_c__StereoImages_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
