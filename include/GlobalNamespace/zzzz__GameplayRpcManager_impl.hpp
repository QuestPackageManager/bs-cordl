#pragma once
// IWYU pragma private; include "GlobalNamespace\GameplayRpcManager.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_3_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType::GameplayRpcManager_RpcType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType::GameplayRpcManager_RpcType() {}
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::SetGameplaySceneSyncFinish{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::SetGameplaySceneReady{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::GetGameplaySceneReady{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::SetActivePlayerFailedToConnect{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::SetGameplaySongReady{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::GetGameplaySongReady{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::SetSongStartTime{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::NoteCut{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::NoteMissed{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::LevelFinished{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::ReturnToMenu{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::RequestReturnToMenu{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::NoteSpawned{ static_cast<uint8_t>(0xcu) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::ObstacleSpawned{ static_cast<uint8_t>(0xdu) };
constexpr ::GlobalNamespace::GameplayRpcManager_RpcType GlobalNamespace::GameplayRpcManager_RpcType::SliderSpawned{ static_cast<uint8_t>(0xeu) };
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b11a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc* GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc::GameplayRpcManager_SetGameplaySceneSyncFinishedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b11f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc* GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_SetGameplaySceneReadyRpc::GameplayRpcManager_SetGameplaySceneReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc* GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_GetGameplaySceneReadyRpc::GameplayRpcManager_GetGameplaySceneReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b1240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc* GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_SetPlayerDidConnectLateRpc::GameplayRpcManager_SetPlayerDidConnectLateRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b128c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc* GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_SetGameplaySongReadyRpc::GameplayRpcManager_SetGameplaySongReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b1290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc* GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_GetGameplaySongReadyRpc::GameplayRpcManager_GetGameplaySongReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b1294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc* GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_SetSongStartTimeRpc::GameplayRpcManager_SetSongStartTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b12e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc* GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_NoteSpawnedRpc::GameplayRpcManager_NoteSpawnedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b132c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc* GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_ObstacleSpawnedRpc::GameplayRpcManager_ObstacleSpawnedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b1378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc* GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_SliderSpawnedRpc::GameplayRpcManager_SliderSpawnedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_NoteCutRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_NoteCutRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_NoteCutRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b13c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_NoteCutRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_NoteCutRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_NoteCutRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_NoteCutRpc* GlobalNamespace::GameplayRpcManager_NoteCutRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_NoteCutRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_NoteCutRpc::GameplayRpcManager_NoteCutRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_NoteMissedRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_NoteMissedRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_NoteMissedRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b1410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_NoteMissedRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_NoteMissedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_NoteMissedRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_NoteMissedRpc* GlobalNamespace::GameplayRpcManager_NoteMissedRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_NoteMissedRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_NoteMissedRpc::GameplayRpcManager_NoteMissedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b145c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_LevelFinishedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc* GlobalNamespace::GameplayRpcManager_LevelFinishedRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_LevelFinishedRpc::GameplayRpcManager_LevelFinishedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc::*)()>(&::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b14a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc* GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_ReturnToMenuRpc::GameplayRpcManager_ReturnToMenuRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc::*)()>(
    &::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b14ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc* GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager_RequestReturnToMenuRpc::GameplayRpcManager_RequestReturnToMenuRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::get_enabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32ae9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(bool)>(&::GlobalNamespace::GameplayRpcManager::set_enabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32aea94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*)>(
    &::GlobalNamespace::GameplayRpcManager::_ctor)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x32aeb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32af324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setGameplaySceneSyncFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(&::GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
            { "add_setGameplaySceneSyncFinishedEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setGameplaySceneSyncFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(&::GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
            { "remove_setGameplaySceneSyncFinishedEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetGameplaySceneSyncFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32af504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "SetGameplaySceneSyncFinished", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySceneSyncFinishCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32af570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                { "InvokeSetGameplaySceneSyncFinishCallback",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af58c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "add_setGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "remove_setGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32af70c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "SetGameplaySceneReady", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySceneReadyCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32af770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "InvokeSetGameplaySceneReadyCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_getGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_getGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_getGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                           { "remove_getGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.GetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32af90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "GetGameplaySceneReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeGetGameplaySceneReadyCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32af960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeGetGameplaySceneReadyCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setPlayerDidConnectLateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(
        &::GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32af97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
            { "add_setPlayerDidConnectLateEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setPlayerDidConnectLateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(
        &::GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32afa3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                { "remove_setPlayerDidConnectLateEvent",
                                                  {},
                                                  { ::i2c::type_of<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32afafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
            { "SetPlayerDidConnectLate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*,
                                                                                                       ::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32afb78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "InvokeSetPlayerDidConnectLate",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32afb94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_setGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32afc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_setGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetGameplaySongReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::SetGameplaySongReady)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32afd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "SetGameplaySongReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySongReadyCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32afd68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeSetGameplaySongReadyCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_getGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32afd84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_getGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_getGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32afe44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_getGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.GetGameplaySongReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::GetGameplaySongReady)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32aff04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "GetGameplaySongReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeGetGameplayLevelReadyCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32aff58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeGetGameplayLevelReadyCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setSongStartTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32aff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                           { "add_setSongStartTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setSongStartTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                           { "remove_setSongStartTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetSongStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(int64_t)>(&::GlobalNamespace::GameplayRpcManager::SetSongStartTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b00f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "SetSongStartTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetSongStartTimeCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t)>(&::GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                           { "InvokeSetSongStartTimeCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "add_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "remove_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.NoteSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::NoteSpawned)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32b02f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "NoteSpawned", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeNoteWasSpawnedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeNoteWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeNoteWasSpawnedCallback",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "add_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "remove_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.ObstacleSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::ObstacleSpawned)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32b0504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "ObstacleSpawned", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeObstacleWasSpawnedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeObstacleWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeObstacleWasSpawnedCallback",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "add_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "remove_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SliderSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::SliderSpawned)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32b0714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "SliderSpawned", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSliderWasSpawnedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeSliderWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeSliderWasSpawnedCallback",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b07a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "add_noteWasCutEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "remove_noteWasCutEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.NoteCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::NoteCut)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32b0924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "NoteCut", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeNoteWasCutCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "InvokeNoteWasCutCallback",
                                           {},
                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b09b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                         { "add_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                            { "remove_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.NoteMissed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::NoteMissed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32b0b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                             { "NoteMissed", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteMissInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeNoteWasMissedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeNoteWasMissedCallback",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::GlobalNamespace::NoteMissInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.LevelFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::GameplayRpcManager::LevelFinished)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b0d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                           { "LevelFinished", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeLevelFinishedCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                { "InvokeLevelFinishedCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_returnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_returnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_returnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_returnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.ReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::ReturnToMenu)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b0f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "ReturnToMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeReturnToMenuCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b0f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeReturnToMenuCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_requestReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b0fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_requestReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_requestReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b1074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_requestReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.RequestReturnToMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::RequestReturnToMenu)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b1134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "RequestReturnToMenu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeRequestReturnToMenuCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeRequestReturnToMenuCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b1188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeRequestReturnToMenuCallback", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::RpcHandler_3<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::GameplayRpcManager_RpcType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get__rpcHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr ::GlobalNamespace::RpcHandler_3<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::GameplayRpcManager_RpcType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get__rpcHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set__rpcHandler(
    ::GlobalNamespace::RpcHandler_3<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::GameplayRpcManager_RpcType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rpcHandler = value;
}
constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setGameplaySceneSyncFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneSyncFinishedEvent;
}
constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setGameplaySceneSyncFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneSyncFinishedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_setGameplaySceneSyncFinishedEvent(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setGameplaySceneSyncFinishedEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setGameplaySceneReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneReadyEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setGameplaySceneReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setGameplaySceneReadyEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_getGameplaySceneReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySceneReadyEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_getGameplaySceneReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySceneReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getGameplaySceneReadyEvent = value;
}
constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setPlayerDidConnectLateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayerDidConnectLateEvent;
}
constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setPlayerDidConnectLateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayerDidConnectLateEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_setPlayerDidConnectLateEvent(
    ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setPlayerDidConnectLateEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setGameplaySongReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySongReadyEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setGameplaySongReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySongReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setGameplaySongReadyEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_getGameplaySongReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySongReadyEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_getGameplaySongReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySongReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getGameplaySongReadyEvent = value;
}
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setSongStartTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSongStartTimeEvent;
}
constexpr ::System::Action_2<::StringW, int64_t>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_setSongStartTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSongStartTimeEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setSongStartTimeEvent = value;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_noteWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasSpawnedEvent;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_noteWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasSpawnedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasSpawnedEvent = value;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_obstacleWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasSpawnedEvent;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_obstacleWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasSpawnedEvent;
}
constexpr void
GlobalNamespace::GameplayRpcManager::__cordl_internal_set_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___obstacleWasSpawnedEvent = value;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_sliderWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasSpawnedEvent;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_sliderWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasSpawnedEvent;
}
constexpr void
GlobalNamespace::GameplayRpcManager::__cordl_internal_set_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sliderWasSpawnedEvent = value;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_noteWasCutEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasCutEvent;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_noteWasCutEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasCutEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasCutEvent = value;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_noteWasMissedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasMissedEvent;
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* const&
GlobalNamespace::GameplayRpcManager::__cordl_internal_get_noteWasMissedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasMissedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noteWasMissedEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_levelFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_levelFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelFinishedEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_returnToMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnToMenuEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_returnToMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnToMenuEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___returnToMenuEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_requestReturnToMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestReturnToMenuEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::GameplayRpcManager::__cordl_internal_get_requestReturnToMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestReturnToMenuEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__cordl_internal_set_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestReturnToMenuEvent = value;
}
inline bool GlobalNamespace::GameplayRpcManager::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager);
}
inline void GlobalNamespace::GameplayRpcManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
          { "add_setGameplaySceneSyncFinishedEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
          { "remove_setGameplaySceneSyncFinishedEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                              ::StringW sessionGameId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "SetGameplaySceneSyncFinished", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart,
                                                                                          ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                              { "InvokeSetGameplaySceneSyncFinishCallback",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersAtGameStart, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "add_setGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "remove_setGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "SetGameplaySceneReady", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerSpecificSettings);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback(::StringW userId,
                                                                                     ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "InvokeSetGameplaySceneReadyCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playerSpecificSettingsNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_getGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_getGameplaySceneReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "GetGameplaySceneReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeGetGameplaySceneReadyCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void
GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
          { "add_setPlayerDidConnectLateEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                              { "remove_setPlayerDidConnectLateEvent",
                                                {},
                                                { ::i2c::type_of<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate(::StringW usedId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                         ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
          { "SetPlayerDidConnectLate", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, usedId, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId,
                                                                               ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                               ::StringW sessionGameId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "InvokeSetPlayerDidConnectLate",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, failedUserId, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_setGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_setGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetGameplaySongReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "SetGameplaySongReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeSetGameplaySongReadyCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_getGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_getGameplaySongReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::GetGameplaySongReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "GetGameplaySongReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeGetGameplayLevelReadyCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_setSongStartTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                         { "remove_setSongStartTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetSongStartTime(int64_t startTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "SetSongStartTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startTime);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback(::StringW userId, int64_t startTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                         { "InvokeSetSongStartTimeCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, startTime);
}
inline void GlobalNamespace::GameplayRpcManager::add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "add_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                          { "remove_noteWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "NoteSpawned", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, noteSpawnInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeNoteWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "InvokeNoteWasSpawnedCallback",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteSpawnInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                          { "add_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                          { "remove_obstacleWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "ObstacleSpawned", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, obstacleSpawnInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeObstacleWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                  ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeObstacleWasSpawnedCallback",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, obstacleSpawnInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                          { "add_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                          { "remove_sliderWasSpawnedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "SliderSpawned", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, sliderSpawnInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSliderWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeSliderWasSpawnedCallback",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, sliderSpawnInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                              { "add_noteWasCutEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "remove_noteWasCutEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "NoteCut", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, noteCutInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "InvokeNoteWasCutCallback",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteCutInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteCutInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "add_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "remove_noteWasMissedEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                           { "NoteMissed", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteMissInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songTime, noteMissInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                       { "InvokeNoteWasMissedCallback",
                                         {},
                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteMissInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteMissInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                              { "add_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                              { "remove_levelFinishedEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                                                                         { "LevelFinished", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(),
                                              { "InvokeLevelFinishedCallback", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, results);
}
inline void GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_returnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_returnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "ReturnToMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeReturnToMenuCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameplayRpcManager::add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "add_requestReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "remove_requestReturnToMenuEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::RequestReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "RequestReturnToMenu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeRequestReturnToMenuCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GameplayRpcManager*>(), { "InvokeRequestReturnToMenuCallback", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::GameplayRpcManager* GlobalNamespace::GameplayRpcManager::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameplayRpcManager*>(multiplayerSessionManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::GameplayRpcManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameplayRpcManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameplayRpcManager"
constexpr GlobalNamespace::GameplayRpcManager::operator ::GlobalNamespace::IGameplayRpcManager*() noexcept {
  return static_cast<::GlobalNamespace::IGameplayRpcManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameplayRpcManager"
constexpr ::GlobalNamespace::IGameplayRpcManager* GlobalNamespace::GameplayRpcManager::i___GlobalNamespace__IGameplayRpcManager() noexcept {
  return static_cast<::GlobalNamespace::IGameplayRpcManager*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager::GameplayRpcManager() {}
