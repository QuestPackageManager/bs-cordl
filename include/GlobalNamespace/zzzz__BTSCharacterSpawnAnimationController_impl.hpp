#pragma once
// IWYU pragma private; include "GlobalNamespace/BTSCharacterSpawnAnimationController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterSpawnAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacter_def.hpp"
#include "GlobalNamespace/zzzz__JumpReceiver_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatAnimator_def.hpp"
#include "GlobalNamespace/zzzz__SongSpeedData_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.get_isCharacterVisible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::get_isCharacterVisible)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x328385c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "get_isCharacterVisible", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.add_animationFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)(::System::Action*)>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::add_animationFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3283884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "add_animationFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.remove_animationFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)(::System::Action*)>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::remove_animationFinishedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3283930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(),
                                                                                           { "remove_animationFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::get_duration)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32839dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.get_characterActivationTrack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Timeline::ActivationTrack> (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::get_characterActivationTrack)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x3283a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "get_characterActivationTrack", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&::GlobalNamespace::BTSCharacterSpawnAnimationController::Start)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3283e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&::GlobalNamespace::BTSCharacterSpawnAnimationController::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3283eb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.PlayAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&::GlobalNamespace::BTSCharacterSpawnAnimationController::PlayAnimation)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3283f90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "PlayAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.EndEarlyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::EndEarlyAnimation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3284054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "EndEarlyAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.StopAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&::GlobalNamespace::BTSCharacterSpawnAnimationController::StopAnimation)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32840c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "StopAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.SetCharacter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)(::GlobalNamespace::BTSCharacter*)>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::SetCharacter)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32840e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "SetCharacter", {}, { ::i2c::type_of<::GlobalNamespace::BTSCharacter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.WillResumeAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::WillResumeAnimation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3284170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "WillResumeAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.ResumeAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::ResumeAnimation)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x32841f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "ResumeAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.PauseAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&::GlobalNamespace::BTSCharacterSpawnAnimationController::PauseAnimation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3284238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "PauseAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController.HandleSpawnCharacterPlayableDirectorStopped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)(::UnityEngine::Playables::PlayableDirector*)>(
    &::GlobalNamespace::BTSCharacterSpawnAnimationController::HandleSpawnCharacterPlayableDirectorStopped)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32842b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(),
                                                             { "HandleSpawnCharacterPlayableDirectorStopped", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterSpawnAnimationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterSpawnAnimationController::*)()>(&::GlobalNamespace::BTSCharacterSpawnAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32842d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__spawnCharacterPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCharacterPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__spawnCharacterPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCharacterPlayableDirector;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__spawnCharacterPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCharacterPlayableDirector = value;
}
constexpr ::UnityW<::GlobalNamespace::JumpReceiver>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__jumpReceiver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpReceiver;
}
constexpr ::UnityW<::GlobalNamespace::JumpReceiver> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__jumpReceiver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpReceiver;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__jumpReceiver(::UnityW<::GlobalNamespace::JumpReceiver> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpReceiver = value;
}
constexpr float_t& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__appearAnimationEndTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearAnimationEndTime;
}
constexpr float_t const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__appearAnimationEndTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appearAnimationEndTime;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__appearAnimationEndTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____appearAnimationEndTime = value;
}
constexpr float_t& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__disappearAnimationStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearAnimationStartTime;
}
constexpr float_t const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__disappearAnimationStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearAnimationStartTime;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__disappearAnimationStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearAnimationStartTime = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__rimLightColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__rimLightColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightColorSetter;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__rimLightColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rimLightColorSetter = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__rimLightIntensityAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightIntensityAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__rimLightIntensityAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightIntensityAnimator;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__rimLightIntensityAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rimLightIntensityAnimator = value;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__rimLightEdgeStartAnimator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightEdgeStartAnimator;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__rimLightEdgeStartAnimator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rimLightEdgeStartAnimator;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__rimLightEdgeStartAnimator(::UnityW<::GlobalNamespace::MaterialPropertyBlockFloatAnimator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rimLightEdgeStartAnimator = value;
}
constexpr ::GlobalNamespace::SongSpeedData*& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__songSpeedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedData;
}
constexpr ::GlobalNamespace::SongSpeedData* const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__songSpeedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSpeedData;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__songSpeedData(::GlobalNamespace::SongSpeedData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSpeedData = value;
}
constexpr ::System::Action*& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get_animationFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationFinishedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get_animationFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationFinishedEvent;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set_animationFinishedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationFinishedEvent = value;
}
constexpr ::UnityW<::UnityEngine::Timeline::ActivationTrack>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__characterActivationTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterActivationTrack;
}
constexpr ::UnityW<::UnityEngine::Timeline::ActivationTrack> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__characterActivationTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characterActivationTrack;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__characterActivationTrack(::UnityW<::UnityEngine::Timeline::ActivationTrack> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____characterActivationTrack = value;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacter>& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__currentBtsCharacter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBtsCharacter;
}
constexpr ::UnityW<::GlobalNamespace::BTSCharacter> const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__currentBtsCharacter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentBtsCharacter;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__currentBtsCharacter(::UnityW<::GlobalNamespace::BTSCharacter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentBtsCharacter = value;
}
constexpr float_t& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__defaultSpawnCharacterDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSpawnCharacterDuration;
}
constexpr float_t const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__defaultSpawnCharacterDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultSpawnCharacterDuration;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__defaultSpawnCharacterDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultSpawnCharacterDuration = value;
}
constexpr double_t& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__playableDirectorTimeBeforePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playableDirectorTimeBeforePause;
}
constexpr double_t const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__playableDirectorTimeBeforePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playableDirectorTimeBeforePause;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__playableDirectorTimeBeforePause(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playableDirectorTimeBeforePause = value;
}
constexpr float_t& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__animatorNormalizedTimeBeforePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animatorNormalizedTimeBeforePause;
}
constexpr float_t const& GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_get__animatorNormalizedTimeBeforePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animatorNormalizedTimeBeforePause;
}
constexpr void GlobalNamespace::BTSCharacterSpawnAnimationController::__cordl_internal_set__animatorNormalizedTimeBeforePause(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animatorNormalizedTimeBeforePause = value;
}
inline bool GlobalNamespace::BTSCharacterSpawnAnimationController::get_isCharacterVisible() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "get_isCharacterVisible", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::add_animationFinishedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "add_animationFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::remove_animationFinishedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "remove_animationFinishedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BTSCharacterSpawnAnimationController::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Timeline::ActivationTrack> GlobalNamespace::BTSCharacterSpawnAnimationController::get_characterActivationTrack() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "get_characterActivationTrack", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Timeline::ActivationTrack>>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::PlayAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "PlayAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::EndEarlyAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "EndEarlyAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::StopAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "StopAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::SetCharacter(::GlobalNamespace::BTSCharacter* btsCharacter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "SetCharacter", {}, { ::i2c::type_of<::GlobalNamespace::BTSCharacter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, btsCharacter);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::WillResumeAnimation() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "WillResumeAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::ResumeAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "ResumeAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::PauseAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { "PauseAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::HandleSpawnCharacterPlayableDirectorStopped(::UnityEngine::Playables::PlayableDirector* playableDirector) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(),
                                                           { "HandleSpawnCharacterPlayableDirectorStopped", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableDirector*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playableDirector);
}
inline void GlobalNamespace::BTSCharacterSpawnAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterSpawnAnimationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterSpawnAnimationController* GlobalNamespace::BTSCharacterSpawnAnimationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterSpawnAnimationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterSpawnAnimationController::BTSCharacterSpawnAnimationController() {}
