#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__BombExplosionEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)()>(&::GlobalNamespace::BombExplosionEffect::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2357860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect.SpawnExplosion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::BombExplosionEffect::SpawnExplosion)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x235788c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(), "SpawnExplosion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BombExplosionEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BombExplosionEffect::*)()>(&::GlobalNamespace::BombExplosionEffect::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2357948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debrisPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__emitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__emitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____emitParams;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__emitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____emitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionPSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::BombExplosionEffect::__cordl_internal_get__explosionPSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr void GlobalNamespace::BombExplosionEffect::__cordl_internal_set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPSEmitParams = value;
}
inline void GlobalNamespace::BombExplosionEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BombExplosionEffect::SpawnExplosion(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(), "SpawnExplosion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline ::GlobalNamespace::BombExplosionEffect* GlobalNamespace::BombExplosionEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BombExplosionEffect*>());
}
inline void GlobalNamespace::BombExplosionEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BombExplosionEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BombExplosionEffect::BombExplosionEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
