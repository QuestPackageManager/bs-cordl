#pragma once
// IWYU pragma private; include "Oculus/Platform/Notifications.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Notifications_def.hpp"
#include "Oculus/Platform/zzzz__Request_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Notifications.MarkAsRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request* (*)(uint64_t)>(&::Oculus::Platform::Notifications::MarkAsRead)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x5de84c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Notifications*>(), { "MarkAsRead", {}, { ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request* Oculus::Platform::Notifications::MarkAsRead(uint64_t notificationID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Notifications*>(), { "MarkAsRead", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request*>(nullptr, ___internal_method, notificationID);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Notifications::Notifications() {}
