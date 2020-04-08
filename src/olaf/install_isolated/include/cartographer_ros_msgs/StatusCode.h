// Generated by gencpp from file cartographer_ros_msgs/StatusCode.msg
// DO NOT EDIT!


#ifndef CARTOGRAPHER_ROS_MSGS_MESSAGE_STATUSCODE_H
#define CARTOGRAPHER_ROS_MSGS_MESSAGE_STATUSCODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cartographer_ros_msgs
{
template <class ContainerAllocator>
struct StatusCode_
{
  typedef StatusCode_<ContainerAllocator> Type;

  StatusCode_()
    {
    }
  StatusCode_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





  enum {
    OK = 0u,
    CANCELLED = 1u,
    UNKNOWN = 2u,
    INVALID_ARGUMENT = 3u,
    DEADLINE_EXCEEDED = 4u,
    NOT_FOUND = 5u,
    ALREADY_EXISTS = 6u,
    PERMISSION_DENIED = 7u,
    RESOURCE_EXHAUSTED = 8u,
    FAILED_PRECONDITION = 9u,
    ABORTED = 10u,
    OUT_OF_RANGE = 11u,
    UNIMPLEMENTED = 12u,
    INTERNAL = 13u,
    UNAVAILABLE = 14u,
    DATA_LOSS = 15u,
  };


  typedef boost::shared_ptr< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> const> ConstPtr;

}; // struct StatusCode_

typedef ::cartographer_ros_msgs::StatusCode_<std::allocator<void> > StatusCode;

typedef boost::shared_ptr< ::cartographer_ros_msgs::StatusCode > StatusCodePtr;
typedef boost::shared_ptr< ::cartographer_ros_msgs::StatusCode const> StatusCodeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cartographer_ros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'cartographer_ros_msgs': ['/home/nvidia/olaf/src/cartographer_ros/cartographer_ros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "90c460dc6da71af1a19af6615a8dc9a4";
  }

  static const char* value(const ::cartographer_ros_msgs::StatusCode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x90c460dc6da71af1ULL;
  static const uint64_t static_value2 = 0xa19af6615a8dc9a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cartographer_ros_msgs/StatusCode";
  }

  static const char* value(const ::cartographer_ros_msgs::StatusCode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright 2018 The Cartographer Authors\n\
#\n\
# Licensed under the Apache License, Version 2.0 (the \"License\");\n\
# you may not use this file except in compliance with the License.\n\
# You may obtain a copy of the License at\n\
#\n\
#      http://www.apache.org/licenses/LICENSE-2.0\n\
#\n\
# Unless required by applicable law or agreed to in writing, software\n\
# distributed under the License is distributed on an \"AS IS\" BASIS,\n\
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n\
# See the License for the specific language governing permissions and\n\
# limitations under the License.\n\
\n\
# Definition of status code constants equivalent to the gRPC API.\n\
# https://developers.google.com/maps-booking/reference/grpc-api/status_codes\n\
uint8 OK=0\n\
uint8 CANCELLED=1\n\
uint8 UNKNOWN=2\n\
uint8 INVALID_ARGUMENT=3\n\
uint8 DEADLINE_EXCEEDED=4\n\
uint8 NOT_FOUND=5\n\
uint8 ALREADY_EXISTS=6\n\
uint8 PERMISSION_DENIED=7\n\
uint8 RESOURCE_EXHAUSTED=8\n\
uint8 FAILED_PRECONDITION=9\n\
uint8 ABORTED=10\n\
uint8 OUT_OF_RANGE=11\n\
uint8 UNIMPLEMENTED=12\n\
uint8 INTERNAL=13\n\
uint8 UNAVAILABLE=14\n\
uint8 DATA_LOSS=15\n\
";
  }

  static const char* value(const ::cartographer_ros_msgs::StatusCode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StatusCode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cartographer_ros_msgs::StatusCode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::cartographer_ros_msgs::StatusCode_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CARTOGRAPHER_ROS_MSGS_MESSAGE_STATUSCODE_H
