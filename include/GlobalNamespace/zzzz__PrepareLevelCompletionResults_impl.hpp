#pragma once
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LevelCompletionResults* (
    ::GlobalNamespace::PrepareLevelCompletionResults::*)(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, ::GlobalNamespace::__LevelCompletionResults__LevelEndAction)>(
    &::GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x22607b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(), "FillLevelCompletionResults", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PrepareLevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PrepareLevelCompletionResults::*)()>(
    &::GlobalNamespace::PrepareLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiersModelSO*& GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiersModelSO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModelSO;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersModelSO*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiersModelSO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiersModelSO;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__gameplayModifiersModelSO(::GlobalNamespace::GameplayModifiersModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiersModelSO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberActivityCounter*& GlobalNamespace::PrepareLevelCompletionResults::__get__saberActivityCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberActivityCounter*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__saberActivityCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__saberActivityCounter(::GlobalNamespace::SaberActivityCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberActivityCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*& GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapObjectExecutionRatingsRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectExecutionRatingsRecorder;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder*> const&
GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapObjectExecutionRatingsRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapObjectExecutionRatingsRecorder;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__beatmapObjectExecutionRatingsRecorder(::GlobalNamespace::BeatmapObjectExecutionRatingsRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectExecutionRatingsRecorder)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::PrepareLevelCompletionResults::__get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IScoreController*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameEnergyCounter*& GlobalNamespace::PrepareLevelCompletionResults::__get__gameEnergyCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameEnergyCounter*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__gameEnergyCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__gameEnergyCounter(::GlobalNamespace::GameEnergyCounter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameEnergyCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData*& GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__beatmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapData;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__beatmapData(::GlobalNamespace::IReadonlyBeatmapData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::AudioTimeSyncController*& GlobalNamespace::PrepareLevelCompletionResults::__get__audioTimeSyncController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__audioTimeSyncController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioTimeSyncController;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioTimeSyncController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ComboController*& GlobalNamespace::PrepareLevelCompletionResults::__get__comboController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ComboController*> const& GlobalNamespace::PrepareLevelCompletionResults::__get__comboController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comboController;
}
constexpr void GlobalNamespace::PrepareLevelCompletionResults::__set__comboController(::GlobalNamespace::ComboController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____comboController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::PrepareLevelCompletionResults::FillLevelCompletionResults(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType levelEndStateType,
                                                                           ::GlobalNamespace::__LevelCompletionResults__LevelEndAction levelEndAction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(), "FillLevelCompletionResults", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LevelCompletionResults__LevelEndAction>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*, false>(this, ___internal_method, levelEndStateType, levelEndAction);
}
inline ::GlobalNamespace::PrepareLevelCompletionResults* GlobalNamespace::PrepareLevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PrepareLevelCompletionResults*>());
}
inline void GlobalNamespace::PrepareLevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PrepareLevelCompletionResults*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PrepareLevelCompletionResults::PrepareLevelCompletionResults() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
