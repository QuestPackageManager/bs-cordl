#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/SystemVoipState.hpp"
#include "Oculus/Platform/zzzz__SystemVoipStatus_impl.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SystemVoipState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SystemVoipState::*)(::System::IntPtr)>(
    &::Oculus::Platform::Models::SystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c442cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SystemVoipState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SystemVoipState*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Models::SystemVoipState::New_ctor(::System::IntPtr o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::SystemVoipState*>(o));
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SystemVoipState::SystemVoipState() {}
