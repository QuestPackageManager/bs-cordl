#pragma once
// IWYU pragma private; include "Oculus\Platform\PushNotification.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__PushNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__PushNotificationResult_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::PushNotification.Register
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>* (*)()>(&::Oculus::Platform::PushNotification::Register)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5deaa18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PushNotification*>(), { "Register", {}, {} })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>* Oculus::Platform::PushNotification::Register() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::PushNotification*>(), { "Register", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PushNotificationResult*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PushNotification::PushNotification() {}
