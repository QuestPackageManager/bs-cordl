#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/AbuseReportRecording.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::AbuseReportRecording._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::AbuseReportRecording::*)(::System::IntPtr)>(&::Oculus::Platform::Models::AbuseReportRecording::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5dd6e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AbuseReportRecording*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::AbuseReportRecording::__cordl_internal_get_RecordingUuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecordingUuid;
}
constexpr ::StringW const& Oculus::Platform::Models::AbuseReportRecording::__cordl_internal_get_RecordingUuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RecordingUuid;
}
constexpr void Oculus::Platform::Models::AbuseReportRecording::__cordl_internal_set_RecordingUuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RecordingUuid = value;
}
inline void Oculus::Platform::Models::AbuseReportRecording::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::AbuseReportRecording*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::Models::AbuseReportRecording::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::AbuseReportRecording*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::AbuseReportRecording::AbuseReportRecording() {}
