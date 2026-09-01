#pragma once
// IWYU pragma private; include "GlobalNamespace\ParticleSystemLightWithIds.hpp"
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleSystemLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)()>(&::GlobalNamespace::ParticleSystemLightWithIds::Awake)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58704a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5870544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), { ::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ParticleSystemLightWithIds._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystemLightWithIds::*)()>(&::GlobalNamespace::ParticleSystemLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58706c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__particleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__particleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particleSystem;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_set__particleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particleSystem = value;
}
constexpr bool& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__setOnlyOnce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr bool const& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__setOnlyOnce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setOnlyOnce;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_set__setOnlyOnce(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setOnlyOnce = value;
}
constexpr bool& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr float_t& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::UnityEngine::ParticleSystem_MainModule& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__mainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainModule;
}
constexpr ::UnityEngine::ParticleSystem_MainModule const& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__mainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainModule;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_set__mainModule(::UnityEngine::ParticleSystem_MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainModule = value;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle>& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__particles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particles;
}
constexpr ::ArrayW<::UnityEngine::ParticleSystem_Particle> const& GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_get__particles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____particles;
}
constexpr void GlobalNamespace::ParticleSystemLightWithIds::__cordl_internal_set__particles(::ArrayW<::UnityEngine::ParticleSystem_Particle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____particles = value;
}
inline void GlobalNamespace::ParticleSystemLightWithIds::Awake() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ParticleSystemLightWithIds::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::ParticleSystemLightWithIds::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ParticleSystemLightWithIds*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ParticleSystemLightWithIds* GlobalNamespace::ParticleSystemLightWithIds::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleSystemLightWithIds*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystemLightWithIds::ParticleSystemLightWithIds() {}
