#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteCutParticlesEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutParticlesEffect_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)()>(&::GlobalNamespace::NoteCutParticlesEffect::Awake)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x3b0a678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutParticlesEffect.SpawnParticles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutParticlesEffect::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Color32, int32_t, int32_t, float_t)>(
    &::GlobalNamespace::NoteCutParticlesEffect::SpawnParticles)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x3b0a884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "SpawnParticles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
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
  constexpr static std::size_t addrs = 0x3b0ad34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__sparklesPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sparklesPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionCorePS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionCorePS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPrePassBloomPS() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPS;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPrePassBloomPS() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPS;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionPrePassBloomPS(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explosionPrePassBloomPS)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSEmitParams;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__sparklesPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPSEmitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPSMainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSMainModule;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPSMainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSMainModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__sparklesPSMainModule(::UnityEngine::__ParticleSystem__MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPSMainModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPSShapeModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSShapeModule;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesPSShapeModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesPSShapeModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__sparklesPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesPSShapeModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesLifetimeMinMaxCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesLifetimeMinMaxCurve;
}
constexpr ::UnityEngine::__ParticleSystem__MinMaxCurve const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__sparklesLifetimeMinMaxCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparklesLifetimeMinMaxCurve;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__sparklesLifetimeMinMaxCurve(::UnityEngine::__ParticleSystem__MinMaxCurve value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparklesLifetimeMinMaxCurve = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPSEmitParams;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionPSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPSEmitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePSEmitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSEmitParams;
}
constexpr ::UnityEngine::__ParticleSystem__EmitParams const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePSEmitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSEmitParams;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionCorePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionCorePSEmitParams = value;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePSMainModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSMainModule;
}
constexpr ::UnityEngine::__ParticleSystem__MainModule const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePSMainModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSMainModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionCorePSMainModule(::UnityEngine::__ParticleSystem__MainModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionCorePSMainModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePSShapeModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSShapeModule;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionCorePSShapeModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionCorePSShapeModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionCorePSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionCorePSShapeModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPrePassBloomPSShapeModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPSShapeModule;
}
constexpr ::UnityEngine::__ParticleSystem__ShapeModule const& GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_get__explosionPrePassBloomPSShapeModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explosionPrePassBloomPSShapeModule;
}
constexpr void GlobalNamespace::NoteCutParticlesEffect::__cordl_internal_set__explosionPrePassBloomPSShapeModule(::UnityEngine::__ParticleSystem__ShapeModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____explosionPrePassBloomPSShapeModule = value;
}
inline void GlobalNamespace::NoteCutParticlesEffect::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteCutParticlesEffect::SpawnParticles(::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, ::UnityEngine::Vector3 saberDir, float_t saberSpeed,
                                                                    ::UnityEngine::Vector3 noteMovementVec, ::UnityEngine::Color32 color, int32_t sparkleParticlesCount,
                                                                    int32_t explosionParticlesCount, float_t lifetimeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), "SpawnParticles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutPoint, cutNormal, saberDir, saberSpeed, noteMovementVec, color, sparkleParticlesCount, explosionParticlesCount,
                                                          lifetimeMultiplier);
}
inline ::GlobalNamespace::NoteCutParticlesEffect* GlobalNamespace::NoteCutParticlesEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteCutParticlesEffect*>());
}
inline void GlobalNamespace::NoteCutParticlesEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutParticlesEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteCutParticlesEffect::NoteCutParticlesEffect() {}
