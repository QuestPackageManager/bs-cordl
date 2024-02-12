#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__SaberClashEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x237129c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x237144c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::LateUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x237145c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2371558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sparkleParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sparkleParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystem;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__sparkleParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sparkleParticleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__glowParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystem;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__glowParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystem;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__glowParticleSystem(::UnityW<::UnityEngine::ParticleSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____glowParticleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__rumblePreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumblePreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberClashChecker*& GlobalNamespace::SaberClashEffect::__cordl_internal_get__saberClashChecker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberClashChecker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__saberClashChecker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberClashChecker;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberClashChecker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__hapticFeedbackController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackController;
}
constexpr ::UnityW<::GlobalNamespace::HapticFeedbackManager> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__hapticFeedbackController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackController;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__hapticFeedbackController(::UnityW<::GlobalNamespace::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberClashEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sparkleParticleSystemEmmisionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmmisionModule;
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sparkleParticleSystemEmmisionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmmisionModule;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__sparkleParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparkleParticleSystemEmmisionModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule& GlobalNamespace::SaberClashEffect::__cordl_internal_get__glowParticleSystemEmmisionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystemEmmisionModule;
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__glowParticleSystemEmmisionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystemEmmisionModule;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__glowParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____glowParticleSystemEmmisionModule = value;
}
constexpr bool& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sabersAreClashing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr bool const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sabersAreClashing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__sabersAreClashing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabersAreClashing = value;
}
inline void GlobalNamespace::SaberClashEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberClashEffect* GlobalNamespace::SaberClashEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SaberClashEffect*>());
}
inline void GlobalNamespace::SaberClashEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberClashEffect::SaberClashEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
