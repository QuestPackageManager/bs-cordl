#pragma once
#include "Oculus/Platform/zzzz__SystemVoipStatus_impl.hpp"
#include "Oculus/Platform/zzzz__VoipMuteState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__SystemVoipState_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::SystemVoipState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::SystemVoipState::*)(void*)>(&::Oculus::Platform::Models::SystemVoipState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2708f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SystemVoipState*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::VoipMuteState& Oculus::Platform::Models::SystemVoipState::__get_MicrophoneMuted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicrophoneMuted;
}
constexpr ::Oculus::Platform::VoipMuteState const& Oculus::Platform::Models::SystemVoipState::__get_MicrophoneMuted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___MicrophoneMuted;
}
constexpr void Oculus::Platform::Models::SystemVoipState::__set_MicrophoneMuted(::Oculus::Platform::VoipMuteState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___MicrophoneMuted = value;
}
constexpr ::Oculus::Platform::SystemVoipStatus& Oculus::Platform::Models::SystemVoipState::__get_Status() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr ::Oculus::Platform::SystemVoipStatus const& Oculus::Platform::Models::SystemVoipState::__get_Status() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Status;
}
constexpr void Oculus::Platform::Models::SystemVoipState::__set_Status(::Oculus::Platform::SystemVoipStatus value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Status = value;
}
inline ::Oculus::Platform::Models::SystemVoipState* Oculus::Platform::Models::SystemVoipState::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::Models::SystemVoipState*>(o));
}
inline void Oculus::Platform::Models::SystemVoipState::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::SystemVoipState*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::SystemVoipState::SystemVoipState() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
