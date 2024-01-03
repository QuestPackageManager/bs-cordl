#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__ShockwaveEffect_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ShockwaveEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShockwaveEffect::*)()>(&::GlobalNamespace::ShockwaveEffect::Start)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x23a0adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShockwaveEffect.SpawnShockwave
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShockwaveEffect::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::ShockwaveEffect::SpawnShockwave)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x23a0bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(), "SpawnShockwave", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ShockwaveEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ShockwaveEffect::*)()>(&::GlobalNamespace::ShockwaveEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a0ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::ShockwaveEffect::__get__shockwavePS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePS;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::ShockwaveEffect::__get__shockwavePS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePS;
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__shockwavePS(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shockwavePS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::ShockwaveEffect::__get__maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxShockwaveParticles;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::ShockwaveEffect::__get__maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxShockwaveParticles;
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__maxShockwaveParticles(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____maxShockwaveParticles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::ShockwaveEffect::__get__shockwavePSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::ShockwaveEffect::__get__shockwavePSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwavePSEmitParams;
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shockwavePSEmitParams = value;
}
constexpr float_t& GlobalNamespace::ShockwaveEffect::__get__prevShockwaveParticleSpawnTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevShockwaveParticleSpawnTime;
}
constexpr float_t const& GlobalNamespace::ShockwaveEffect::__get__prevShockwaveParticleSpawnTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevShockwaveParticleSpawnTime;
}
constexpr void GlobalNamespace::ShockwaveEffect::__set__prevShockwaveParticleSpawnTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevShockwaveParticleSpawnTime = value;
}
inline void GlobalNamespace::ShockwaveEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ShockwaveEffect::SpawnShockwave(::UnityEngine::Vector3 pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(), "SpawnShockwave", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pos);
}
inline ::GlobalNamespace::ShockwaveEffect* GlobalNamespace::ShockwaveEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ShockwaveEffect*>());
}
inline void GlobalNamespace::ShockwaveEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ShockwaveEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ShockwaveEffect::ShockwaveEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
