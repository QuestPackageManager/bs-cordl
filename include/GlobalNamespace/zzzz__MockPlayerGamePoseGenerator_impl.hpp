#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerGamePoseGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockNodePoseSyncStateSender_def.hpp"
#include "GlobalNamespace/zzzz__MockScoreSyncStateSender_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, bool)>(&::GlobalNamespace::MockPlayerGamePoseGenerator::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a80a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(),
            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&::GlobalNamespace::MockPlayerGamePoseGenerator::Dispose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a80c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)(int64_t, ::GlobalNamespace::MockBeatmapData*, ::GlobalNamespace::GameplayModifiers*,
                                                                                                                ::System::Action*)>(&::GlobalNamespace::MockPlayerGamePoseGenerator::Init)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&::GlobalNamespace::MockPlayerGamePoseGenerator::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.SimulateFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&::GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a80d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.SimulateGiveUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGenerator::*)()>(&::GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5a80f38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), { "SimulateGiveUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGenerator.CreateEmptyLevelCompletionResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelCompletionResults* (*)(::GlobalNamespace::LevelCompletionResults_LevelEndStateType)>(
    &::GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a80e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(),
                                                             { "CreateEmptyLevelCompletionResults", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiplayerSessionManager;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::IGameplayRpcManager*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_gameplayRpcManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayRpcManager;
}
constexpr ::GlobalNamespace::IGameplayRpcManager* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_gameplayRpcManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayRpcManager;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_gameplayRpcManager(::GlobalNamespace::IGameplayRpcManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayRpcManager = value;
}
constexpr bool& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_leftHanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr bool const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_leftHanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftHanded;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_leftHanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___leftHanded = value;
}
constexpr ::GlobalNamespace::MockNodePoseSyncStateSender*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockNodePoseSyncStateSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockNodePoseSyncStateSender;
}
constexpr ::GlobalNamespace::MockNodePoseSyncStateSender* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockNodePoseSyncStateSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockNodePoseSyncStateSender;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_mockNodePoseSyncStateSender(::GlobalNamespace::MockNodePoseSyncStateSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mockNodePoseSyncStateSender = value;
}
constexpr ::GlobalNamespace::MockScoreSyncStateSender*& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockScoreSyncStateSender() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockScoreSyncStateSender;
}
constexpr ::GlobalNamespace::MockScoreSyncStateSender* const& GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_get_mockScoreSyncStateSender() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mockScoreSyncStateSender;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGenerator::__cordl_internal_set_mockScoreSyncStateSender(::GlobalNamespace::MockScoreSyncStateSender* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mockScoreSyncStateSender = value;
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(),
          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, leftHanded);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                               ::System::Action* onSongFinished) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::Tick() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::SimulateFail() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGenerator::SimulateGiveUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(), { "SimulateGiveUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults*
GlobalNamespace::MockPlayerGamePoseGenerator::CreateEmptyLevelCompletionResults(::GlobalNamespace::LevelCompletionResults_LevelEndStateType levelEndStateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGenerator*>(),
                                                           { "CreateEmptyLevelCompletionResults", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults_LevelEndStateType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*>(nullptr, ___internal_method, levelEndStateType);
}
inline ::GlobalNamespace::MockPlayerGamePoseGenerator* GlobalNamespace::MockPlayerGamePoseGenerator::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                                              ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, bool leftHanded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerGamePoseGenerator*>(multiplayerSessionManager, gameplayRpcManager, leftHanded));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MockPlayerGamePoseGenerator::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MockPlayerGamePoseGenerator::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerGamePoseGenerator::MockPlayerGamePoseGenerator() {}
