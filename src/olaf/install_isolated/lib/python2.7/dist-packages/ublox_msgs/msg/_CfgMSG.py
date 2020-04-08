# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/CfgMSG.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CfgMSG(genpy.Message):
  _md5sum = "9f2fcd2333c19c76cbfdf6a57fc64a9d"
  _type = "ublox_msgs/CfgMSG"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# CFG-MSG (0x06 0x01)
# Message Rate(s)
# 
# Set message rate for the current port

uint8 CLASS_ID = 6
uint8 MESSAGE_ID = 1

uint8 msgClass            # Message Class
uint8 msgID               # Message Identifier
uint8 rate                # Send rate on current port 
                          # [number of navigation solutions]
"""
  # Pseudo-constants
  CLASS_ID = 6
  MESSAGE_ID = 1

  __slots__ = ['msgClass','msgID','rate']
  _slot_types = ['uint8','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       msgClass,msgID,rate

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CfgMSG, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.msgClass is None:
        self.msgClass = 0
      if self.msgID is None:
        self.msgID = 0
      if self.rate is None:
        self.rate = 0
    else:
      self.msgClass = 0
      self.msgID = 0
      self.rate = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3B().pack(_x.msgClass, _x.msgID, _x.rate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.msgClass, _x.msgID, _x.rate,) = _get_struct_3B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3B().pack(_x.msgClass, _x.msgID, _x.rate))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 3
      (_x.msgClass, _x.msgID, _x.rate,) = _get_struct_3B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3B = None
def _get_struct_3B():
    global _struct_3B
    if _struct_3B is None:
        _struct_3B = struct.Struct("<3B")
    return _struct_3B
