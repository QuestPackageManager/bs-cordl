#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithAppDownloadResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAppDownloadResult::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithAppDownloadResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd6ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadResult.GetAppDownloadResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::MessageWithAppDownloadResult::*)()>(
    &::Oculus::Platform::MessageWithAppDownloadResult::GetAppDownloadResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd990c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadResult* (::Oculus::Platform::MessageWithAppDownloadResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAppDownloadResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd9950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAppDownloadResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::MessageWithAppDownloadResult::GetAppDownloadResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadResult* Oculus::Platform::MessageWithAppDownloadResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAppDownloadResult* Oculus::Platform::MessageWithAppDownloadResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAppDownloadResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAppDownloadResult::MessageWithAppDownloadResult() {}
