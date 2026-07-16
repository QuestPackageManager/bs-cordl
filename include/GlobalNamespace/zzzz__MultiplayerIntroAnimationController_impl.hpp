#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerIntroAnimationController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerIntroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingManager_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&::GlobalNamespace::MultiplayerIntroAnimationController::OnValidate)> {
  constexpr static std::size_t size = 0x550;
  constexpr static std::size_t addrs = 0x59d1738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.SetBeforeIntroValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x59cf9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "SetBeforeIntroValue", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.PlayIntroAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)(float_t, ::System::Action*)>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x59cd100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(),
                                                                                           { "PlayIntroAnimation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.GetFullIntroAnimationTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x59ccd24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "GetFullIntroAnimationTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.BindTimeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&::GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x59d1c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "BindTimeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.BindRingsAndSetTiming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)(int32_t, ::ArrayW<::UnityEngine::GameObject*>, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x59d2acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(),
                            { "BindRingsAndSetTiming", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.TransitionToAfterIntroAnimationState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59cd214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "TransitionToAfterIntroAnimationState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.CalculatePlayerIndexSequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Queue_1<int32_t>* (
    ::GlobalNamespace::MultiplayerIntroAnimationController::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x59d2408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(),
                                                { "CalculatePlayerIndexSequence", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController.Completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&::GlobalNamespace::MultiplayerIntroAnimationController::Completed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59d3258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "Completed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerIntroAnimationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerIntroAnimationController::*)()>(&::GlobalNamespace::MultiplayerIntroAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59d3290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__introPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____introPlayableDirector = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelineTrackNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__playerTimelineTrackNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTimelineTrackNames = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__ringTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringTimelineTrackNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__ringTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__ringTimelineTrackNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ringTimelineTrackNames = value;
}
constexpr ::ArrayW<::UnityEngine::PropertyName>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelinePropertyNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelinePropertyNames;
}
constexpr ::ArrayW<::UnityEngine::PropertyName> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__playerTimelinePropertyNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelinePropertyNames;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTimelinePropertyNames = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTrackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTrackName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTrackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTrackName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__localPlayerTrackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerTrackName = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerRingTrackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerRingTrackName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerRingTrackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerRingTrackName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__localPlayerRingTrackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerRingTrackName = value;
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTimelinePropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTimelinePropertyName;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__localPlayerTimelinePropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTimelinePropertyName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerTimelinePropertyName = value;
}
constexpr float_t& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__firstConnectedPlayerStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstConnectedPlayerStart;
}
constexpr float_t const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__firstConnectedPlayerStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstConnectedPlayerStart;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__firstConnectedPlayerStart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstConnectedPlayerStart = value;
}
constexpr float_t& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__spawnDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnDuration;
}
constexpr float_t const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__spawnDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnDuration;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__spawnDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnDuration = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__endMarkerName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endMarkerName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__endMarkerName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endMarkerName;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__endMarkerName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____endMarkerName = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__scoreRingManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__scoreRingManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreRingManager;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__scoreRingManager(::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreRingManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerPlayersManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutProvider = value;
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__onCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCompleted;
}
constexpr ::System::Action* const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__onCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCompleted;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__onCompleted(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCompleted = value;
}
constexpr int64_t& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introDuration;
}
constexpr int64_t const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__introDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____introDuration;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__introDuration(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____introDuration = value;
}
constexpr bool& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__bindingFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingFinished;
}
constexpr bool const& GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_get__bindingFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bindingFinished;
}
constexpr void GlobalNamespace::MultiplayerIntroAnimationController::__cordl_internal_set__bindingFinished(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bindingFinished = value;
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::setStaticF__random(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "_random", ::GlobalNamespace::MultiplayerIntroAnimationController*>(std::forward<::System::Random*>(value));
}
inline ::System::Random* GlobalNamespace::MultiplayerIntroAnimationController::getStaticF__random() {
  return ::cordl_internals::getStaticField<::System::Random*, "_random", ::GlobalNamespace::MultiplayerIntroAnimationController*>();
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::SetBeforeIntroValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "SetBeforeIntroValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::PlayIntroAnimation(float_t maxDesiredIntroAnimationDuration, ::System::Action* onCompleted) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(),
                                                                                         { "PlayIntroAnimation", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxDesiredIntroAnimationDuration, onCompleted);
}
inline int64_t GlobalNamespace::MultiplayerIntroAnimationController::GetFullIntroAnimationTime() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "GetFullIntroAnimationTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::BindTimeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "BindTimeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::BindRingsAndSetTiming(int32_t connectedPlayersCount, ::ArrayW<::UnityEngine::GameObject*> connectedRings,
                                                                                        ::UnityEngine::GameObject* localRing) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(),
                          { "BindRingsAndSetTiming", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectedPlayersCount, connectedRings, localRing);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::TransitionToAfterIntroAnimationState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "TransitionToAfterIntroAnimationState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::Queue_1<int32_t>*
GlobalNamespace::MultiplayerIntroAnimationController::CalculatePlayerIndexSequence(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* allActivePlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(),
                                              { "CalculatePlayerIndexSequence", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<int32_t>*>(this, ___internal_method, allActivePlayer);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::Completed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { "Completed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerIntroAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerIntroAnimationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerIntroAnimationController* GlobalNamespace::MultiplayerIntroAnimationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerIntroAnimationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerIntroAnimationController::MultiplayerIntroAnimationController() {}
