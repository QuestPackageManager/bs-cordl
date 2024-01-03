#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)()>(&::GlobalNamespace::NoteCutParticlesEffect::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x239a95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect.SpawnParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Color32, int32_t, int32_t, float_t)>(
    &::GlobalNamespace::NoteCutParticlesEffect::SpawnParticles)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x239aaa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "SpawnParticles", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)()>(&::GlobalNamespace::NoteCutParticlesEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239af54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPS;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPS(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sparklesPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPS;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPS(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePS;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePS(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionCorePS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPS;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPrePassBloomPS(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionPrePassBloomPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSEmitParams;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPSEmitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSMainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSMainModule;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSMainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSMainModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSMainModule(::UnityEngine::__ParticleSystem__MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPSMainModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSShapeModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSShapeModule;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesPSShapeModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSShapeModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPSShapeModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesLifetimeMinMaxCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesLifetimeMinMaxCurve;
}
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve const& GlobalNamespace::NoteCutParticlesEffect::__get__sparklesLifetimeMinMaxCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesLifetimeMinMaxCurve;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__sparklesLifetimeMinMaxCurve(::UnityEngine::__ParticleSystem__MinMaxCurve value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesLifetimeMinMaxCurve = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPSEmitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSEmitParams;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionCorePSEmitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSMainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSMainModule;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSMainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSMainModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSMainModule(::UnityEngine::__ParticleSystem__MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionCorePSMainModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSShapeModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSShapeModule;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionCorePSShapeModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSShapeModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionCorePSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionCorePSShapeModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPSShapeModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPSShapeModule;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__get__explosionPrePassBloomPSShapeModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPSShapeModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__set__explosionPrePassBloomPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPrePassBloomPSShapeModule = value;
}
inline void GlobalNamespace::NoteCutParticlesEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutParticlesEffect::SpawnParticles(::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, ::UnityEngine::Vector3 saberDir, float_t saberSpeed,
                                                                    ::UnityEngine::Vector3 noteMovementVec, ::UnityEngine::Color32 color, int32_t sparkleParticlesCount,
                                                                    int32_t explosionParticlesCount, float_t lifetimeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "SpawnParticles", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutPoint, cutNormal, saberDir, saberSpeed, noteMovementVec, color, sparkleParticlesCount, explosionParticlesCount,
                                                          lifetimeMultiplier);
}
inline ::GlobalNamespace::NoteCutParticlesEffect* GlobalNamespace::NoteCutParticlesEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NoteCutParticlesEffect*>());
}
inline void GlobalNamespace::NoteCutParticlesEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutParticlesEffect::NoteCutParticlesEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
