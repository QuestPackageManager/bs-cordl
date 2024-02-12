#pragma once
#include "BeatSaber/PerformancePresets/zzzz__ObstaclesQuality_impl.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "BeatSaber/PerformancePresets/zzzz__PerformancePreset_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQualitySO_def.hpp"
#include "GlobalNamespace/zzzz__StringSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector2IntSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode::__MainSettingsModelSO__WindowMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode::__MainSettingsModelSO__WindowMode() {}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode GlobalNamespace::__MainSettingsModelSO__WindowMode::Windowed{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode GlobalNamespace::__MainSettingsModelSO__WindowMode::Fullscreen{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)()>(
    &::GlobalNamespace::__MainSettingsModelSO__Config::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1291ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)(
    ::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>)>(&::GlobalNamespace::__MainSettingsModelSO__Config::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x12928f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config.ApplyPerformancePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)(
    ::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>)>(&::GlobalNamespace::__MainSettingsModelSO__Config::ApplyPerformancePreset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x12929e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), "ApplyPerformancePreset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_windowResolutionWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionWidth;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_windowResolutionWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionWidth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_windowResolutionWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowResolutionWidth = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_windowResolutionHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionHeight;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_windowResolutionHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionHeight;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_windowResolutionHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowResolutionHeight = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_editorResolutionWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionWidth;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_editorResolutionWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionWidth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_editorResolutionWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editorResolutionWidth = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_editorResolutionHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionHeight;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_editorResolutionHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionHeight;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_editorResolutionHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editorResolutionHeight = value;
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_windowMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowMode;
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_windowMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowMode;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_windowMode(::GlobalNamespace::__MainSettingsModelSO__WindowMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowMode = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_vrResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vrResolutionScale = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuVRResolutionScaleMultiplier = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_antiAliasingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antiAliasingLevel = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_mirrorGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_mirrorGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_mirrorGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorGraphicsSettings = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_mainEffectGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_mainEffectGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_mainEffectGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainEffectGraphicsSettings = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_bloomGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_bloomGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_bloomGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomGraphicsSettings = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smokeGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smokeGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smokeGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeGraphicsSettings = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_burnMarkTrailsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_burnMarkTrailsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_burnMarkTrailsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___burnMarkTrailsEnabled = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_screenDisplacementEffectsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_screenDisplacementEffectsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_screenDisplacementEffectsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenDisplacementEffectsEnabled = value;
}
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr ::BeatSaber::PerformancePresets::ObstaclesQuality const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_obstaclesQuality(::BeatSaber::PerformancePresets::ObstaclesQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesQuality = value;
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_performancePresetKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_performancePresetKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_performancePresetKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___performancePresetKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomCenterX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomCenterX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_roomCenterX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenterX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomCenterY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomCenterY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_roomCenterY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenterY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomCenterZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomCenterZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_roomCenterZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenterZ = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_roomRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomRotation = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerPositionX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerPositionX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllerPositionX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerPositionX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerPositionY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerPositionY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllerPositionY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerPositionY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerPositionZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerPositionZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllerPositionZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerPositionZ = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerRotationX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerRotationX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllerRotationX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerRotationX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerRotationY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerRotationY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllerRotationY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerRotationY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerRotationZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllerRotationZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllerRotationZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerRotationZ = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraEnabled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraEnabled = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraFieldOfView(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraFieldOfView = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonPositionX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonPositionX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonPositionX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonPositionX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonPositionY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonPositionY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonPositionY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonPositionY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonPositionZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonPositionZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonPositionZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonPositionZ = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEulerAnglesX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEulerAnglesX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonEulerAnglesX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEulerAnglesX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEulerAnglesY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEulerAnglesY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonEulerAnglesY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEulerAnglesY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEulerAnglesZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEulerAnglesZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonEulerAnglesZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEulerAnglesZ = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraThirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraThirdPersonEnabled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEnabled = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraRotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraRotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraRotationSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraRotationSmooth = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraPositionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_smoothCameraPositionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_smoothCameraPositionSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraPositionSmooth = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_useCustomServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_useCustomServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_useCustomServerEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCustomServerEnvironment = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_forceGameLiftServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_forceGameLiftServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_forceGameLiftServerEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceGameLiftServerEnvironment = value;
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_customServerHostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_customServerHostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_customServerHostName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customServerHostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_useFixedFoveatedRenderingDuringGameplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_useFixedFoveatedRenderingDuringGameplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_useFixedFoveatedRenderingDuringGameplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFixedFoveatedRenderingDuringGameplay = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_gpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_gpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_gpuLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuLevel = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_cpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_cpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_cpuLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cpuLevel = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_targetFramerate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetFramerate = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_ambientVolumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ambientVolumeScale = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllersRumbleEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_controllersRumbleEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_controllersRumbleEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllersRumbleEnabled = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableAlphaFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableAlphaFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_enableAlphaFeatures(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaFeatures = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_pauseButtonPressDurationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_pauseButtonPressDurationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_pauseButtonPressDurationLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pauseButtonPressDurationLevel = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_maxShockwaveParticles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxShockwaveParticles = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_overrideAudioLatency(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideAudioLatency = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_audioLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioLatency = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxNumberOfCutSoundEffects = value;
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableFPSCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableFPSCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_enableFPSCounter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFPSCounter = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableFPSRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableFPSRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_enableFPSRecorder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFPSRecorder = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableMemoryTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_get_enableMemoryTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__cordl_internal_set_enableMemoryTracker(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableMemoryTracker = value;
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config* GlobalNamespace::__MainSettingsModelSO__Config::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainSettingsModelSO__Config*>());
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config*
GlobalNamespace::__MainSettingsModelSO__Config::New_ctor(::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> performancePresetToLoad) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MainSettingsModelSO__Config*>(performancePresetToLoad));
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::_ctor(::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> performancePresetToLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, performancePresetToLoad);
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::ApplyPerformancePreset(::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> performancePresetToLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), "ApplyPerformancePreset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, performancePresetToLoad);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelSO__Config::__MainSettingsModelSO__Config() {}
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::*)()>(
    &::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::MoveNext)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x1293310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12934d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsModelSO>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "defaultPerformancePreset", ty: "::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::__MainSettingsModelSO___InitializeAsync_d__61(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainSettingsModelSO> __4__this,
    ::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> defaultPerformancePreset, ::GlobalNamespace::IFileStorage* fileStorage,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->defaultPerformancePreset = defaultPerformancePreset;
  this->fileStorage = fileStorage;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelSO___InitializeAsync_d__61::__MainSettingsModelSO___InitializeAsync_d__61() {}
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::*)()>(
    &::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::MoveNext)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x12934e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12937b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::MainSettingsModelSO>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "forced", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__MainSettingsModelSO__Config*>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::__MainSettingsModelSO___LoadAsync_d__67(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::MainSettingsModelSO> __4__this, bool forced,
    ::GlobalNamespace::IFileStorage* fileStorage, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__MainSettingsModelSO__Config*> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->forced = forced;
  this->fileStorage = fileStorage;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelSO___LoadAsync_d__67::__MainSettingsModelSO___LoadAsync_d__67() {}
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::*)()>(
    &::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x12937c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1293b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "config", ty: "::GlobalNamespace::__MainSettingsModelSO__Config*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::BeatSaber::PerformancePresets::PerformancePreset*>>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap1", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::__MainSettingsModelSO__Config* config,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> __u__1, ::StringW __7__wrap1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::PerformancePresets::PerformancePreset*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->config = config;
  this->__u__1 = __u__1;
  this->__7__wrap1 = __7__wrap1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71() {}
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.get_createScreenshotDuringTheGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)()>(
    &::GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1291704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "get_createScreenshotDuringTheGame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_createScreenshotDuringTheGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(
    &::GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x129170c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "set_createScreenshotDuringTheGame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.InitializeAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::IFileStorage*, ::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>)>(
    &::GlobalNamespace::MainSettingsModelSO::InitializeAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1291718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(
    ::GlobalNamespace::IFileStorage*, ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>)>(
    &::GlobalNamespace::MainSettingsModelSO::Initialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1291808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::IFileStorage*)>(
    &::GlobalNamespace::MainSettingsModelSO::SaveAsync)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1291994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::IFileStorage*)>(
    &::GlobalNamespace::MainSettingsModelSO::Save)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1291e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.GetSaveConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MainSettingsModelSO__Config* (::GlobalNamespace::MainSettingsModelSO::*)()>(
    &::GlobalNamespace::MainSettingsModelSO::GetSaveConfig)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x1291a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "GetSaveConfig",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::IFileStorage*, bool)>(
    &::GlobalNamespace::MainSettingsModelSO::Load)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x12918e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.LoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::IFileStorage*, bool)>(&::GlobalNamespace::MainSettingsModelSO::LoadAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1292810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "LoadAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.SetSaveConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::__MainSettingsModelSO__Config*)>(
    &::GlobalNamespace::MainSettingsModelSO::SetSaveConfig)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x1291f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "SetSaveConfig", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.ApplyPerformancePresetAsCustom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)(::BeatSaber::PerformancePresets::PerformancePreset*)>(
    &::GlobalNamespace::MainSettingsModelSO::ApplyPerformancePresetAsCustom)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x1292bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "ApplyPerformancePresetAsCustom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::PerformancePresets::PerformancePreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.GetDefaultAudioLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::GlobalNamespace::MainSettingsModelSO::*)()>(
    &::GlobalNamespace::MainSettingsModelSO::GetDefaultAudioLatency)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1292f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                               "GetDefaultAudioLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.ForceApplyPerformancePresetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::__MainSettingsModelSO__Config*)>(&::GlobalNamespace::MainSettingsModelSO::ForceApplyPerformancePresetAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x1293028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "ForceApplyPerformancePresetAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.__DeleteSettingsFilesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::IFileStorage*)>(
    &::GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFilesAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x12930f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "__DeleteSettingsFilesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12931b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_vrResolutionScale(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrResolutionScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_menuVRResolutionScaleMultiplier(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___menuVRResolutionScaleMultiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector2IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_windowResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolution;
}
constexpr ::UnityW<::GlobalNamespace::Vector2IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_windowResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolution;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_windowResolution(::UnityW<::GlobalNamespace::Vector2IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windowResolution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector2IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_editorWindowResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorWindowResolution;
}
constexpr ::UnityW<::GlobalNamespace::Vector2IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_editorWindowResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorWindowResolution;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_editorWindowResolution(::UnityW<::GlobalNamespace::Vector2IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___editorWindowResolution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_fullscreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullscreen;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_fullscreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullscreen;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_fullscreen(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullscreen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_antiAliasingLevel(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___antiAliasingLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_volume(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___volume)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_ambientVolumeScale(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ambientVolumeScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_controllersRumbleEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_controllersRumbleEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_controllersRumbleEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllersRumbleEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_roomCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenter;
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_roomCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenter;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_roomCenter(::UnityW<::GlobalNamespace::Vector3SO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_roomRotation(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_controllerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPosition;
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_controllerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPosition;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_controllerPosition(::UnityW<::GlobalNamespace::Vector3SO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllerPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_controllerRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotation;
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_controllerRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotation;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_controllerRotation(::UnityW<::GlobalNamespace::Vector3SO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllerRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_mirrorGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_mirrorGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_mirrorGraphicsSettings(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirrorGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_mainEffectGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_mainEffectGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_mainEffectGraphicsSettings(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainEffectGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_bloomPrePassGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassGraphicsSettings;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_bloomPrePassGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_bloomPrePassGraphicsSettings(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bloomPrePassGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smokeGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smokeGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smokeGraphicsSettings(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableAlphaFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableAlphaFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_enableAlphaFeatures(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableAlphaFeatures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_pauseButtonPressDurationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_pauseButtonPressDurationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_pauseButtonPressDurationLevel(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pauseButtonPressDurationLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_burnMarkTrailsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_burnMarkTrailsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_burnMarkTrailsEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___burnMarkTrailsEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_screenDisplacementEffectsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_screenDisplacementEffectsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_screenDisplacementEffectsEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screenDisplacementEffectsEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ObstaclesQualitySO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr ::UnityW<::GlobalNamespace::ObstaclesQualitySO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_obstaclesQuality(::UnityW<::GlobalNamespace::ObstaclesQualitySO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstaclesQuality)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StringSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_performancePresetKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr ::UnityW<::GlobalNamespace::StringSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_performancePresetKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_performancePresetKey(::UnityW<::GlobalNamespace::StringSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___performancePresetKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraFieldOfView(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraFieldOfView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraThirdPersonPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPosition;
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraThirdPersonPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPosition;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraThirdPersonPosition(::UnityW<::GlobalNamespace::Vector3SO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraThirdPersonPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraThirdPersonEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAngles;
}
constexpr ::UnityW<::GlobalNamespace::Vector3SO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraThirdPersonEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAngles;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraThirdPersonEulerAngles(::UnityW<::GlobalNamespace::Vector3SO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraThirdPersonEulerAngles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraThirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraThirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraThirdPersonEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraThirdPersonEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraRotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraRotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraRotationSmooth(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraRotationSmooth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraPositionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_smoothCameraPositionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_smoothCameraPositionSmooth(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraPositionSmooth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_overrideAudioLatency(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideAudioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_audioLatency(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_maxShockwaveParticles(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxShockwaveParticles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_maxNumberOfCutSoundEffects(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxNumberOfCutSoundEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::LanguageSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::UnityW<::GlobalNamespace::LanguageSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_language(::UnityW<::GlobalNamespace::LanguageSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_useCustomServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_useCustomServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_useCustomServerEnvironment(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useCustomServerEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_forceGameLiftServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_forceGameLiftServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_forceGameLiftServerEnvironment(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forceGameLiftServerEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StringSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_customServerHostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr ::UnityW<::GlobalNamespace::StringSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_customServerHostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_customServerHostName(::UnityW<::GlobalNamespace::StringSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customServerHostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableFPSCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableFPSCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_enableFPSCounter(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableFPSCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableFPSRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableFPSRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_enableFPSRecorder(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableFPSRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableMemoryTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_enableMemoryTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_enableMemoryTracker(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableMemoryTracker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_useFixedFoveatedRenderingDuringGameplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_useFixedFoveatedRenderingDuringGameplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_useFixedFoveatedRenderingDuringGameplay(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useFixedFoveatedRenderingDuringGameplay)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_gpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_gpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_gpuLevel(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gpuLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::IntSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_cpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr ::UnityW<::GlobalNamespace::IntSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_cpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_cpuLevel(::UnityW<::GlobalNamespace::IntSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cpuLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FloatSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr ::UnityW<::GlobalNamespace::FloatSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_targetFramerate(::UnityW<::GlobalNamespace::FloatSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetFramerate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_depthTextureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTextureEnabled;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get_depthTextureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTextureEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set_depthTextureEnabled(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___depthTextureEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get__createScreenshotDuringTheGame_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createScreenshotDuringTheGame_k__BackingField;
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get__createScreenshotDuringTheGame_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createScreenshotDuringTheGame_k__BackingField;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set__createScreenshotDuringTheGame_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createScreenshotDuringTheGame_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get__isLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLoaded;
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__cordl_internal_get__isLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLoaded;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set__isLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLoaded = value;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>&
GlobalNamespace::MainSettingsModelSO::__cordl_internal_get__defaultPerformancePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPerformancePreset;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> const&
GlobalNamespace::MainSettingsModelSO::__cordl_internal_get__defaultPerformancePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPerformancePreset;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__cordl_internal_set__defaultPerformancePreset(
    ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPerformancePreset = value;
}
inline void GlobalNamespace::MainSettingsModelSO::setStaticF_bestGraphicsPreset(::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> value) {
  ::cordl_internals::setStaticField<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>, "bestGraphicsPreset",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get>(
      std::forward<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>(value));
}
inline ::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> GlobalNamespace::MainSettingsModelSO::getStaticF_bestGraphicsPreset() {
  return ::cordl_internals::getStaticField<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>, "bestGraphicsPreset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get>();
}
inline bool GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "get_createScreenshotDuringTheGame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "set_createScreenshotDuringTheGame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task*
GlobalNamespace::MainSettingsModelSO::InitializeAsync(::GlobalNamespace::IFileStorage* fileStorage,
                                                      ::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*> defaultPerformancePreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "InitializeAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileStorage, defaultPerformancePreset);
}
inline void GlobalNamespace::MainSettingsModelSO::Initialize(::GlobalNamespace::IFileStorage* fileStorage,
                                                             ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>> defaultPerformancePreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::ValueTuple_2<::StringW, ::BeatSaber::PerformancePresets::PerformancePreset*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage, defaultPerformancePreset);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsModelSO::SaveAsync(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileStorage);
}
inline void GlobalNamespace::MainSettingsModelSO::Save(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Save", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage);
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config* GlobalNamespace::MainSettingsModelSO::GetSaveConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "GetSaveConfig",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MainSettingsModelSO__Config*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsModelSO::Load(::GlobalNamespace::IFileStorage* fileStorage, bool forced) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Load", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileStorage, forced);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsModelSO::LoadAsync(::GlobalNamespace::IFileStorage* fileStorage, bool forced) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "LoadAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileStorage, forced);
}
inline void GlobalNamespace::MainSettingsModelSO::SetSaveConfig(::GlobalNamespace::__MainSettingsModelSO__Config* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "SetSaveConfig", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
inline bool GlobalNamespace::MainSettingsModelSO::ApplyPerformancePresetAsCustom(::BeatSaber::PerformancePresets::PerformancePreset* preset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "ApplyPerformancePresetAsCustom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::PerformancePresets::PerformancePreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, preset);
}
inline double_t GlobalNamespace::MainSettingsModelSO::GetDefaultAudioLatency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                             "GetDefaultAudioLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsModelSO::ForceApplyPerformancePresetAsync(::GlobalNamespace::__MainSettingsModelSO__Config* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "ForceApplyPerformancePresetAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, config);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFilesAsync(::GlobalNamespace::IFileStorage* fileStorage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "__DeleteSettingsFilesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileStorage);
}
inline ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::MainSettingsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MainSettingsModelSO*>());
}
inline void GlobalNamespace::MainSettingsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsModelSO::MainSettingsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
