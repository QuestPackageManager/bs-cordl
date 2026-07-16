#pragma once
// IWYU pragma private; include "Oculus/Platform/AbuseReport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__AbuseReport_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__ReportRequestResponse_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::AbuseReport.ReportRequestHandled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::ReportRequestResponse)>(&::Oculus::Platform::AbuseReport::ReportRequestHandled)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de1bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AbuseReport*>(), { "ReportRequestHandled", {}, { ::i2c::type_of<::Oculus::Platform::ReportRequestResponse>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::AbuseReport.SetReportButtonPressedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::StringW>*)>(&::Oculus::Platform::AbuseReport::SetReportButtonPressedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5de1d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AbuseReport*>(),
                                                             { "SetReportButtonPressedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::AbuseReport::ReportRequestHandled(::Oculus::Platform::ReportRequestResponse response) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AbuseReport*>(), { "ReportRequestHandled", {}, { ::i2c::type_of<::Oculus::Platform::ReportRequestResponse>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, response);
}
inline void Oculus::Platform::AbuseReport::SetReportButtonPressedNotificationCallback(::Oculus::Platform::Message_1_Callback<::StringW>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::AbuseReport*>(),
                                                           { "SetReportButtonPressedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::AbuseReport::AbuseReport() {}
