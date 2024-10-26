// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/VisionData.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ai_detect_array'
#include "rosidl_runtime_c/string.h"
// Member 'distance_array'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VisionData in the package robot_interfaces.
typedef struct robot_interfaces__msg__VisionData
{
  rosidl_runtime_c__String__Sequence ai_detect_array;
  rosidl_runtime_c__double__Sequence distance_array;
} robot_interfaces__msg__VisionData;

// Struct for a sequence of robot_interfaces__msg__VisionData.
typedef struct robot_interfaces__msg__VisionData__Sequence
{
  robot_interfaces__msg__VisionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__VisionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__VISION_DATA__STRUCT_H_
