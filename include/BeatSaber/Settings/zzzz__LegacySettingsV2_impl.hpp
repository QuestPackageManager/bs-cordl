#pragma once
// IWYU pragma private; include "BeatSaber/Settings/LegacySettingsV2.hpp"
#include "BeatSaber/Settings/zzzz__LegacySettingsV2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__float3_impl.hpp"
#include "Unity/Mathematics/zzzz__int2_impl.hpp"
#include "BeatSaber/Settings/zzzz__LegacySettingsV2_def.hpp"
#include "BeatSaber/Settings/zzzz__LegacySettingsV2_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__MainSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__MainSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__MainSettings::_ctor)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2248e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__MainSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_audioSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*> const&
BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_audioSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioSettings;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_audioSettings(::BeatSaber::Settings::__LegacySettingsV2__AudioSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___audioSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_smoothCameraSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*> const&
BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_smoothCameraSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smoothCameraSettings;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_smoothCameraSettings(::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___smoothCameraSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_controllerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*> const&
BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_controllerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___controllerSettings;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_controllerSettings(::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___controllerSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_customServerSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*> const&
BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_customServerSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerSettings;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_customServerSettings(::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customServerSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_debugSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*> const&
BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_debugSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___debugSettings;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_debugSettings(::BeatSaber::Settings::__LegacySettingsV2__DebugSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___debugSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_language() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr ::StringW const& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_language() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___language;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_language(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___language)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_pauseButtonPressDurationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr int32_t const& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_pauseButtonPressDurationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pauseButtonPressDurationLevel;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_pauseButtonPressDurationLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pauseButtonPressDurationLevel = value;
}
constexpr ::Unity::Mathematics::float3& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_roomCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenter;
}
constexpr ::Unity::Mathematics::float3 const& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_roomCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomCenter;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_roomCenter(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomCenter = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_roomRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_roomRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomRotation;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_roomRotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___roomRotation = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_hapticFeedback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedback;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_hapticFeedback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hapticFeedback;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_hapticFeedback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hapticFeedback = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_createScreenshotDuringTheGame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createScreenshotDuringTheGame;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_get_createScreenshotDuringTheGame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createScreenshotDuringTheGame;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__MainSettings::__cordl_internal_set_createScreenshotDuringTheGame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createScreenshotDuringTheGame = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__MainSettings* BeatSaber::Settings::__LegacySettingsV2__MainSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__MainSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__MainSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__MainSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainSettings::__LegacySettingsV2__MainSettings() {}
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__AudioSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__AudioSettings::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2249024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_ambientVolumeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_ambientVolumeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ambientVolumeScale;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_set_ambientVolumeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ambientVolumeScale = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_overrideAudioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_overrideAudioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrideAudioLatency;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_set_overrideAudioLatency(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrideAudioLatency = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_audioLatency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_get_audioLatency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioLatency;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__cordl_internal_set_audioLatency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioLatency = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings* BeatSaber::Settings::__LegacySettingsV2__AudioSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__AudioSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__AudioSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__AudioSettings::__LegacySettingsV2__AudioSettings() {}
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2249038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_enabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_enabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enabled;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_enabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enabled = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_fov() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fov;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_fov() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fov;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_fov(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fov = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_rotationSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationSmooth;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_rotationSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationSmooth;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_rotationSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationSmooth = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_positionSmooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionSmooth;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_positionSmooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionSmooth;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_positionSmooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionSmooth = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_thirdPersonEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonEnabled;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_thirdPersonEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonEnabled;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_thirdPersonEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thirdPersonEnabled = value;
}
constexpr ::Unity::Mathematics::float3& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_thirdPersonPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonPosition;
}
constexpr ::Unity::Mathematics::float3 const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_thirdPersonPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonPosition;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_thirdPersonPosition(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thirdPersonPosition = value;
}
constexpr ::Unity::Mathematics::float3& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_thirdPersonEulerAngles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonEulerAngles;
}
constexpr ::Unity::Mathematics::float3 const& BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_get_thirdPersonEulerAngles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___thirdPersonEulerAngles;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__cordl_internal_set_thirdPersonEulerAngles(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___thirdPersonEulerAngles = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings* BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__SmoothCameraSettings::__LegacySettingsV2__SmoothCameraSettings() {}
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x22490c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Unity::Mathematics::float3& BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__cordl_internal_get_positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionOffset;
}
constexpr ::Unity::Mathematics::float3 const& BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__cordl_internal_get_positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionOffset;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__cordl_internal_set_positionOffset(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionOffset = value;
}
constexpr ::Unity::Mathematics::float3& BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__cordl_internal_get_rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr ::Unity::Mathematics::float3 const& BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__cordl_internal_get_rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotationOffset;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__cordl_internal_set_rotationOffset(::Unity::Mathematics::float3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___rotationOffset = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings* BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ControllerSettings::__LegacySettingsV2__ControllerSettings() {}
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2249134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_get_useCustomServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_get_useCustomServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useCustomServerEnvironment;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_set_useCustomServerEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useCustomServerEnvironment = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_get_forceGameLiftServerEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_get_forceGameLiftServerEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___forceGameLiftServerEnvironment;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_set_forceGameLiftServerEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___forceGameLiftServerEnvironment = value;
}
constexpr ::StringW& BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_get_customServerHostName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr ::StringW const& BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_get_customServerHostName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customServerHostName;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__cordl_internal_set_customServerHostName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customServerHostName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings* BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__CustomServerSettings::__LegacySettingsV2__CustomServerSettings() {}
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__DebugSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__DebugSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x224918c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_get_enableFpsCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFpsCounter;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_get_enableFpsCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFpsCounter;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_set_enableFpsCounter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFpsCounter = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_get_enableFpsRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFpsRecorder;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_get_enableFpsRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableFpsRecorder;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_set_enableFpsRecorder(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableFpsRecorder = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_get_enableMemoryTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_get_enableMemoryTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enableMemoryTracker;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__cordl_internal_set_enableMemoryTracker(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___enableMemoryTracker = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings* BeatSaber::Settings::__LegacySettingsV2__DebugSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__DebugSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__DebugSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__DebugSettings::__LegacySettingsV2__DebugSettings() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode::__LegacySettingsV2__WindowMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode::__LegacySettingsV2__WindowMode() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode BeatSaber::Settings::__LegacySettingsV2__WindowMode::Windowed{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode BeatSaber::Settings::__LegacySettingsV2__WindowMode::Fullscreen{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2248f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_performancePresetKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr ::StringW const& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_performancePresetKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___performancePresetKey;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_set_performancePresetKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___performancePresetKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_customPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPreset;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*> const&
BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_customPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___customPreset;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_set_customPreset(::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___customPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_windowMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowMode;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__WindowMode const& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_windowMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowMode;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_set_windowMode(::BeatSaber::Settings::__LegacySettingsV2__WindowMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowMode = value;
}
constexpr ::Unity::Mathematics::int2& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_windowResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolution;
}
constexpr ::Unity::Mathematics::int2 const& BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_get_windowResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___windowResolution;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__cordl_internal_set_windowResolution(::Unity::Mathematics::int2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___windowResolution = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings* BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings::__LegacySettingsV2__GraphicSettings() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset::__LegacySettingsV2__BloomPrepassTextureEffectPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset::__LegacySettingsV2__BloomPrepassTextureEffectPreset() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset::HD{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset::HDWithoutToneMapping{
  static_cast<int32_t>(0x1)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::__LegacySettingsV2__FoveatedRenderingLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::__LegacySettingsV2__FoveatedRenderingLevel() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::Low{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::Medium{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::High{ static_cast<int32_t>(0x3) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel BeatSaber::Settings::__LegacySettingsV2__FoveatedRenderingLevel::HighTop{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset::__LegacySettingsV2__MainEffectPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset::__LegacySettingsV2__MainEffectPreset() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset::Pyramid{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset::PyramidForBaking{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset::__LegacySettingsV2__MirrorQualityPreset(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset::__LegacySettingsV2__MirrorQualityPreset() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset::Off{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset::Fake{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset::RenderedLQ{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset::RenderedHQ{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality::__LegacySettingsV2__ObstaclesQuality(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality::__LegacySettingsV2__ObstaclesQuality() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality::DefaultObstacleQualityBaseOnDisplacement{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality::TexturedObstacle{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality::ObstacleLW{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality::ObstacleHW{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::__LegacySettingsV2__ProcessorPerformanceLevel(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::__LegacySettingsV2__ProcessorPerformanceLevel() {}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::Unknown{ static_cast<int32_t>(0xffffffff) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::PowerSavings{ static_cast<int32_t>(0x0) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::SustainedLow{ static_cast<int32_t>(0x1) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::SustainedHigh{ static_cast<int32_t>(0x2) };
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel BeatSaber::Settings::__LegacySettingsV2__ProcessorPerformanceLevel::Boost{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::*)()>(
    &::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2249194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_presetNameLocalizationTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetNameLocalizationTag;
}
constexpr ::StringW const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_presetNameLocalizationTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___presetNameLocalizationTag;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_presetNameLocalizationTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___presetNameLocalizationTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_renderViewportScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderViewportScale;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_renderViewportScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderViewportScale;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_renderViewportScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderViewportScale = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_vrResolutionScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_vrResolutionScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vrResolutionScale;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_vrResolutionScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vrResolutionScale = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_menuVRResolutionScaleMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_menuVRResolutionScaleMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menuVRResolutionScaleMultiplier;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_menuVRResolutionScaleMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___menuVRResolutionScaleMultiplier = value;
}
constexpr int32_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_antiAliasingLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr int32_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_antiAliasingLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___antiAliasingLevel;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_antiAliasingLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___antiAliasingLevel = value;
}
constexpr float_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_targetFramerate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr float_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_targetFramerate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetFramerate;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_targetFramerate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetFramerate = value;
}
constexpr int32_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_vSyncCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vSyncCount;
}
constexpr int32_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_vSyncCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___vSyncCount;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_vSyncCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___vSyncCount = value;
}
constexpr int32_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_maxQueuedFrames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxQueuedFrames;
}
constexpr int32_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_maxQueuedFrames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxQueuedFrames;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_maxQueuedFrames(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxQueuedFrames = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_smokeGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphics;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_smokeGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___smokeGraphics;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_smokeGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___smokeGraphics = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_depthTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_depthTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___depthTexture;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_depthTexture(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___depthTexture = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_burnMarkTrails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrails;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_burnMarkTrails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___burnMarkTrails;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_burnMarkTrails(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___burnMarkTrails = value;
}
constexpr bool& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_screenDisplacementEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffects;
}
constexpr bool const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_screenDisplacementEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___screenDisplacementEffects;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_screenDisplacementEffects(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___screenDisplacementEffects = value;
}
constexpr int32_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_maxShockwaveParticles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr int32_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_maxShockwaveParticles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxShockwaveParticles;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_maxShockwaveParticles(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxShockwaveParticles = value;
}
constexpr int32_t& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_maxNumberOfCutSoundEffects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr int32_t const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_maxNumberOfCutSoundEffects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxNumberOfCutSoundEffects;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_maxNumberOfCutSoundEffects(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxNumberOfCutSoundEffects = value;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_mirrorGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphics;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_mirrorGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mirrorGraphics;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_mirrorGraphics(::BeatSaber::Settings::__LegacySettingsV2__MirrorQualityPreset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mirrorGraphics = value;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_mainEffectGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphics;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_mainEffectGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainEffectGraphics;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_mainEffectGraphics(::BeatSaber::Settings::__LegacySettingsV2__MainEffectPreset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mainEffectGraphics = value;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_bloomPrePassTextureEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassTextureEffect;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset const&
BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_bloomPrePassTextureEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bloomPrePassTextureEffect;
}
constexpr void
BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_bloomPrePassTextureEffect(::BeatSaber::Settings::__LegacySettingsV2__BloomPrepassTextureEffectPreset value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bloomPrePassTextureEffect = value;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_obstaclesQuality() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality const& BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_get_obstaclesQuality() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstaclesQuality;
}
constexpr void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__cordl_internal_set_obstaclesQuality(::BeatSaber::Settings::__LegacySettingsV2__ObstaclesQuality value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstaclesQuality = value;
}
inline ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset* BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*>());
}
inline void BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::__LegacySettingsV2__PerformancePreset::__LegacySettingsV2__PerformancePreset() {}
//  Writing Method size for method: ::BeatSaber::Settings::LegacySettingsV2.ApplyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::LegacySettingsV2::*)(ByRef<::BeatSaber::Settings::Settings>)>(
    &::BeatSaber::Settings::LegacySettingsV2::ApplyTo)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2248a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::LegacySettingsV2*>::get(), "ApplyTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::Settings::Settings>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Settings::LegacySettingsV2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::Settings::LegacySettingsV2::*)()>(&::BeatSaber::Settings::LegacySettingsV2::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2248d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::LegacySettingsV2*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::Settings::__LegacySettingsV2__MainSettings*& BeatSaber::Settings::LegacySettingsV2::__cordl_internal_get_mainSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__MainSettings*> const& BeatSaber::Settings::LegacySettingsV2::__cordl_internal_get_mainSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mainSettings;
}
constexpr void BeatSaber::Settings::LegacySettingsV2::__cordl_internal_set_mainSettings(::BeatSaber::Settings::__LegacySettingsV2__MainSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mainSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*& BeatSaber::Settings::LegacySettingsV2::__cordl_internal_get_graphicSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicSettings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings*> const& BeatSaber::Settings::LegacySettingsV2::__cordl_internal_get_graphicSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___graphicSettings;
}
constexpr void BeatSaber::Settings::LegacySettingsV2::__cordl_internal_set_graphicSettings(::BeatSaber::Settings::__LegacySettingsV2__GraphicSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___graphicSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::Settings::LegacySettingsV2::ApplyTo(ByRef<::BeatSaber::Settings::Settings> settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::LegacySettingsV2*>::get(), "ApplyTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::Settings::Settings>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settings);
}
inline ::BeatSaber::Settings::LegacySettingsV2* BeatSaber::Settings::LegacySettingsV2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::Settings::LegacySettingsV2*>());
}
inline void BeatSaber::Settings::LegacySettingsV2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Settings::LegacySettingsV2*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::Settings::LegacySettingsV2::LegacySettingsV2() {}
