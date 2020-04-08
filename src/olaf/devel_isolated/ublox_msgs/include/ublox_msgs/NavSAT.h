// Generated by gencpp from file ublox_msgs/NavSAT.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_NAVSAT_H
#define UBLOX_MSGS_MESSAGE_NAVSAT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ublox_msgs/NavSAT_SV.h>

namespace ublox_msgs
{
template <class ContainerAllocator>
struct NavSAT_
{
  typedef NavSAT_<ContainerAllocator> Type;

  NavSAT_()
    : iTOW(0)
    , version(0)
    , numSvs(0)
    , reserved0()
    , sv()  {
      reserved0.assign(0);
  }
  NavSAT_(const ContainerAllocator& _alloc)
    : iTOW(0)
    , version(0)
    , numSvs(0)
    , reserved0()
    , sv(_alloc)  {
  (void)_alloc;
      reserved0.assign(0);
  }



   typedef uint32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef uint8_t _version_type;
  _version_type version;

   typedef uint8_t _numSvs_type;
  _numSvs_type numSvs;

   typedef boost::array<uint8_t, 2>  _reserved0_type;
  _reserved0_type reserved0;

   typedef std::vector< ::ublox_msgs::NavSAT_SV_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ublox_msgs::NavSAT_SV_<ContainerAllocator> >::other >  _sv_type;
  _sv_type sv;



  enum {
    CLASS_ID = 1u,
    MESSAGE_ID = 53u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::NavSAT_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavSAT_<ContainerAllocator> const> ConstPtr;

}; // struct NavSAT_

typedef ::ublox_msgs::NavSAT_<std::allocator<void> > NavSAT;

typedef boost::shared_ptr< ::ublox_msgs::NavSAT > NavSATPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavSAT const> NavSATConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::NavSAT_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::NavSAT_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/nvidia/olaf/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavSAT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavSAT_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavSAT_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavSAT_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavSAT_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavSAT_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavSAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8ea6afd23cb79e7e7385313416d9c15";
  }

  static const char* value(const ::ublox_msgs::NavSAT_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8ea6afd23cb79e7ULL;
  static const uint64_t static_value2 = 0xe7385313416d9c15ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavSAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/NavSAT";
  }

