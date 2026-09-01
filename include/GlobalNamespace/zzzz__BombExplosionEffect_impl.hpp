#pragma once
// IWYU pragma private; include "GlobalNamespace\BombExplosionEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)()>(&::GlobalNamespace::BombExplosionEffect::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x598063c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.SpawnExplosion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BombExplosionEffect::SpawnExplosion)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5980664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { "SpawnExplosion", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.SpawnExplosionWithOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::BombExplosionEffect::SpawnExplosionWithOffset)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5980704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { "SpawnExplosionWithOffset", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)()>(&::GlobalNamespace::BombExplosionEffect::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59807d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__debrisPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debrisPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__debrisPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debrisPS;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__debrisPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debrisPS = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPS;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__explosionPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPS = value;
}
constexpr int32_t& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__debrisCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debrisCount;
}
constexpr int32_t const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__debrisCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debrisCount;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__debrisCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debrisCount = value;
}
constexpr int32_t& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionParticlesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionParticlesCount;
}
constexpr int32_t const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionParticlesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionParticlesCount;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__explosionParticlesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionParticlesCount = value;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__emitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__emitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__emitParams(::UnityEngine::ParticleSystem_EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitParams = value;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionPSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr ::UnityEngine::ParticleSystem_EmitParams const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionPSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__explosionPSEmitParams(::UnityEngine::ParticleSystem_EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPSEmitParams = value;
}
inline void GlobalNamespace::BombExplosionEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BombExplosionEffect::SpawnExplosion(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { "SpawnExplosion", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void GlobalNamespace::BombExplosionEffect::SpawnExplosionWithOffset(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { "SpawnExplosionWithOffset", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void GlobalNamespace::BombExplosionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BombExplosionEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BombExplosionEffect* GlobalNamespace::BombExplosionEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BombExplosionEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExplosionEffect::BombExplosionEffect() {}
