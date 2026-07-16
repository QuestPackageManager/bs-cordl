#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPartyUpdateNotification.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPartyUpdateNotification_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyUpdateNotification_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUpdateNotification._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPartyUpdateNotification::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPartyUpdateNotification::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUpdateNotification.GetPartyUpdateNotification
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (::Oculus::Platform::MessageWithPartyUpdateNotification::*)()>(
    &::Oculus::Platform::MessageWithPartyUpdateNotification::GetPartyUpdateNotification)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(), 56 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUpdateNotification.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyUpdateNotification* (::Oculus::Platform::MessageWithPartyUpdateNotification::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPartyUpdateNotification::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPartyUpdateNotification::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::MessageWithPartyUpdateNotification::GetPartyUpdateNotification() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(), 56 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyUpdateNotification*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyUpdateNotification* Oculus::Platform::MessageWithPartyUpdateNotification::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUpdateNotification*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyUpdateNotification*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPartyUpdateNotification* Oculus::Platform::MessageWithPartyUpdateNotification::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPartyUpdateNotification*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPartyUpdateNotification::MessageWithPartyUpdateNotification() {}
