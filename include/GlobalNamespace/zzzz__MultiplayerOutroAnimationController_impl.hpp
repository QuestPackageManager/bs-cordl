#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerOutroAnimationController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__PropertyName_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOutroAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLayoutProvider_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidView_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerScoreRingManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&::GlobalNamespace::MultiplayerOutroAnimationController::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59e0a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&::GlobalNamespace::MultiplayerOutroAnimationController::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x59e0c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.AnimateOutro
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)(::GlobalNamespace::MultiplayerResultsData*, ::System::Action*)>(
    &::GlobalNamespace::MultiplayerOutroAnimationController::AnimateOutro)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59d4904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(),
                                                             { "AnimateOutro", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.BindOutroTimeline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerOutroAnimationController::BindOutroTimeline)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x59e0dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "BindOutroTimeline", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.BindRingsAndAudio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)(::ArrayW<::UnityEngine::GameObject*>, bool, bool, ::UnityEngine::GameObject*)>(
    &::GlobalNamespace::MultiplayerOutroAnimationController::BindRingsAndAudio)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x59e15fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(),
            { "BindRingsAndAudio", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.Completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&::GlobalNamespace::MultiplayerOutroAnimationController::Completed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59e22e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "Completed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController.HandlePlayerSpawningDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)()>(
    &::GlobalNamespace::MultiplayerOutroAnimationController::HandlePlayerSpawningDidFinish)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59e0b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "HandlePlayerSpawningDidFinish", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOutroAnimationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOutroAnimationController::*)()>(&::GlobalNamespace::MultiplayerOutroAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59e26f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__outroPlayableDirector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroPlayableDirector;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__outroPlayableDirector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____outroPlayableDirector;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__outroPlayableDirector(::UnityW<::UnityEngine::Playables::PlayableDirector> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____outroPlayableDirector = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__localPlayerTrackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTrackName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__localPlayerTrackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTrackName;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__localPlayerTrackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerTrackName = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__playerTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelineTrackNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__playerTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__playerTimelineTrackNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTimelineTrackNames = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__ringTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringTimelineTrackNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__ringTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ringTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__ringTimelineTrackNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ringTimelineTrackNames = value;
}
constexpr ::UnityEngine::PropertyName& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__localPlayerTimelinePropertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTimelinePropertyName;
}
constexpr ::UnityEngine::PropertyName const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__localPlayerTimelinePropertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerTimelinePropertyName;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__localPlayerTimelinePropertyName(::UnityEngine::PropertyName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerTimelinePropertyName = value;
}
constexpr ::ArrayW<::UnityEngine::PropertyName>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__playerTimelinePropertyNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelinePropertyNames;
}
constexpr ::ArrayW<::UnityEngine::PropertyName> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__playerTimelinePropertyNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTimelinePropertyNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__playerTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTimelinePropertyNames = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__resultsTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsTimelineTrackNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__resultsTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__resultsTimelineTrackNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultsTimelineTrackNames = value;
}
constexpr ::ArrayW<::UnityEngine::PropertyName>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__resultsTimelinePropertyNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsTimelinePropertyNames;
}
constexpr ::ArrayW<::UnityEngine::PropertyName> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__resultsTimelinePropertyNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsTimelinePropertyNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__resultsTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultsTimelinePropertyNames = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeStartTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeStartTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeStartTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeStartTransform;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__badgeStartTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgeStartTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeMidTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeMidTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeMidTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeMidTransform;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__badgeMidTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgeMidTransform = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeTimelineTrackNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeTimelineTrackNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeTimelineTrackNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeTimelineTrackNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__badgeTimelineTrackNames(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgeTimelineTrackNames = value;
}
constexpr ::ArrayW<::UnityEngine::PropertyName>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeTimelinePropertyNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeTimelinePropertyNames;
}
constexpr ::ArrayW<::UnityEngine::PropertyName> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__badgeTimelinePropertyNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badgeTimelinePropertyNames;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__badgeTimelinePropertyNames(::ArrayW<::UnityEngine::PropertyName> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badgeTimelinePropertyNames = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__songPreviewTrackName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewTrackName;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__songPreviewTrackName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songPreviewTrackName;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__songPreviewTrackName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songPreviewTrackName = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__resultsMocksActivationTrack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsMocksActivationTrack;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__resultsMocksActivationTrack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resultsMocksActivationTrack;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__resultsMocksActivationTrack(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resultsMocksActivationTrack = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerScoreRingManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerScoreRingManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerScoreRingManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerScoreRingManager;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__multiplayerScoreRingManager(::UnityW<::GlobalNamespace::MultiplayerScoreRingManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerScoreRingManager = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerResultsPyramidView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidView;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerResultsPyramidView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerResultsPyramidView;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__multiplayerResultsPyramidView(::UnityW<::GlobalNamespace::MultiplayerResultsPyramidView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerResultsPyramidView = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerPlayersManager = value;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__sceneSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr ::GlobalNamespace::GameplayCoreSceneSetupData* const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__sceneSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sceneSetupData;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sceneSetupData = value;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider*& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__layoutProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr ::GlobalNamespace::MultiplayerLayoutProvider* const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__layoutProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layoutProvider;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__layoutProvider(::GlobalNamespace::MultiplayerLayoutProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____layoutProvider = value;
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__onCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCompleted;
}
constexpr ::System::Action* const& GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_get__onCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onCompleted;
}
constexpr void GlobalNamespace::MultiplayerOutroAnimationController::__cordl_internal_set__onCompleted(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onCompleted = value;
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::AnimateOutro(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::System::Action* onCompleted) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(),
                                                           { "AnimateOutro", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerResultsData, onCompleted);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::BindOutroTimeline() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "BindOutroTimeline", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::BindRingsAndAudio(::ArrayW<::UnityEngine::GameObject*> rings, bool isMock, bool isDuel, ::UnityEngine::GameObject* resultsMocks) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(),
          { "BindRingsAndAudio", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GameObject*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rings, isMock, isDuel, resultsMocks);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::Completed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "Completed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::HandlePlayerSpawningDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { "HandlePlayerSpawningDidFinish", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOutroAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOutroAnimationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerOutroAnimationController* GlobalNamespace::MultiplayerOutroAnimationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerOutroAnimationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOutroAnimationController::MultiplayerOutroAnimationController() {}