  static const char* value(const ::ublox_msgs::NavSAT_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavSAT_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# NAV-SAT (0x01 0x35)\n\
# Satellite Information\n\
#\n\
# This message displays information about SVs which are either known to be \n\
# visible or currently tracked by the receiver.\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 53\n\
\n\
uint32 iTOW                # GPS time of week of the navigation epoch. [ms]\n\
uint8 version              # Message version (1 for this version)\n\
uint8 numSvs               # Number of satellites\n\
uint8[2] reserved0         # Reserved \n\
\n\
# start of repeated block (numSvs times)\n\
NavSAT_SV[]  sv\n\
# end of repeated block\n\
================================================================================\n\
MSG: ublox_msgs/NavSAT_SV\n\
# see NAV-SAT message\n\
#\n\
\n\
uint8 gnssId      # GNSS identifier\n\
uint8 svId        # Satellite identifier\n\
\n\
uint8 cno         # Carrier to noise ratio (signal strength) ]dBHz\n\
int8 elev         # Elevation (range: +/-90), unknown if out of range [deg]\n\
int16 azim        # Azimuth (range 0-360), unknown if elevation is out of range \n\
                  # [deg]\n\
int16 prRes       # Pseudo range residual [0.1 m]\n\
\n\
uint32 flags      # Bitmask\n\
uint32 FLAGS_QUALITY_IND_MASK = 7     # Signal quality indicator:\n\
uint8 QUALITY_IND_NO_SIGNAL = 0                     # no signal\n\
uint8 QUALITY_IND_SEARCHING_SIGNAL = 1              # searching signal\n\
uint8 QUALITY_IND_SIGNAL_ACQUIRED = 2               # signal acquired\n\
uint8 QUALITY_IND_SIGNAL_DETECTED_BUT_UNUSABLE = 3  # signal detected but \n\
                                                    # unusable\n\
uint8 QUALITY_IND_CODE_LOCKED_AND_TIME_SYNC = 4     # code locked and time \n\
                                                    # synchronized\n\
uint8 QUALITY_IND_CODE_AND_CARR_LOCK_AND_TIME_SYNC1 = 5 # code and carrier \n\
                                                        # locked and time \n\
                                                        # synchronized, \n\
                                                        # quality = 1\n\
uint8 QUALITY_IND_CODE_AND_CARR_LOCK_AND_TIME_SYNC2 = 6 # code and carrier \n\
                                                        # locked and time \n\
                                                        # synchronized, \n\
                                                        # quality = 2\n\
uint8 QUALITY_IND_CODE_AND_CARR_LOCK_AND_TIME_SYNC3 = 7 # code and carrier \n\
                                                        # locked and time \n\
                                                        # synchronized, \n\
                                                        # quality = 3\n\
# Note: Since IMES signals are not time synchronized, a channel tracking an IMES \n\
# signal can never reach a quality indicator value of higher than 3.\n\
uint32 FLAGS_SV_USED = 8                      # whether SV is currently being \n\
                                              # used for navigation\n\
uint32 FLAGS_HEALTH_MASK = 48                 # SV health flag:\n\
uint32 HEALTH_UNKNOWN = 0                       # unknown\n\
uint32 HEALTH_HEALTHY = 1                       # healthy\n\
uint32 HEALTH_UNHEALTHY = 2                     # unhealthy\n\
uint32 FLAGS_DIFF_CORR = 64                   # whether differential correction \n\
                                              # data is available for this SV\n\
uint32 FLAGS_SMOOTHED = 128                   # whether carrier smoothed \n\
                                              # pseudorange used\n\
uint32 FLAGS_ORBIT_SOURCE_MASK = 1792         # Orbit source:\n\
uint32 ORBIT_SOURCE_UNAVAILABLE = 0             # no orbit information is \n\
                                              # available for this SV\n\
uint32 ORBIT_SOURCE_EPH = 256                   # ephemeris is used\n\
uint32 ORBIT_SOURCE_ALM = 512                   # almanac is used\n\
uint32 ORBIT_SOURCE_ASSIST_OFFLINE = 768        # AssistNow Offline orbit is \n\
                                                # used\n\
uint32 ORBIT_SOURCE_ASSIST_AUTONOMOUS = 1024    # AssistNow Autonomous orbit is \n\
                                                # used\n\
uint32 ORBIT_SOURCE_OTHER1 = 1280               # other orbit information is \n\
                                                # used\n\
uint32 ORBIT_SOURCE_OTHER2 = 1536               # other orbit information is \n\
                                                # used\n\
uint32 ORBIT_SOURCE_OTHER3 = 1792               # other orbit information is \n\
                                                # used\n\
uint32 FLAGS_EPH_AVAIL = 2048                 # whether ephemeris is available \n\
                                              # for this SV\n\
uint32 FLAGS_ALM_AVAIL = 4096                 # whether almanac is available for \n\
                                              # this SV\n\
uint32 FLAGS_ANO_AVAIL = 8192                 # whether AssistNow Offline data \n\
                                              # is available for this SV\n\
uint32 FLAGS_AOP_AVAIL = 16384                # whether AssistNow Autonomous \n\
                                              # data is available for this SV\n\
uint32 FLAGS_SBAS_CORR_USED = 65536           # whether SBAS corrections have \n\
                                              # been used for this SV\n\
uint32 FLAGS_RTCM_CORR_USED = 131072          # whether RTCM corrections have \n\
                                              # been used for this SV\n\
uint32 FLAGS_PR_CORR_USED = 1048576           # whether Pseudorange corrections \n\
                                              # have been used for this SV\n\
uint32 FLAGS_CR_CORR_USED = 2097152           # whether Carrier range \n\
                                              # corrections have been used for \n\
                                              # this SV\n\
uint32 FLAGS_DO_CORR_USED = 4194304           # whether Range rate (Doppler) \n\
                                              # corrections have been used for \n\
                                              # this SV\n\
";
  }

  static const char* value(const ::ublox_msgs::NavSAT_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavSAT_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iTOW);
      stream.next(m.version);
      stream.next(m.numSvs);
      stream.next(m.reserved0);
      stream.next(m.sv);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavSAT_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavSAT_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::NavSAT_<ContainerAllocator>& v)
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version);
    s << indent << "numSvs: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numSvs);
    s << indent << "reserved0[]" << std::endl;
    for (size_t i = 0; i < v.reserved0.size(); ++i)
    {
      s << indent << "  reserved0[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved0[i]);
    }
    s << indent << "sv[]" << std::endl;
    for (size_t i = 0; i < v.sv.size(); ++i)
    {
      s << indent << "  sv[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ublox_msgs::NavSAT_SV_<ContainerAllocator> >::stream(s, indent + "    ", v.sv[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVSAT_H
