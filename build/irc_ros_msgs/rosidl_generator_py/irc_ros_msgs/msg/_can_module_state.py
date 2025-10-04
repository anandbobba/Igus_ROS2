# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irc_ros_msgs:msg/CanModuleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CanModuleState(type):
    """Metaclass of message 'CanModuleState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('irc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'irc_ros_msgs.msg.CanModuleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_module_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_module_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_module_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_module_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_module_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CanModuleState(metaclass=Metaclass_CanModuleState):
    """Message class 'CanModuleState'."""

    __slots__ = [
        '_name',
        '_can_id',
        '_hardware_ident',
        '_version_major',
        '_version_minor',
        '_temperature_motor',
        '_temperature_board',
        '_supply_voltage',
        '_motor_current',
        '_error_state',
        '_reset_state',
        '_motor_state',
        '_command_mode',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'can_id': 'string',
        'hardware_ident': 'string',
        'version_major': 'int8',
        'version_minor': 'int8',
        'temperature_motor': 'double',
        'temperature_board': 'double',
        'supply_voltage': 'double',
        'motor_current': 'double',
        'error_state': 'int8',
        'reset_state': 'string',
        'motor_state': 'string',
        'command_mode': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.can_id = kwargs.get('can_id', str())
        self.hardware_ident = kwargs.get('hardware_ident', str())
        self.version_major = kwargs.get('version_major', int())
        self.version_minor = kwargs.get('version_minor', int())
        self.temperature_motor = kwargs.get('temperature_motor', float())
        self.temperature_board = kwargs.get('temperature_board', float())
        self.supply_voltage = kwargs.get('supply_voltage', float())
        self.motor_current = kwargs.get('motor_current', float())
        self.error_state = kwargs.get('error_state', int())
        self.reset_state = kwargs.get('reset_state', str())
        self.motor_state = kwargs.get('motor_state', str())
        self.command_mode = kwargs.get('command_mode', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.name != other.name:
            return False
        if self.can_id != other.can_id:
            return False
        if self.hardware_ident != other.hardware_ident:
            return False
        if self.version_major != other.version_major:
            return False
        if self.version_minor != other.version_minor:
            return False
        if self.temperature_motor != other.temperature_motor:
            return False
        if self.temperature_board != other.temperature_board:
            return False
        if self.supply_voltage != other.supply_voltage:
            return False
        if self.motor_current != other.motor_current:
            return False
        if self.error_state != other.error_state:
            return False
        if self.reset_state != other.reset_state:
            return False
        if self.motor_state != other.motor_state:
            return False
        if self.command_mode != other.command_mode:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def can_id(self):
        """Message field 'can_id'."""
        return self._can_id

    @can_id.setter
    def can_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'can_id' field must be of type 'str'"
        self._can_id = value

    @builtins.property
    def hardware_ident(self):
        """Message field 'hardware_ident'."""
        return self._hardware_ident

    @hardware_ident.setter
    def hardware_ident(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'hardware_ident' field must be of type 'str'"
        self._hardware_ident = value

    @builtins.property
    def version_major(self):
        """Message field 'version_major'."""
        return self._version_major

    @version_major.setter
    def version_major(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_major' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'version_major' field must be an integer in [-128, 127]"
        self._version_major = value

    @builtins.property
    def version_minor(self):
        """Message field 'version_minor'."""
        return self._version_minor

    @version_minor.setter
    def version_minor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'version_minor' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'version_minor' field must be an integer in [-128, 127]"
        self._version_minor = value

    @builtins.property
    def temperature_motor(self):
        """Message field 'temperature_motor'."""
        return self._temperature_motor

    @temperature_motor.setter
    def temperature_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_motor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature_motor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature_motor = value

    @builtins.property
    def temperature_board(self):
        """Message field 'temperature_board'."""
        return self._temperature_board

    @temperature_board.setter
    def temperature_board(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_board' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'temperature_board' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._temperature_board = value

    @builtins.property
    def supply_voltage(self):
        """Message field 'supply_voltage'."""
        return self._supply_voltage

    @supply_voltage.setter
    def supply_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'supply_voltage' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'supply_voltage' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._supply_voltage = value

    @builtins.property
    def motor_current(self):
        """Message field 'motor_current'."""
        return self._motor_current

    @motor_current.setter
    def motor_current(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'motor_current' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'motor_current' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._motor_current = value

    @builtins.property
    def error_state(self):
        """Message field 'error_state'."""
        return self._error_state

    @error_state.setter
    def error_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'error_state' field must be an integer in [-128, 127]"
        self._error_state = value

    @builtins.property
    def reset_state(self):
        """Message field 'reset_state'."""
        return self._reset_state

    @reset_state.setter
    def reset_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reset_state' field must be of type 'str'"
        self._reset_state = value

    @builtins.property
    def motor_state(self):
        """Message field 'motor_state'."""
        return self._motor_state

    @motor_state.setter
    def motor_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'motor_state' field must be of type 'str'"
        self._motor_state = value

    @builtins.property
    def command_mode(self):
        """Message field 'command_mode'."""
        return self._command_mode

    @command_mode.setter
    def command_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'command_mode' field must be an integer in [-128, 127]"
        self._command_mode = value
