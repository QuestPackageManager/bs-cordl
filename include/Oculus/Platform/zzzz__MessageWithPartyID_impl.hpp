#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPartyID.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPartyID_def.hpp"
#include "Oculus/Platform/Models/zzzz__PartyID_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyID._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPartyID::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithPartyID::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dda3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyID.GetPartyID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyID* (::Oculus::Platform::MessageWithPartyID::*)()>(&::Oculus::Platform::MessageWithPartyID::GetPartyID)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), 55 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyID.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::PartyID* (::Oculus::Platform::MessageWithPartyID::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPartyID::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPartyID::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::PartyID* Oculus::Platform::MessageWithPartyID::GetPartyID() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), 55 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyID*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::PartyID* Oculus::Platform::MessageWithPartyID::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPartyID*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::PartyID*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPartyID* Oculus::Platform::MessageWithPartyID::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPartyID*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPartyID::MessageWithPartyID() {}
