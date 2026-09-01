#pragma once
// IWYU pragma private; include "Oculus\Platform\MessageWithSystemVoipState.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithSystemVoipState_def.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithSystemVoipState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithSystemVoipState::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithSystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd8080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSystemVoipState.GetSystemVoipState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::MessageWithSystemVoipState::*)()>(
    &::Oculus::Platform::MessageWithSystemVoipState::GetSystemVoipState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5ddd088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), 67 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSystemVoipState.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::SystemVoipState* (::Oculus::Platform::MessageWithSystemVoipState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithSystemVoipState::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ddd0cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithSystemVoipState::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::MessageWithSystemVoipState::GetSystemVoipState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), 67 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::MessageWithSystemVoipState::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithSystemVoipState*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SystemVoipState*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithSystemVoipState* Oculus::Platform::MessageWithSystemVoipState::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithSystemVoipState*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithSystemVoipState::MessageWithSystemVoipState() {}
