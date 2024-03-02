#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__PlayerSaveData__GameplayModifiers__EnabledObstacleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::__PlayerSaveData__GameplayModifiers__EnabledObstacleType() {}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::FullHeightOnly{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType::None{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::__PlayerSaveData__GameplayModifiers__EnergyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::__PlayerSaveData__GameplayModifiers__EnergyType() {}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::Bar{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType::Battery{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::__PlayerSaveData__GameplayModifiers__SongSpeed(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::__PlayerSaveData__GameplayModifiers__SongSpeed() {}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::Faster{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed::Slower{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__GameplayModifiers::*)()>(
    &::GlobalNamespace::__PlayerSaveData__GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f2f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_energyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energyType;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_energyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energyType;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_energyType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___energyType = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instaFail;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instaFail;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_instaFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instaFail = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_failOnSaberClash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOnSaberClash;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_failOnSaberClash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOnSaberClash;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_failOnSaberClash(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failOnSaberClash = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_enabledObstacleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstacleType;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_enabledObstacleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstacleType;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_enabledObstacleType(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__EnabledObstacleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabledObstacleType = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_fastNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fastNotes;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_fastNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fastNotes;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_fastNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fastNotes = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_strictAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strictAngles;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_strictAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strictAngles;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_strictAngles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strictAngles = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disappearingArrows = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_ghostNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ghostNotes = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_noBombs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noBombs = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_songSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeed;
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_songSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeed;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_songSpeed(::GlobalNamespace::__PlayerSaveData__GameplayModifiers__SongSpeed value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeed = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_noArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noArrows;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_noArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noArrows;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_noArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noArrows = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_noFailOn0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailOn0Energy;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_noFailOn0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailOn0Energy;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_noFailOn0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noFailOn0Energy = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_proMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proMode;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_proMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proMode;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_proMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proMode = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_zenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zenMode;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_zenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zenMode;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_zenMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zenMode = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_smallCubes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallCubes;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_get_smallCubes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallCubes;
}
constexpr void GlobalNamespace::__PlayerSaveData__GameplayModifiers::__cordl_internal_set_smallCubes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smallCubes = value;
}
inline ::GlobalNamespace::__PlayerSaveData__GameplayModifiers* GlobalNamespace::__PlayerSaveData__GameplayModifiers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>());
}
inline void GlobalNamespace::__PlayerSaveData__GameplayModifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers::__PlayerSaveData__GameplayModifiers() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData() {}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
    GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::AllEffects{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
    GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::StrobeFilter{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData
    GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData::NoEffects{ static_cast<int32_t>(0xa) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData() {}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::None{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::Low{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::Standard{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData::High{
  static_cast<int32_t>(0x3)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData() {}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData
    GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::Dynamic{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData
    GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData::Static{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x12f2f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_staticLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staticLights;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_staticLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staticLights;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_staticLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___staticLights = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHanded = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerHeight = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_automaticPlayerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticPlayerHeight;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_automaticPlayerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticPlayerHeight;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_automaticPlayerHeight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___automaticPlayerHeight = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_sfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sfxVolume;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_sfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sfxVolume;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_sfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sfxVolume = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_reduceDebris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduceDebris;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_reduceDebris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduceDebris;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_reduceDebris(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reduceDebris = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noTextsAndHuds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noTextsAndHuds;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noTextsAndHuds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noTextsAndHuds;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_noTextsAndHuds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noTextsAndHuds = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_advancedHud() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHud;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_advancedHud() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHud;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_advancedHud(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___advancedHud = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_saberTrailIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberTrailIntensity;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_saberTrailIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberTrailIntensity;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_saberTrailIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberTrailIntensity = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get__noteJumpDurationTypeSettingsSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettingsSaveData;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData const&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get__noteJumpDurationTypeSettingsSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettingsSaveData;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set__noteJumpDurationTypeSettingsSaveData(
    ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__NoteJumpDurationTypeSettingsSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpDurationTypeSettingsSaveData = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noteJumpFixedDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpFixedDuration;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noteJumpFixedDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpFixedDuration;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_noteJumpFixedDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpFixedDuration = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noFailEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailEffects;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noFailEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailEffects;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_noFailEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noFailEffects = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noteJumpBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpBeatOffset;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_noteJumpBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpBeatOffset;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_noteJumpBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpBeatOffset = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_hideNoteSpawnEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_hideNoteSpawnEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_hideNoteSpawnEffect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideNoteSpawnEffect = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_adaptiveSfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_adaptiveSfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_adaptiveSfx(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___adaptiveSfx = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_arcsHapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsHapticFeedback;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_arcsHapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsHapticFeedback;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_arcsHapticFeedback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arcsHapticFeedback = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_arcsVisibleSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsVisibleSaveData;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData const&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_arcsVisibleSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsVisibleSaveData;
}
constexpr void
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_arcsVisibleSaveData(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__ArcVisibilityTypeSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arcsVisibleSaveData = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterDefaultPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterDefaultPreset;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterDefaultPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterDefaultPreset;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_environmentEffectsFilterDefaultPreset(
    ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentEffectsFilterDefaultPreset = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterExpertPlusPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterExpertPlusPreset;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData const&
GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterExpertPlusPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterExpertPlusPreset;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_environmentEffectsFilterExpertPlusPreset(
    ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings__EnvironmentEffectsFilterPresetSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentEffectsFilterExpertPlusPreset = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_headsetHapticIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headsetHapticIntensity;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_get_headsetHapticIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headsetHapticIntensity;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__cordl_internal_set_headsetHapticIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headsetHapticIntensity = value;
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings::__PlayerSaveData__PlayerSpecificSettings() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x12f6674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::*)(
    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*,
    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*)>(&::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12f6820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_campaignOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___campaignOverallStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const&
GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_campaignOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___campaignOverallStatsData;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___campaignOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_soloFreePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soloFreePlayOverallStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const&
GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_soloFreePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soloFreePlayOverallStatsData;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soloFreePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_partyFreePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyFreePlayOverallStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const&
GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_partyFreePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyFreePlayOverallStatsData;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyFreePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*& GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_onlinePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlinePlayOverallStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*> const&
GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_get_onlinePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlinePlayOverallStatsData;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__cordl_internal_set_onlinePlayOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onlinePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::New_ctor(
    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
    ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData, ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>(campaignOverallStatsData, soloFreePlayOverallStatsData,
                                                                                                                   partyFreePlayOverallStatsData, onlinePlayOverallStatsData));
}
inline void GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::_ctor(::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* campaignOverallStatsData,
                                                                                ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                                ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* onlinePlayOverallStatsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData::__PlayerSaveData__PlayerAllOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f6860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::*)(
    int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12f6868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_missedCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_missedCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_missedCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCutsCount = value;
}
constexpr int64_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_totalScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalScore;
}
constexpr int64_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_totalScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalScore;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_totalScore(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalScore = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_playedLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playedLevelsCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_playedLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playedLevelsCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_playedLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playedLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_cleardLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleardLevelsCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_cleardLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleardLevelsCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_cleardLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cleardLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_failedLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedLevelsCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_failedLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedLevelsCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_failedLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failedLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_fullComboCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullComboCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_fullComboCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullComboCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_fullComboCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullComboCount = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_timePlayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePlayed;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_timePlayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePlayed;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_timePlayed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timePlayed = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_handDistanceTravelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handDistanceTravelled;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_handDistanceTravelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handDistanceTravelled;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_handDistanceTravelled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handDistanceTravelled = value;
}
constexpr int64_t& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_cummulativeCutScoreWithoutMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cummulativeCutScoreWithoutMultiplier;
}
constexpr int64_t const& GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_get_cummulativeCutScoreWithoutMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cummulativeCutScoreWithoutMultiplier;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__cordl_internal_set_cummulativeCutScoreWithoutMultiplier(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cummulativeCutScoreWithoutMultiplier = value;
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData* GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*
GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                    int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled,
                                                                    int64_t cummulativeCutScoreWithoutMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount,
                                                                                                                cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled,
                                                                                                                cummulativeCutScoreWithoutMultiplier));
}
inline void GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                             int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed,
                                                                             int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount,
                                                          fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerOverallStatsData::__PlayerSaveData__PlayerOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f30a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_beatmapCharacteristicName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristicName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_beatmapCharacteristicName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristicName;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_beatmapCharacteristicName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristicName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_highScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highScore;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_highScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highScore;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_highScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highScore = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_maxRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRank;
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_maxRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRank;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_maxRank(::GlobalNamespace::__RankModel__Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRank = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_validScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validScore;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_validScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validScore;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_validScore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validScore = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_playCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_get_playCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__cordl_internal_set_playCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playCount = value;
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData* GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData::__PlayerSaveData__PlayerLevelStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f30ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__cordl_internal_get_missionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__cordl_internal_get_missionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionId;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__cordl_internal_set_missionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__cordl_internal_get_cleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleared;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__cordl_internal_get_cleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleared;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__cordl_internal_set_cleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cleared = value;
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData* GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData::__PlayerSaveData__PlayerMissionStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PracticeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PracticeSettings::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f2fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__PlayerSaveData__PracticeSettings::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PracticeSettings::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::__PlayerSaveData__PracticeSettings::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::__PlayerSaveData__PracticeSettings::__cordl_internal_get_songSpeedMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMul;
}
constexpr float_t const& GlobalNamespace::__PlayerSaveData__PracticeSettings::__cordl_internal_get_songSpeedMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMul;
}
constexpr void GlobalNamespace::__PlayerSaveData__PracticeSettings::__cordl_internal_set_songSpeedMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeedMul = value;
}
inline ::GlobalNamespace::__PlayerSaveData__PracticeSettings* GlobalNamespace::__PlayerSaveData__PracticeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__PracticeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PracticeSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PracticeSettings::__PlayerSaveData__PracticeSettings() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__ColorScheme._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__ColorScheme::*)(
    ::StringW, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::__PlayerSaveData__ColorScheme::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x12f30bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorScheme*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
            ::std::array<Il2CppType const*, 8>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_colorSchemeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_colorSchemeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeId;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_colorSchemeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_saberAColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberAColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_saberAColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberAColor;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_saberAColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberAColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_saberBColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberBColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_saberBColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberBColor;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_saberBColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberBColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_environmentColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_environmentColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor1 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_obstaclesColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_obstaclesColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesColor;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_obstaclesColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor0Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0Boost;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor0Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0Boost;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_environmentColor0Boost(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor0Boost = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1Boost;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_get_environmentColor1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1Boost;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorScheme::__cordl_internal_set_environmentColor1Boost(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor1Boost = value;
}
inline ::GlobalNamespace::__PlayerSaveData__ColorScheme* GlobalNamespace::__PlayerSaveData__ColorScheme::New_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor,
                                                                                                                  ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0,
                                                                                                                  ::UnityEngine::Color environmentColor1, ::UnityEngine::Color obstaclesColor,
                                                                                                                  ::UnityEngine::Color environmentColor0Boost,
                                                                                                                  ::UnityEngine::Color environmentColor1Boost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__ColorScheme*>(colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor,
                                                                                                     environmentColor0Boost, environmentColor1Boost));
}
inline void GlobalNamespace::__PlayerSaveData__ColorScheme::_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color environmentColor0,
                                                                  ::UnityEngine::Color environmentColor1, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0Boost,
                                                                  ::UnityEngine::Color environmentColor1Boost) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorScheme*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
          ::std::array<Il2CppType const*, 8>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorSchemeId, saberAColor, saberBColor, environmentColor0, environmentColor1, obstaclesColor,
                                                          environmentColor0Boost, environmentColor1Boost);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__ColorScheme::__PlayerSaveData__ColorScheme() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::*)(
    bool, ::StringW, ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*)>(&::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x12f318c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_get_overrideDefaultColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDefaultColors;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_get_overrideDefaultColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDefaultColors;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_set_overrideDefaultColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDefaultColors = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_get_selectedColorSchemeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedColorSchemeId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_get_selectedColorSchemeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedColorSchemeId;
}
constexpr void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_set_selectedColorSchemeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedColorSchemeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*& GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_get_colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*> const&
GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_get_colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr void
GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__cordl_internal_set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*
GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId,
                                                                  ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>(overrideDefaultColors, selectedColorSchemeId, colorSchemes));
}
inline void GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId,
                                                                           ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>* colorSchemes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__ColorScheme*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrideDefaultColors, selectedColorSchemeId, colorSchemes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings::__PlayerSaveData__ColorSchemesSettings() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::*)()>(
    &::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f31c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_get_overrideNormalEnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideNormalEnvironmentName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_get_overrideNormalEnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideNormalEnvironmentName;
}
constexpr void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_set_overrideNormalEnvironmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideNormalEnvironmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_get_override360EnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___override360EnvironmentName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_get_override360EnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___override360EnvironmentName;
}
constexpr void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__cordl_internal_set_override360EnvironmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___override360EnvironmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings::__PlayerSaveData__OverrideEnvironmentSettings() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__GuestPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__GuestPlayer::*)()>(
    &::GlobalNamespace::__PlayerSaveData__GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f30b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__GuestPlayer::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__GuestPlayer::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::__PlayerSaveData__GuestPlayer::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PlayerSaveData__GuestPlayer* GlobalNamespace::__PlayerSaveData__GuestPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>());
}
inline void GlobalNamespace::__PlayerSaveData__GuestPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__GuestPlayer::__PlayerSaveData__GuestPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::*)()>(
    &::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x12f31d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_createServerNumberOfPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createServerNumberOfPlayers;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_createServerNumberOfPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createServerNumberOfPlayers;
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_set_createServerNumberOfPlayers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createServerNumberOfPlayers = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlayDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayDifficulty;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlayDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayDifficulty;
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_set_quickPlayDifficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlayDifficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMask;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMask;
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_set_quickPlaySongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlaySongPackMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMaskSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMaskSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_set_quickPlaySongPackMaskSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlaySongPackMaskSerializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlayEnableLevelSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_get_quickPlayEnableLevelSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__cordl_internal_set_quickPlayEnableLevelSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickPlayEnableLevelSelection = value;
}
inline ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>());
}
inline void GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings::__PlayerSaveData__MultiplayerModeSettings() {}
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::*)()>(
    &::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f3244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_eulaVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eulaVersion;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_eulaVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eulaVersion;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_set_eulaVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eulaVersion = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_privacyPolicyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privacyPolicyVersion;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_privacyPolicyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privacyPolicyVersion;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_set_privacyPolicyVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privacyPolicyVersion = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_healthAndSafetyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___healthAndSafetyVersion;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_healthAndSafetyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___healthAndSafetyVersion;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_set_healthAndSafetyVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___healthAndSafetyVersion = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_playerSensitivityFlagVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSensitivityFlagVersion;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_get_playerSensitivityFlagVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSensitivityFlagVersion;
}
constexpr void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__cordl_internal_set_playerSensitivityFlagVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSensitivityFlagVersion = value;
}
inline ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>());
}
inline void GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData::__PlayerSaveData__PlayerAgreementsData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::__PlayerSaveData__UserAgeCategorySaveData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::__PlayerSaveData__UserAgeCategorySaveData() {}
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Child{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Teen{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData::Adult{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::__PlayerSaveData__PlayerSensitivityFlagSaveData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::__PlayerSaveData__PlayerSensitivityFlagSaveData() {}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::Safe{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData::Explicit{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::__PlayerSaveData__LocalPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlayerSaveData__LocalPlayer::*)()>(
    &::GlobalNamespace::__PlayerSaveData__LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12f2f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_playerId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_shouldShowTutorialPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShowTutorialPrompt;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_shouldShowTutorialPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShowTutorialPrompt;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_shouldShowTutorialPrompt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldShowTutorialPrompt = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_shouldShow360Warning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShow360Warning;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_shouldShow360Warning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShow360Warning;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_shouldShow360Warning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldShow360Warning = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_agreedToEula() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToEula;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_agreedToEula() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToEula;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_agreedToEula(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agreedToEula = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_didSelectLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLanguage;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_didSelectLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLanguage;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_didSelectLanguage(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectLanguage = value;
}
constexpr bool& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_agreedToMultiplayerDisclaimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToMultiplayerDisclaimer;
}
constexpr bool const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_agreedToMultiplayerDisclaimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToMultiplayerDisclaimer;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_agreedToMultiplayerDisclaimer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agreedToMultiplayerDisclaimer = value;
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_didSelectRegionVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRegionVersion;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_didSelectRegionVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRegionVersion;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_didSelectRegionVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectRegionVersion = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_selectedAvatarSystemTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedAvatarSystemTypeId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_selectedAvatarSystemTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedAvatarSystemTypeId;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_selectedAvatarSystemTypeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedAvatarSystemTypeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerAgreements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAgreements;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerAgreements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAgreements;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_playerAgreements(::GlobalNamespace::__PlayerSaveData__PlayerAgreementsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAgreements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_lastSelectedBeatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_lastSelectedBeatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapDifficulty;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastSelectedBeatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_lastSelectedBeatmapCharacteristicName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapCharacteristicName;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_lastSelectedBeatmapCharacteristicName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapCharacteristicName;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_lastSelectedBeatmapCharacteristicName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastSelectedBeatmapCharacteristicName)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__GameplayModifiers*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__GameplayModifiers*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::__PlayerSaveData__GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::__PlayerSaveData__PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PracticeSettings*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PracticeSettings*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_practiceSettings(::GlobalNamespace::__PlayerSaveData__PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___practiceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerAllOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAllOverallStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_playerAllOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAllOverallStatsData;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::__PlayerSaveData__PlayerAllOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAllOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_levelsStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelsStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_levelsStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelsStatsData;
}
constexpr void
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerLevelStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelsStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_missionsStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionsStatsData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_missionsStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionsStatsData;
}
constexpr void
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__PlayerMissionStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionsStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_showedMissionHelpIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showedMissionHelpIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_showedMissionHelpIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showedMissionHelpIds;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___showedMissionHelpIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemesSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemesSettings;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_colorSchemesSettings(::GlobalNamespace::__PlayerSaveData__ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemesSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_overrideEnvironmentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironmentSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_overrideEnvironmentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironmentSettings;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_overrideEnvironmentSettings(::GlobalNamespace::__PlayerSaveData__OverrideEnvironmentSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideEnvironmentSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_favoritesLevelIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoritesLevelIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_favoritesLevelIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoritesLevelIds;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___favoritesLevelIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_multiplayerModeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerModeSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings*> const&
GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_multiplayerModeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerModeSettings;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_multiplayerModeSettings(::GlobalNamespace::__PlayerSaveData__MultiplayerModeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplayerModeSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_currentDlcPromoDisplayCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoDisplayCount;
}
constexpr int32_t const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_currentDlcPromoDisplayCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoDisplayCount;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_currentDlcPromoDisplayCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentDlcPromoDisplayCount = value;
}
constexpr ::StringW& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_currentDlcPromoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoId;
}
constexpr ::StringW const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_currentDlcPromoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoId;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_currentDlcPromoId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentDlcPromoId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_userAgeCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userAgeCategory;
}
constexpr ::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_userAgeCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userAgeCategory;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_userAgeCategory(::GlobalNamespace::__PlayerSaveData__UserAgeCategorySaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userAgeCategory = value;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_desiredSensitivityFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSensitivityFlag;
}
constexpr ::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData const& GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_get_desiredSensitivityFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSensitivityFlag;
}
constexpr void GlobalNamespace::__PlayerSaveData__LocalPlayer::__cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::__PlayerSaveData__PlayerSensitivityFlagSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desiredSensitivityFlag = value;
}
inline ::GlobalNamespace::__PlayerSaveData__LocalPlayer* GlobalNamespace::__PlayerSaveData__LocalPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>());
}
inline void GlobalNamespace::__PlayerSaveData__LocalPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSaveData__LocalPlayer::__PlayerSaveData__LocalPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData::*)()>(&::GlobalNamespace::PlayerSaveData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12f2eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*& GlobalNamespace::PlayerSaveData::__cordl_internal_get_localPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>*> const&
GlobalNamespace::PlayerSaveData::__cordl_internal_get_localPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayers;
}
constexpr void GlobalNamespace::PlayerSaveData::__cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__LocalPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*& GlobalNamespace::PlayerSaveData::__cordl_internal_get_guestPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>*> const&
GlobalNamespace::PlayerSaveData::__cordl_internal_get_guestPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayers;
}
constexpr void GlobalNamespace::PlayerSaveData::__cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerSaveData__GuestPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___guestPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PlayerSaveData* GlobalNamespace::PlayerSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData*>());
}
inline void GlobalNamespace::PlayerSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData::PlayerSaveData() {}
