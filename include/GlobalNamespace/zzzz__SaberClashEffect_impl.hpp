#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__SaberClashEffect_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::Start)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2279350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2279500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "OnDisable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::LateUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2279510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227960c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::SaberClashEffect::__get__sparkleParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::SaberClashEffect::__get__sparkleParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystem;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__sparkleParticleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sparkleParticleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ParticleSystem*& GlobalNamespace::SaberClashEffect::__get__glowParticleSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystem;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> const& GlobalNamespace::SaberClashEffect::__get__glowParticleSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystem;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__glowParticleSystem(::UnityEngine::ParticleSystem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____glowParticleSystem)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& GlobalNamespace::SaberClashEffect::__get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& GlobalNamespace::SaberClashEffect::__get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumblePreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberClashChecker*& GlobalNamespace::SaberClashEffect::__get__saberClashChecker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberClashChecker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> const& GlobalNamespace::SaberClashEffect::__get__saberClashChecker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberClashChecker;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberClashChecker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticFeedbackController*& GlobalNamespace::SaberClashEffect::__get__hapticFeedbackController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackController*> const& GlobalNamespace::SaberClashEffect::__get__hapticFeedbackController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackController;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__hapticFeedbackController(::GlobalNamespace::HapticFeedbackController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberClashEffect::__get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& GlobalNamespace::SaberClashEffect::__get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule& GlobalNamespace::SaberClashEffect::__get__sparkleParticleSystemEmmisionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmmisionModule;
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& GlobalNamespace::SaberClashEffect::__get__sparkleParticleSystemEmmisionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmmisionModule;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__sparkleParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparkleParticleSystemEmmisionModule = value;
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule& GlobalNamespace::SaberClashEffect::__get__glowParticleSystemEmmisionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystemEmmisionModule;
}
constexpr ::UnityEngine::__ParticleSystem__EmissionModule const& GlobalNamespace::SaberClashEffect::__get__glowParticleSystemEmmisionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystemEmmisionModule;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__glowParticleSystemEmmisionModule(::UnityEngine::__ParticleSystem__EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____glowParticleSystemEmmisionModule = value;
}
constexpr bool& GlobalNamespace::SaberClashEffect::__get__sabersAreClashing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr bool const& GlobalNamespace::SaberClashEffect::__get__sabersAreClashing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sabersAreClashing;
}
constexpr void GlobalNamespace::SaberClashEffect::__set__sabersAreClashing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sabersAreClashing = value;
}
inline void GlobalNamespace::SaberClashEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberClashEffect* GlobalNamespace::SaberClashEffect::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SaberClashEffect*>());
}
inline void GlobalNamespace::SaberClashEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberClashEffect*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberClashEffect::SaberClashEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
