// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/ControllerCommand.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ControllerCommand in the package robot_interfaces.
typedef struct robot_interfaces__msg__ControllerCommand
{
  int32_t motor_id;
  int32_t motor_direction;
  int32_t motor_speed;
} robot_interfaces__msg__ControllerCommand;

// Struct for a sequence of robot_interfaces__msg__ControllerCommand.
typedef struct robot_interfaces__msg__ControllerCommand__Sequence
{
  robot_interfaces__msg__ControllerCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__ControllerCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__CONTROLLER_COMMAND__STRUCT_H_
