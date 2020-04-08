# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from gps_common/GPSFix.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import gps_common.msg
import std_msgs.msg

class GPSFix(genpy.Message):
  _md5sum = "3db3d0a7bc53054c67c528af84710b70"
  _type = "gps_common/GPSFix"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """# A more complete GPS fix to supplement sensor_msgs/NavSatFix.
Header header

GPSStatus status

# Latitude (degrees). Positive is north of equator; negative is south.
float64 latitude

# Longitude (degrees). Positive is east of prime meridian, negative west.
float64 longitude

# Altitude (meters). Positive is above reference (e.g., sea level).
float64 altitude

# Direction (degrees from north)
float64 track

# Ground speed (meters/second)
float64 speed

# Vertical speed (meters/second)
float64 climb

# Device orientation (units in degrees)
float64 pitch
float64 roll
float64 dip

# GPS time
float64 time

## Dilution of precision; Xdop<=0 means the value is unknown

# Total (positional-temporal) dilution of precision
float64 gdop

# Positional (3D) dilution of precision
float64 pdop

# Horizontal dilution of precision
float64 hdop

# Vertical dilution of precision
float64 vdop

# Temporal dilution of precision
float64 tdop

## Uncertainty of measurement, 95% confidence

# Spherical position uncertainty (meters) [epe]
float64 err

# Horizontal position uncertainty (meters) [eph]
float64 err_horz

# Vertical position uncertainty (meters) [epv]
float64 err_vert

# Track uncertainty (degrees) [epd]
float64 err_track

# Ground speed uncertainty (meters/second) [eps]
float64 err_speed

# Vertical speed uncertainty (meters/second) [epc]
float64 err_climb

# Temporal uncertainty [ept]
float64 err_time

# Orientation uncertainty (degrees)
float64 err_pitch
float64 err_roll
float64 err_dip

# Position covariance [m^2] defined relative to a tangential plane
# through the reported position. The components are East, North, and
# Up (ENU), in row-major order.

float64[9] position_covariance

uint8 COVARIANCE_TYPE_UNKNOWN = 0
uint8 COVARIANCE_TYPE_APPROXIMATED = 1
uint8 COVARIANCE_TYPE_DIAGONAL_KNOWN = 2
uint8 COVARIANCE_TYPE_KNOWN = 3

uint8 position_covariance_type


================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: gps_common/GPSStatus
Header header

# Satellites used in solution
uint16 satellites_used # Number of satellites
int32[] satellite_used_prn # PRN identifiers

# Satellites visible
uint16 satellites_visible
int32[] satellite_visible_prn # PRN identifiers
int32[] satellite_visible_z # Elevation of satellites
int32[] satellite_visible_azimuth # Azimuth of satellites
int32[] satellite_visible_snr # Signal-to-noise ratios (dB)

# Measurement status
int16 STATUS_NO_FIX=-1   # Unable to fix position
int16 STATUS_FIX=0       # Normal fix
int16 STATUS_SBAS_FIX=1  # Fixed using a satellite-based augmentation system
int16 STATUS_GBAS_FIX=2  #          or a ground-based augmentation system
int16 STATUS_DGPS_FIX=18 # Fixed with DGPS
int16 STATUS_WAAS_FIX=33 # Fixed with WAAS
int16 status

uint16 SOURCE_NONE=0 # No information is available
uint16 SOURCE_GPS=1 # Using standard GPS location [only valid for position_source]
uint16 SOURCE_POINTS=2 # Motion/orientation fix is derived from successive points
uint16 SOURCE_DOPPLER=4 # Motion is derived using the Doppler effect
uint16 SOURCE_ALTIMETER=8 # Using an altimeter
uint16 SOURCE_MAGNETIC=16 # Using magnetic sensors
uint16 SOURCE_GYRO=32 # Using gyroscopes
uint16 SOURCE_ACCEL=64 # Using accelerometers

uint16 motion_source # Source for speed, climb and track
uint16 orientation_source # Source for device orientation
uint16 position_source # Source for position

"""
  # Pseudo-constants
  COVARIANCE_TYPE_UNKNOWN = 0
  COVARIANCE_TYPE_APPROXIMATED = 1
  COVARIANCE_TYPE_DIAGONAL_KNOWN = 2
  COVARIANCE_TYPE_KNOWN = 3

  __slots__ = ['header','status','latitude','longitude','altitude','track','speed','climb','pitch','roll','dip','time','gdop','pdop','hdop','vdop','tdop','err','err_horz','err_vert','err_track','err_speed','err_climb','err_time','err_pitch','err_roll','err_dip','position_covariance','position_covariance_type']
  _slot_types = ['std_msgs/Header','gps_common/GPSStatus','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64','float64[9]','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,status,latitude,longitude,altitude,track,speed,climb,pitch,roll,dip,time,gdop,pdop,hdop,vdop,tdop,err,err_horz,err_vert,err_track,err_speed,err_climb,err_time,err_pitch,err_roll,err_dip,position_covariance,position_covariance_type

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GPSFix, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = gps_common.msg.GPSStatus()
      if self.latitude is None:
        self.latitude = 0.
      if self.longitude is None:
        self.longitude = 0.
      if self.altitude is None:
        self.altitude = 0.
      if self.track is None:
        self.track = 0.
      if self.speed is None:
        self.speed = 0.
      if self.climb is None:
        self.climb = 0.
      if self.pitch is None:
        self.pitch = 0.
      if self.roll is None:
        self.roll = 0.
      if self.dip is None:
        self.dip = 0.
      if self.time is None:
        self.time = 0.
      if self.gdop is None:
        self.gdop = 0.
      if self.pdop is None:
        self.pdop = 0.
      if self.hdop is None:
        self.hdop = 0.
      if self.vdop is None:
        self.vdop = 0.
      if self.tdop is None:
        self.tdop = 0.
      if self.err is None:
        self.err = 0.
      if self.err_horz is None:
        self.err_horz = 0.
      if self.err_vert is None:
        self.err_vert = 0.
      if self.err_track is None:
        self.err_track = 0.
      if self.err_speed is None:
        self.err_speed = 0.
      if self.err_climb is None:
        self.err_climb = 0.
      if self.err_time is None:
        self.err_time = 0.
      if self.err_pitch is None:
        self.err_pitch = 0.
      if self.err_roll is None:
        self.err_roll = 0.
      if self.err_dip is None:
        self.err_dip = 0.
      if self.position_covariance is None:
        self.position_covariance = [0.] * 9
      if self.position_covariance_type is None:
        self.position_covariance_type = 0
    else:
      self.header = std_msgs.msg.Header()
      self.status = gps_common.msg.GPSStatus()
      self.latitude = 0.
      self.longitude = 0.
      self.altitude = 0.
      self.track = 0.
      self.speed = 0.
      self.climb = 0.
      self.pitch = 0.
      self.roll = 0.
      self.dip = 0.
      self.time = 0.
      self.gdop = 0.
      self.pdop = 0.
      self.hdop = 0.
      self.vdop = 0.
      self.tdop = 0.
      self.err = 0.
      self.err_horz = 0.
      self.err_vert = 0.
      self.err_track = 0.
      self.err_speed = 0.
      self.err_climb = 0.
      self.err_time = 0.
      self.err_pitch = 0.
      self.err_roll = 0.
      self.err_dip = 0.
      self.position_covariance = [0.] * 9
      self.position_covariance_type = 0

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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.status.header.seq, _x.status.header.stamp.secs, _x.status.header.stamp.nsecs))
      _x = self.status.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_H().pack(self.status.satellites_used))
      length = len(self.status.satellite_used_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.status.satellite_used_prn))
      buff.write(_get_struct_H().pack(self.status.satellites_visible))
      length = len(self.status.satellite_visible_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.status.satellite_visible_prn))
      length = len(self.status.satellite_visible_z)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.status.satellite_visible_z))
      length = len(self.status.satellite_visible_azimuth)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.status.satellite_visible_azimuth))
      length = len(self.status.satellite_visible_snr)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(struct.pack(pattern, *self.status.satellite_visible_snr))
      _x = self
      buff.write(_get_struct_h3H25d().pack(_x.status.status, _x.status.motion_source, _x.status.orientation_source, _x.status.position_source, _x.latitude, _x.longitude, _x.altitude, _x.track, _x.speed, _x.climb, _x.pitch, _x.roll, _x.dip, _x.time, _x.gdop, _x.pdop, _x.hdop, _x.vdop, _x.tdop, _x.err, _x.err_horz, _x.err_vert, _x.err_track, _x.err_speed, _x.err_climb, _x.err_time, _x.err_pitch, _x.err_roll, _x.err_dip))
      buff.write(_get_struct_9d().pack(*self.position_covariance))
      buff.write(_get_struct_B().pack(self.position_covariance_type))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = gps_common.msg.GPSStatus()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.status.header.seq, _x.status.header.stamp.secs, _x.status.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.status.header.frame_id = str[start:end]
      start = end
      end += 2
      (self.status.satellites_used,) = _get_struct_H().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_used_prn = struct.unpack(pattern, str[start:end])
      start = end
      end += 2
      (self.status.satellites_visible,) = _get_struct_H().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_prn = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_z = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_azimuth = struct.unpack(pattern, str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_snr = struct.unpack(pattern, str[start:end])
      _x = self
      start = end
      end += 208
      (_x.status.status, _x.status.motion_source, _x.status.orientation_source, _x.status.position_source, _x.latitude, _x.longitude, _x.altitude, _x.track, _x.speed, _x.climb, _x.pitch, _x.roll, _x.dip, _x.time, _x.gdop, _x.pdop, _x.hdop, _x.vdop, _x.tdop, _x.err, _x.err_horz, _x.err_vert, _x.err_track, _x.err_speed, _x.err_climb, _x.err_time, _x.err_pitch, _x.err_roll, _x.err_dip,) = _get_struct_h3H25d().unpack(str[start:end])
      start = end
      end += 72
      self.position_covariance = _get_struct_9d().unpack(str[start:end])
      start = end
      end += 1
      (self.position_covariance_type,) = _get_struct_B().unpack(str[start:end])
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
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_3I().pack(_x.status.header.seq, _x.status.header.stamp.secs, _x.status.header.stamp.nsecs))
      _x = self.status.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_H().pack(self.status.satellites_used))
      length = len(self.status.satellite_used_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.status.satellite_used_prn.tostring())
      buff.write(_get_struct_H().pack(self.status.satellites_visible))
      length = len(self.status.satellite_visible_prn)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.status.satellite_visible_prn.tostring())
      length = len(self.status.satellite_visible_z)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.status.satellite_visible_z.tostring())
      length = len(self.status.satellite_visible_azimuth)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.status.satellite_visible_azimuth.tostring())
      length = len(self.status.satellite_visible_snr)
      buff.write(_struct_I.pack(length))
      pattern = '<%si'%length
      buff.write(self.status.satellite_visible_snr.tostring())
      _x = self
      buff.write(_get_struct_h3H25d().pack(_x.status.status, _x.status.motion_source, _x.status.orientation_source, _x.status.position_source, _x.latitude, _x.longitude, _x.altitude, _x.track, _x.speed, _x.climb, _x.pitch, _x.roll, _x.dip, _x.time, _x.gdop, _x.pdop, _x.hdop, _x.vdop, _x.tdop, _x.err, _x.err_horz, _x.err_vert, _x.err_track, _x.err_speed, _x.err_climb, _x.err_time, _x.err_pitch, _x.err_roll, _x.err_dip))
      buff.write(self.position_covariance.tostring())
      buff.write(_get_struct_B().pack(self.position_covariance_type))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.status is None:
        self.status = gps_common.msg.GPSStatus()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 12
      (_x.status.header.seq, _x.status.header.stamp.secs, _x.status.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.status.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.status.header.frame_id = str[start:end]
      start = end
      end += 2
      (self.status.satellites_used,) = _get_struct_H().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_used_prn = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 2
      (self.status.satellites_visible,) = _get_struct_H().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_prn = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_z = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_azimuth = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%si'%length
      start = end
      end += struct.calcsize(pattern)
      self.status.satellite_visible_snr = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
      _x = self
      start = end
      end += 208
      (_x.status.status, _x.status.motion_source, _x.status.orientation_source, _x.status.position_source, _x.latitude, _x.longitude, _x.altitude, _x.track, _x.speed, _x.climb, _x.pitch, _x.roll, _x.dip, _x.time, _x.gdop, _x.pdop, _x.hdop, _x.vdop, _x.tdop, _x.err, _x.err_horz, _x.err_vert, _x.err_track, _x.err_speed, _x.err_climb, _x.err_time, _x.err_pitch, _x.err_roll, _x.err_dip,) = _get_struct_h3H25d().unpack(str[start:end])
      start = end
      end += 72
      self.position_covariance = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=9)
      start = end
      end += 1
      (self.position_covariance_type,) = _get_struct_B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_h3H25d = None
def _get_struct_h3H25d():
    global _struct_h3H25d
    if _struct_h3H25d is None:
        _struct_h3H25d = struct.Struct("<h3H25d")
    return _struct_h3H25d
_struct_H = None
def _get_struct_H():
    global _struct_H
    if _struct_H is None:
        _struct_H = struct.Struct("<H")
    return _struct_H
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
_struct_9d = None
def _get_struct_9d():
    global _struct_9d
    if _struct_9d is None:
        _struct_9d = struct.Struct("<9d")
    return _struct_9d
