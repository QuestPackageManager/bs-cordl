#pragma once
// IWYU pragma private; include "GlobalNamespace/PrepareLevelCompletionResults.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRatingsRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ComboController_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiersModelSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__SaberActivityCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PrepareLevelCompletionResults.FillLevelCompletionResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelCompletionResults* (
    ::GlobalNamespace::PrepareLevelCompletionResults::*)(::GlobalNamespace::LevelCompletionResults_LevelEndStateType, ::GlobalNamespace::LevelCompletionResults_LevelEndAction)>(
    &::GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x59e5df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrepareLevelCompletionResults*>(),
                            { "FillLevelCompletionResults",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults_LevelEndAction>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrepareLevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PrepareLevelCompletionResults::*)()>(&::GlobalNamespace::PrepareLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e60fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrepareLevelCompletionResults*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__gameplayModifiersModelSO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModelSO;
}
constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__gameplayModifiersModelSO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModelSO;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__gameplayModifiersModelSO(::UnityW<::GlobalNamespace::GameplayModifiersModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiersModelSO = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter>& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__saberActivityCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter> const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__saberActivityCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__saberActivityCounter(::UnityW<::GlobalNamespace::SaberActivityCounter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberActivityCounter = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder>& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__beatmapObjectExecutionRatingsRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectExecutionRatingsRecorder;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> const&
GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__beatmapObjectExecutionRatingsRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectExecutionRatingsRecorder;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__beatmapObjectExecutionRatingsRecorder(::UnityW<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapObjectExecutionRatingsRecorder = value;
}
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::GlobalNamespace::IScoreController* const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreController = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__gameEnergyCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__gameEnergyCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameEnergyCounter = value;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapData = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController>& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::UnityW<::GlobalNamespace::AudioTimeSyncController> const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__audioTimeSyncController(::UnityW<::GlobalNamespace::AudioTimeSyncController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioTimeSyncController = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers = value;
}
constexpr ::UnityW<::GlobalNamespace::ComboController>& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__comboController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr ::UnityW<::GlobalNamespace::ComboController> const& GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_get__comboController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__cordl_internal_set__comboController(::UnityW<::GlobalNamespace::ComboController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comboController = value;
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults(::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType,
                                                                           ::GlobalNamespace::LevelCompletionResults_LevelEndAction levelEndAction) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrepareLevelCompletionResults*>(),
                          { "FillLevelCompletionResults",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>(), ::i2c::type_of<::GlobalNamespace::LevelCompletionResults_LevelEndAction>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*>(this, ___internal_method, levelEndStateType, levelEndAction);
}
inline void GlobalNamespace::PrepareLevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PrepareLevelCompletionResults*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::PrepareLevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PrepareLevelCompletionResults*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrepareLevelCompletionResults::PrepareLevelCompletionResults() {}
