#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemLightWithIds_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)()>(&::GlobalNamespace::ParticleSystemLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2112418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2112498;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)()>(&::GlobalNamespace::ParticleSystemLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21128f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::ParticleSystemLightWithIds::__get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::ParticleSystemLightWithIds::__get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__set__particleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ParticleSystemLightWithIds::__get__setOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr bool const& GlobalNamespace::ParticleSystemLightWithIds::__get__setOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__set__setOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setOnlyOnce = value;
}
constexpr bool& GlobalNamespace::ParticleSystemLightWithIds::__get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::ParticleSystemLightWithIds::__get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr float_t& GlobalNamespace::ParticleSystemLightWithIds::__get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::ParticleSystemLightWithIds::__get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::ParticleSystemLightWithIds::__get__mainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainModule;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::ParticleSystemLightWithIds::__get__mainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainModule;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__set__mainModule(::UnityEngine::__ParticleSystem__MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainModule = value;
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*>& GlobalNamespace::ParticleSystemLightWithIds::__get__particles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particles;
}
constexpr ::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> const& GlobalNamespace::ParticleSystemLightWithIds::__get__particles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particles;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__set__particles(::ArrayW<::UnityEngine::__ParticleSystem__Particle, ::Array<::UnityEngine::__ParticleSystem__Particle>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____particles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ParticleSystemLightWithIds::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(), "ColorWasSet",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::GlobalNamespace::ParticleSystemLightWithIds* GlobalNamespace::ParticleSystemLightWithIds::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ParticleSystemLightWithIds*>());
}
inline void GlobalNamespace::ParticleSystemLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ParticleSystemLightWithIds*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemLightWithIds::ParticleSystemLightWithIds() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
