#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberClashEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "GlobalNamespace/zzzz__SaberClashEffect_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__MainCamera_def.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::Start)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x59a177c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::OnDisable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x59a1900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::LateUpdate)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x59a1910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberClashEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberClashEffect::*)()>(&::GlobalNamespace::SaberClashEffect::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59a1ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { ".ctor", {}, {} })));
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
  this->____sparkleParticleSystem = value;
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
  this->____glowParticleSystem = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rumblePreset;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__rumblePreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rumblePreset = value;
}
constexpr ::GlobalNamespace::SaberClashChecker*& GlobalNamespace::SaberClashEffect::__cordl_internal_get__saberClashChecker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberClashChecker;
}
constexpr ::GlobalNamespace::SaberClashChecker* const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__saberClashChecker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberClashChecker;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberClashChecker = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__hapticFeedbackController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackController;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__hapticFeedbackController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackController;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__hapticFeedbackController(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackController = value;
}
constexpr ::GlobalNamespace::ColorManager*& GlobalNamespace::SaberClashEffect::__cordl_internal_get__colorManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr ::GlobalNamespace::ColorManager* const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__colorManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorManager;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MainCamera>& GlobalNamespace::SaberClashEffect::__cordl_internal_get__mainCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr ::UnityW<::GlobalNamespace::MainCamera> const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__mainCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainCamera;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__mainCamera(::UnityW<::GlobalNamespace::MainCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainCamera = value;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sparkleParticleSystemEmmisionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmmisionModule;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__sparkleParticleSystemEmmisionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sparkleParticleSystemEmmisionModule;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__sparkleParticleSystemEmmisionModule(::UnityEngine::ParticleSystem_EmissionModule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sparkleParticleSystemEmmisionModule = value;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule& GlobalNamespace::SaberClashEffect::__cordl_internal_get__glowParticleSystemEmmisionModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystemEmmisionModule;
}
constexpr ::UnityEngine::ParticleSystem_EmissionModule const& GlobalNamespace::SaberClashEffect::__cordl_internal_get__glowParticleSystemEmmisionModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____glowParticleSystemEmmisionModule;
}
constexpr void GlobalNamespace::SaberClashEffect::__cordl_internal_set__glowParticleSystemEmmisionModule(::UnityEngine::ParticleSystem_EmissionModule value) {
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberClashEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberClashEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberClashEffect* GlobalNamespace::SaberClashEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberClashEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberClashEffect::SaberClashEffect() {}
