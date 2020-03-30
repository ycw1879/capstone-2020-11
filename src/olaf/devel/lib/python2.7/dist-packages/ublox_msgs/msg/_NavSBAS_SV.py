# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/NavSBAS_SV.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NavSBAS_SV(genpy.Message):
  _md5sum = "45259031fe19a4df2f5a4a667356a0bc"
  _type = "ublox_msgs/NavSBAS_SV"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# see message NavSBAS
#

uint8 svid              # SV Id
uint8 flags             # Flags for this SV
uint8 udre              # Monitoring status
uint8 svSys             # System (WAAS/EGNOS/...), same as SYS
uint8 svService         # Services available, same as SERVICE
uint8 reserved1         # Reserved
int16 prc               # Pseudo Range correction in [cm]
uint16 reserved2        # Reserved
int16 ic                # Ionosphere correction in [cm]
"""
  __slots__ = ['svid','flags','udre','svSys','svService','reserved1','prc','reserved2','ic']
  _slot_types = ['uint8','uint8','uint8','uint8','uint8','uint8','int16','uint16','int16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       svid,flags,udre,svSys,svService,reserved1,prc,reserved2,ic

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NavSBAS_SV, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.svid is None:
        self.svid = 0
      if self.flags is None:
        self.flags = 0
      if self.udre is None:
        self.udre = 0
      if self.svSys is None:
        self.svSys = 0
      if self.svService is None:
        self.svService = 0
      if self.reserved1 is None:
        self.reserved1 = 0
      if self.prc is None:
        self.prc = 0
      if self.reserved2 is None:
        self.reserved2 = 0
      if self.ic is None:
        self.ic = 0
    else:
      self.svid = 0
      self.flags = 0
      self.udre = 0
      self.svSys = 0
      self.svService = 0
      self.reserved1 = 0
      self.prc = 0
      self.reserved2 = 0
      self.ic = 0

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
      buff.write(_get_struct_6BhHh().pack(_x.svid, _x.flags, _x.udre, _x.svSys, _x.svService, _x.reserved1, _x.prc, _x.reserved2, _x.ic))
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
      end += 12
      (_x.svid, _x.flags, _x.udre, _x.svSys, _x.svService, _x.reserved1, _x.prc, _x.reserved2, _x.ic,) = _get_struct_6BhHh().unpack(str[start:end])
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
      buff.write(_get_struct_6BhHh().pack(_x.svid, _x.flags, _x.udre, _x.svSys, _x.svService, _x.reserved1, _x.prc, _x.reserved2, _x.ic))
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
      end += 12
      (_x.svid, _x.flags, _x.udre, _x.svSys, _x.svService, _x.reserved1, _x.prc, _x.reserved2, _x.ic,) = _get_struct_6BhHh().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6BhHh = None
def _get_struct_6BhHh():
    global _struct_6BhHh
    if _struct_6BhHh is None:
        _struct_6BhHh = struct.Struct("<6BhHh")
    return _struct_6BhHh
