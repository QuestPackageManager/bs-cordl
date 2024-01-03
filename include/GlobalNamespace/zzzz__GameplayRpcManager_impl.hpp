#pragma once
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__GameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteMissInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsAtStartNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettingsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_1_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType::__GameplayRpcManager__RpcType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType::__GameplayRpcManager__RpcType() {}
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::SetGameplaySceneSyncFinish{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::SetGameplaySceneReady{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::GetGameplaySceneReady{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::SetActivePlayerFailedToConnect{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::SetGameplaySongReady{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::GetGameplaySongReady{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::SetSongStartTime{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::NoteCut{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::NoteMissed{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::LevelFinished{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::ReturnToMenu{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::RequestReturnToMenu{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::NoteSpawned{ static_cast<uint8_t>(0xcu) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::ObstacleSpawned{ static_cast<uint8_t>(0xdu) };
constexpr ::GlobalNamespace::__GameplayRpcManager__RpcType GlobalNamespace::__GameplayRpcManager__RpcType::SliderSpawned{ static_cast<uint8_t>(0xeu) };
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc* GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc::__GameplayRpcManager__SetGameplaySceneSyncFinishedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc* GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__SetGameplaySceneReadyRpc::__GameplayRpcManager__SetGameplaySceneReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3b884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc* GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__GetGameplaySceneReadyRpc::__GameplayRpcManager__GetGameplaySceneReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b88c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc* GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__SetPlayerDidConnectLateRpc::__GameplayRpcManager__SetPlayerDidConnectLateRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3b8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc* GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__SetGameplaySongReadyRpc::__GameplayRpcManager__SetGameplaySongReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3b8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc* GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__GetGameplaySongReadyRpc::__GameplayRpcManager__GetGameplaySongReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b8e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc* GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__SetSongStartTimeRpc::__GameplayRpcManager__SetSongStartTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b92c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc* GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__NoteSpawnedRpc::__GameplayRpcManager__NoteSpawnedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc* GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__ObstacleSpawnedRpc::__GameplayRpcManager__ObstacleSpawnedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3b9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc* GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__SliderSpawnedRpc::__GameplayRpcManager__SliderSpawnedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__NoteCutRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__NoteCutRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3ba04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__NoteCutRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc* GlobalNamespace::__GameplayRpcManager__NoteCutRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__NoteCutRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__NoteCutRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__NoteCutRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__NoteCutRpc::__GameplayRpcManager__NoteCutRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3ba4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc* GlobalNamespace::__GameplayRpcManager__NoteMissedRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__NoteMissedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__NoteMissedRpc::__GameplayRpcManager__NoteMissedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe3ba94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc* GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__LevelFinishedRpc::__GameplayRpcManager__LevelFinishedRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3badc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc* GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__ReturnToMenuRpc::__GameplayRpcManager__ReturnToMenuRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc::*)()>(
    &::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe3bae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc* GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc*>());
}
inline void GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameplayRpcManager__RequestReturnToMenuRpc::__GameplayRpcManager__RequestReturnToMenuRpc() {}
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::get_enabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe39304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "get_enabled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(bool)>(&::GlobalNamespace::GameplayRpcManager::set_enabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe393c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::IMultiplayerSessionManager*)>(
    &::GlobalNamespace::GameplayRpcManager::_ctor)> {
  constexpr static std::size_t size = 0x750;
  constexpr static std::size_t addrs = 0xe3948c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe39bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setGameplaySceneSyncFinishedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(&::GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe39c38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setGameplaySceneSyncFinishedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setGameplaySceneSyncFinishedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(&::GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe39ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setGameplaySceneSyncFinishedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetGameplaySceneSyncFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(&::GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe39d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetGameplaySceneSyncFinished", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySceneSyncFinishCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe39e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetGameplaySceneSyncFinishCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe39e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setGameplaySceneReadyEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe39ecc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setGameplaySceneReadyEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe39f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetGameplaySceneReady", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySceneReadyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*)>(&::GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe39fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetGameplaySceneReadyCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_getGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe39ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_getGameplaySceneReadyEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_getGameplaySceneReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_getGameplaySceneReadyEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.GetGameplaySceneReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe3a150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                               "GetGameplaySceneReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeGetGameplaySceneReadyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3a1a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeGetGameplaySceneReadyCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setPlayerDidConnectLateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(
        &::GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a1bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setPlayerDidConnectLateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setPlayerDidConnectLateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*)>(
        &::GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setPlayerDidConnectLateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(&::GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe3a31c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetPlayerDidConnectLate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetPlayerDidConnectLate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW)>(&::GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3a38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetPlayerDidConnectLate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a3a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setGameplaySongReadyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a458;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setGameplaySongReadyEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetGameplaySongReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::SetGameplaySongReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe3a508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                               "SetGameplaySongReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetGameplaySongReadyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3a558;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetGameplaySongReadyCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_getGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_getGameplaySongReadyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_getGameplaySongReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_getGameplaySongReadyEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.GetGameplaySongReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::GetGameplaySongReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe3a6d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                               "GetGameplaySongReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeGetGameplayLevelReadyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3a724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeGetGameplayLevelReadyCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_setSongStartTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setSongStartTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_setSongStartTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a7f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setSongStartTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SetSongStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(int64_t)>(&::GlobalNamespace::GameplayRpcManager::SetSongStartTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe3a8a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetSongStartTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSetSongStartTimeCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, int64_t)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3a8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetSongStartTimeCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_noteWasSpawnedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_noteWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_noteWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3a9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_noteWasSpawnedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.NoteSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::NoteSpawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe3aa74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "NoteSpawned", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeNoteWasSpawnedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(&::GlobalNamespace::GameplayRpcManager::InvokeNoteWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3aadc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeNoteWasSpawnedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3aaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_obstacleWasSpawnedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_obstacleWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_obstacleWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3aba8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_obstacleWasSpawnedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.ObstacleSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::ObstacleSpawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe3ac58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "ObstacleSpawned", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeObstacleWasSpawnedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(&::GlobalNamespace::GameplayRpcManager::InvokeObstacleWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3acc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeObstacleWasSpawnedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3acdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_sliderWasSpawnedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_sliderWasSpawnedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_sliderWasSpawnedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3ad8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_sliderWasSpawnedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.SliderSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::SliderSpawned)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe3ae3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SliderSpawned", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeSliderWasSpawnedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(&::GlobalNamespace::GameplayRpcManager::InvokeSliderWasSpawnedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3aea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSliderWasSpawnedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3aec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_noteWasCutEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_noteWasCutEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3af70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_noteWasCutEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.NoteCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::NoteCut)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe3b020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "NoteCut", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeNoteWasCutCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*)>(&::GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3b088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeNoteWasCutCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b0a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_noteWasMissedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_noteWasMissedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b154;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_noteWasMissedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.NoteMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*)>(
    &::GlobalNamespace::GameplayRpcManager::NoteMissed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe3b204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "NoteMissed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteMissInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeNoteWasMissedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*)>(&::GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3b26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeNoteWasMissedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteMissInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_levelFinishedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_levelFinishedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*)>(&::GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b338;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_levelFinishedEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.LevelFinished
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::GameplayRpcManager::LevelFinished)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe3b3e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "LevelFinished", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeLevelFinishedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3b440;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeLevelFinishedCallback", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_returnToMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_returnToMenuEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_returnToMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b50c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_returnToMenuEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.ReturnToMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::ReturnToMenu)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe3b5bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "ReturnToMenu",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeReturnToMenuCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3b60c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeReturnToMenuCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.add_requestReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::add_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_requestReturnToMenuEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.remove_requestReturnToMenuEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::GameplayRpcManager::remove_requestReturnToMenuEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe3b6d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_requestReturnToMenuEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.RequestReturnToMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)()>(&::GlobalNamespace::GameplayRpcManager::RequestReturnToMenu)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe3b788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                               "RequestReturnToMenu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameplayRpcManager.InvokeRequestReturnToMenuCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameplayRpcManager::*)(::StringW)>(
    &::GlobalNamespace::GameplayRpcManager::InvokeRequestReturnToMenuCallback)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe3b7d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeRequestReturnToMenuCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
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
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::GameplayRpcManager::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::GameplayRpcManager::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>*& GlobalNamespace::GameplayRpcManager::__get__rpcHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>*> const&
GlobalNamespace::GameplayRpcManager::__get__rpcHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__GameplayRpcManager__RpcType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rpcHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*& GlobalNamespace::GameplayRpcManager::__get_setGameplaySceneSyncFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneSyncFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*> const&
GlobalNamespace::GameplayRpcManager::__get_setGameplaySceneSyncFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneSyncFinishedEvent;
}
constexpr void
GlobalNamespace::GameplayRpcManager::__set_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setGameplaySceneSyncFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__get_setGameplaySceneReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*> const&
GlobalNamespace::GameplayRpcManager::__get_setGameplaySceneReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySceneReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setGameplaySceneReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__get_getGameplaySceneReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySceneReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::GameplayRpcManager::__get_getGameplaySceneReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySceneReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getGameplaySceneReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*&
GlobalNamespace::GameplayRpcManager::__get_setPlayerDidConnectLateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayerDidConnectLateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*> const&
GlobalNamespace::GameplayRpcManager::__get_setPlayerDidConnectLateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayerDidConnectLateEvent;
}
constexpr void
GlobalNamespace::GameplayRpcManager::__set_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setPlayerDidConnectLateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__get_setGameplaySongReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySongReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::GameplayRpcManager::__get_setGameplaySongReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setGameplaySongReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setGameplaySongReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__get_getGameplaySongReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySongReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::GameplayRpcManager::__get_getGameplaySongReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getGameplaySongReadyEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getGameplaySongReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::GameplayRpcManager::__get_setSongStartTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSongStartTimeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& GlobalNamespace::GameplayRpcManager::__get_setSongStartTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSongStartTimeEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setSongStartTimeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__get_noteWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasSpawnedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*> const&
GlobalNamespace::GameplayRpcManager::__get_noteWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasSpawnedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noteWasSpawnedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__get_obstacleWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasSpawnedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*> const&
GlobalNamespace::GameplayRpcManager::__get_obstacleWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___obstacleWasSpawnedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___obstacleWasSpawnedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__get_sliderWasSpawnedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasSpawnedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*> const&
GlobalNamespace::GameplayRpcManager::__get_sliderWasSpawnedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sliderWasSpawnedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sliderWasSpawnedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__get_noteWasCutEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasCutEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*> const&
GlobalNamespace::GameplayRpcManager::__get_noteWasCutEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasCutEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noteWasCutEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*& GlobalNamespace::GameplayRpcManager::__get_noteWasMissedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasMissedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*> const&
GlobalNamespace::GameplayRpcManager::__get_noteWasMissedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noteWasMissedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___noteWasMissedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*& GlobalNamespace::GameplayRpcManager::__get_levelFinishedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*> const&
GlobalNamespace::GameplayRpcManager::__get_levelFinishedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__get_returnToMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnToMenuEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::GameplayRpcManager::__get_returnToMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___returnToMenuEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___returnToMenuEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::GameplayRpcManager::__get_requestReturnToMenuEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestReturnToMenuEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::GameplayRpcManager::__get_requestReturnToMenuEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestReturnToMenuEvent;
}
constexpr void GlobalNamespace::GameplayRpcManager::__set_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestReturnToMenuEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::GameplayRpcManager::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "get_enabled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayRpcManager* GlobalNamespace::GameplayRpcManager::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameplayRpcManager*>(multiplayerSessionManager));
}
inline void GlobalNamespace::GameplayRpcManager::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager);
}
inline void GlobalNamespace::GameplayRpcManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setGameplaySceneSyncFinishedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent(::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setGameplaySceneSyncFinishedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished(::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                              ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetGameplaySceneSyncFinished", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback(::StringW userId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStart,
                                                                                          ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetGameplaySceneSyncFinishCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playersAtGameStart, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setGameplaySceneReadyEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setGameplaySceneReadyEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady(::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetGameplaySceneReady", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerSpecificSettings);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback(::StringW userId,
                                                                                     ::GlobalNamespace::PlayerSpecificSettingsNetSerializable* playerSpecificSettingsNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetGameplaySceneReadyCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playerSpecificSettingsNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_getGameplaySceneReadyEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_getGameplaySceneReadyEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                             "GetGameplaySceneReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeGetGameplaySceneReadyCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void
GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setPlayerDidConnectLateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent(::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setPlayerDidConnectLateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, ::StringW, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate(::StringW usedId, ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                         ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetPlayerDidConnectLate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, usedId, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate(::StringW userId, ::StringW failedUserId,
                                                                               ::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable* playersAtGameStartNetSerializable,
                                                                               ::StringW sessionGameId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetPlayerDidConnectLate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettingsAtStartNetSerializable*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, failedUserId, playersAtGameStartNetSerializable, sessionGameId);
}
inline void GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setGameplaySongReadyEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setGameplaySongReadyEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetGameplaySongReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                             "SetGameplaySongReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetGameplaySongReadyCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_getGameplaySongReadyEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_getGameplaySongReadyEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::GetGameplaySongReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                             "GetGameplaySongReady", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeGetGameplayLevelReadyCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_setSongStartTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_setSongStartTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SetSongStartTime(int64_t startTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SetSongStartTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startTime);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback(::StringW userId, int64_t startTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSetSongStartTimeCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, startTime);
}
inline void GlobalNamespace::GameplayRpcManager::add_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_noteWasSpawnedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_noteWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_noteWasSpawnedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::NoteSpawned(float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "NoteSpawned", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, noteSpawnInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeNoteWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeNoteWasSpawnedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, noteSpawnInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_obstacleWasSpawnedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_obstacleWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_obstacleWasSpawnedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::ObstacleSpawned(float_t songTime, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "ObstacleSpawned", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, obstacleSpawnInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeObstacleWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                  ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeObstacleWasSpawnedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, obstacleSpawnInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_sliderWasSpawnedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_sliderWasSpawnedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_sliderWasSpawnedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::SliderSpawned(float_t songTime, ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "SliderSpawned", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, sliderSpawnInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeSliderWasSpawnedCallback(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeSliderWasSpawnedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, sliderSpawnInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_noteWasCutEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_noteWasCutEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteCutInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::NoteCut(float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "NoteCut", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, noteCutInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeNoteWasCutCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, noteCutInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_noteWasMissedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent(::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_noteWasMissedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_4<::StringW, int64_t, float_t, ::GlobalNamespace::NoteMissInfoNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::NoteMissed(float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "NoteMissed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteMissInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime, noteMissInfoNetSerializable);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback(::StringW userId, int64_t syncTime, float_t songTime, ::GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeNoteWasMissedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteMissInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, noteMissInfo);
}
inline void GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_levelFinishedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_levelFinishedEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::LevelFinished(::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "LevelFinished", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback(::StringW userId, ::GlobalNamespace::MultiplayerLevelCompletionResults* results) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeLevelFinishedCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerLevelCompletionResults*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, results);
}
inline void GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_returnToMenuEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_returnToMenuEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::ReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "ReturnToMenu",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeReturnToMenuCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::GameplayRpcManager::add_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "add_requestReturnToMenuEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::remove_requestReturnToMenuEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "remove_requestReturnToMenuEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameplayRpcManager::RequestReturnToMenu() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(),
                                                                             "RequestReturnToMenu", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameplayRpcManager::InvokeRequestReturnToMenuCallback(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayRpcManager*>::get(), "InvokeRequestReturnToMenuCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayRpcManager::GameplayRpcManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
