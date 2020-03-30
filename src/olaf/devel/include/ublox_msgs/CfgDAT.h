// Generated by gencpp from file ublox_msgs/CfgDAT.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGDAT_H
#define UBLOX_MSGS_MESSAGE_CFGDAT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgDAT_
{
  typedef CfgDAT_<ContainerAllocator> Type;

  CfgDAT_()
    : datumNum(0)
    , datumName()
    , majA(0.0)
    , flat(0.0)
    , dX(0.0)
    , dY(0.0)
    , dZ(0.0)
    , rotX(0.0)
    , rotY(0.0)
    , rotZ(0.0)
    , scale(0.0)  {
      datumName.assign(0);
  }
  CfgDAT_(const ContainerAllocator& _alloc)
    : datumNum(0)
    , datumName()
    , majA(0.0)
    , flat(0.0)
    , dX(0.0)
    , dY(0.0)
    , dZ(0.0)
    , rotX(0.0)
    , rotY(0.0)
    , rotZ(0.0)
    , scale(0.0)  {
  (void)_alloc;
      datumName.assign(0);
  }



   typedef uint16_t _datumNum_type;
  _datumNum_type datumNum;

   typedef boost::array<uint8_t, 6>  _datumName_type;
  _datumName_type datumName;

   typedef double _majA_type;
  _majA_type majA;

   typedef double _flat_type;
  _flat_type flat;

   typedef float _dX_type;
  _dX_type dX;

   typedef float _dY_type;
  _dY_type dY;

   typedef float _dZ_type;
  _dZ_type dZ;

   typedef float _rotX_type;
  _rotX_type rotX;

   typedef float _rotY_type;
  _rotY_type rotY;

   typedef float _rotZ_type;
  _rotZ_type rotZ;

   typedef float _scale_type;
  _scale_type scale;



  enum {
    CLASS_ID = 6u,
    MESSAGE_ID = 6u,
    DATUM_NUM_WGS84 = 0u,
    DATUM_NUM_USER = 65535u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::CfgDAT_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgDAT_<ContainerAllocator> const> ConstPtr;

}; // struct CfgDAT_

typedef ::ublox_msgs::CfgDAT_<std::allocator<void> > CfgDAT;

typedef boost::shared_ptr< ::ublox_msgs::CfgDAT > CfgDATPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgDAT const> CfgDATConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgDAT_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgDAT_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/nvidia/olaf/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgDAT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgDAT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgDAT_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "05d7a26d8a386fd3054953454a03b113";
  }

  static const char* value(const ::ublox_msgs::CfgDAT_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x05d7a26d8a386fd3ULL;
  static const uint64_t static_value2 = 0x054953454a03b113ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgDAT";
  }

  static const char* value(const ::ublox_msgs::CfgDAT_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-DAT (0x06 0x06)\n\
# Set User-defined Datum\n\
# \n\
# For more information see the description of Geodetic Systems and Frames.\n\
# \n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 6\n\
\n\
# Only for GET, these values are not used for write\n\
uint16 datumNum       # Datum Number: 0 = WGS84, 0xFFFF = user-defined\n\
uint16 DATUM_NUM_WGS84 = 0\n\
uint16 DATUM_NUM_USER = 65535\n\
\n\
uint8[6] datumName    # ASCII String: WGS84 or USER\n\
\n\
float64 majA          # Semi-major Axis [m]\n\
                      # accepted range = 6,300,000.0 to 6,500,000.0 meters \n\
float64 flat          # 1.0 / Flattening \n\
                      # accepted range is 0.0 to 500.0\n\
\n\
float32 dX            # X Axis shift at the origin [m]\n\
                      # accepted range is +/- 5000.0 meters \n\
float32 dY            # Y Axis shift at the origin [m]\n\
                      # accepted range is +/- 5000.0 meters \n\
float32 dZ            # Z Axis shift at the origin [m]\n\
                      # accepted range is +/- 5000.0 meters \n\
\n\
float32 rotX          # Rotation about the X Axis [s]\n\
                      # accepted range is +/- 20.0 milli-arc seconds \n\
float32 rotY          # Rotation about the Y Axis [s]\n\
                      # accepted range is +/- 20.0 milli-arc seconds \n\
float32 rotZ          # Rotation about the Z Axis [s]\n\
                      # accepted range is +/- 20.0 milli-arc seconds\n\
\n\
float32 scale         # Scale change [ppm]\n\
                      # accepted range is 0.0 to 50.0 parts per million\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgDAT_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.datumNum);
      stream.next(m.datumName);
      stream.next(m.majA);
      stream.next(m.flat);
      stream.next(m.dX);
      stream.next(m.dY);
      stream.next(m.dZ);
      stream.next(m.rotX);
      stream.next(m.rotY);
      stream.next(m.rotZ);
      stream.next(m.scale);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgDAT_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgDAT_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgDAT_<ContainerAllocator>& v)
  {
    s << indent << "datumNum: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.datumNum);
    s << indent << "datumName[]" << std::endl;
    for (size_t i = 0; i < v.datumName.size(); ++i)
    {
      s << indent << "  datumName[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.datumName[i]);
    }
    s << indent << "majA: ";
    Printer<double>::stream(s, indent + "  ", v.majA);
    s << indent << "flat: ";
    Printer<double>::stream(s, indent + "  ", v.flat);
    s << indent << "dX: ";
    Printer<float>::stream(s, indent + "  ", v.dX);
    s << indent << "dY: ";
    Printer<float>::stream(s, indent + "  ", v.dY);
    s << indent << "dZ: ";
    Printer<float>::stream(s, indent + "  ", v.dZ);
    s << indent << "rotX: ";
    Printer<float>::stream(s, indent + "  ", v.rotX);
    s << indent << "rotY: ";
    Printer<float>::stream(s, indent + "  ", v.rotY);
    s << indent << "rotZ: ";
    Printer<float>::stream(s, indent + "  ", v.rotZ);
    s << indent << "scale: ";
    Printer<float>::stream(s, indent + "  ", v.scale);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGDAT_H
