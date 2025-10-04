# generated from rosidl_generator_py/resource/_idl.py.em
# with input from irc_ros_msgs:srv/GripperCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperCommand_Request(type):
    """Metaclass of message 'GripperCommand_Request'."""

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
                'irc_ros_msgs.srv.GripperCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperCommand_Request(metaclass=Metaclass_GripperCommand_Request):
    """Message class 'GripperCommand_Request'."""

    __slots__ = [
        '_grip',
    ]

    _fields_and_field_types = {
        'grip': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.grip = kwargs.get('grip', bool())

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
        if self.grip != other.grip:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def grip(self):
        """Message field 'grip'."""
        return self._grip

    @grip.setter
    def grip(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'grip' field must be of type 'bool'"
        self._grip = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GripperCommand_Response(type):
    """Metaclass of message 'GripperCommand_Response'."""

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
                'irc_ros_msgs.srv.GripperCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperCommand_Response(metaclass=Metaclass_GripperCommand_Response):
    """Message class 'GripperCommand_Response'."""

    __slots__ = [
        '_gripped',
    ]

    _fields_and_field_types = {
        'gripped': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gripped = kwargs.get('gripped', bool())

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
        if self.gripped != other.gripped:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gripped(self):
        """Message field 'gripped'."""
        return self._gripped

    @gripped.setter
    def gripped(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gripped' field must be of type 'bool'"
        self._gripped = value


class Metaclass_GripperCommand(type):
    """Metaclass of service 'GripperCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('irc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'irc_ros_msgs.srv.GripperCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gripper_command

            from irc_ros_msgs.srv import _gripper_command
            if _gripper_command.Metaclass_GripperCommand_Request._TYPE_SUPPORT is None:
                _gripper_command.Metaclass_GripperCommand_Request.__import_type_support__()
            if _gripper_command.Metaclass_GripperCommand_Response._TYPE_SUPPORT is None:
                _gripper_command.Metaclass_GripperCommand_Response.__import_type_support__()


class GripperCommand(metaclass=Metaclass_GripperCommand):
    from irc_ros_msgs.srv._gripper_command import GripperCommand_Request as Request
    from irc_ros_msgs.srv._gripper_command import GripperCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
