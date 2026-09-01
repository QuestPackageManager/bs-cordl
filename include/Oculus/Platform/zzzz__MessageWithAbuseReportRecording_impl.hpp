#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAbuseReportRecording.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAbuseReportRecording_def.hpp"
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAbuseReportRecording._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAbuseReportRecording::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAbuseReportRecording::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd8f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAbuseReportRecording.GetAbuseReportRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (::Oculus::Platform::MessageWithAbuseReportRecording::*)()>(
    &::Oculus::Platform::MessageWithAbuseReportRecording::GetAbuseReportRecording)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd8f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAbuseReportRecording.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AbuseReportRecording* (::Oculus::Platform::MessageWithAbuseReportRecording::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAbuseReportRecording::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd8fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAbuseReportRecording::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::MessageWithAbuseReportRecording::GetAbuseReportRecording() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AbuseReportRecording*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AbuseReportRecording* Oculus::Platform::MessageWithAbuseReportRecording::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAbuseReportRecording*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AbuseReportRecording*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAbuseReportRecording* Oculus::Platform::MessageWithAbuseReportRecording::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAbuseReportRecording*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAbuseReportRecording::MessageWithAbuseReportRecording() {}
