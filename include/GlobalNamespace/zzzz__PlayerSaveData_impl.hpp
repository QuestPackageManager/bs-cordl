#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSaveData.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType::GameplayModifiers_PlayerSaveData_EnabledObstacleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType::GameplayModifiers_PlayerSaveData_EnabledObstacleType() {}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType::FullHeightOnly{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType::None{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType::GameplayModifiers_PlayerSaveData_EnergyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType::GameplayModifiers_PlayerSaveData_EnergyType() {}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType::Bar{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType::Battery{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed::GameplayModifiers_PlayerSaveData_SongSpeed(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed::GameplayModifiers_PlayerSaveData_SongSpeed() {}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed::Faster{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed::Slower{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_GameplayModifiers::*)()>(
    &::GlobalNamespace::PlayerSaveData_GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f36c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_GameplayModifiers*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_energyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energyType;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_energyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energyType;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_energyType(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___energyType = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_noFailOn0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailOn0Energy;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_noFailOn0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailOn0Energy;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_noFailOn0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noFailOn0Energy = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instaFail;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instaFail;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_instaFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instaFail = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_failOnSaberClash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOnSaberClash;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_failOnSaberClash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOnSaberClash;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_failOnSaberClash(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failOnSaberClash = value;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_enabledObstacleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstacleType;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_enabledObstacleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstacleType;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_enabledObstacleType(::GlobalNamespace::GameplayModifiers_PlayerSaveData_EnabledObstacleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabledObstacleType = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_fastNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fastNotes;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_fastNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fastNotes;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_fastNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fastNotes = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_strictAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strictAngles;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_strictAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strictAngles;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_strictAngles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strictAngles = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disappearingArrows = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_ghostNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_ghostNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ghostNotes;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_ghostNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ghostNotes = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_noBombs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noBombs = value;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_songSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeed;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_songSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeed;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_songSpeed(::GlobalNamespace::GameplayModifiers_PlayerSaveData_SongSpeed value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeed = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_noArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noArrows;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_noArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noArrows;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_noArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noArrows = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_proMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proMode;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_proMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___proMode;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_proMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___proMode = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_zenMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zenMode;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_zenMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___zenMode;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_zenMode(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___zenMode = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_smallCubes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallCubes;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_get_smallCubes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smallCubes;
}
constexpr void GlobalNamespace::PlayerSaveData_GameplayModifiers::__cordl_internal_set_smallCubes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smallCubes = value;
}
inline void GlobalNamespace::PlayerSaveData_GameplayModifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_GameplayModifiers*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_GameplayModifiers* GlobalNamespace::PlayerSaveData_GameplayModifiers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_GameplayModifiers*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_GameplayModifiers::PlayerSaveData_GameplayModifiers() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType::PlayerSaveData_ColorOverrideType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType::PlayerSaveData_ColorOverrideType() {}
constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType GlobalNamespace::PlayerSaveData_ColorOverrideType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType GlobalNamespace::PlayerSaveData_ColorOverrideType::NotesOnly{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData() {}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData
    GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData::AllEffects{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData
    GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData::StrobeFilter{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData
    GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData::NoEffects{ static_cast<int32_t>(0xa) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData() {}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData::None{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData::Low{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData::Standard{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData::High{
  static_cast<int32_t>(0x3)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData(
    int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData() {}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData
    GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData::Dynamic{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData
    GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData::Static{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::*)()>(
    &::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x26f36cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_staticLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staticLights;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_staticLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staticLights;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_staticLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___staticLights = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHanded = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerHeight = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_automaticPlayerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticPlayerHeight;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_automaticPlayerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___automaticPlayerHeight;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_automaticPlayerHeight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___automaticPlayerHeight = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_sfxVolume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sfxVolume;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_sfxVolume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sfxVolume;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_sfxVolume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sfxVolume = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_reduceDebris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduceDebris;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_reduceDebris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduceDebris;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_reduceDebris(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reduceDebris = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noTextsAndHuds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noTextsAndHuds;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noTextsAndHuds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noTextsAndHuds;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_noTextsAndHuds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noTextsAndHuds = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_advancedHud() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHud;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_advancedHud() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHud;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_advancedHud(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___advancedHud = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_saberTrailIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberTrailIntensity;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_saberTrailIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberTrailIntensity;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_saberTrailIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberTrailIntensity = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get__noteJumpDurationTypeSettingsSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettingsSaveData;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData const&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get__noteJumpDurationTypeSettingsSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettingsSaveData;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set__noteJumpDurationTypeSettingsSaveData(
    ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpDurationTypeSettingsSaveData = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noteJumpFixedDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpFixedDuration;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noteJumpFixedDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpFixedDuration;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_noteJumpFixedDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpFixedDuration = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_autoRestart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_autoRestart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___autoRestart;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_autoRestart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___autoRestart = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noFailEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailEffects;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noFailEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFailEffects;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_noFailEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noFailEffects = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noteJumpBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpBeatOffset;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_noteJumpBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteJumpBeatOffset;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_noteJumpBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteJumpBeatOffset = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_hideNoteSpawnEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_hideNoteSpawnEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideNoteSpawnEffect;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_hideNoteSpawnEffect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideNoteSpawnEffect = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_adaptiveSfx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_adaptiveSfx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___adaptiveSfx;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_adaptiveSfx(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___adaptiveSfx = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_arcsHapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsHapticFeedback;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_arcsHapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsHapticFeedback;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_arcsHapticFeedback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arcsHapticFeedback = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_arcsVisibleSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsVisibleSaveData;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData const&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_arcsVisibleSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arcsVisibleSaveData;
}
constexpr void
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_arcsVisibleSaveData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arcsVisibleSaveData = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterDefaultPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterDefaultPreset;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterDefaultPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterDefaultPreset;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_environmentEffectsFilterDefaultPreset(
    ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentEffectsFilterDefaultPreset = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterExpertPlusPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterExpertPlusPreset;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData const&
GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_environmentEffectsFilterExpertPlusPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentEffectsFilterExpertPlusPreset;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_environmentEffectsFilterExpertPlusPreset(
    ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentEffectsFilterExpertPlusPreset = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_headsetHapticIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headsetHapticIntensity;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_get_headsetHapticIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headsetHapticIntensity;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::__cordl_internal_set_headsetHapticIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headsetHapticIntensity = value;
}
inline void GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings::PlayerSaveData_PlayerSpecificSettings() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26f7008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::*)(
    ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*, ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*, ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*,
    ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*)>(&::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x26f719c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_campaignOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___campaignOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_campaignOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___campaignOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___campaignOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_soloFreePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soloFreePlayOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_soloFreePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soloFreePlayOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soloFreePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_partyFreePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyFreePlayOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_partyFreePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyFreePlayOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyFreePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_onlinePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlinePlayOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* const& GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_get_onlinePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onlinePlayOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::__cordl_internal_set_onlinePlayOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onlinePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::_ctor(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* campaignOverallStatsData,
                                                                             ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                             ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                                             ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* onlinePlayOverallStatsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>());
}
inline ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::New_ctor(
    ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* campaignOverallStatsData, ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
    ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* partyFreePlayOverallStatsData, ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* onlinePlayOverallStatsData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData,
                                                                                                                onlinePlayOverallStatsData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData::PlayerSaveData_PlayerAllOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f71dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::*)(
    int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26f71e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_missedCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_missedCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_missedCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCutsCount = value;
}
constexpr int64_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_totalScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalScore;
}
constexpr int64_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_totalScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalScore;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_totalScore(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_playedLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playedLevelsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_playedLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playedLevelsCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_playedLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playedLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_cleardLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleardLevelsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_cleardLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleardLevelsCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_cleardLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cleardLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_failedLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedLevelsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_failedLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedLevelsCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_failedLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failedLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_fullComboCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullComboCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_fullComboCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullComboCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_fullComboCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullComboCount = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_timePlayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePlayed;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_timePlayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePlayed;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_timePlayed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timePlayed = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_handDistanceTravelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handDistanceTravelled;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_handDistanceTravelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handDistanceTravelled;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_handDistanceTravelled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handDistanceTravelled = value;
}
constexpr int64_t& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_cummulativeCutScoreWithoutMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cummulativeCutScoreWithoutMultiplier;
}
constexpr int64_t const& GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_get_cummulativeCutScoreWithoutMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cummulativeCutScoreWithoutMultiplier;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::__cordl_internal_set_cummulativeCutScoreWithoutMultiplier(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cummulativeCutScoreWithoutMultiplier = value;
}
inline void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                          int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed,
                                                                          int32_t handDistanceTravelled, int64_t cumulativeCutScoreWithoutMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, clearedLevelsCount, failedLevelsCount,
                                                          fullComboCount, timePlayed, handDistanceTravelled, cumulativeCutScoreWithoutMultiplier);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>());
}
inline ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*
GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                 int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled,
                                                                 int64_t cumulativeCutScoreWithoutMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount,
                                                                                                             clearedLevelsCount, failedLevelsCount, fullComboCount, timePlayed, handDistanceTravelled,
                                                                                                             cumulativeCutScoreWithoutMultiplier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData::PlayerSaveData_PlayerOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f3800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_beatmapCharacteristicName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristicName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_beatmapCharacteristicName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristicName;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_beatmapCharacteristicName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristicName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_highScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highScore;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_highScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highScore;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_highScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_maxRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRank;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_maxRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRank;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_maxRank(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRank = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_validScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validScore;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_validScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validScore;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_validScore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_playCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_get_playCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playCount;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::__cordl_internal_set_playCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playCount = value;
}
inline void GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData* GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData::PlayerSaveData_PlayerLevelStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f3808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::__cordl_internal_get_missionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::__cordl_internal_get_missionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionId;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::__cordl_internal_set_missionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::__cordl_internal_get_cleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleared;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::__cordl_internal_get_cleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleared;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::__cordl_internal_set_cleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cleared = value;
}
inline void GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData* GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData::PlayerSaveData_PlayerMissionStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PracticeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PracticeSettings::*)()>(
    &::GlobalNamespace::PlayerSaveData_PracticeSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f3734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PracticeSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::PlayerSaveData_PracticeSettings::__cordl_internal_get_startSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PracticeSettings::__cordl_internal_get_startSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startSongTime;
}
constexpr void GlobalNamespace::PlayerSaveData_PracticeSettings::__cordl_internal_set_startSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startSongTime = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveData_PracticeSettings::__cordl_internal_get_songSpeedMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMul;
}
constexpr float_t const& GlobalNamespace::PlayerSaveData_PracticeSettings::__cordl_internal_get_songSpeedMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeedMul;
}
constexpr void GlobalNamespace::PlayerSaveData_PracticeSettings::__cordl_internal_set_songSpeedMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeedMul = value;
}
inline void GlobalNamespace::PlayerSaveData_PracticeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PracticeSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_PracticeSettings* GlobalNamespace::PlayerSaveData_PracticeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PracticeSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PracticeSettings::PlayerSaveData_PracticeSettings() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_ColorScheme._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_ColorScheme::*)(
    ::StringW, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::PlayerSaveData_ColorScheme::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x26f3818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_ColorScheme*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_colorSchemeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_colorSchemeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemeId;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_colorSchemeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_saberAColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberAColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_saberAColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberAColor;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_saberAColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberAColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_saberBColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberBColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_saberBColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___saberBColor;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_saberBColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___saberBColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_environmentColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_environmentColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor1 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_obstaclesColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_obstaclesColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesColor;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_obstaclesColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor0Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0Boost;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor0Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor0Boost;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_environmentColor0Boost(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor0Boost = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1Boost;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_get_environmentColor1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___environmentColor1Boost;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorScheme::__cordl_internal_set_environmentColor1Boost(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___environmentColor1Boost = value;
}
inline void GlobalNamespace::PlayerSaveData_ColorScheme::_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor,
                                                               ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost,
                                                               ::UnityEngine::Color environmentColor1Boost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_ColorScheme*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorSchemeId, saberAColor, saberBColor, obstaclesColor, environmentColor0, environmentColor1,
                                                          environmentColor0Boost, environmentColor1Boost);
}
inline ::GlobalNamespace::PlayerSaveData_ColorScheme* GlobalNamespace::PlayerSaveData_ColorScheme::New_ctor(::StringW colorSchemeId, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                                                                            ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0,
                                                                                                            ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost,
                                                                                                            ::UnityEngine::Color environmentColor1Boost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_ColorScheme*>(colorSchemeId, saberAColor, saberBColor, obstaclesColor, environmentColor0, environmentColor1,
                                                                                                  environmentColor0Boost, environmentColor1Boost));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_ColorScheme::PlayerSaveData_ColorScheme() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_ColorSchemesSettings::*)(
    bool, ::StringW, ::GlobalNamespace::PlayerSaveData_ColorOverrideType, ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>*)>(
    &::GlobalNamespace::PlayerSaveData_ColorSchemesSettings::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x26f38f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_ColorOverrideType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_overrideDefaultColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDefaultColors;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_overrideDefaultColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideDefaultColors;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_set_overrideDefaultColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideDefaultColors = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_selectedColorSchemeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedColorSchemeId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_selectedColorSchemeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedColorSchemeId;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_set_selectedColorSchemeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedColorSchemeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_colorOverrideType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOverrideType;
}
constexpr ::GlobalNamespace::PlayerSaveData_ColorOverrideType const& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_colorOverrideType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorOverrideType;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_set_colorOverrideType(::GlobalNamespace::PlayerSaveData_ColorOverrideType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorOverrideType = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>*& GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* const&
GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_get_colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemes;
}
constexpr void GlobalNamespace::PlayerSaveData_ColorSchemesSettings::__cordl_internal_set_colorSchemes(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveData_ColorSchemesSettings::_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId,
                                                                        ::GlobalNamespace::PlayerSaveData_ColorOverrideType colorOverrideType,
                                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* colorSchemes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveData_ColorOverrideType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, overrideDefaultColors, selectedColorSchemeId, colorOverrideType, colorSchemes);
}
inline ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*
GlobalNamespace::PlayerSaveData_ColorSchemesSettings::New_ctor(bool overrideDefaultColors, ::StringW selectedColorSchemeId, ::GlobalNamespace::PlayerSaveData_ColorOverrideType colorOverrideType,
                                                               ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_ColorScheme*>* colorSchemes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*>(overrideDefaultColors, selectedColorSchemeId, colorOverrideType, colorSchemes));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings::PlayerSaveData_ColorSchemesSettings() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::*)()>(
    &::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f393c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_get_overrideEnvironments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_get_overrideEnvironments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironments;
}
constexpr void GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_set_overrideEnvironments(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideEnvironments = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_get_overrideNormalEnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideNormalEnvironmentName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_get_overrideNormalEnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideNormalEnvironmentName;
}
constexpr void GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_set_overrideNormalEnvironmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideNormalEnvironmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_get_override360EnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___override360EnvironmentName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_get_override360EnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___override360EnvironmentName;
}
constexpr void GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::__cordl_internal_set_override360EnvironmentName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___override360EnvironmentName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings::PlayerSaveData_OverrideEnvironmentSettings() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_GuestPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_GuestPlayer::*)()>(&::GlobalNamespace::PlayerSaveData_GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f3810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_GuestPlayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveData_GuestPlayer::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_GuestPlayer::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::PlayerSaveData_GuestPlayer::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveData_GuestPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_GuestPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_GuestPlayer* GlobalNamespace::PlayerSaveData_GuestPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_GuestPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_GuestPlayer::PlayerSaveData_GuestPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::*)()>(
    &::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x26f3944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_createServerNumberOfPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createServerNumberOfPlayers;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_createServerNumberOfPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createServerNumberOfPlayers;
}
constexpr void GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_set_createServerNumberOfPlayers(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createServerNumberOfPlayers = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlayDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayDifficulty;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlayDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayDifficulty;
}
constexpr void GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_set_quickPlayDifficulty(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlayDifficulty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMask;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMask;
}
constexpr void GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_set_quickPlaySongPackMask(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlaySongPackMask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMaskSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlaySongPackMaskSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlaySongPackMaskSerializedName;
}
constexpr void GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_set_quickPlaySongPackMaskSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickPlaySongPackMaskSerializedName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlayEnableLevelSelection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_get_quickPlayEnableLevelSelection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickPlayEnableLevelSelection;
}
constexpr void GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::__cordl_internal_set_quickPlayEnableLevelSelection(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___quickPlayEnableLevelSelection = value;
}
inline void GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings::PlayerSaveData_MultiplayerModeSettings() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_PlayerAgreementsData::*)()>(
    &::GlobalNamespace::PlayerSaveData_PlayerAgreementsData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26f39b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerAgreementsData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_eulaVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eulaVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_eulaVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___eulaVersion;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_set_eulaVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___eulaVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_privacyPolicyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privacyPolicyVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_privacyPolicyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___privacyPolicyVersion;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_set_privacyPolicyVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___privacyPolicyVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_healthAndSafetyVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___healthAndSafetyVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_healthAndSafetyVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___healthAndSafetyVersion;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_set_healthAndSafetyVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___healthAndSafetyVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_playerSensitivityFlagVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSensitivityFlagVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_playerSensitivityFlagVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSensitivityFlagVersion;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_set_playerSensitivityFlagVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSensitivityFlagVersion = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_endOfLifeVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endOfLifeVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_get_endOfLifeVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endOfLifeVersion;
}
constexpr void GlobalNamespace::PlayerSaveData_PlayerAgreementsData::__cordl_internal_set_endOfLifeVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endOfLifeVersion = value;
}
inline void GlobalNamespace::PlayerSaveData_PlayerAgreementsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_PlayerAgreementsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* GlobalNamespace::PlayerSaveData_PlayerAgreementsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_PlayerAgreementsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData::PlayerSaveData_PlayerAgreementsData() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData::PlayerSaveData_UserAgeCategorySaveData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData::PlayerSaveData_UserAgeCategorySaveData() {}
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData::Child{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData::Teen{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData::Adult{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData::PlayerSaveData_PlayerSensitivityFlagSaveData(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData::PlayerSaveData_PlayerSensitivityFlagSaveData() {}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData::Unknown{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData::Safe{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData::Themes{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData::Explicit{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData_LocalPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData_LocalPlayer::*)()>(&::GlobalNamespace::PlayerSaveData_LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x26f36ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_LocalPlayer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_playerId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_shouldShowTutorialPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShowTutorialPrompt;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_shouldShowTutorialPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShowTutorialPrompt;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_shouldShowTutorialPrompt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldShowTutorialPrompt = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_shouldShow360Warning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShow360Warning;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_shouldShow360Warning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShow360Warning;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_shouldShow360Warning(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldShow360Warning = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_agreedToEula() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToEula;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_agreedToEula() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToEula;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_agreedToEula(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agreedToEula = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_didSelectLanguage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLanguage;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_didSelectLanguage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectLanguage;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_didSelectLanguage(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectLanguage = value;
}
constexpr bool& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_agreedToMultiplayerDisclaimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToMultiplayerDisclaimer;
}
constexpr bool const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_agreedToMultiplayerDisclaimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___agreedToMultiplayerDisclaimer;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_agreedToMultiplayerDisclaimer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___agreedToMultiplayerDisclaimer = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_didSelectRegionVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRegionVersion;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_didSelectRegionVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRegionVersion;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_didSelectRegionVersion(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectRegionVersion = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_selectedAvatarSystemTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedAvatarSystemTypeId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_selectedAvatarSystemTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedAvatarSystemTypeId;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_selectedAvatarSystemTypeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedAvatarSystemTypeId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerAgreements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAgreements;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerAgreements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAgreements;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_playerAgreements(::GlobalNamespace::PlayerSaveData_PlayerAgreementsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAgreements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_lastSelectedBeatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_lastSelectedBeatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapDifficulty;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastSelectedBeatmapDifficulty = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_lastSelectedBeatmapCharacteristicName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapCharacteristicName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_lastSelectedBeatmapCharacteristicName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapCharacteristicName;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_lastSelectedBeatmapCharacteristicName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastSelectedBeatmapCharacteristicName)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_GameplayModifiers*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::PlayerSaveData_GameplayModifiers* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::PlayerSaveData_GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSaveData_PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PracticeSettings*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_practiceSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr ::GlobalNamespace::PlayerSaveData_PracticeSettings* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_practiceSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___practiceSettings;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_practiceSettings(::GlobalNamespace::PlayerSaveData_PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___practiceSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerAllOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAllOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_playerAllOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAllOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAllOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_levelsStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelsStatsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>* const&
GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_levelsStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelsStatsData;
}
constexpr void
GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerLevelStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelsStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_missionsStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionsStatsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>* const&
GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_missionsStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionsStatsData;
}
constexpr void
GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_PlayerMissionStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionsStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_showedMissionHelpIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showedMissionHelpIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_showedMissionHelpIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showedMissionHelpIds;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___showedMissionHelpIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_colorSchemesSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemesSettings;
}
constexpr ::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_colorSchemesSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorSchemesSettings;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_colorSchemesSettings(::GlobalNamespace::PlayerSaveData_ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colorSchemesSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_overrideEnvironmentSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironmentSettings;
}
constexpr ::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_overrideEnvironmentSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideEnvironmentSettings;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_overrideEnvironmentSettings(::GlobalNamespace::PlayerSaveData_OverrideEnvironmentSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideEnvironmentSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_favoritesLevelIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoritesLevelIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_favoritesLevelIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoritesLevelIds;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_favoritesLevelIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___favoritesLevelIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings*& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_multiplayerModeSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerModeSettings;
}
constexpr ::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_multiplayerModeSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerModeSettings;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_multiplayerModeSettings(::GlobalNamespace::PlayerSaveData_MultiplayerModeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___multiplayerModeSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_currentDlcPromoDisplayCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoDisplayCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_currentDlcPromoDisplayCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoDisplayCount;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_currentDlcPromoDisplayCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentDlcPromoDisplayCount = value;
}
constexpr ::StringW& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_currentDlcPromoId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_currentDlcPromoId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentDlcPromoId;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_currentDlcPromoId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentDlcPromoId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_userAgeCategory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userAgeCategory;
}
constexpr ::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_userAgeCategory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userAgeCategory;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_userAgeCategory(::GlobalNamespace::PlayerSaveData_UserAgeCategorySaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userAgeCategory = value;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_desiredSensitivityFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSensitivityFlag;
}
constexpr ::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData const& GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_get_desiredSensitivityFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSensitivityFlag;
}
constexpr void GlobalNamespace::PlayerSaveData_LocalPlayer::__cordl_internal_set_desiredSensitivityFlag(::GlobalNamespace::PlayerSaveData_PlayerSensitivityFlagSaveData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desiredSensitivityFlag = value;
}
inline void GlobalNamespace::PlayerSaveData_LocalPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData_LocalPlayer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData_LocalPlayer* GlobalNamespace::PlayerSaveData_LocalPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData_LocalPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData_LocalPlayer::PlayerSaveData_LocalPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveData::*)()>(&::GlobalNamespace::PlayerSaveData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x26f3658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>*& GlobalNamespace::PlayerSaveData::__cordl_internal_get_localPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>* const& GlobalNamespace::PlayerSaveData::__cordl_internal_get_localPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayers;
}
constexpr void GlobalNamespace::PlayerSaveData::__cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_LocalPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>*& GlobalNamespace::PlayerSaveData::__cordl_internal_get_guestPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>* const& GlobalNamespace::PlayerSaveData::__cordl_internal_get_guestPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayers;
}
constexpr void GlobalNamespace::PlayerSaveData::__cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveData_GuestPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___guestPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveData* GlobalNamespace::PlayerSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveData::PlayerSaveData() {}
