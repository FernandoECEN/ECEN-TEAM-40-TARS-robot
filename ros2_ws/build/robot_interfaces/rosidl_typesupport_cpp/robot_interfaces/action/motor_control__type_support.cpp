// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robot_interfaces:action/MotorControl.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_interfaces/action/detail/motor_control__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_Goal_type_support_ids_t;

static const _MotorControl_Goal_type_support_ids_t _MotorControl_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_Goal_type_support_symbol_names_t _MotorControl_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_Goal)),
  }
};

typedef struct _MotorControl_Goal_type_support_data_t
{
  void * data[2];
} _MotorControl_Goal_type_support_data_t;

static _MotorControl_Goal_type_support_data_t _MotorControl_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_Goal_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_Goal>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_Goal)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_Result_type_support_ids_t;

static const _MotorControl_Result_type_support_ids_t _MotorControl_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_Result_type_support_symbol_names_t _MotorControl_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_Result)),
  }
};

typedef struct _MotorControl_Result_type_support_data_t
{
  void * data[2];
} _MotorControl_Result_type_support_data_t;

static _MotorControl_Result_type_support_data_t _MotorControl_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_Result_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_Result>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_Result)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_Feedback_type_support_ids_t;

static const _MotorControl_Feedback_type_support_ids_t _MotorControl_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_Feedback_type_support_symbol_names_t _MotorControl_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_Feedback)),
  }
};

typedef struct _MotorControl_Feedback_type_support_data_t
{
  void * data[2];
} _MotorControl_Feedback_type_support_data_t;

static _MotorControl_Feedback_type_support_data_t _MotorControl_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_Feedback_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_Feedback>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_Feedback)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_SendGoal_Request_type_support_ids_t;

static const _MotorControl_SendGoal_Request_type_support_ids_t _MotorControl_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_SendGoal_Request_type_support_symbol_names_t _MotorControl_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_SendGoal_Request)),
  }
};

typedef struct _MotorControl_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MotorControl_SendGoal_Request_type_support_data_t;

static _MotorControl_SendGoal_Request_type_support_data_t _MotorControl_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_SendGoal_Request_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_SendGoal_Request>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_SendGoal_Request)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_SendGoal_Response_type_support_ids_t;

static const _MotorControl_SendGoal_Response_type_support_ids_t _MotorControl_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_SendGoal_Response_type_support_symbol_names_t _MotorControl_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_SendGoal_Response)),
  }
};

typedef struct _MotorControl_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MotorControl_SendGoal_Response_type_support_data_t;

static _MotorControl_SendGoal_Response_type_support_data_t _MotorControl_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_SendGoal_Response_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_SendGoal_Response>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_SendGoal_Response)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_SendGoal_type_support_ids_t;

static const _MotorControl_SendGoal_type_support_ids_t _MotorControl_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_SendGoal_type_support_symbol_names_t _MotorControl_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_SendGoal)),
  }
};

typedef struct _MotorControl_SendGoal_type_support_data_t
{
  void * data[2];
} _MotorControl_SendGoal_type_support_data_t;

static _MotorControl_SendGoal_type_support_data_t _MotorControl_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_SendGoal_service_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorControl_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_interfaces::action::MotorControl_SendGoal>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_GetResult_Request_type_support_ids_t;

static const _MotorControl_GetResult_Request_type_support_ids_t _MotorControl_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_GetResult_Request_type_support_symbol_names_t _MotorControl_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_GetResult_Request)),
  }
};

typedef struct _MotorControl_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MotorControl_GetResult_Request_type_support_data_t;

static _MotorControl_GetResult_Request_type_support_data_t _MotorControl_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_GetResult_Request_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_GetResult_Request>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_GetResult_Request)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_GetResult_Response_type_support_ids_t;

static const _MotorControl_GetResult_Response_type_support_ids_t _MotorControl_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_GetResult_Response_type_support_symbol_names_t _MotorControl_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_GetResult_Response)),
  }
};

typedef struct _MotorControl_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MotorControl_GetResult_Response_type_support_data_t;

static _MotorControl_GetResult_Response_type_support_data_t _MotorControl_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_GetResult_Response_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_GetResult_Response>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_GetResult_Response)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_GetResult_type_support_ids_t;

static const _MotorControl_GetResult_type_support_ids_t _MotorControl_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_GetResult_type_support_symbol_names_t _MotorControl_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_GetResult)),
  }
};

typedef struct _MotorControl_GetResult_type_support_data_t
{
  void * data[2];
} _MotorControl_GetResult_type_support_data_t;

static _MotorControl_GetResult_type_support_data_t _MotorControl_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_GetResult_service_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MotorControl_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_interfaces::action::MotorControl_GetResult>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MotorControl_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MotorControl_FeedbackMessage_type_support_ids_t;

static const _MotorControl_FeedbackMessage_type_support_ids_t _MotorControl_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MotorControl_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MotorControl_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MotorControl_FeedbackMessage_type_support_symbol_names_t _MotorControl_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_interfaces, action, MotorControl_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_interfaces, action, MotorControl_FeedbackMessage)),
  }
};

typedef struct _MotorControl_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MotorControl_FeedbackMessage_type_support_data_t;

static _MotorControl_FeedbackMessage_type_support_data_t _MotorControl_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MotorControl_FeedbackMessage_message_typesupport_map = {
  2,
  "robot_interfaces",
  &_MotorControl_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MotorControl_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MotorControl_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MotorControl_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MotorControl_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_interfaces::action::MotorControl_FeedbackMessage>()
{
  return &::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_interfaces, action, MotorControl_FeedbackMessage)() {
  return get_message_type_support_handle<robot_interfaces::action::MotorControl_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "robot_interfaces/action/detail/motor_control__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace robot_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MotorControl_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<robot_interfaces::action::MotorControl>()
{
  using ::robot_interfaces::action::rosidl_typesupport_cpp::MotorControl_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MotorControl_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::robot_interfaces::action::MotorControl::Impl::SendGoalService>();
  MotorControl_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::robot_interfaces::action::MotorControl::Impl::GetResultService>();
  MotorControl_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::robot_interfaces::action::MotorControl::Impl::CancelGoalService>();
  MotorControl_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::robot_interfaces::action::MotorControl::Impl::FeedbackMessage>();
  MotorControl_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::robot_interfaces::action::MotorControl::Impl::GoalStatusMessage>();
  return &MotorControl_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
