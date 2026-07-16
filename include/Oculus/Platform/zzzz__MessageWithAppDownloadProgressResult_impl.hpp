#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAppDownloadProgressResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithAppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadProgressResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithAppDownloadProgressResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAppDownloadProgressResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd4d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadProgressResult.GetAppDownloadProgressResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (::Oculus::Platform::MessageWithAppDownloadProgressResult::*)()>(
    &::Oculus::Platform::MessageWithAppDownloadProgressResult::GetAppDownloadProgressResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd7584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithAppDownloadProgressResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::AppDownloadProgressResult* (::Oculus::Platform::MessageWithAppDownloadProgressResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithAppDownloadProgressResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd75c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithAppDownloadProgressResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::MessageWithAppDownloadProgressResult::GetAppDownloadProgressResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadProgressResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::AppDownloadProgressResult* Oculus::Platform::MessageWithAppDownloadProgressResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::AppDownloadProgressResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithAppDownloadProgressResult* Oculus::Platform::MessageWithAppDownloadProgressResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithAppDownloadProgressResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithAppDownloadProgressResult::MessageWithAppDownloadProgressResult() {}
