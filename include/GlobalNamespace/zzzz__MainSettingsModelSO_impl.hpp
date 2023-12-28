#pragma once
#include "GlobalNamespace/zzzz__MainSettingsModelSO_impl.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQuality_impl.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__ObstaclesQualitySO_def.hpp"
#include "GlobalNamespace/zzzz__StringSO_def.hpp"
#include "GlobalNamespace/zzzz__IntSO_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
#include "GlobalNamespace/zzzz__MainSettingsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector3SO_def.hpp"
#include "GlobalNamespace/zzzz__LanguageSO_def.hpp"
#include "GlobalNamespace/zzzz__Vector2IntSO_def.hpp"
#include "GlobalNamespace/zzzz__PerformancePreset_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "GlobalNamespace/zzzz__FloatSO_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
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
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x234f6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)(
    ::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>)>(&::GlobalNamespace::__MainSettingsModelSO__Config::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x234f7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO__Config.ApplyPerformancePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO__Config::*)(
    ::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>)>(&::GlobalNamespace::__MainSettingsModelSO__Config::ApplyPerformancePreset)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x234f8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), "ApplyPerformancePreset", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionWidth;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionWidth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_windowResolutionWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowResolutionWidth = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionHeight;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowResolutionHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolutionHeight;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_windowResolutionHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowResolutionHeight = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionWidth;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionWidth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_editorResolutionWidth(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editorResolutionWidth = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionHeight;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_editorResolutionHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorResolutionHeight;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_editorResolutionHeight(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editorResolutionHeight = value;
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowMode;
}
constexpr ::GlobalNamespace::__MainSettingsModelSO__WindowMode const& GlobalNamespace::__MainSettingsModelSO__Config::__get_windowMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowMode;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_windowMode(::GlobalNamespace::__MainSettingsModelSO__WindowMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowMode = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_vrResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vrResolutionScale = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_menuVRResolutionScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuVRResolutionScaleMultiplier = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_antiAliasingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antiAliasingLevel = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_mirrorGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_mirrorGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_mirrorGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorGraphicsSettings = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_mainEffectGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_mainEffectGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_mainEffectGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainEffectGraphicsSettings = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_bloomGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_bloomGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_bloomGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomGraphicsSettings = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smokeGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smokeGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smokeGraphicsSettings(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeGraphicsSettings = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_burnMarkTrailsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_burnMarkTrailsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_burnMarkTrailsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___burnMarkTrailsEnabled = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_screenDisplacementEffectsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_screenDisplacementEffectsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_screenDisplacementEffectsEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenDisplacementEffectsEnabled = value;
}
constexpr ::GlobalNamespace::ObstaclesQuality& GlobalNamespace::__MainSettingsModelSO__Config::__get_obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr ::GlobalNamespace::ObstaclesQuality const& GlobalNamespace::__MainSettingsModelSO__Config::__get_obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_obstaclesQuality(::GlobalNamespace::ObstaclesQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesQuality = value;
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_performancePresetKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_performancePresetKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_performancePresetKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___performancePresetKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomCenterX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenterX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomCenterY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenterY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomCenterZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenterZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomCenterZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenterZ = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_roomRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomRotation = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerPositionX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerPositionX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerPositionY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerPositionY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerPositionZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPositionZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerPositionZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerPositionZ = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerRotationX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerRotationX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerRotationY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerRotationY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllerRotationZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotationZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllerRotationZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllerRotationZ = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraEnabled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraEnabled = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraFieldOfView(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraFieldOfView = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonPositionX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonPositionY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonPositionZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPositionZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonPositionZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonPositionZ = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesX;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesX;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEulerAnglesX = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesY;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesY;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEulerAnglesY = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesZ;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEulerAnglesZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAnglesZ;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEulerAnglesZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEulerAnglesZ = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraThirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraThirdPersonEnabled(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraThirdPersonEnabled = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraRotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraRotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraRotationSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraRotationSmooth = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraPositionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_smoothCameraPositionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_smoothCameraPositionSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smoothCameraPositionSmooth = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_useCustomServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_useCustomServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_useCustomServerEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCustomServerEnvironment = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_forceGameLiftServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_forceGameLiftServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_forceGameLiftServerEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceGameLiftServerEnvironment = value;
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_customServerHostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_customServerHostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_customServerHostName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customServerHostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_useFixedFoveatedRenderingDuringGameplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_useFixedFoveatedRenderingDuringGameplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_useFixedFoveatedRenderingDuringGameplay(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useFixedFoveatedRenderingDuringGameplay = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_gpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_gpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_gpuLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gpuLevel = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_cpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_cpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_cpuLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cpuLevel = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_targetFramerate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetFramerate = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_ambientVolumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ambientVolumeScale = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllersRumbleEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_controllersRumbleEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_controllersRumbleEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___controllersRumbleEnabled = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableAlphaFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableAlphaFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableAlphaFeatures(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableAlphaFeatures = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_pauseButtonPressDurationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_pauseButtonPressDurationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_pauseButtonPressDurationLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pauseButtonPressDurationLevel = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_maxShockwaveParticles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxShockwaveParticles = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_overrideAudioLatency(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideAudioLatency = value;
}
constexpr float_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr float_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_audioLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioLatency = value;
}
constexpr int32_t& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr int32_t const& GlobalNamespace::__MainSettingsModelSO__Config::__get_maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_maxNumberOfCutSoundEffects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxNumberOfCutSoundEffects = value;
}
constexpr ::StringW& GlobalNamespace::__MainSettingsModelSO__Config::__get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& GlobalNamespace::__MainSettingsModelSO__Config::__get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableFPSCounter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFPSCounter = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableFPSRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableFPSRecorder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFPSRecorder = value;
}
constexpr bool& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableMemoryTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr bool const& GlobalNamespace::__MainSettingsModelSO__Config::__get_enableMemoryTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr void GlobalNamespace::__MainSettingsModelSO__Config::__set_enableMemoryTracker(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableMemoryTracker = value;
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config* GlobalNamespace::__MainSettingsModelSO__Config::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainSettingsModelSO__Config*>());
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MainSettingsModelSO__Config*
GlobalNamespace::__MainSettingsModelSO__Config::New_ctor(::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*> performancePresetToLoad) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MainSettingsModelSO__Config*>(performancePresetToLoad));
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::_ctor(::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*> performancePresetToLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, performancePresetToLoad);
}
inline void GlobalNamespace::__MainSettingsModelSO__Config::ApplyPerformancePreset(::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*> performancePresetToLoad) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO__Config*>::get(), "ApplyPerformancePreset", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, performancePresetToLoad);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainSettingsModelSO__Config::__MainSettingsModelSO__Config() {}
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::*)()>(
    &::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x234fe44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2350378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "config", ty: "::GlobalNamespace::__MainSettingsModelSO__Config*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW,::GlobalNamespace::PerformancePreset*>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71::__MainSettingsModelSO___ForceApplyPerformancePresetAsync_d__71(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::__MainSettingsModelSO__Config* config,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> __u__1, ::StringW __7__wrap1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PerformancePreset*> __u__2) noexcept {
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
  constexpr static std::size_t addrs = 0x234e734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                               "get_createScreenshotDuringTheGame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_createScreenshotDuringTheGame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(
    &::GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x234e73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "set_createScreenshotDuringTheGame",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.get_playingForTheFirstTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MainSettingsModelSO::*)()>(
    &::GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234e748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                               "get_playingForTheFirstTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.set_playingForTheFirstTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(bool)>(
    &::GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x234e750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "set_playingForTheFirstTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(
    ::GlobalNamespace::ISaveData*, ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>)>(&::GlobalNamespace::MainSettingsModelSO::Initialize)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x234e75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Initialize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Save
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData*)>(
    &::GlobalNamespace::MainSettingsModelSO::Save)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x234f1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Save", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.Load
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::ISaveData*, bool)>(
    &::GlobalNamespace::MainSettingsModelSO::Load)> {
  constexpr static std::size_t size = 0x894;
  constexpr static std::size_t addrs = 0x234e938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Load", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.ForceApplyPerformancePresetAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::MainSettingsModelSO::*)(::GlobalNamespace::__MainSettingsModelSO__Config*)>(&::GlobalNamespace::MainSettingsModelSO::ForceApplyPerformancePresetAsync)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x234fa68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "ForceApplyPerformancePresetAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO.__DeleteSettingsFiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x234fb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                               "__DeleteSettingsFiles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainSettingsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainSettingsModelSO::*)()>(&::GlobalNamespace::MainSettingsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234fc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_vrResolutionScale(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___vrResolutionScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_menuVRResolutionScaleMultiplier(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___menuVRResolutionScaleMultiplier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector2IntSO*& GlobalNamespace::MainSettingsModelSO::__get_windowResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolution;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_windowResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolution;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_windowResolution(::GlobalNamespace::Vector2IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___windowResolution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector2IntSO*& GlobalNamespace::MainSettingsModelSO::__get_editorWindowResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorWindowResolution;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector2IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_editorWindowResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editorWindowResolution;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_editorWindowResolution(::GlobalNamespace::Vector2IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___editorWindowResolution)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_fullscreen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullscreen;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_fullscreen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullscreen;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_fullscreen(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullscreen)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_antiAliasingLevel(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___antiAliasingLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_volume(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___volume)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_ambientVolumeScale(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ambientVolumeScale)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_controllersRumbleEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_controllersRumbleEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllersRumbleEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_controllersRumbleEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllersRumbleEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::MainSettingsModelSO::__get_roomCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::MainSettingsModelSO::__get_roomCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenter;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_roomCenter(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_roomRotation(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::MainSettingsModelSO::__get_controllerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPosition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::MainSettingsModelSO::__get_controllerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerPosition;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_controllerPosition(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllerPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::MainSettingsModelSO::__get_controllerRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotation;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::MainSettingsModelSO::__get_controllerRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerRotation;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_controllerRotation(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllerRotation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_mirrorGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_mirrorGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_mirrorGraphicsSettings(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mirrorGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_mainEffectGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_mainEffectGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_mainEffectGraphicsSettings(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainEffectGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_bloomPrePassGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassGraphicsSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_bloomPrePassGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_bloomPrePassGraphicsSettings(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___bloomPrePassGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_smokeGraphicsSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_smokeGraphicsSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphicsSettings;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smokeGraphicsSettings(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smokeGraphicsSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_enableAlphaFeatures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_enableAlphaFeatures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableAlphaFeatures;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableAlphaFeatures(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableAlphaFeatures)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_pauseButtonPressDurationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_pauseButtonPressDurationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_pauseButtonPressDurationLevel(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pauseButtonPressDurationLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_burnMarkTrailsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_burnMarkTrailsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrailsEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_burnMarkTrailsEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___burnMarkTrailsEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_screenDisplacementEffectsEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_screenDisplacementEffectsEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffectsEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_screenDisplacementEffectsEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___screenDisplacementEffectsEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ObstaclesQualitySO*& GlobalNamespace::MainSettingsModelSO::__get_obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> const& GlobalNamespace::MainSettingsModelSO::__get_obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstaclesQuality)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StringSO*& GlobalNamespace::MainSettingsModelSO::__get_performancePresetKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> const& GlobalNamespace::MainSettingsModelSO::__get_performancePresetKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_performancePresetKey(::GlobalNamespace::StringSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___performancePresetKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraFieldOfView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraFieldOfView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraFieldOfView;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraFieldOfView(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraFieldOfView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPosition;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonPosition;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonPosition(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraThirdPersonPosition)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::Vector3SO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAngles;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Vector3SO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEulerAngles;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonEulerAngles(::GlobalNamespace::Vector3SO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraThirdPersonEulerAngles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraThirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraThirdPersonEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraThirdPersonEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraThirdPersonEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraRotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraRotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraRotationSmooth;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraRotationSmooth(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraRotationSmooth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraPositionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_smoothCameraPositionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraPositionSmooth;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_smoothCameraPositionSmooth(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraPositionSmooth)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_overrideAudioLatency(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___overrideAudioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_audioLatency(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioLatency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_maxShockwaveParticles(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxShockwaveParticles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_maxNumberOfCutSoundEffects(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___maxNumberOfCutSoundEffects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LanguageSO*& GlobalNamespace::MainSettingsModelSO::__get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSO*> const& GlobalNamespace::MainSettingsModelSO::__get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_language(::GlobalNamespace::LanguageSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_useCustomServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_useCustomServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_useCustomServerEnvironment(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useCustomServerEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_forceGameLiftServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_forceGameLiftServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_forceGameLiftServerEnvironment(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___forceGameLiftServerEnvironment)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StringSO*& GlobalNamespace::MainSettingsModelSO::__get_customServerHostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StringSO*> const& GlobalNamespace::MainSettingsModelSO::__get_customServerHostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_customServerHostName(::GlobalNamespace::StringSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customServerHostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_enableFPSCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_enableFPSCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSCounter;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableFPSCounter(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableFPSCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_enableFPSRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_enableFPSRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFPSRecorder;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableFPSRecorder(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableFPSRecorder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_enableMemoryTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_enableMemoryTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_enableMemoryTracker(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enableMemoryTracker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_useFixedFoveatedRenderingDuringGameplay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_useFixedFoveatedRenderingDuringGameplay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useFixedFoveatedRenderingDuringGameplay;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_useFixedFoveatedRenderingDuringGameplay(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___useFixedFoveatedRenderingDuringGameplay)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_gpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_gpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gpuLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_gpuLevel(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gpuLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IntSO*& GlobalNamespace::MainSettingsModelSO::__get_cpuLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IntSO*> const& GlobalNamespace::MainSettingsModelSO::__get_cpuLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cpuLevel;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_cpuLevel(::GlobalNamespace::IntSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cpuLevel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FloatSO*& GlobalNamespace::MainSettingsModelSO::__get_targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& GlobalNamespace::MainSettingsModelSO::__get_targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_targetFramerate(::GlobalNamespace::FloatSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetFramerate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::MainSettingsModelSO::__get_depthTextureEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTextureEnabled;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::MainSettingsModelSO::__get_depthTextureEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTextureEnabled;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set_depthTextureEnabled(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___depthTextureEnabled)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__createScreenshotDuringTheGame_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createScreenshotDuringTheGame_k__BackingField;
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__createScreenshotDuringTheGame_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createScreenshotDuringTheGame_k__BackingField;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__createScreenshotDuringTheGame_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createScreenshotDuringTheGame_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingForTheFirstTime_k__BackingField;
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingForTheFirstTime_k__BackingField;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__playingForTheFirstTime_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playingForTheFirstTime_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTimeChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingForTheFirstTimeChecked;
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__playingForTheFirstTimeChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playingForTheFirstTimeChecked;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__playingForTheFirstTimeChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playingForTheFirstTimeChecked = value;
}
constexpr bool& GlobalNamespace::MainSettingsModelSO::__get__isLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLoaded;
}
constexpr bool const& GlobalNamespace::MainSettingsModelSO::__get__isLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLoaded;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__isLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLoaded = value;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>& GlobalNamespace::MainSettingsModelSO::__get__defaultPerformancePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPerformancePreset;
}
constexpr ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> const& GlobalNamespace::MainSettingsModelSO::__get__defaultPerformancePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultPerformancePreset;
}
constexpr void GlobalNamespace::MainSettingsModelSO::__set__defaultPerformancePreset(::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultPerformancePreset = value;
}
inline void GlobalNamespace::MainSettingsModelSO::setStaticF_bestGraphicsPreset(::GlobalNamespace::PerformancePreset* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PerformancePreset*, "bestGraphicsPreset", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get>(
      std::forward<::GlobalNamespace::PerformancePreset*>(value));
}
inline ::GlobalNamespace::PerformancePreset* GlobalNamespace::MainSettingsModelSO::getStaticF_bestGraphicsPreset() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PerformancePreset*, "bestGraphicsPreset",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get>();
}
inline bool GlobalNamespace::MainSettingsModelSO::get_createScreenshotDuringTheGame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                             "get_createScreenshotDuringTheGame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsModelSO::set_createScreenshotDuringTheGame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "set_createScreenshotDuringTheGame",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MainSettingsModelSO::get_playingForTheFirstTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                             "get_playingForTheFirstTime", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainSettingsModelSO::set_playingForTheFirstTime(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "set_playingForTheFirstTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MainSettingsModelSO::Initialize(::GlobalNamespace::ISaveData* saveData,
                                                             ::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>> defaultPerformancePreset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::System::ValueTuple_2<::StringW, ::GlobalNamespace::PerformancePreset*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData, defaultPerformancePreset);
}
inline void GlobalNamespace::MainSettingsModelSO::Save(::GlobalNamespace::ISaveData* saveData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Save", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData);
}
inline void GlobalNamespace::MainSettingsModelSO::Load(::GlobalNamespace::ISaveData* saveData, bool forced) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "Load", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaveData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, saveData, forced);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::MainSettingsModelSO::ForceApplyPerformancePresetAsync(::GlobalNamespace::__MainSettingsModelSO__Config* config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), "ForceApplyPerformancePresetAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MainSettingsModelSO__Config*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, config);
}
inline void GlobalNamespace::MainSettingsModelSO::__DeleteSettingsFiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(),
                                                                             "__DeleteSettingsFiles", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MainSettingsModelSO* GlobalNamespace::MainSettingsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainSettingsModelSO*>());
}
inline void GlobalNamespace::MainSettingsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainSettingsModelSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainSettingsModelSO::MainSettingsModelSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
