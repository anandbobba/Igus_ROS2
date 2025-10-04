// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from irc_ros_msgs:msg/CanModuleState.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "irc_ros_msgs/msg/detail/can_module_state__struct.h"
#include "irc_ros_msgs/msg/detail/can_module_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool irc_ros_msgs__msg__can_module_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("irc_ros_msgs.msg._can_module_state.CanModuleState", full_classname_dest, 49) == 0);
  }
  irc_ros_msgs__msg__CanModuleState * ros_message = _ros_message;
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // can_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "can_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->can_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // hardware_ident
    PyObject * field = PyObject_GetAttrString(_pymsg, "hardware_ident");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->hardware_ident, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // version_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "version_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->version_major = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // version_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "version_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->version_minor = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // temperature_motor
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_motor");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_motor = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temperature_board
    PyObject * field = PyObject_GetAttrString(_pymsg, "temperature_board");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temperature_board = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // supply_voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "supply_voltage");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->supply_voltage = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // motor_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->motor_current = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_state = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reset_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "reset_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->reset_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // motor_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->motor_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // command_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * irc_ros_msgs__msg__can_module_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CanModuleState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("irc_ros_msgs.msg._can_module_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CanModuleState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  irc_ros_msgs__msg__CanModuleState * ros_message = (irc_ros_msgs__msg__CanModuleState *)raw_ros_message;
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // can_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->can_id.data,
      strlen(ros_message->can_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "can_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hardware_ident
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->hardware_ident.data,
      strlen(ros_message->hardware_ident.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "hardware_ident", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // version_major
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->version_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "version_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // version_minor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->version_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "version_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_motor
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_motor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_motor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temperature_board
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temperature_board);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temperature_board", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // supply_voltage
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->supply_voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "supply_voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->motor_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_current", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_state
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->error_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reset_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->reset_state.data,
      strlen(ros_message->reset_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reset_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->motor_state.data,
      strlen(ros_message->motor_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->command_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
