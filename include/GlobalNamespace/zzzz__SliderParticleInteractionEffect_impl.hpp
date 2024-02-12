#pragma once
#include "GlobalNamespace/zzzz__SliderInteractionEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__SliderParticleInteractionEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderParticleInteractionEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderParticleInteractionEffect::*)()>(
    &::GlobalNamespace::SliderParticleInteractionEffect::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2354b00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderParticleInteractionEffect.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderParticleInteractionEffect::*)()>(
    &::GlobalNamespace::SliderParticleInteractionEffect::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2354c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                                               "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderParticleInteractionEffect.SetPSStartColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderParticleInteractionEffect::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::SliderParticleInteractionEffect::SetPSStartColor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2354b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), "SetPSStartColor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderParticleInteractionEffect.StartEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderParticleInteractionEffect::*)(float_t)>(
    &::GlobalNamespace::SliderParticleInteractionEffect::StartEffect)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2354cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderParticleInteractionEffect.EndEffect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderParticleInteractionEffect::*)()>(
    &::GlobalNamespace::SliderParticleInteractionEffect::EndEffect)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2354d90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderParticleInteractionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderParticleInteractionEffect::*)()>(
    &::GlobalNamespace::SliderParticleInteractionEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2354e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*>&
GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__particleSystems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> const&
GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__particleSystems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystems;
}
constexpr void
GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_set__particleSystems(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>, ::Array<::UnityW<::UnityEngine::ParticleSystem>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__startColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__startColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColor;
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_set__startColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startColor = value;
}
constexpr ::UnityW<::GlobalNamespace::Saber>& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__saber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr ::UnityW<::GlobalNamespace::Saber> const& GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_get__saber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saber;
}
constexpr void GlobalNamespace::SliderParticleInteractionEffect::__cordl_internal_set__saber(::UnityW<::GlobalNamespace::Saber> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saber)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SliderParticleInteractionEffect::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderParticleInteractionEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SliderParticleInteractionEffect::SetPSStartColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), "SetPSStartColor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline void GlobalNamespace::SliderParticleInteractionEffect::StartEffect(float_t saberInteractionParam) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saberInteractionParam);
}
inline void GlobalNamespace::SliderParticleInteractionEffect::EndEffect() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderParticleInteractionEffect* GlobalNamespace::SliderParticleInteractionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SliderParticleInteractionEffect*>());
}
inline void GlobalNamespace::SliderParticleInteractionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderParticleInteractionEffect*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderParticleInteractionEffect::SliderParticleInteractionEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
