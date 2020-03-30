// Generated by gencpp from file ublox_msgs/CfgGNSS.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGGNSS_H
#define UBLOX_MSGS_MESSAGE_CFGGNSS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ublox_msgs/CfgGNSS_Block.h>

namespace ublox_msgs
{
template <class ContainerAllocator>
struct CfgGNSS_
{
  typedef CfgGNSS_<ContainerAllocator> Type;

  CfgGNSS_()
    : msgVer(0)
    , numTrkChHw(0)
    , numTrkChUse(0)
    , numConfigBlocks(0)
    , blocks()  {
    }
  CfgGNSS_(const ContainerAllocator& _alloc)
    : msgVer(0)
    , numTrkChHw(0)
    , numTrkChUse(0)
    , numConfigBlocks(0)
    , blocks(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _msgVer_type;
  _msgVer_type msgVer;

   typedef uint8_t _numTrkChHw_type;
  _numTrkChHw_type numTrkChHw;

   typedef uint8_t _numTrkChUse_type;
  _numTrkChUse_type numTrkChUse;

   typedef uint8_t _numConfigBlocks_type;
  _numConfigBlocks_type numConfigBlocks;

   typedef std::vector< ::ublox_msgs::CfgGNSS_Block_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ublox_msgs::CfgGNSS_Block_<ContainerAllocator> >::other >  _blocks_type;
  _blocks_type blocks;



  enum {
    CLASS_ID = 6u,
    MESSAGE_ID = 62u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const> ConstPtr;

}; // struct CfgGNSS_

typedef ::ublox_msgs::CfgGNSS_<std::allocator<void> > CfgGNSS;

typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS > CfgGNSSPtr;
typedef boost::shared_ptr< ::ublox_msgs::CfgGNSS const> CfgGNSSConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgGNSS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgGNSS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1777482e22a0ac50132c66d3284e86f";
  }

  static const char* value(const ::ublox_msgs::CfgGNSS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1777482e22a0ac5ULL;
  static const uint64_t static_value2 = 0x0132c66d3284e86fULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgGNSS";
  }

