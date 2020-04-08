// Generated by gencpp from file ublox_msgs/UpdSOS_Ack.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_UPDSOS_ACK_H
#define UBLOX_MSGS_MESSAGE_UPDSOS_ACK_H


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
struct UpdSOS_Ack_
{
  typedef UpdSOS_Ack_<ContainerAllocator> Type;

  UpdSOS_Ack_()
    : cmd(0)
    , reserved0()
    , response(0)
    , reserved1()  {
      reserved0.assign(0);

      reserved1.assign(0);
  }
  UpdSOS_Ack_(const ContainerAllocator& _alloc)
    : cmd(0)
    , reserved0()
    , response(0)
    , reserved1()  {
  (void)_alloc;
      reserved0.assign(0);

      reserved1.assign(0);
  }



   typedef uint8_t _cmd_type;
  _cmd_type cmd;

   typedef boost::array<uint8_t, 3>  _reserved0_type;
  _reserved0_type reserved0;

   typedef uint8_t _response_type;
  _response_type response;

   typedef boost::array<uint8_t, 3>  _reserved1_type;
  _reserved1_type reserved1;



  enum {
    CLASS_ID = 9u,
    MESSAGE_ID = 20u,
    CMD_BACKUP_CREATE_ACK = 2u,
    CMD_SYSTEM_RESTORED = 3u,
    BACKUP_CREATE_NACK = 0u,
    BACKUP_CREATE_ACK = 1u,
    SYSTEM_RESTORED_RESPONSE_UNKNOWN = 0u,
    SYSTEM_RESTORED_RESPONSE_FAILED = 1u,
    SYSTEM_RESTORED_RESPONSE_RESTORED = 2u,
    SYSTEM_RESTORED_RESPONSE_NOT_RESTORED = 3u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> const> ConstPtr;

}; // struct UpdSOS_Ack_

typedef ::ublox_msgs::UpdSOS_Ack_<std::allocator<void> > UpdSOS_Ack;

typedef boost::shared_ptr< ::ublox_msgs::UpdSOS_Ack > UpdSOS_AckPtr;
typedef boost::shared_ptr< ::ublox_msgs::UpdSOS_Ack const> UpdSOS_AckConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "028d9bc0701daf71dcd1ad8cef68594c";
  }

  static const char* value(const ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x028d9bc0701daf71ULL;
  static const uint64_t static_value2 = 0xdcd1ad8cef68594cULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/UpdSOS_Ack";
  }

  static const char* value(const ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# UPD-SOS (0x09 0x14)\n\
#\n\
# Backup File Creation Acknowledge / System Restored from Backup\n\
# \n\
# Firmware Supported on:\n\
# u-blox 8 / u-blox M8 from protocol version 15 up to version 23.01\n\
#\n\
\n\
uint8 CLASS_ID = 9\n\
uint8 MESSAGE_ID = 20\n\
\n\
uint8 cmd                   # Command\n\
uint8 CMD_BACKUP_CREATE_ACK = 2   # Backup File Creation Acknowledge\n\
                                  # The message is sent from the device as \n\
                                  # confirmation of creation of a backup file \n\
                                  # in flash. The host can safely shut down the \n\
                                  # device after received this message.\n\
uint8 CMD_SYSTEM_RESTORED = 3     # System Restored from Backup\n\
                                  # The message is sent from the device to \n\
                                  # notify the host the BBR has been restored \n\
                                  # from a backup file in flash. The host \n\
                                  # should clear the backup file after \n\
                                  # receiving this message. If the UBX-UPD-SOS \n\
                                  # message is polled, this message will be \n\
                                  # present.\n\
\n\
uint8[3] reserved0          # Reserved\n\
\n\
uint8 response                                  # Response:\n\
uint8 BACKUP_CREATE_NACK = 0                      # Not acknowledged\n\
uint8 BACKUP_CREATE_ACK = 1                       # Acknowledged\n\
uint8 SYSTEM_RESTORED_RESPONSE_UNKNOWN = 0        # Unknown\n\
uint8 SYSTEM_RESTORED_RESPONSE_FAILED = 1         # Failed restoring from backup \n\
                                                  # file\n\
uint8 SYSTEM_RESTORED_RESPONSE_RESTORED = 2       # Restored from backup file\n\
uint8 SYSTEM_RESTORED_RESPONSE_NOT_RESTORED = 3   # Not restored (no backup)\n\
\n\
uint8[3] reserved1          # Reserved\n\
";
  }

  static const char* value(const ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.reserved0);
      stream.next(m.response);
      stream.next(m.reserved1);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UpdSOS_Ack_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::UpdSOS_Ack_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "reserved0[]" << std::endl;
    for (size_t i = 0; i < v.reserved0.size(); ++i)
    {
      s << indent << "  reserved0[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved0[i]);
    }
    s << indent << "response: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.response);
    s << indent << "reserved1[]" << std::endl;
    for (size_t i = 0; i < v.reserved1.size(); ++i)
    {
      s << indent << "  reserved1[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved1[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_UPDSOS_ACK_H
