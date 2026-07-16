#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithMicrophoneAvailabilityState.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithMicrophoneAvailabilityState_def.hpp"
#include "Oculus/Platform/Models/zzzz__MicrophoneAvailabilityState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithMicrophoneAvailabilityState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::MessageWithMicrophoneAvailabilityState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithMicrophoneAvailabilityState::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5dd5898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMicrophoneAvailabilityState.GetMicrophoneAvailabilityState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (::Oculus::Platform::MessageWithMicrophoneAvailabilityState::*)()>(
    &::Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetMicrophoneAvailabilityState)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5dd9a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(), 47 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithMicrophoneAvailabilityState.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Models::MicrophoneAvailabilityState* (::Oculus::Platform::MessageWithMicrophoneAvailabilityState::*)(::System::IntPtr)>(
    &::Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5dd9abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(),
                                                                                          { ::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(), 74 }));
    return ___internal_method;
  }
};
inline void Oculus::Platform::MessageWithMicrophoneAvailabilityState::_ctor(::System::IntPtr c_message) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetMicrophoneAvailabilityState() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(), 47 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::MicrophoneAvailabilityState* Oculus::Platform::MessageWithMicrophoneAvailabilityState::GetDataFromMessage(::System::IntPtr c_message) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::MicrophoneAvailabilityState*>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::MessageWithMicrophoneAvailabilityState* Oculus::Platform::MessageWithMicrophoneAvailabilityState::New_ctor(::System::IntPtr c_message) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::MessageWithMicrophoneAvailabilityState*>(c_message));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithMicrophoneAvailabilityState::MessageWithMicrophoneAvailabilityState() {}
