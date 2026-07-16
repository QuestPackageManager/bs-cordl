#pragma once
// IWYU pragma private; include "GlobalNamespace/HeadsetHapticSettingsSampleController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadsetHapticSettingsSampleController_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::Start)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a0ed04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a0eda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::Update)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5a0ee80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController.HandleHapticSettingValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a0ef24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(),
                                         { "HandleHapticSettingValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadsetHapticSettingsSampleController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadsetHapticSettingsSampleController::*)()>(&::GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a0ef98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__formattedFloatListSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattedFloatListSettingsController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const&
GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__formattedFloatListSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____formattedFloatListSettingsController;
}
constexpr void
GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__formattedFloatListSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____formattedFloatListSettingsController = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSamplePlayDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSamplePlayDelay;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSamplePlayDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSamplePlayDelay;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__hapticSamplePlayDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticSamplePlayDelay = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSampleDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSampleDuration;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticSampleDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticSampleDuration;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__hapticSampleDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticSampleDuration = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__headHapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headHapticPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__headHapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headHapticPreset;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__headHapticPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headHapticPreset = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTime;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTime;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__nextHapticSamplePlayTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextHapticSamplePlayTime = value;
}
constexpr float_t& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTimeEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTimeEnd;
}
constexpr float_t const& GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_get__nextHapticSamplePlayTimeEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextHapticSamplePlayTimeEnd;
}
constexpr void GlobalNamespace::HeadsetHapticSettingsSampleController::__cordl_internal_set__nextHapticSamplePlayTimeEnd(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextHapticSamplePlayTimeEnd = value;
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::HandleHapticSettingValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* controller, float_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(),
                                              { "HandleHapticSettingValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controller, newValue);
}
inline void GlobalNamespace::HeadsetHapticSettingsSampleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadsetHapticSettingsSampleController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HeadsetHapticSettingsSampleController* GlobalNamespace::HeadsetHapticSettingsSampleController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HeadsetHapticSettingsSampleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadsetHapticSettingsSampleController::HeadsetHapticSettingsSampleController() {}
