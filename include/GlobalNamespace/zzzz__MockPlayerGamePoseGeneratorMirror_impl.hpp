#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerGamePoseGeneratorMirror.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGeneratorMirror_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarDataPacket_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateManager_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateNetSerializable_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, bool, ::GlobalNamespace::NodePoseSyncStateManager*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::_ctor)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x59cc768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NodePoseSyncStateManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Dispose)> {
  constexpr static std::size_t size = 0x514;
  constexpr static std::size_t addrs = 0x59ccec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(
    int64_t, ::GlobalNamespace::MockBeatmapData*, ::GlobalNamespace::GameplayModifiers*, ::System::Action*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59cd3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Tick)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x59cd3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.FindPlayerToMirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::FindPlayerToMirror)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x59cd4a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), { "FindPlayerToMirror", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59cd820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                            { "HandleNoteWasSpawned",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59cd9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                            { "HandleObstacleWasSpawned",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleSliderWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59cdb30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                            { "HandleSliderWasSpawned",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59cdcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
            { "HandleNoteWasMissed", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteMissInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59cde40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
            { "HandleNoteWasCut", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleScoreSyncStateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(
    ::GlobalNamespace::StandardScoreSyncStateNetSerializable*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleScoreSyncStateUpdate)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59cdfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
            { "HandleScoreSyncStateUpdate", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleOptionalAvatarDataReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(
    ::BeatSaber::AvatarCore::OptionalAvatarDataPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleOptionalAvatarDataReceived)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x59ce1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
            { "HandleOptionalAvatarDataReceived", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror.HandleLevelFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::*)(::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleLevelFinished)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x59ce388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                             { "HandleLevelFinished", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager>& GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::UnityW<::GlobalNamespace::NodePoseSyncStateManager> const& GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_set__nodePoseSyncStateManager(::UnityW<::GlobalNamespace::NodePoseSyncStateManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodePoseSyncStateManager = value;
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_get__mirroredPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredPlayer;
}
constexpr ::GlobalNamespace::IConnectedPlayer* const& GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_get__mirroredPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredPlayer;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_set__mirroredPlayer(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredPlayer = value;
}
constexpr ::System::Action*& GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_get__onSongFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSongFinished;
}
constexpr ::System::Action* const& GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_get__onSongFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSongFinished;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::__cordl_internal_set__onSongFinished(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onSongFinished = value;
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                      ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded,
                                                                      ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::NodePoseSyncStateManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, leftHanded, nodePoseSyncStateManager);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                     ::System::Action* onSongFinished) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::Tick() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::FindPlayerToMirror() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(), { "FindPlayerToMirror", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                     ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
          { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleObstacleWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                         ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                          { "HandleObstacleWasSpawned",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, obstacleSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleSliderWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                       ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                          { "HandleSliderWasSpawned",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, sliderSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasMissed(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                    ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
          { "HandleNoteWasMissed", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteMissInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteMissInfo);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleNoteWasCut(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
          { "HandleNoteWasCut", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteCutInfo);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleScoreSyncStateUpdate(::GlobalNamespace::StandardScoreSyncStateNetSerializable* nodePose,
                                                                                           ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                       { "HandleScoreSyncStateUpdate", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodePose, player);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleOptionalAvatarDataReceived(::BeatSaber::AvatarCore::OptionalAvatarDataPacket* optionalAvatarDataPacket,
                                                                                                 ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                       { "HandleOptionalAvatarDataReceived", {}, { ::i2c::type_of<::BeatSaber::AvatarCore::OptionalAvatarDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, optionalAvatarDataPacket, player);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorMirror::HandleLevelFinished(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(),
                                                           { "HandleLevelFinished", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, results);
}
inline ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*
GlobalNamespace::MockPlayerGamePoseGeneratorMirror::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                             ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded,
                                                             ::GlobalNamespace::NodePoseSyncStateManager* nodePoseSyncStateManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerGamePoseGeneratorMirror*>(multiplayerSessionManager, gameplayRpcManager, leftHanded, nodePoseSyncStateManager));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorMirror::MockPlayerGamePoseGeneratorMirror() {}
