#pragma once
// IWYU pragma private; include "GlobalNamespace\TutorialInstaller.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__TutorialInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__TutorialSceneSetupData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x10e4;
  constexpr static std::size_t addrs = 0x59ff288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialInstaller*>(), { ::i2c::class_of<::GlobalNamespace::TutorialInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TutorialInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TutorialInstaller::*)()>(&::GlobalNamespace::TutorialInstaller::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a0036c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::TutorialInstaller::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClip = value;
}
constexpr float_t& GlobalNamespace::TutorialInstaller::__cordl_internal_get__songBPM() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBPM;
}
constexpr float_t const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__songBPM() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songBPM;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__songBPM(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songBPM = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& GlobalNamespace::TutorialInstaller::__cordl_internal_get__playerHeightDetectorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__playerHeightDetectorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeightDetectorPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& GlobalNamespace::TutorialInstaller::__cordl_internal_get__effectPoolsManualInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__effectPoolsManualInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectPoolsManualInstaller = value;
}
constexpr ::GlobalNamespace::TutorialSceneSetupData*& GlobalNamespace::TutorialInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::TutorialSceneSetupData* const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::TutorialSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& GlobalNamespace::TutorialInstaller::__cordl_internal_get__environmentSceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSceneSetupData;
}
constexpr ::GlobalNamespace::EnvironmentSceneSetupData* const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__environmentSceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentSceneSetupData;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__environmentSceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentSceneSetupData = value;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*& GlobalNamespace::TutorialInstaller::__cordl_internal_get__gameplayAdditionalInformationSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__gameplayAdditionalInformationSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__gameplayAdditionalInformationSetupData(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayAdditionalInformationSetupData = value;
}
constexpr ::GlobalNamespace::EnvironmentsListModel*& GlobalNamespace::TutorialInstaller::__cordl_internal_get__environmentsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsList;
}
constexpr ::GlobalNamespace::EnvironmentsListModel* const& GlobalNamespace::TutorialInstaller::__cordl_internal_get__environmentsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentsList;
}
constexpr void GlobalNamespace::TutorialInstaller::__cordl_internal_set__environmentsList(::GlobalNamespace::EnvironmentsListModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentsList = value;
}
inline void GlobalNamespace::TutorialInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TutorialInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TutorialInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TutorialInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TutorialInstaller* GlobalNamespace::TutorialInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TutorialInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TutorialInstaller::TutorialInstaller() {}
