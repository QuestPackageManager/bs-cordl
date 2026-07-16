#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SystemVoipState.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_impl.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SystemVoipState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Platform::Models::SystemVoipState::*)(::System::IntPtr)>(&::Oculus::Platform::Models::SystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5df0560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SystemVoipState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::VoipMuteState& Oculus::Platform::Models::SystemVoipState::__cordl_internal_get_MicrophoneMuted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicrophoneMuted;
}
constexpr ::Oculus::Platform::VoipMuteState const& Oculus::Platform::Models::SystemVoipState::__cordl_internal_get_MicrophoneMuted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicrophoneMuted;
}
constexpr void Oculus::Platform::Models::SystemVoipState::__cordl_internal_set_MicrophoneMuted(::Oculus::Platform::VoipMuteState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MicrophoneMuted = value;
}
constexpr ::Oculus::Platform::SystemVoipStatus& Oculus::Platform::Models::SystemVoipState::__cordl_internal_get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::Oculus::Platform::SystemVoipStatus const& Oculus::Platform::Models::SystemVoipState::__cordl_internal_get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::SystemVoipState::__cordl_internal_set_Status(::Oculus::Platform::SystemVoipStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
inline void Oculus::Platform::Models::SystemVoipState::_ctor(::System::IntPtr o) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Platform::Models::SystemVoipState*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Models::SystemVoipState::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Platform::Models::SystemVoipState*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SystemVoipState::SystemVoipState() {}
