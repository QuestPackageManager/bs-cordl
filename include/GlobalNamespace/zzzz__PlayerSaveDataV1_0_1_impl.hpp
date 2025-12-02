#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__RankModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType() {}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType::FullHeightOnly{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType::None{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType() {}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType::Bar{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType::Battery{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed() {}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed::Faster{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed::Slower{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b1e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_energyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energyType;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_energyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___energyType;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_energyType(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___energyType = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_noFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFail;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_noFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noFail;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_noFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noFail = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instaFail;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___instaFail;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_instaFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___instaFail = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_failOnSaberClash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOnSaberClash;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_failOnSaberClash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failOnSaberClash;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_failOnSaberClash(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failOnSaberClash = value;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_enabledObstacleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstacleType;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType const&
GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_enabledObstacleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabledObstacleType;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_enabledObstacleType(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_EnabledObstacleType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabledObstacleType = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_fastNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fastNotes;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_fastNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fastNotes;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_fastNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fastNotes = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_strictAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strictAngles;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_strictAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strictAngles;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_strictAngles(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strictAngles = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_disappearingArrows() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_disappearingArrows() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disappearingArrows;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_disappearingArrows(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disappearingArrows = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_noBombs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_noBombs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noBombs;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_noBombs(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noBombs = value;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_songSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeed;
}
constexpr ::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed const& GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_get_songSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSpeed;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::__cordl_internal_set_songSpeed(::GlobalNamespace::GameplayModifiers_PlayerSaveDataV1_0_1_SongSpeed value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songSpeed = value;
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers::PlayerSaveDataV1_0_1_GameplayModifiers() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_staticLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staticLights;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_staticLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___staticLights;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_staticLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___staticLights = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHanded = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_swapColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swapColors;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_swapColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___swapColors;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_swapColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___swapColors = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_playerHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr float_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_playerHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerHeight;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_playerHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerHeight = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_disableSFX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableSFX;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_disableSFX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disableSFX;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_disableSFX(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disableSFX = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_reduceDebris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduceDebris;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_reduceDebris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___reduceDebris;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_reduceDebris(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___reduceDebris = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_advancedHud() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHud;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_advancedHud() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___advancedHud;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_advancedHud(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___advancedHud = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_noTextsAndHuds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noTextsAndHuds;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_get_noTextsAndHuds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noTextsAndHuds;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::__cordl_internal_set_noTextsAndHuds(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noTextsAndHuds = value;
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings::PlayerSaveDataV1_0_1_PlayerSpecificSettings() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x362b1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::*)(
    ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*, ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*, ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x362b264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_get_campaignOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___campaignOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* const&
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_get_campaignOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___campaignOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_set_campaignOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___campaignOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_get_soloFreePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soloFreePlayOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* const&
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_get_soloFreePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___soloFreePlayOverallStatsData;
}
constexpr void
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_set_soloFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___soloFreePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_get_partyFreePlayOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyFreePlayOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* const&
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_get_partyFreePlayOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___partyFreePlayOverallStatsData;
}
constexpr void
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::__cordl_internal_set_partyFreePlayOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___partyFreePlayOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::_ctor(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* campaignOverallStatsData,
                                                                                   ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                                   ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* partyFreePlayOverallStatsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>());
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::New_ctor(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* campaignOverallStatsData,
                                                                          ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                                          ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* partyFreePlayOverallStatsData) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::*)(
    int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x362b270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_goodCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_goodCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___goodCutsCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_goodCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___goodCutsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_badCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_badCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___badCutsCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_badCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___badCutsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_missedCutsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_missedCutsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missedCutsCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_missedCutsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missedCutsCount = value;
}
constexpr int64_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_totalScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalScore;
}
constexpr int64_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_totalScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalScore;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_totalScore(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_playedLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playedLevelsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_playedLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playedLevelsCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_playedLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playedLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_cleardLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleardLevelsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_cleardLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleardLevelsCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_cleardLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cleardLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_failedLevelsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedLevelsCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_failedLevelsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___failedLevelsCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_failedLevelsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___failedLevelsCount = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_fullComboCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullComboCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_fullComboCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullComboCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_fullComboCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullComboCount = value;
}
constexpr float_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_timePlayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePlayed;
}
constexpr float_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_timePlayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timePlayed;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_timePlayed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timePlayed = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_handDistanceTravelled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handDistanceTravelled;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_handDistanceTravelled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___handDistanceTravelled;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_handDistanceTravelled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___handDistanceTravelled = value;
}
constexpr int64_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_cummulativeCutScoreWithoutMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cummulativeCutScoreWithoutMultiplier;
}
constexpr int64_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_get_cummulativeCutScoreWithoutMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cummulativeCutScoreWithoutMultiplier;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::__cordl_internal_set_cummulativeCutScoreWithoutMultiplier(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cummulativeCutScoreWithoutMultiplier = value;
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                                int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed,
                                                                                int32_t handDistanceTravelled, int64_t cummulativeCutScoreWithoutMultiplier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, cleardLevelsCount, failedLevelsCount,
                                                          fullComboCount, timePlayed, handDistanceTravelled, cummulativeCutScoreWithoutMultiplier);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>());
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*
GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                       int32_t cleardLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed, int32_t handDistanceTravelled,
                                                                       int64_t cummulativeCutScoreWithoutMultiplier) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>(goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount,
                                                                                                                   cleardLevelsCount, failedLevelsCount, fullComboCount, timePlayed,
                                                                                                                   handDistanceTravelled, cummulativeCutScoreWithoutMultiplier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData::PlayerSaveDataV1_0_1_PlayerOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_levelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_levelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelId;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_levelId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficulty;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficulty = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_highScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highScore;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_highScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___highScore;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_highScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___highScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_maxCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_maxCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxCombo;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_maxCombo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxCombo = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullCombo;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullCombo = value;
}
constexpr ::GlobalNamespace::RankModel_Rank& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_maxRank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRank;
}
constexpr ::GlobalNamespace::RankModel_Rank const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_maxRank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxRank;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_maxRank(::GlobalNamespace::RankModel_Rank value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxRank = value;
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_validScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validScore;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_validScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validScore;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_validScore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validScore = value;
}
constexpr int32_t& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_playCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playCount;
}
constexpr int32_t const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_get_playCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playCount;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::__cordl_internal_set_playCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playCount = value;
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData* GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData::PlayerSaveDataV1_0_1_PlayerLevelStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::__cordl_internal_get_missionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::__cordl_internal_get_missionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionId;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::__cordl_internal_set_missionId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::__cordl_internal_get_cleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleared;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::__cordl_internal_get_cleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cleared;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::__cordl_internal_set_cleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cleared = value;
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData* GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData::PlayerSaveDataV1_0_1_PlayerMissionStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::__cordl_internal_get_unlockedAchievements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unlockedAchievements;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::__cordl_internal_get_unlockedAchievements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unlockedAchievements;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::__cordl_internal_set_unlockedAchievements(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unlockedAchievements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::__cordl_internal_get_unlockedAchievementsToUpload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unlockedAchievementsToUpload;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::__cordl_internal_get_unlockedAchievementsToUpload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unlockedAchievementsToUpload;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::__cordl_internal_set_unlockedAchievementsToUpload(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unlockedAchievementsToUpload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData::PlayerSaveDataV1_0_1_AchievementsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x362b2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerId;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_playerId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_shouldShowTutorialPrompt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShowTutorialPrompt;
}
constexpr bool const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_shouldShowTutorialPrompt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___shouldShowTutorialPrompt;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_shouldShowTutorialPrompt(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___shouldShowTutorialPrompt = value;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers*& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::PlayerSaveDataV1_0_1_GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerAllOverallStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAllOverallStatsData;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_playerAllOverallStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAllOverallStatsData;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_playerAllOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAllOverallStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>*&
GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_levelsStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelsStatsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>* const&
GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_levelsStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelsStatsData;
}
constexpr void
GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_levelsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerLevelStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelsStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>*&
GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_missionsStatsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionsStatsData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>* const&
GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_missionsStatsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionsStatsData;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_missionsStatsData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerMissionStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___missionsStatsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_showedMissionHelpIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showedMissionHelpIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_showedMissionHelpIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showedMissionHelpIds;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___showedMissionHelpIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData*& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_achievementsData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementsData;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* const& GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_get_achievementsData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementsData;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::__cordl_internal_set_achievementsData(::GlobalNamespace::PlayerSaveDataV1_0_1_AchievementsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___achievementsData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer* GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer::PlayerSaveDataV1_0_1_LocalPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::*)()>(
    &::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x362b2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::__cordl_internal_get_playerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::__cordl_internal_get_playerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerName;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::__cordl_internal_set_playerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings*& GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* const& GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer* GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer::PlayerSaveDataV1_0_1_GuestPlayer() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataV1_0_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSaveDataV1_0_1::*)()>(&::GlobalNamespace::PlayerSaveDataV1_0_1::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x362b1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>*& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_localPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>* const& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_localPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localPlayers;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_set_localPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_LocalPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>*& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_guestPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>* const& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_guestPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___guestPlayers;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_set_guestPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerSaveDataV1_0_1_GuestPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___guestPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_lastSelectedBeatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_get_lastSelectedBeatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSelectedBeatmapDifficulty;
}
constexpr void GlobalNamespace::PlayerSaveDataV1_0_1::__cordl_internal_set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastSelectedBeatmapDifficulty = value;
}
inline void GlobalNamespace::PlayerSaveDataV1_0_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSaveDataV1_0_1*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSaveDataV1_0_1* GlobalNamespace::PlayerSaveDataV1_0_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSaveDataV1_0_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSaveDataV1_0_1() {}
constexpr ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::PlayerSaveDataV1_0_1::kDefaulLastSelectedBeatmapDifficulty{ static_cast<int32_t>(0x1) };