  static const char* value(const ::ublox_msgs::CfgGNSS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-GNSS (0x06 0x3E)\n\
# GNSS Configuration\n\
#\n\
# Gets or sets the GNSS system channel sharing configuration.\n\
# If the receiver is sent a valid new configuration, it will respond with a \n\
# UBX-ACK-ACK message and immediately change to the new configuration. Otherwise\n\
# the receiver will reject the request, by issuing a UBX-ACK-NAK and continuing \n\
# operation with the previous configuration.\n\
# Configuration requirements:\n\
#  - It is necessary for at least one major GNSS to be enabled, after applying \n\
#    the new configuration to the current one.\n\
#  - It is also required that at least 4 tracking channels are available to each \n\
#    enabled major GNSS, i.e. maxTrkCh must have a minimum value of 4 for each\n\
#    enabled major GNSS.\n\
#  - The number of tracking channels in use must not exceed the number of \n\
#    tracking channels available in hardware, and the sum of all reserved \n\
#    tracking channels needs to be less than or equal to the number of tracking\n\
#    channels in use.\n\
# Notes:\n\
#  - To avoid cross-correlation issues, it is recommended that GPS and QZSS are\n\
#    always both enabled or both disabled.\n\
#  - Polling this message returns the configuration of all supported GNSS, \n\
#    whether enabled or not; it may also include GNSS unsupported by the \n\
#    particular product, but in such cases the enable flag will always be unset.\n\
#  - See section GNSS Configuration for a discussion of the use of this message \n\
#    and section Satellite Numbering for a description of the GNSS IDs available\n\
#  - Configuration specific to the GNSS system can be done via other messages \n\
#    (e.g. UBX-CFG-SBAS).\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 62\n\
\n\
uint8 msgVer            # Message version (= 0 for this version)\n\
uint8 numTrkChHw        # Number of tracking channels in hardware (read only)\n\
uint8 numTrkChUse       # (Read only in protocol versions greater than 23)\n\
                        # Number of tracking channels to use (<= numTrkChHw)\n\
                        # If 0xFF, then number of tracking channels to use will \n\
                        # be set to numTrkChHw\n\
uint8 numConfigBlocks   # Number of configuration blocks following\n\
\n\
# Start of repeated block (numConfigBlocks times)\n\
CfgGNSS_Block[] blocks\n\
# End of repeated block\n\
================================================================================\n\
MSG: ublox_msgs/CfgGNSS_Block\n\
# see Cfg-GNSS message\n\
#\n\
\n\
uint8 gnssId            # System identifier (see Satellite Numbering)\n\
\n\
uint8 GNSS_ID_GPS = 0\n\
uint8 GNSS_ID_SBAS = 1\n\
uint8 GNSS_ID_GALILEO = 2\n\
uint8 GNSS_ID_BEIDOU = 3\n\
uint8 GNSS_ID_IMES = 4\n\
uint8 GNSS_ID_QZSS = 5\n\
uint8 GNSS_ID_GLONASS = 6\n\
\n\
uint8 resTrkCh          # (Read only in protocol versions greater than 23)\n\
                        # Number of reserved (minimum) tracking channels \n\
                        # for this GNSS system\n\
uint8 RES_TRK_CH_GPS = 8\n\
uint8 RES_TRK_CH_QZSS = 0\n\
uint8 RES_TRK_CH_SBAS = 0\n\
uint8 RES_TRK_CH_GLONASS = 8\n\
uint8 maxTrkCh          # (Read only in protocol versions greater than 23)\n\
                        # Maximum number of tracking channels used for this \n\
                        # system. Must be > 0, >= resTrkChn, <= numTrkChUse and\n\
                        # <= maximum number of tracking channels supported for \n\
                        # this system\n\
uint8 MAX_TRK_CH_MAJOR_MIN = 4         # maxTrkCh must have this minimum value\n\
                                       # for each enabled major GNSS\n\
uint8 MAX_TRK_CH_GPS = 16\n\
uint8 MAX_TRK_CH_GLONASS = 14\n\
uint8 MAX_TRK_CH_QZSS = 3\n\
uint8 MAX_TRK_CH_SBAS = 3\n\
\n\
uint8 reserved1         # Reserved\n\
\n\
uint32 flags            # Bitfield of flags. At least one signal must be\n\
                        # configured in every enabled system. \n\
uint32 FLAGS_ENABLE = 1                # Enable this system\n\
uint32 FLAGS_SIG_CFG_MASK = 16711680   # Signal configuration mask\n\
uint32 SIG_CFG_GPS_L1CA = 65536        # When gnssId is 0 (GPS)\n\
                                       # * 0x01 = GPS L1C/A\n\
uint32 SIG_CFG_SBAS_L1CA = 65536       # When gnssId is 1 (SBAS)\n\
                                       # * 0x01 = SBAS L1C/A\n\
uint32 SIG_CFG_GALILEO_E1OS = 65536    # When gnssId is 2 (Galileo)\n\
                                       # * 0x01 = Galileo E1OS (not supported in \n\
                                       #   protocol versions less than 18)\n\
uint32 SIG_CFG_BEIDOU_B1I = 65536      # When gnssId is 3 (BeiDou)\n\
                                       # * 0x01 = BeiDou B1I \n\
uint32 SIG_CFG_IMES_L1 = 65536         # When gnssId is 4 (IMES)\n\
                                       # * 0x01 = IMES L1\n\
uint32 SIG_CFG_QZSS_L1CA = 65536       # When gnssId is 5 (QZSS)\n\
                                       # * 0x01 = QZSS L1C/A\n\
uint32 SIG_CFG_QZSS_L1SAIF = 262144    # * 0x04 = QZSS L1SAIF\n\
uint32 SIG_CFG_GLONASS_L1OF = 65536    # When gnssId is 6 (GLONASS)\n\
                                       # * 0x01 = GLONASS L1OF\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgGNSS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msgVer);
      stream.next(m.numTrkChHw);
      stream.next(m.numTrkChUse);
      stream.next(m.numConfigBlocks);
      stream.next(m.blocks);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgGNSS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgGNSS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgGNSS_<ContainerAllocator>& v)
  {
    s << indent << "msgVer: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.msgVer);
    s << indent << "numTrkChHw: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numTrkChHw);
    s << indent << "numTrkChUse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numTrkChUse);
    s << indent << "numConfigBlocks: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.numConfigBlocks);
    s << indent << "blocks[]" << std::endl;
    for (size_t i = 0; i < v.blocks.size(); ++i)
    {
      s << indent << "  blocks[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ublox_msgs::CfgGNSS_Block_<ContainerAllocator> >::stream(s, indent + "    ", v.blocks[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGGNSS_H
