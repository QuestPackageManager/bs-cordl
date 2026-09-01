#pragma once
// IWYU pragma private; include "GlobalNamespace\IGameplayRpcManager.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IGameplayRpcManager::*)()>(&::GlobalNamespace::IGameplayRpcManager::get_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(bool)>(&::GlobalNamespace::IGameplayRpcManager::set_enabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_setGameplaySceneSyncFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(&::GlobalNamespace::IGameplayRpcManager::add_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_setGameplaySceneSyncFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(&::GlobalNamespace::IGameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_setGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_setGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_getGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_getGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_setPlayerDidConnectLateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(
        &::GlobalNamespace::IGameplayRpcManager::add_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_setPlayerDidConnectLateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(
        &::GlobalNamespace::IGameplayRpcManager::remove_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_setGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_setGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_getGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_getGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_setSongStartTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_setSongStartTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_requestReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_requestReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_returnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_returnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::IGameplayRpcManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::IGameplayRpcManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::add_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::remove_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::add_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::remove_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::add_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::remove_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::add_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::remove_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.add_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::add_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.remove_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::IGameplayRpcManager::remove_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.NoteSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::IGameplayRpcManager::NoteSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 32 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.ObstacleSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::IGameplayRpcManager::ObstacleSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 33 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.SliderSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::IGameplayRpcManager::SliderSpawned)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 34 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.NoteMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*)>(
    &::GlobalNamespace::IGameplayRpcManager::NoteMissed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.NoteCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::IGameplayRpcManager::NoteCut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 36 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.SetGameplaySceneSyncFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(
    &::GlobalNamespace::IGameplayRpcManager::SetGameplaySceneSyncFinished)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 37 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.SetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::IGameplayRpcManager::SetGameplaySceneReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 38 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.GetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)()>(&::GlobalNamespace::IGameplayRpcManager::GetGameplaySceneReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 39 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.SetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(
    &::GlobalNamespace::IGameplayRpcManager::SetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 40 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.SetSongStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(int64_t)>(&::GlobalNamespace::IGameplayRpcManager::SetSongStartTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.SetGameplaySongReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)()>(&::GlobalNamespace::IGameplayRpcManager::SetGameplaySongReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 42 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.GetGameplaySongReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)()>(&::GlobalNamespace::IGameplayRpcManager::GetGameplaySongReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 43 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.RequestReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)()>(&::GlobalNamespace::IGameplayRpcManager::RequestReturnToMenu)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.ReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)()>(&::GlobalNamespace::IGameplayRpcManager::ReturnToMenu)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 45 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IGameplayRpcManager.LevelFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IGameplayRpcManager::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::IGameplayRpcManager::LevelFinished)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 46 }));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::IGameplayRpcManager::get_enabled() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::IGameplayRpcManager::set_enabled(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::IGameplayRpcManager::add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::IGameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::IGameplayRpcManager::add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_setPlayerDidConnectLateEvent(
    ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::IGameplayRpcManager::NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, noteSpawnInfoNetSerializable);
}
inline void GlobalNamespace::IGameplayRpcManager::ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, obstacleSpawnInfoNetSerializable);
}
inline void GlobalNamespace::IGameplayRpcManager::SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, sliderSpawnInfoNetSerializable);
}
inline void GlobalNamespace::IGameplayRpcManager::NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, noteMissInfoNetSerializable);
}
inline void GlobalNamespace::IGameplayRpcManager::NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, noteCutInfoNetSerializable);
}
inline void GlobalNamespace::IGameplayRpcManager::SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                               ::StringW sessionGameId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::IGameplayRpcManager::SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpecificSettings);
}
inline void GlobalNamespace::IGameplayRpcManager::GetGameplaySceneReady() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameplayRpcManager::SetPlayerDidConnectLate(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                          ::StringW sessionGameId) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::IGameplayRpcManager::SetSongStartTime(int64_t startTime) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTime);
}
inline void GlobalNamespace::IGameplayRpcManager::SetGameplaySongReady() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 42 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameplayRpcManager::GetGameplaySongReady() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 43 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameplayRpcManager::RequestReturnToMenu() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameplayRpcManager::ReturnToMenu() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 45 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::IGameplayRpcManager::LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IGameplayRpcManager*>(), 46 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::IGameplayRpcManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::IGameplayRpcManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
