#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithParty.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithParty_def.hpp"
#include "Oculus/Platform/Models/zzzz__Party_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithParty._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithParty::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithParty::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ddc3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithParty.GetParty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithParty::*)()>(&::Oculus::Platform::MessageWithParty::GetParty)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddc430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), 54 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithParty.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::Party* (::Oculus::Platform::MessageWithParty::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithParty::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddc474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithParty::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithParty::GetParty() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), 54 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::Party* Oculus::Platform::MessageWithParty::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithParty*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::Party*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithParty* Oculus::Platform::MessageWithParty::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithParty*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithParty::MessageWithParty() {}
