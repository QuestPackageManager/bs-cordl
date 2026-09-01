#pragma once
// IWYU pragma private; include "GlobalNamespace\HeadInObstacleHapticEffect.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeadInObstacleHapticEffect_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticFeedbackManager_def.hpp"
#include "BeatSaber/Haptics/zzzz__HapticPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::Start)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x59849a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::OnDestroy)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5984bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::Update)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5984e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect.HandleAnyGameplayLevelDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::HandleAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5984ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "HandleAnyGameplayLevelDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect.HandleDidResumeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::HandleDidResumeEvent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5984eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "HandleDidResumeEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect.HandleDidPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::HandleDidPauseEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5984f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "HandleDidPauseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeadInObstacleHapticEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeadInObstacleHapticEffect::*)()>(&::GlobalNamespace::HeadInObstacleHapticEffect::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5984f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO>& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__headHapticPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headHapticPreset;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticPresetSO> const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__headHapticPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headHapticPreset;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__headHapticPreset(::UnityW<::BeatSaber::Haptics::HapticPresetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headHapticPreset = value;
}
constexpr float_t& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__minimalHapticDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimalHapticDuration;
}
constexpr float_t const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__minimalHapticDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimalHapticDuration;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__minimalHapticDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimalHapticDuration = value;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager>& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__hapticFeedbackManager(::UnityW<::BeatSaber::Haptics::HapticFeedbackManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hapticFeedbackManager = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction>& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__playerHeadAndObstacleInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__playerHeadAndObstacleInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__playerHeadAndObstacleInteraction(::UnityW<::GlobalNamespace::PlayerHeadAndObstacleInteraction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeadAndObstacleInteraction = value;
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::GlobalNamespace::IGamePause* const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gamePause = value;
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__gameplayLevelSceneTransitionEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents* const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__gameplayLevelSceneTransitionEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayLevelSceneTransitionEvents;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayLevelSceneTransitionEvents = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerDataModel = value;
}
constexpr bool& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__isGamePaused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGamePaused;
}
constexpr bool const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__isGamePaused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGamePaused;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__isGamePaused(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isGamePaused = value;
}
constexpr bool& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__isLevelFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLevelFinished;
}
constexpr bool const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__isLevelFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLevelFinished;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__isLevelFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLevelFinished = value;
}
constexpr float_t& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__minimumTimeUntilHapticEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumTimeUntilHapticEnd;
}
constexpr float_t const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__minimumTimeUntilHapticEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumTimeUntilHapticEnd;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__minimumTimeUntilHapticEnd(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimumTimeUntilHapticEnd = value;
}
constexpr bool& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__wasHeadInWallLastFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasHeadInWallLastFrame;
}
constexpr bool const& GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_get__wasHeadInWallLastFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasHeadInWallLastFrame;
}
constexpr void GlobalNamespace::HeadInObstacleHapticEffect::__cordl_internal_set__wasHeadInWallLastFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasHeadInWallLastFrame = value;
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::HandleAnyGameplayLevelDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "HandleAnyGameplayLevelDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::HandleDidResumeEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "HandleDidResumeEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::HandleDidPauseEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { "HandleDidPauseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeadInObstacleHapticEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HeadInObstacleHapticEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HeadInObstacleHapticEffect* GlobalNamespace::HeadInObstacleHapticEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HeadInObstacleHapticEffect*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeadInObstacleHapticEffect::HeadInObstacleHapticEffect() {}
