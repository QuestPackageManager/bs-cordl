#pragma once
// IWYU pragma private; include "Oculus\Platform\NetSync.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__NetSync_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncConnection_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::NetSync.SetConnectionStatusChangedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncConnection*>*)>(
    &::Oculus::Platform::NetSync::SetConnectionStatusChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5dea5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSync*>(),
                            { "SetConnectionStatusChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncConnection*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::NetSync.SetSessionsChangedNotificationCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>*)>(
    &::Oculus::Platform::NetSync::SetSessionsChangedNotificationCallback)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5dea674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Oculus::Platform::NetSync*>(),
            { "SetSessionsChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>*>() } })));
    return ___internal_method;
  }
};
inline void Oculus::Platform::NetSync::SetConnectionStatusChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncConnection*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Platform::NetSync*>(),
                          { "SetConnectionStatusChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncConnection*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void Oculus::Platform::NetSync::SetSessionsChangedNotificationCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Oculus::Platform::NetSync*>(),
          { "SetSessionsChangedNotificationCallback", {}, { ::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::NetSync::NetSync() {}
