// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_interfaces:msg/VisionData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_interfaces/msg/detail/vision_data__rosidl_typesupport_introspection_c.h"
#include "robot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_interfaces/msg/detail/vision_data__functions.h"
#include "robot_interfaces/msg/detail/vision_data__struct.h"


// Include directives for member types
// Member `ai_detect_array`
#include "rosidl_runtime_c/string_functions.h"
// Member `distance_array`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_interfaces__msg__VisionData__init(message_memory);
}

void robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_fini_function(void * message_memory)
{
  robot_interfaces__msg__VisionData__fini(message_memory);
}

size_t robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__size_function__VisionData__ai_detect_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_const_function__VisionData__ai_detect_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_function__VisionData__ai_detect_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__fetch_function__VisionData__ai_detect_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_const_function__VisionData__ai_detect_array(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__assign_function__VisionData__ai_detect_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_function__VisionData__ai_detect_array(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__resize_function__VisionData__ai_detect_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__size_function__VisionData__distance_array(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_const_function__VisionData__distance_array(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_function__VisionData__distance_array(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__fetch_function__VisionData__distance_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_const_function__VisionData__distance_array(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__assign_function__VisionData__distance_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_function__VisionData__distance_array(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__resize_function__VisionData__distance_array(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_member_array[2] = {
  {
    "ai_detect_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__VisionData, ai_detect_array),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__size_function__VisionData__ai_detect_array,  // size() function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_const_function__VisionData__ai_detect_array,  // get_const(index) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_function__VisionData__ai_detect_array,  // get(index) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__fetch_function__VisionData__ai_detect_array,  // fetch(index, &value) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__assign_function__VisionData__ai_detect_array,  // assign(index, value) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__resize_function__VisionData__ai_detect_array  // resize(index) function pointer
  },
  {
    "distance_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_interfaces__msg__VisionData, distance_array),  // bytes offset in struct
    NULL,  // default value
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__size_function__VisionData__distance_array,  // size() function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_const_function__VisionData__distance_array,  // get_const(index) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__get_function__VisionData__distance_array,  // get(index) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__fetch_function__VisionData__distance_array,  // fetch(index, &value) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__assign_function__VisionData__distance_array,  // assign(index, value) function pointer
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__resize_function__VisionData__distance_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_members = {
  "robot_interfaces__msg",  // message namespace
  "VisionData",  // message name
  2,  // number of fields
  sizeof(robot_interfaces__msg__VisionData),
  robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_member_array,  // message members
  robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_type_support_handle = {
  0,
  &robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_interfaces, msg, VisionData)() {
  if (!robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_type_support_handle.typesupport_identifier) {
    robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_interfaces__msg__VisionData__rosidl_typesupport_introspection_c__VisionData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
