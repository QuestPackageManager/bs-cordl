#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithNetSyncSessionsChangedNotification.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithNetSyncSessionsChangedNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSessionsChangedNotification_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification.GetNetSyncSessionsChangedNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)()>(
    &::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd9d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(), 50 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::NetSyncSessionsChangedNotification* (
    ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd9db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetNetSyncSessionsChangedNotification() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::NetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification* Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithNetSyncSessionsChangedNotification::MessageWithNetSyncSessionsChangedNotification() {}
