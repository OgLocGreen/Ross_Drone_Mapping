// Generated by gencpp from file zed_interfaces/start_object_detection.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTION_H
#define ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTION_H

#include <ros/service_traits.h>


#include <zed_interfaces/start_object_detectionRequest.h>
#include <zed_interfaces/start_object_detectionResponse.h>


namespace zed_interfaces
{

struct start_object_detection
{

typedef start_object_detectionRequest Request;
typedef start_object_detectionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct start_object_detection
} // namespace zed_interfaces


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::zed_interfaces::start_object_detection > {
  static const char* value()
  {
    return "b995a85771d2d4944e6f5eac75f36055";
  }

  static const char* value(const ::zed_interfaces::start_object_detection&) { return value(); }
};

template<>
struct DataType< ::zed_interfaces::start_object_detection > {
  static const char* value()
  {
    return "zed_interfaces/start_object_detection";
  }

  static const char* value(const ::zed_interfaces::start_object_detection&) { return value(); }
};


// service_traits::MD5Sum< ::zed_interfaces::start_object_detectionRequest> should match
// service_traits::MD5Sum< ::zed_interfaces::start_object_detection >
template<>
struct MD5Sum< ::zed_interfaces::start_object_detectionRequest>
{
  static const char* value()
  {
    return MD5Sum< ::zed_interfaces::start_object_detection >::value();
  }
  static const char* value(const ::zed_interfaces::start_object_detectionRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::zed_interfaces::start_object_detectionRequest> should match
// service_traits::DataType< ::zed_interfaces::start_object_detection >
template<>
struct DataType< ::zed_interfaces::start_object_detectionRequest>
{
  static const char* value()
  {
    return DataType< ::zed_interfaces::start_object_detection >::value();
  }
  static const char* value(const ::zed_interfaces::start_object_detectionRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::zed_interfaces::start_object_detectionResponse> should match
// service_traits::MD5Sum< ::zed_interfaces::start_object_detection >
template<>
struct MD5Sum< ::zed_interfaces::start_object_detectionResponse>
{
  static const char* value()
  {
    return MD5Sum< ::zed_interfaces::start_object_detection >::value();
  }
  static const char* value(const ::zed_interfaces::start_object_detectionResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::zed_interfaces::start_object_detectionResponse> should match
// service_traits::DataType< ::zed_interfaces::start_object_detection >
template<>
struct DataType< ::zed_interfaces::start_object_detectionResponse>
{
  static const char* value()
  {
    return DataType< ::zed_interfaces::start_object_detection >::value();
  }
  static const char* value(const ::zed_interfaces::start_object_detectionResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_START_OBJECT_DETECTION_H
