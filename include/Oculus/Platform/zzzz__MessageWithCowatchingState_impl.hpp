#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithCowatchingState.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithCowatchingState_def.hpp"
#include "Oculus/Platform/Models/zzzz__CowatchingState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchingState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithCowatchingState::*)(::System::IntPtr)>(&::Oculus::Platform::MessageWithCowatchingState::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchingState.GetCowatchingState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchingState* (::Oculus::Platform::MessageWithCowatchingState::*)()>(
    &::Oculus::Platform::MessageWithCowatchingState::GetCowatchingState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd88ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithCowatchingState.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::CowatchingState* (::Oculus::Platform::MessageWithCowatchingState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithCowatchingState::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd8930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithCowatchingState::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::CowatchingState* Oculus::Platform::MessageWithCowatchingState::GetCowatchingState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchingState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::CowatchingState* Oculus::Platform::MessageWithCowatchingState::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithCowatchingState*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::CowatchingState*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithCowatchingState* Oculus::Platform::MessageWithCowatchingState::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithCowatchingState*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithCowatchingState::MessageWithCowatchingState() {}
