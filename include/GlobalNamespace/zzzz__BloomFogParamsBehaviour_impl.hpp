#pragma once
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomFogParamsBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogEnvironmentParams_def.hpp"
#include "GlobalNamespace/zzzz__BloomFogSO_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BloomFogParamsBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogParamsBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2315668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogParamsBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogParamsBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x23157c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BloomFogParamsBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BloomFogParamsBehaviour::*)()>(&::GlobalNamespace::BloomFogParamsBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2315850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BloomFogEnvironmentParams*& GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFogParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFogParams;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> const& GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFogParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFogParams;
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__bloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFogParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BloomFogParamsBehaviour::__get__blend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blend;
}
constexpr float_t const& GlobalNamespace::BloomFogParamsBehaviour::__get__blend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blend;
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__blend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blend = value;
}
constexpr ::GlobalNamespace::BloomFogSO*& GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFog() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> const& GlobalNamespace::BloomFogParamsBehaviour::__get__bloomFog() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bloomFog;
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__bloomFog(::GlobalNamespace::BloomFogSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bloomFog)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BloomFogParamsBehaviour::__get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::BloomFogParamsBehaviour::__get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::BloomFogParamsBehaviour::__set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::BloomFogParamsBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(), "ProcessFrame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::BloomFogParamsBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(), "OnPlayableDestroy", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline ::GlobalNamespace::BloomFogParamsBehaviour* GlobalNamespace::BloomFogParamsBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BloomFogParamsBehaviour*>());
}
inline void GlobalNamespace::BloomFogParamsBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BloomFogParamsBehaviour*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BloomFogParamsBehaviour::BloomFogParamsBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
