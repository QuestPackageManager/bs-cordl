#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayCoreInstaller.hpp"
#include "BGLib/DotnetExtension/CommandLine/zzzz__CommandLineParserResult_impl.hpp"
#include "BeatSaber/Automation/zzzz__PerformanceToolLauncherOverrideConfig_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreInstaller_def.hpp"
#include "BeatSaber/FeatureFlags/zzzz__IFeatureFlagService_def.hpp"
#include "GlobalNamespace/zzzz__ArcAndObstacleHapticEffectManager_def.hpp"
#include "GlobalNamespace/zzzz__AudioManager_def.hpp"
#include "GlobalNamespace/zzzz__BadNoteCutEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
#include "GlobalNamespace/zzzz__EffectPoolsManualInstaller_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformationSetupData_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__MissedNoteEffectSpawner_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightDetector_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SongProfilingController_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x1e10;
  constexpr static std::size_t addrs = 0x59f5280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreInstaller*>(), { ::i2c::class_of<::GlobalNamespace::GameplayCoreInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayCoreInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayCoreInstaller::*)()>(&::GlobalNamespace::GameplayCoreInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59f7090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatLineManager>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__beatLineManagerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLineManagerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatLineManager> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__beatLineManagerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatLineManagerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__beatLineManagerPrefab(::UnityW<::GlobalNamespace::BeatLineManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatLineManagerPrefab = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songTimeTweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songTimeTweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeTweeningManager;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__songTimeTweeningManager(::UnityW<::Tweening::SongTimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeTweeningManager = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__playerHeightDetectorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightDetector> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__playerHeightDetectorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightDetectorPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__playerHeightDetectorPrefab(::UnityW<::GlobalNamespace::PlayerHeightDetector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeightDetectorPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__noteCutScoreSpawnerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutScoreSpawnerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::NoteCutScoreSpawner> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__noteCutScoreSpawnerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteCutScoreSpawnerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__noteCutScoreSpawnerPrefab(::UnityW<::GlobalNamespace::NoteCutScoreSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteCutScoreSpawnerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__badNoteCutEffectSpawnerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badNoteCutEffectSpawnerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__badNoteCutEffectSpawnerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badNoteCutEffectSpawnerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__badNoteCutEffectSpawnerPrefab(::UnityW<::GlobalNamespace::BadNoteCutEffectSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badNoteCutEffectSpawnerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__missedNoteEffectSpawnerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedNoteEffectSpawnerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__missedNoteEffectSpawnerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedNoteEffectSpawnerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__missedNoteEffectSpawnerPrefab(::UnityW<::GlobalNamespace::MissedNoteEffectSpawner> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missedNoteEffectSpawnerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__effectPoolsManualInstaller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr ::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__effectPoolsManualInstaller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____effectPoolsManualInstaller;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__effectPoolsManualInstaller(::UnityW<::GlobalNamespace::EffectPoolsManualInstaller> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____effectPoolsManualInstaller = value;
}
constexpr ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcAndObstacleHapticManagerEffectPrefab;
}
constexpr ::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__arcAndObstacleHapticManagerEffectPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcAndObstacleHapticManagerEffectPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__arcAndObstacleHapticManagerEffectPrefab(::UnityW<::GlobalNamespace::ArcAndObstacleHapticEffectManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcAndObstacleHapticManagerEffectPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::SongProfilingController>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songProfilingControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProfilingControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::SongProfilingController> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__songProfilingControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songProfilingControllerPrefab;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__songProfilingControllerPrefab(::UnityW<::GlobalNamespace::SongProfilingController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songProfilingControllerPrefab = value;
}
constexpr ::GlobalNamespace::AudioManager*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__audioManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr ::GlobalNamespace::AudioManager* const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__audioManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioManager;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__audioManager(::GlobalNamespace::AudioManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioManager = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__perceivedLoudnessPerLevelModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__perceivedLoudnessPerLevelModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____perceivedLoudnessPerLevelModel;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____perceivedLoudnessPerLevelModel = value;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__commandLineArguments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineArguments;
}
constexpr ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__commandLineArguments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandLineArguments;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__commandLineArguments(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____commandLineArguments = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__gameplayAdditionalInformationSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData;
}
constexpr ::GlobalNamespace::GameplayAdditionalInformationSetupData* const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__gameplayAdditionalInformationSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayAdditionalInformationSetupData;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__gameplayAdditionalInformationSetupData(::GlobalNamespace::GameplayAdditionalInformationSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayAdditionalInformationSetupData = value;
}
constexpr ::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig>& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__performanceToolConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____performanceToolConfig;
}
constexpr ::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig> const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__performanceToolConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____performanceToolConfig;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__performanceToolConfig(::System::Nullable_1<::BeatSaber::Automation::PerformanceToolLauncherOverrideConfig> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____performanceToolConfig = value;
}
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService*& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__featureFlagService() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____featureFlagService;
}
constexpr ::BeatSaber::FeatureFlags::IFeatureFlagService* const& GlobalNamespace::GameplayCoreInstaller::__cordl_internal_get__featureFlagService() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____featureFlagService;
}
constexpr void GlobalNamespace::GameplayCoreInstaller::__cordl_internal_set__featureFlagService(::BeatSaber::FeatureFlags::IFeatureFlagService* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____featureFlagService = value;
}
inline void GlobalNamespace::GameplayCoreInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GameplayCoreInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayCoreInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayCoreInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayCoreInstaller* GlobalNamespace::GameplayCoreInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayCoreInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayCoreInstaller::GameplayCoreInstaller() {}
