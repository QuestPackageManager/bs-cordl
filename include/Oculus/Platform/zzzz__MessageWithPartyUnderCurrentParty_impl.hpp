#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithPartyUnderCurrentParty.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithPartyUnderCurrentParty_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUnderCurrentParty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithPartyUnderCurrentParty::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPartyUnderCurrentParty::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUnderCurrentParty.GetParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithPartyUnderCurrentParty::*)()>(
    &::Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dda2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithPartyUnderCurrentParty.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithPartyUnderCurrentParty::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dda32c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithPartyUnderCurrentParty::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithPartyUnderCurrentParty::GetParty() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithPartyUnderCurrentParty::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithPartyUnderCurrentParty* Oculus::Platform::MessageWithPartyUnderCurrentParty::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithPartyUnderCurrentParty*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithPartyUnderCurrentParty::MessageWithPartyUnderCurrentParty() {}
