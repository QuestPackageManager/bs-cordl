#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPushNotificationResult.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPushNotificationResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPushNotificationResult._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPushNotificationResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPushNotificationResult::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPushNotificationResult.GetPushNotificationResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PushNotificationResult* (::Oculus::Platform::MessageWithPushNotificationResult::*)()>(
    &::Oculus::Platform::MessageWithPushNotificationResult::GetPushNotificationResult)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(), 61 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPushNotificationResult.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PushNotificationResult* (::Oculus::Platform::MessageWithPushNotificationResult::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPushNotificationResult::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPushNotificationResult::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PushNotificationResult* Oculus::Platform::MessageWithPushNotificationResult::GetPushNotificationResult() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PushNotificationResult*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PushNotificationResult* Oculus::Platform::MessageWithPushNotificationResult::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPushNotificationResult*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PushNotificationResult*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPushNotificationResult* Oculus::Platform::MessageWithPushNotificationResult::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPushNotificationResult*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPushNotificationResult::MessageWithPushNotificationResult() {}
