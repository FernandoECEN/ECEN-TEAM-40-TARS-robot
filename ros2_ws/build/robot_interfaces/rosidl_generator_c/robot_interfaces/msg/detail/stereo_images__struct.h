// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/StereoImages.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'shape'
// Member 'cam1_image'
// Member 'cam2_image'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/StereoImages in the package robot_interfaces.
typedef struct robot_interfaces__msg__StereoImages
{
  rosidl_runtime_c__int32__Sequence shape;
  rosidl_runtime_c__uint8__Sequence cam1_image;
  rosidl_runtime_c__uint8__Sequence cam2_image;
} robot_interfaces__msg__StereoImages;

// Struct for a sequence of robot_interfaces__msg__StereoImages.
typedef struct robot_interfaces__msg__StereoImages__Sequence
{
  robot_interfaces__msg__StereoImages * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__StereoImages__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__STEREO_IMAGES__STRUCT_H_
