# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irc_ros_msgs:msg/CanModuleCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CanModuleCommand(type):
    """Metaclass of message 'CanModuleCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_NONE': 0,
        'TYPE_PING': 1,
        'TYPE_ERROR_RESET': 1,
        'TYPE_ENABLE_MOTOR': 2,
        'TYPE_DISABLE_MOTOR': 3,
        'TYPE_REFERENCE': 4,
        'TYPE_SET_POS_TO_ZERO': 5,
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
                'irc_ros_msgs.msg.CanModuleCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__can_module_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__can_module_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__can_module_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__can_module_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__can_module_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_NONE': cls.__constants['TYPE_NONE'],
            'TYPE_PING': cls.__constants['TYPE_PING'],
            'TYPE_ERROR_RESET': cls.__constants['TYPE_ERROR_RESET'],
            'TYPE_ENABLE_MOTOR': cls.__constants['TYPE_ENABLE_MOTOR'],
            'TYPE_DISABLE_MOTOR': cls.__constants['TYPE_DISABLE_MOTOR'],
            'TYPE_REFERENCE': cls.__constants['TYPE_REFERENCE'],
            'TYPE_SET_POS_TO_ZERO': cls.__constants['TYPE_SET_POS_TO_ZERO'],
        }

    @property
    def TYPE_NONE(self):
        """Message constant 'TYPE_NONE'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_NONE']

    @property
    def TYPE_PING(self):
        """Message constant 'TYPE_PING'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_PING']

    @property
    def TYPE_ERROR_RESET(self):
        """Message constant 'TYPE_ERROR_RESET'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_ERROR_RESET']

    @property
    def TYPE_ENABLE_MOTOR(self):
        """Message constant 'TYPE_ENABLE_MOTOR'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_ENABLE_MOTOR']

    @property
    def TYPE_DISABLE_MOTOR(self):
        """Message constant 'TYPE_DISABLE_MOTOR'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_DISABLE_MOTOR']

    @property
    def TYPE_REFERENCE(self):
        """Message constant 'TYPE_REFERENCE'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_REFERENCE']

    @property
    def TYPE_SET_POS_TO_ZERO(self):
        """Message constant 'TYPE_SET_POS_TO_ZERO'."""
        return Metaclass_CanModuleCommand.__constants['TYPE_SET_POS_TO_ZERO']


class CanModuleCommand(metaclass=Metaclass_CanModuleCommand):
    """
    Message class 'CanModuleCommand'.

    Constants:
      TYPE_NONE
      TYPE_PING
      TYPE_ERROR_RESET
      TYPE_ENABLE_MOTOR
      TYPE_DISABLE_MOTOR
      TYPE_REFERENCE
      TYPE_SET_POS_TO_ZERO
    """

    __slots__ = [
        '_name',
        '_type',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.type = kwargs.get('type', int())

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
        if self.type != other.type:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value
