#pragma once
// IWYU pragma private; include "GlobalNamespace\MenuRpcManager.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKeyNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__NetworkMessageType_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_3_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MenuRpcManager_RpcType::MenuRpcManager_RpcType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_RpcType::MenuRpcManager_RpcType() {}
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetPlayersMissingEntitlementsToLevel{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetIsEntitledToLevel{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetIsEntitledToLevel{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::InvalidateLevelEntitlementStatuses{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SelectLevelPack{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetSelectedBeatmap{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetSelectedBeatmap{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::RecommendBeatmap{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::ClearRecommendedBeatmap{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetRecommendedBeatmap{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetSelectedGameplayModifiers{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetSelectedGameplayModifiers{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::RecommendGameplayModifiers{ static_cast<uint8_t>(0xcu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::ClearRecommendedGameplayModifiers{ static_cast<uint8_t>(0xdu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetRecommendedGameplayModifiers{ static_cast<uint8_t>(0xeu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::LevelLoadError{ static_cast<uint8_t>(0xfu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::LevelLoadSuccess{ static_cast<uint8_t>(0x10u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::StartLevel{ static_cast<uint8_t>(0x11u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetStartedLevel{ static_cast<uint8_t>(0x12u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::CancelLevelStart{ static_cast<uint8_t>(0x13u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetMultiplayerGameState{ static_cast<uint8_t>(0x14u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetMultiplayerGameState{ static_cast<uint8_t>(0x15u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetIsReady{ static_cast<uint8_t>(0x16u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetIsReady{ static_cast<uint8_t>(0x17u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetStartGameTime{ static_cast<uint8_t>(0x18u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::CancelStartGameTime{ static_cast<uint8_t>(0x19u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetIsInLobby{ static_cast<uint8_t>(0x1au) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetIsInLobby{ static_cast<uint8_t>(0x1bu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetCountdownEndTime{ static_cast<uint8_t>(0x1cu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetCountdownEndTime{ static_cast<uint8_t>(0x1du) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::CancelCountdown{ static_cast<uint8_t>(0x1eu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetOwnedSongPacks{ static_cast<uint8_t>(0x1fu) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetOwnedSongPacks{ static_cast<uint8_t>(0x20u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::RequestKickPlayer{ static_cast<uint8_t>(0x21u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetPermissionConfiguration{ static_cast<uint8_t>(0x22u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetPermissionConfiguration{ static_cast<uint8_t>(0x23u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::GetIsStartButtonEnabled{ static_cast<uint8_t>(0x24u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::SetIsStartButtonEnabled{ static_cast<uint8_t>(0x25u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::ClearSelectedBeatmap{ static_cast<uint8_t>(0x26u) };
constexpr ::GlobalNamespace::MenuRpcManager_RpcType GlobalNamespace::MenuRpcManager_RpcType::ClearSelectedGameplayModifiers{ static_cast<uint8_t>(0x27u) };
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc* GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetPlayersPermissionConfigurationRpc::MenuRpcManager_GetPlayersPermissionConfigurationRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b819c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc* GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetPlayersPermissionConfigurationRpc::MenuRpcManager_SetPlayersPermissionConfigurationRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b81e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc* GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc::MenuRpcManager_SetPlayersMissingEntitlementsToLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc* GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetIsEntitledToLevelRpc::MenuRpcManager_GetIsEntitledToLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc* GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetIsEntitledToLevelRpc::MenuRpcManager_SetIsEntitledToLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b82cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc* GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc::MenuRpcManager_InvalidateLevelEntitlementStatusesRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b82d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SelectLevelPackRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc* GlobalNamespace::MenuRpcManager_SelectLevelPackRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SelectLevelPackRpc::MenuRpcManager_SelectLevelPackRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b831c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc* GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetSelectedBeatmapRpc::MenuRpcManager_SetSelectedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc::*)()>(&::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc* GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_ClearSelectedBeatmapRpc::MenuRpcManager_ClearSelectedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b836c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc* GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetSelectedBeatmapRpc::MenuRpcManager_GetSelectedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc::*)()>(&::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc* GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_RecommendBeatmapRpc::MenuRpcManager_RecommendBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b83bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc* GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_ClearRecommendedBeatmapRpc::MenuRpcManager_ClearRecommendedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b83c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc* GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetRecommendedBeatmapRpc::MenuRpcManager_GetRecommendedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b83c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc* GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetSelectedGameplayModifiersRpc::MenuRpcManager_SetSelectedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc* GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_ClearSelectedGameplayModifiersRpc::MenuRpcManager_ClearSelectedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc* GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetSelectedGameplayModifiersRpc::MenuRpcManager_GetSelectedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc* GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_RecommendGameplayModifiersRpc::MenuRpcManager_RecommendGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc* GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_ClearRecommendedGameplayModifiersRpc::MenuRpcManager_ClearRecommendedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc* GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetRecommendedGameplayModifiersRpc::MenuRpcManager_GetRecommendedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc* GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetIsStartButtonEnabledRpc::MenuRpcManager_GetIsStartButtonEnabledRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc* GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetIsStartButtonEnabledRpc::MenuRpcManager_SetIsStartButtonEnabledRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc::*)()>(&::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b84bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc* GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_LevelLoadErrorRpc::MenuRpcManager_LevelLoadErrorRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc::*)()>(&::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc* GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_LevelLoadSuccessRpc::MenuRpcManager_LevelLoadSuccessRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_StartLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_StartLevelRpc::*)()>(&::GlobalNamespace::MenuRpcManager_StartLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_StartLevelRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_StartLevelRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_StartLevelRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_StartLevelRpc* GlobalNamespace::MenuRpcManager_StartLevelRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_StartLevelRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_StartLevelRpc::MenuRpcManager_StartLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b85a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetStartedLevelRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc* GlobalNamespace::MenuRpcManager_GetStartedLevelRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetStartedLevelRpc::MenuRpcManager_GetStartedLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b85a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc* GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetMultiplayerGameStateRpc::MenuRpcManager_GetMultiplayerGameStateRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc::*)()>(
    &::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b85a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc* GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetMultiplayerGameStateRpc::MenuRpcManager_SetMultiplayerGameStateRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_CancelCountdownRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_CancelCountdownRpc::*)()>(&::GlobalNamespace::MenuRpcManager_CancelCountdownRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b85f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_CancelCountdownRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_CancelCountdownRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_CancelCountdownRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_CancelCountdownRpc* GlobalNamespace::MenuRpcManager_CancelCountdownRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_CancelCountdownRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_CancelCountdownRpc::MenuRpcManager_CancelCountdownRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b85f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc* GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetCountdownEndTimeRpc::MenuRpcManager_SetCountdownEndTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc* GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetCountdownEndTimeRpc::MenuRpcManager_GetCountdownEndTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc::*)()>(&::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_CancelLevelStartRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc* GlobalNamespace::MenuRpcManager_CancelLevelStartRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_CancelLevelStartRpc::MenuRpcManager_CancelLevelStartRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetIsReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetIsReadyRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetIsReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b864c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsReadyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetIsReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsReadyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetIsReadyRpc* GlobalNamespace::MenuRpcManager_GetIsReadyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetIsReadyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetIsReadyRpc::MenuRpcManager_GetIsReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetIsReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetIsReadyRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetIsReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsReadyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetIsReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsReadyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetIsReadyRpc* GlobalNamespace::MenuRpcManager_SetIsReadyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetIsReadyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetIsReadyRpc::MenuRpcManager_SetIsReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b869c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc* GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetStartGameTimeRpc::MenuRpcManager_SetStartGameTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc::*)()>(&::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b86e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc* GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_CancelStartGameTimeRpc::MenuRpcManager_CancelStartGameTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b86ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc* GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetIsInLobbyRpc::MenuRpcManager_GetIsInLobbyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b86f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc* GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetIsInLobbyRpc::MenuRpcManager_SetIsInLobbyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc::*)()>(&::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b873c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc* GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_GetOwnedSongPacksRpc::MenuRpcManager_GetOwnedSongPacksRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc::*)()>(&::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b8740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc* GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_SetOwnedSongPacksRpc::MenuRpcManager_SetOwnedSongPacksRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc::*)()>(&::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32b878c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc* GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager_RequestKickPlayerRpc::MenuRpcManager_RequestKickPlayerRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_multiplayerSessionManager
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatSaberMultiplayerSessionManager* (::GlobalNamespace::MenuRpcManager::*)()>(
    &::GlobalNamespace::MenuRpcManager::get_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b2d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_multiplayerSessionManager", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::get_enabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32b2d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(bool)>(&::GlobalNamespace::MenuRpcManager::set_enabled)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32b2dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_enabledForAllPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::get_enabledForAllPlayers)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x32b2ec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_enabledForAllPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_syncTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::get_syncTime)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32b30b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_syncTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::IBeatSaberMultiplayerSessionManager*)>(
    &::GlobalNamespace::MenuRpcManager::_ctor)> {
  constexpr static std::size_t size = 0x1218;
  constexpr static std::size_t addrs = 0x32b19ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x32b315c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.EnabledForPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::MenuRpcManager::EnabledForPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32b31bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "EnabledForPlayer", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b3400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetPlayersPermissionConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b3454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::add_setPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "add_setPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::remove_setPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "remove_setPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b35f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "SetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b3654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "InvokeSetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setPlayersMissingEntitlementsToLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setPlayersMissingEntitlementsToLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "add_setPlayersMissingEntitlementsToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setPlayersMissingEntitlementsToLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setPlayersMissingEntitlementsToLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3730;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "remove_setPlayersMissingEntitlementsToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetPlayersMissingEntitlementsToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::SetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b37f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "SetPlayersMissingEntitlementsToLevel", {}, { ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetPlayersMissingEntitlementsToLevelRpc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetPlayersMissingEntitlementsToLevelRpc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b3854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                         { "InvokeSetPlayersMissingEntitlementsToLevelRpc", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_getIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::GetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b39f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b3a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_setIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_setIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::EntitlementsStatus)>(
    &::GlobalNamespace::MenuRpcManager::SetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32b3bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "SetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EntitlementsStatus>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW, int32_t)>(&::GlobalNamespace::MenuRpcManager::InvokeSetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b3c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeSetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_levelEntitlementStatusesInvalidatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_levelEntitlementStatusesInvalidatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_levelEntitlementStatusesInvalidatedEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_levelEntitlementStatusesInvalidatedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_levelEntitlementStatusesInvalidatedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_levelEntitlementStatusesInvalidatedEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvalidateLevelEntitlementStatuses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatuses)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b3df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvalidateLevelEntitlementStatuses", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeLevelEntitlementStatusesInvalidated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeLevelEntitlementStatusesInvalidated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b3e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeLevelEntitlementStatusesInvalidated", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_selectedLevelPackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_selectedLevelPackEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_selectedLevelPackEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_selectedLevelPackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_selectedLevelPackEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b3f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "remove_selectedLevelPackEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SelectLevelPack
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::SelectLevelPack)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b3fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SelectLevelPack", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeOnSelectedLevelPackEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeOnSelectedLevelPackEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b404c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "InvokeOnSelectedLevelPackEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_setSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_setSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::SetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b41e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetSelectedBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b424c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeSetSelectedBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_clearSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b43e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearSelectedBeatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b443c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearSelectedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_getSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b45d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetSelectedBeatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetSelectedBeatmapRpc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetSelectedBeatmapRpc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b462c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetSelectedBeatmapRpc", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_recommendBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_recommendBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_recommendBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_recommendBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_recommendBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_recommendBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.RecommendBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::RecommendBeatmap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b47c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "RecommendBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeRecommendBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeRecommendBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b482c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeRecommendBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_clearRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b49c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearRecommendedBeatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeClearRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b4a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearRecommendedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b4bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetRecommendedBeatmap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b4c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetRecommendedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_setSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_setSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::SetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b4da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetSelectedGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b4e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeSetSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_clearSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b4ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b4fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearSelectedGameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b4ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_getSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b50d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "remove_getSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b5198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetSelectedGameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b51ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_recommendGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_recommendGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_recommendGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_recommendGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_recommendGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b52c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_recommendGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.RecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::RecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b5388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "RecommendGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeRecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeRecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b53ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeRecommendGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_clearRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b54c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b5588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearRecommendedGameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeClearRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b55dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b55f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_getRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b56b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b5778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetRecommendedGameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b57cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b57e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b58a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b5968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsStartButtonEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b59bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsStartButtonEnabled", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b59d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_setIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_setIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::MenuRpcManager::SetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b5b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetIsStartButtonEnabled", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b5bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeSetIsStartButtonEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_levelLoadErrorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_levelLoadErrorEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5bd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_levelLoadErrorEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_levelLoadErrorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_levelLoadErrorEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "remove_levelLoadErrorEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.LevelLoadError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::LevelLoadError)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b5d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "LevelLoadError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeLevelLoadError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeLevelLoadError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b5dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeLevelLoadError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_levelLoadSuccessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_levelLoadSuccessEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_levelLoadSuccessEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_levelLoadSuccessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_levelLoadSuccessEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "remove_levelLoadSuccessEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.LevelLoadSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::LevelLoadSuccess)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b5f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "LevelLoadSuccess", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeLevelLoadSuccess
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeLevelLoadSuccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b5fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeLevelLoadSuccess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_startedLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*)>(&::GlobalNamespace::MenuRpcManager::add_startedLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b5fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "add_startedLevelEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_startedLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*)>(&::GlobalNamespace::MenuRpcManager::remove_startedLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "remove_startedLevelEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.StartLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t)>(
    &::GlobalNamespace::MenuRpcManager::StartLevel)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32b6158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
            { "StartLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeStartLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*,
                                                                                                   int64_t)>(&::GlobalNamespace::MenuRpcManager::InvokeStartLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b61d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeStartLevel",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(),
                                                                                                           ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getStartedLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_getStartedLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b61f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getStartedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getStartedLevelEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::remove_getStartedLevelEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b62b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getStartedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetStartedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetStartedLevel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b6370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetStartedLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetStartedLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetStartedLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b63c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetStartedLevel", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b63e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b64a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b6560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetMultiplayerGameState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b65b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetMultiplayerGameState", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b65d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "add_setMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                { "remove_setMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::MenuRpcManager::SetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b6750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetMultiplayerGameState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b67b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeSetMultiplayerGameState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_cancelCountdownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_cancelCountdownEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b67d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_cancelCountdownEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_cancelCountdownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::remove_cancelCountdownEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_cancelCountdownEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.CancelCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::CancelCountdown)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b6950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "CancelCountdown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeCancelCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeCancelCountdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b69a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeCancelCountdown", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b69c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_setCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "remove_setCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(int64_t)>(&::GlobalNamespace::MenuRpcManager::SetCountdownEndTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b6b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetCountdownEndTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, int64_t)>(&::GlobalNamespace::MenuRpcManager::InvokeSetCountdownEndTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b6ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetCountdownEndTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_getCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6bc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetCountdownEndTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b6d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetCountdownEndTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetCountdownEndTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetCountdownEndTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b6d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetCountdownEndTime", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_cancelledLevelStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_cancelledLevelStartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_cancelledLevelStartEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_cancelledLevelStartEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_cancelledLevelStartEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_cancelledLevelStartEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.CancelLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::CancelLevelStart)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b6f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "CancelLevelStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeCancelLevelStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeCancelLevelStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b6f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeCancelLevelStart", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_getIsReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b6fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getIsReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::remove_getIsReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetIsReady)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b7120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsReady", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetIsReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b7174;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsReady", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(&::GlobalNamespace::MenuRpcManager::add_setIsReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setIsReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsReadyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(&::GlobalNamespace::MenuRpcManager::remove_setIsReadyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_setIsReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(bool)>(&::GlobalNamespace::MenuRpcManager::SetIsReady)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b7310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetIsReady", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsReady
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, bool)>(&::GlobalNamespace::MenuRpcManager::InvokeSetIsReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32b7374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetIsReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "remove_setStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetStartGameTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(int64_t)>(&::GlobalNamespace::MenuRpcManager::SetStartGameTime)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b7514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetStartGameTime", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetStartGameCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, int64_t)>(&::GlobalNamespace::MenuRpcManager::InvokeSetStartGameCountdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b7578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetStartGameCountdown", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_cancelStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_cancelStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_cancelStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_cancelStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_cancelStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_cancelStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.CancelStartGameTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::CancelStartGameTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b7714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "CancelStartGameTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeCancelStartGameCountdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeCancelStartGameCountdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b7768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeCancelStartGameCountdown", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_getIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::remove_getIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetIsInLobby)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b7904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsInLobby", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetIsInLobby)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b7958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsInLobby", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(&::GlobalNamespace::MenuRpcManager::add_setIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_setIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(bool)>(&::GlobalNamespace::MenuRpcManager::SetIsInLobby)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b7af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetIsInLobby", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsInLobby
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, bool)>(&::GlobalNamespace::MenuRpcManager::InvokeSetIsInLobby)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32b7b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetIsInLobby", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MenuRpcManager::add_getOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x32b7cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetOwnedSongPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b7d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetOwnedSongPacks", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "add_setOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "remove_setOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::SongPackMask)>(&::GlobalNamespace::MenuRpcManager::SetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32b7ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetOwnedSongPacks", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32b7f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                             { "InvokeSetOwnedSongPacks", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_requestedKickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_requestedKickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b7f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                           { "add_requestedKickPlayerEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_requestedKickPlayerEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_requestedKickPlayerEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32b8058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_requestedKickPlayerEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.RequestKickPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::RequestKickPlayer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32b8118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "RequestKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeKickPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeKickPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32b817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeKickPlayer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*& GlobalNamespace::MenuRpcManager::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerSessionManager = value;
}
constexpr ::GlobalNamespace::RpcHandler_3<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::MenuRpcManager_RpcType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*&
GlobalNamespace::MenuRpcManager::__cordl_internal_get__rpcHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr ::GlobalNamespace::RpcHandler_3<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::MenuRpcManager_RpcType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::MenuRpcManager::__cordl_internal_get__rpcHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set__rpcHandler(
    ::GlobalNamespace::RpcHandler_3<::GlobalNamespace::NetworkMessageType, ::GlobalNamespace::MenuRpcManager_RpcType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rpcHandler = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getPlayersPermissionConfigurationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getPlayersPermissionConfigurationEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getPlayersPermissionConfigurationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getPlayersPermissionConfigurationEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getPlayersPermissionConfigurationEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*&
GlobalNamespace::MenuRpcManager::__cordl_internal_get_setPlayersPermissionConfigurationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersPermissionConfigurationEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* const&
GlobalNamespace::MenuRpcManager::__cordl_internal_get_setPlayersPermissionConfigurationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersPermissionConfigurationEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setPlayersPermissionConfigurationEvent(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setPlayersPermissionConfigurationEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*&
GlobalNamespace::MenuRpcManager::__cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersMissingEntitlementsToLevelEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* const&
GlobalNamespace::MenuRpcManager::__cordl_internal_get_setPlayersMissingEntitlementsToLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersMissingEntitlementsToLevelEvent;
}
constexpr void
GlobalNamespace::MenuRpcManager::__cordl_internal_set_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setPlayersMissingEntitlementsToLevelEvent = value;
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsEntitledToLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsEntitledToLevelEvent;
}
constexpr ::System::Action_2<::StringW, ::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsEntitledToLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsEntitledToLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getIsEntitledToLevelEvent = value;
}
constexpr ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsEntitledToLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsEntitledToLevelEvent;
}
constexpr ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsEntitledToLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsEntitledToLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setIsEntitledToLevelEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_levelEntitlementStatusesInvalidatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEntitlementStatusesInvalidatedEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_levelEntitlementStatusesInvalidatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEntitlementStatusesInvalidatedEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelEntitlementStatusesInvalidatedEvent = value;
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_selectedLevelPackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLevelPackEvent;
}
constexpr ::System::Action_2<::StringW, ::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_selectedLevelPackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLevelPackEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectedLevelPackEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setSelectedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedBeatmapEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setSelectedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setSelectedBeatmapEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearSelectedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedBeatmapEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearSelectedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearSelectedBeatmapEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getSelectedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedBeatmapEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getSelectedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getSelectedBeatmapEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_recommendBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendBeatmapEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_recommendBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recommendBeatmapEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearRecommendedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedBeatmapEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearRecommendedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearRecommendedBeatmapEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getRecommendedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedBeatmapEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getRecommendedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getRecommendedBeatmapEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setSelectedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedGameplayModifiersEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setSelectedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setSelectedGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearSelectedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedGameplayModifiersEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearSelectedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearSelectedGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getSelectedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedGameplayModifiersEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getSelectedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getSelectedGameplayModifiersEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_recommendGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendGameplayModifiersEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_recommendGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recommendGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearRecommendedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedGameplayModifiersEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_clearRecommendedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearRecommendedGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getRecommendedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedGameplayModifiersEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getRecommendedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getRecommendedGameplayModifiersEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsStartButtonEnabledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsStartButtonEnabledEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsStartButtonEnabledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsStartButtonEnabledEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getIsStartButtonEnabledEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsStartButtonEnabledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsStartButtonEnabledEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsStartButtonEnabledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsStartButtonEnabledEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setIsStartButtonEnabledEvent = value;
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_levelLoadErrorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadErrorEvent;
}
constexpr ::System::Action_2<::StringW, ::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_levelLoadErrorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadErrorEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelLoadErrorEvent = value;
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_levelLoadSuccessEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadSuccessEvent;
}
constexpr ::System::Action_2<::StringW, ::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_levelLoadSuccessEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadSuccessEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelLoadSuccessEvent = value;
}
constexpr ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*&
GlobalNamespace::MenuRpcManager::__cordl_internal_get_startedLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startedLevelEvent;
}
constexpr ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* const&
GlobalNamespace::MenuRpcManager::__cordl_internal_get_startedLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startedLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_startedLevelEvent(
    ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startedLevelEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getStartedLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getStartedLevelEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getStartedLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getStartedLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getStartedLevelEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getStartedLevelEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getMultiplayerGameStateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getMultiplayerGameStateEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getMultiplayerGameStateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getMultiplayerGameStateEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getMultiplayerGameStateEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setMultiplayerGameStateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setMultiplayerGameStateEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setMultiplayerGameStateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setMultiplayerGameStateEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setMultiplayerGameStateEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_cancelCountdownEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelCountdownEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_cancelCountdownEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelCountdownEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_cancelCountdownEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelCountdownEvent = value;
}
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setCountdownEndTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setCountdownEndTimeEvent;
}
constexpr ::System::Action_2<::StringW, int64_t>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setCountdownEndTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setCountdownEndTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setCountdownEndTimeEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getCountdownEndTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getCountdownEndTimeEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getCountdownEndTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getCountdownEndTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getCountdownEndTimeEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_cancelledLevelStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelledLevelStartEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_cancelledLevelStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelledLevelStartEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_cancelledLevelStartEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelledLevelStartEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsReadyEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsReadyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getIsReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getIsReadyEvent = value;
}
constexpr ::System::Action_2<::StringW, bool>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsReadyEvent;
}
constexpr ::System::Action_2<::StringW, bool>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsReadyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setIsReadyEvent(::System::Action_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setIsReadyEvent = value;
}
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setStartGameTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setStartGameTimeEvent;
}
constexpr ::System::Action_2<::StringW, int64_t>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setStartGameTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setStartGameTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setStartGameTimeEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_cancelStartGameTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelStartGameTimeEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_cancelStartGameTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelStartGameTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelStartGameTimeEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsInLobbyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsInLobbyEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getIsInLobbyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsInLobbyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getIsInLobbyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getIsInLobbyEvent = value;
}
constexpr ::System::Action_2<::StringW, bool>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsInLobbyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsInLobbyEvent;
}
constexpr ::System::Action_2<::StringW, bool>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setIsInLobbyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsInLobbyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setIsInLobbyEvent = value;
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getOwnedSongPacksEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getOwnedSongPacksEvent;
}
constexpr ::System::Action_1<::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_getOwnedSongPacksEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getOwnedSongPacksEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___getOwnedSongPacksEvent = value;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setOwnedSongPacksEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setOwnedSongPacksEvent;
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_setOwnedSongPacksEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setOwnedSongPacksEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___setOwnedSongPacksEvent = value;
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__cordl_internal_get_requestedKickPlayerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedKickPlayerEvent;
}
constexpr ::System::Action_2<::StringW, ::StringW>* const& GlobalNamespace::MenuRpcManager::__cordl_internal_get_requestedKickPlayerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedKickPlayerEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__cordl_internal_set_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___requestedKickPlayerEvent = value;
}
inline ::GlobalNamespace::IBeatSaberMultiplayerSessionManager* GlobalNamespace::MenuRpcManager::get_multiplayerSessionManager() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_multiplayerSessionManager", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(this, ___internal_method);
}
inline bool GlobalNamespace::MenuRpcManager::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::set_enabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MenuRpcManager::get_enabledForAllPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_enabledForAllPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MenuRpcManager::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "get_syncTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager);
}
inline void GlobalNamespace::MenuRpcManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MenuRpcManager::EnabledForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "EnabledForPlayer", {}, { ::i2c::type_of<::GlobalNamespace::IConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::MenuRpcManager::add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "add_getPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetPlayersPermissionConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetPlayersPermissionConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetPlayersPermissionConfiguration(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
          { "add_setPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MenuRpcManager::remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
          { "remove_setPlayersPermissionConfigurationEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "SetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersPermissionConfiguration);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetPlayersPermissionConfiguration(::StringW userId,
                                                                                     ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                       { "InvokeSetPlayersPermissionConfiguration", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersPermissionConfiguration);
}
inline void GlobalNamespace::MenuRpcManager::add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                       { "add_setPlayersMissingEntitlementsToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
          { "remove_setPlayersMissingEntitlementsToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "SetPlayersMissingEntitlementsToLevel", {}, { ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersMissingEntitlements);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetPlayersMissingEntitlementsToLevelRpc(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                          { "InvokeSetPlayersMissingEntitlementsToLevelRpc", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, playersMissingEntitlements);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "add_getIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_getIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsEntitledToLevel(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsEntitledToLevel(::StringW userId, ::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, levelId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "add_setIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_setIsEntitledToLevelEvent", {}, { ::i2c::type_of<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "SetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::EntitlementsStatus>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelId, entitlementStatus);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsEntitledToLevel(::StringW userId, ::StringW levelId, int32_t entitlementStatus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeSetIsEntitledToLevel", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, levelId, entitlementStatus);
}
inline void GlobalNamespace::MenuRpcManager::add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_levelEntitlementStatusesInvalidatedEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_levelEntitlementStatusesInvalidatedEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatuses() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvalidateLevelEntitlementStatuses", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeLevelEntitlementStatusesInvalidated(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeLevelEntitlementStatusesInvalidated", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_selectedLevelPackEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_selectedLevelPackEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SelectLevelPack(::StringW levelPackId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SelectLevelPack", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelPackId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeOnSelectedLevelPackEvent(::StringW userId, ::StringW levelPackId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeOnSelectedLevelPackEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, levelPackId);
}
inline void GlobalNamespace::MenuRpcManager::add_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "add_setSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_setSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetSelectedBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetSelectedBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeSetSelectedBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, key);
}
inline void GlobalNamespace::MenuRpcManager::add_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_clearSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearSelectedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearSelectedBeatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearSelectedBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearSelectedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getSelectedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetSelectedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetSelectedBeatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetSelectedBeatmapRpc(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetSelectedBeatmapRpc", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "add_recommendBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_recommendBeatmapEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::RecommendBeatmap(::GlobalNamespace::BeatmapKeyNetSerializable* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "RecommendBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void GlobalNamespace::MenuRpcManager::InvokeRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeRecommendBeatmap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, key);
}
inline void GlobalNamespace::MenuRpcManager::add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_clearRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearRecommendedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearRecommendedBeatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearRecommendedBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearRecommendedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getRecommendedBeatmapEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetRecommendedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetRecommendedBeatmap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetRecommendedBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetRecommendedBeatmap", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "add_setSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_setSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetSelectedGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeSetSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "add_clearSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_clearSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearSelectedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearSelectedGameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearSelectedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_getSelectedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetSelectedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetSelectedGameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetSelectedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetSelectedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "add_recommendGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_recommendGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "RecommendGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::InvokeRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeRecommendGameplayModifiers", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "add_clearRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_clearRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearRecommendedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "ClearRecommendedGameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearRecommendedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeClearRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "add_getRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_getRecommendedGameplayModifiersEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetRecommendedGameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetRecommendedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetRecommendedGameplayModifiers", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsStartButtonEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsStartButtonEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsStartButtonEnabled(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsStartButtonEnabled", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "add_setIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_setIsStartButtonEnabledEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetIsStartButtonEnabled", {}, { ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason reason) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeSetIsStartButtonEnabled", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::CannotStartGameReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, reason);
}
inline void GlobalNamespace::MenuRpcManager::add_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_levelLoadErrorEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_levelLoadErrorEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::LevelLoadError(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "LevelLoadError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeLevelLoadError(::StringW userId, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeLevelLoadError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, levelId);
}
inline void GlobalNamespace::MenuRpcManager::add_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_levelLoadSuccessEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_levelLoadSuccessEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::LevelLoadSuccess(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "LevelLoadSuccess", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeLevelLoadSuccess(::StringW userId, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeLevelLoadSuccess", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, levelId);
}
inline void
GlobalNamespace::MenuRpcManager::add_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
          { "add_startedLevelEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MenuRpcManager::remove_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
          { "remove_startedLevelEvent", {}, { ::i2c::type_of<::System::Action_4<::StringW, ::GlobalNamespace::BeatmapKeyNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::StartLevel(::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                        int64_t startTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                       { "StartLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapKeySerializable, gameplayModifiers, startTime);
}
inline void GlobalNamespace::MenuRpcManager::InvokeStartLevel(::StringW userId, ::GlobalNamespace::BeatmapKeyNetSerializable* beatmapKeySerializable,
                                                              ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeStartLevel",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapKeyNetSerializable*>(),
                                                                                                         ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, beatmapKeySerializable, gameplayModifiers, startTime);
}
inline void GlobalNamespace::MenuRpcManager::add_getStartedLevelEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getStartedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getStartedLevelEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getStartedLevelEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetStartedLevel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetStartedLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetStartedLevel(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetStartedLevel", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetMultiplayerGameState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetMultiplayerGameState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetMultiplayerGameState(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetMultiplayerGameState", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "add_setMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                              { "remove_setMultiplayerGameStateEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetMultiplayerGameState", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyState);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState lobbyState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeSetMultiplayerGameState", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MultiplayerGameState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, lobbyState);
}
inline void GlobalNamespace::MenuRpcManager::add_cancelCountdownEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_cancelCountdownEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_cancelCountdownEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_cancelCountdownEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::CancelCountdown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "CancelCountdown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeCancelCountdown(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeCancelCountdown", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_setCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetCountdownEndTime(int64_t newTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetCountdownEndTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTime);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetCountdownEndTime(::StringW userId, int64_t newTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetCountdownEndTime", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, newTime);
}
inline void GlobalNamespace::MenuRpcManager::add_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getCountdownEndTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetCountdownEndTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetCountdownEndTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetCountdownEndTime(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetCountdownEndTime", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_cancelledLevelStartEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_cancelledLevelStartEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_cancelledLevelStartEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_cancelledLevelStartEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::CancelLevelStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "CancelLevelStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeCancelLevelStart(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeCancelLevelStart", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getIsReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsReadyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsReady() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsReady", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsReady(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsReady", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsReadyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setIsReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsReadyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_setIsReadyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsReady(bool isReady) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetIsReady", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isReady);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsReady(::StringW userId, bool isReady) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetIsReady", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isReady);
}
inline void GlobalNamespace::MenuRpcManager::add_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_setStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, int64_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetStartGameTime(int64_t newTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetStartGameTime", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newTime);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetStartGameCountdown(::StringW userId, int64_t newTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetStartGameCountdown", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, newTime);
}
inline void GlobalNamespace::MenuRpcManager::add_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_cancelStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_cancelStartGameTimeEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::CancelStartGameTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "CancelStartGameTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeCancelStartGameCountdown(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeCancelStartGameCountdown", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsInLobbyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsInLobbyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsInLobby() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetIsInLobby", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsInLobby(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetIsInLobby", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_setIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_setIsInLobbyEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsInLobby(bool isBack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetIsInLobby", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isBack);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsInLobby(::StringW userId, bool isBack) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeSetIsInLobby", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, isBack);
}
inline void GlobalNamespace::MenuRpcManager::add_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "add_getOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "remove_getOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetOwnedSongPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "GetOwnedSongPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetOwnedSongPacks(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeGetOwnedSongPacks", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "add_setOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "remove_setOwnedSongPacksEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "SetOwnedSongPacks", {}, { ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songPackMask);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetOwnedSongPacks(::StringW userId, ::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                           { "InvokeSetOwnedSongPacks", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::SongPackMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, songPackMask);
}
inline void GlobalNamespace::MenuRpcManager::add_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "add_requestedKickPlayerEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(),
                                                                                         { "remove_requestedKickPlayerEvent", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::RequestKickPlayer(::StringW kickedPlayerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "RequestKickPlayer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kickedPlayerId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeKickPlayer(::StringW userId, ::StringW kickedPlayerId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MenuRpcManager*>(), { "InvokeKickPlayer", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, kickedPlayerId);
}
inline ::GlobalNamespace::MenuRpcManager* GlobalNamespace::MenuRpcManager::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MenuRpcManager*>(multiplayerSessionManager));
}
/// @brief Convert operator to "::GlobalNamespace::IMenuRpcManager"
constexpr GlobalNamespace::MenuRpcManager::operator ::GlobalNamespace::IMenuRpcManager*() noexcept {
  return static_cast<::GlobalNamespace::IMenuRpcManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMenuRpcManager"
constexpr ::GlobalNamespace::IMenuRpcManager* GlobalNamespace::MenuRpcManager::i___GlobalNamespace__IMenuRpcManager() noexcept {
  return static_cast<::GlobalNamespace::IMenuRpcManager*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MenuRpcManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MenuRpcManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager::MenuRpcManager() {}
