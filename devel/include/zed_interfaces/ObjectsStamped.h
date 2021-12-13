// Generated by gencpp from file zed_interfaces/ObjectsStamped.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_OBJECTSSTAMPED_H
#define ZED_INTERFACES_MESSAGE_OBJECTSSTAMPED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <zed_interfaces/Object.h>

namespace zed_interfaces
{
template <class ContainerAllocator>
struct ObjectsStamped_
{
  typedef ObjectsStamped_<ContainerAllocator> Type;

  ObjectsStamped_()
    : header()
    , objects()  {
    }
  ObjectsStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , objects(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::zed_interfaces::Object_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::zed_interfaces::Object_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;





  typedef boost::shared_ptr< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectsStamped_

typedef ::zed_interfaces::ObjectsStamped_<std::allocator<void> > ObjectsStamped;

typedef boost::shared_ptr< ::zed_interfaces::ObjectsStamped > ObjectsStampedPtr;
typedef boost::shared_ptr< ::zed_interfaces::ObjectsStamped const> ObjectsStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::ObjectsStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_interfaces::ObjectsStamped_<ContainerAllocator1> & lhs, const ::zed_interfaces::ObjectsStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.objects == rhs.objects;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_interfaces::ObjectsStamped_<ContainerAllocator1> & lhs, const ::zed_interfaces::ObjectsStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e91047b6614d7847b9669e1a2fe302b2";
  }

  static const char* value(const ::zed_interfaces::ObjectsStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe91047b6614d7847ULL;
  static const uint64_t static_value2 = 0xb9669e1a2fe302b2ULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/ObjectsStamped";
  }

  static const char* value(const ::zed_interfaces::ObjectsStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Standard Header\n"
"std_msgs/Header header\n"
"\n"
"# Array of `object_stamped` topics\n"
"zed_interfaces/Object[] objects\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Object\n"
"# Object label\n"
"string label\n"
"\n"
"# Object label ID\n"
"int16 label_id\n"
"\n"
"# Object sub\n"
"string sublabel\n"
"\n"
"# Object confidence level (1-99)\n"
"float32 confidence\n"
"\n"
"# Object centroid position\n"
"float32[3] position\n"
"\n"
"# Position covariance\n"
"float32[6] position_covariance\n"
"\n"
"# Object velocity\n"
"float32[3] velocity\n"
"\n"
"# Tracking available\n"
"bool tracking_available\n"
"\n"
"# Tracking state\n"
"# 0 -> OFF (object not valid)\n"
"# 1 -> OK\n"
"# 2 -> SEARCHING (occlusion occurred, trajectory is estimated)\n"
"int8 tracking_state\n"
"\n"
"# Action state\n"
"# 0 -> IDLE\n"
"# 2 -> MOVING\n"
"int8 action_state\n"
"\n"
"# 2D Bounding box projected to Camera image\n"
"zed_interfaces/BoundingBox2Di bounding_box_2d\n"
"\n"
"# 3D Bounding box in world frame\n"
"zed_interfaces/BoundingBox3D bounding_box_3d\n"
"\n"
"# 3D dimensions (width, height, lenght)\n"
"float32[3] dimensions_3d\n"
"\n"
"# Is skeleton available?\n"
"bool skeleton_available\n"
"\n"
"# 2D Bounding box projected to Camera image of the person head\n"
"zed_interfaces/BoundingBox2Df head_bounding_box_2d\n"
"\n"
"# 3D Bounding box in world frame of the person head\n"
"zed_interfaces/BoundingBox3D head_bounding_box_3d\n"
"\n"
"# 3D position of the centroid of the person head\n"
"float32[3] head_position\n"
"\n"
"# 2D Person skeleton projected to Camera image\n"
"zed_interfaces/Skeleton2D skeleton_2d\n"
"\n"
"# 3D Person skeleton in world frame\n"
"zed_interfaces/Skeleton3D skeleton_3d\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/BoundingBox2Di\n"
"#      0 ------- 1\n"
"#      |         |\n"
"#      |         |\n"
"#      |         |\n"
"#      3 ------- 2\n"
"zed_interfaces/Keypoint2Di[4] corners\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint2Di\n"
"uint32[2] kp\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/BoundingBox3D\n"
"#      1 ------- 2\n"
"#     /.        /|\n"
"#    0 ------- 3 |\n"
"#    | .       | |\n"
"#    | 5.......| 6\n"
"#    |.        |/\n"
"#    4 ------- 7\n"
"zed_interfaces/Keypoint3D[8] corners\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint3D\n"
"float32[3] kp\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/BoundingBox2Df\n"
"#      0 ------- 1\n"
"#      |         |\n"
"#      |         |\n"
"#      |         |\n"
"#      3 ------- 2\n"
"zed_interfaces/Keypoint2Df[4] corners\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint2Df\n"
"float32[2] kp\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Skeleton2D\n"
"# Skeleton joints indices\n"
"#        16-14   15-17\n"
"#             \\ /\n"
"#              0\n"
"#              |\n"
"#       2------1------5\n"
"#       |    |   |    |\n"
"#	    |    |   |    |\n"
"#       3    |   |    6\n"
"#       |    |   |    |\n"
"#       |    |   |    |\n"
"#       4    8   11   7\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#            9   12\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#           10   13\n"
"zed_interfaces/Keypoint2Df[18] keypoints\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Skeleton3D\n"
"# Skeleton joints indices\n"
"#        16-14   15-17\n"
"#             \\ /\n"
"#              0\n"
"#              |\n"
"#       2------1------5\n"
"#       |    |   |    |\n"
"#	    |    |   |    |\n"
"#       3    |   |    6\n"
"#       |    |   |    |\n"
"#       |    |   |    |\n"
"#       4    8   11   7\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#            9   12\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#           10   13\n"
"zed_interfaces/Keypoint3D[18] keypoints\n"
;
  }

  static const char* value(const ::zed_interfaces::ObjectsStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ObjectsStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::ObjectsStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::ObjectsStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::zed_interfaces::Object_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_OBJECTSSTAMPED_H
