#pragma once
// IWYU pragma private; include "GlobalNamespace\MockPlayerFiniteStateMachine.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerFiniteStateMachine_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMockBeatmapDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MockPlayerLobbyPoseGenerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(
    ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, ::GlobalNamespace::IMenuRpcManager*,
    ::GlobalNamespace::IMockBeatmapDataProvider*, ::GlobalNamespace::MockPlayerLobbyPoseGenerator*, ::GlobalNamespace::MockPlayerGamePoseGenerator*)>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(), ::i2c::type_of<::GlobalNamespace::IMenuRpcManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), ::i2c::type_of<::GlobalNamespace::MockPlayerLobbyPoseGenerator*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.get_saberAColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::get_saberAColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_saberAColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.set_saberAColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::set_saberAColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_saberAColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.get_saberBColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::get_saberBColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_saberBColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.set_saberBColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::set_saberBColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_saberBColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.get_obstaclesColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::get_obstaclesColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a82ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_obstaclesColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.set_obstaclesColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::set_obstaclesColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_obstaclesColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.get_leftHanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&::GlobalNamespace::MockPlayerFiniteStateMachine::get_leftHanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_leftHanded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.set_leftHanded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(bool)>(&::GlobalNamespace::MockPlayerFiniteStateMachine::set_leftHanded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_leftHanded", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.get_inactiveByDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&::GlobalNamespace::MockPlayerFiniteStateMachine::get_inactiveByDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_inactiveByDefault", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.set_inactiveByDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(bool)>(&::GlobalNamespace::MockPlayerFiniteStateMachine::set_inactiveByDefault)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_inactiveByDefault", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.get_gamePoseGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MockPlayerGamePoseGenerator* (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::get_gamePoseGenerator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a82d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_gamePoseGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&::GlobalNamespace::MockPlayerFiniteStateMachine::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "Tick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)()>(&::GlobalNamespace::MockPlayerFiniteStateMachine::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.SetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(bool)>(&::GlobalNamespace::MockPlayerFiniteStateMachine::SetIsReady)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "SetIsReady", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.RecommendBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(::GlobalNamespace::BeatmapDifficulty, ::StringW)>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::RecommendBeatmap)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(),
                                                             { "RecommendBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerFiniteStateMachine.RecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerFiniteStateMachine::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MockPlayerFiniteStateMachine::RecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a82d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(),
                                                                                           { "RecommendGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MockPlayerFiniteStateMachine::_ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                 ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager* menuRpcManager,
                                                                 ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::MockPlayerLobbyPoseGenerator* lobbyPoseGenerator,
                                                                 ::GlobalNamespace::MockPlayerGamePoseGenerator* gamePoseGenerator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(), ::i2c::type_of<::GlobalNamespace::IMenuRpcManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IMockBeatmapDataProvider*>(), ::i2c::type_of<::GlobalNamespace::MockPlayerLobbyPoseGenerator*>(),
                                                               ::i2c::type_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taskUtility, multiplayerSessionManager, gameplayRpcManager, menuRpcManager, beatmapDataProvider, lobbyPoseGenerator,
                                                   gamePoseGenerator);
}
inline ::UnityEngine::Color GlobalNamespace::MockPlayerFiniteStateMachine::get_saberAColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_saberAColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::set_saberAColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_saberAColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::MockPlayerFiniteStateMachine::get_saberBColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_saberBColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::set_saberBColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_saberBColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::MockPlayerFiniteStateMachine::get_obstaclesColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_obstaclesColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::set_obstaclesColor(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_obstaclesColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayerFiniteStateMachine::get_leftHanded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_leftHanded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::set_leftHanded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_leftHanded", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MockPlayerFiniteStateMachine::get_inactiveByDefault() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_inactiveByDefault", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::set_inactiveByDefault(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "set_inactiveByDefault", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MockPlayerGamePoseGenerator* GlobalNamespace::MockPlayerFiniteStateMachine::get_gamePoseGenerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "get_gamePoseGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MockPlayerGamePoseGenerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::Tick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "Tick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::SetIsReady(bool isReady) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(), { "SetIsReady", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReady);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::RecommendBeatmap(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::StringW beatmapLevelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(),
                                                           { "RecommendBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDifficulty, beatmapLevelId);
}
inline void GlobalNamespace::MockPlayerFiniteStateMachine::RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerFiniteStateMachine*>(),
                                                                                         { "RecommendGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline ::GlobalNamespace::MockPlayerFiniteStateMachine*
GlobalNamespace::MockPlayerFiniteStateMachine::New_ctor(::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                        ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMenuRpcManager* menuRpcManager,
                                                        ::GlobalNamespace::IMockBeatmapDataProvider* beatmapDataProvider, ::GlobalNamespace::MockPlayerLobbyPoseGenerator* lobbyPoseGenerator,
                                                        ::GlobalNamespace::MockPlayerGamePoseGenerator* gamePoseGenerator) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerFiniteStateMachine*>(taskUtility, multiplayerSessionManager, gameplayRpcManager, menuRpcManager,
                                                                                                            beatmapDataProvider, lobbyPoseGenerator, gamePoseGenerator));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockPlayerFiniteStateMachine::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockPlayerFiniteStateMachine::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerFiniteStateMachine::MockPlayerFiniteStateMachine() {}
