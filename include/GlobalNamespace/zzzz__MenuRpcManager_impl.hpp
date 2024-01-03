#pragma once
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_impl.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_1_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_2_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_3_impl.hpp"
#include "GlobalNamespace/zzzz__RemoteProcedureCall_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapIdentifierNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__CannotStartGameReason_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementsStatus_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerGameState_def.hpp"
#include "GlobalNamespace/zzzz__PlayersLobbyPermissionConfigurationNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__PlayersMissingEntitlementsNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__RpcHandler_1_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType::__MenuRpcManager__RpcType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType::__MenuRpcManager__RpcType() {}
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetPlayersMissingEntitlementsToLevel{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetIsEntitledToLevel{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetIsEntitledToLevel{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::InvalidateLevelEntitlementStatuses{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SelectLevelPack{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetSelectedBeatmap{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetSelectedBeatmap{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::RecommendBeatmap{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::ClearRecommendedBeatmap{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetRecommendedBeatmap{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetSelectedGameplayModifiers{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetSelectedGameplayModifiers{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::RecommendGameplayModifiers{ static_cast<uint8_t>(0xcu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::ClearRecommendedGameplayModifiers{ static_cast<uint8_t>(0xdu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetRecommendedGameplayModifiers{ static_cast<uint8_t>(0xeu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::LevelLoadError{ static_cast<uint8_t>(0xfu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::LevelLoadSuccess{ static_cast<uint8_t>(0x10u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::StartLevel{ static_cast<uint8_t>(0x11u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetStartedLevel{ static_cast<uint8_t>(0x12u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::CancelLevelStart{ static_cast<uint8_t>(0x13u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetMultiplayerGameState{ static_cast<uint8_t>(0x14u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetMultiplayerGameState{ static_cast<uint8_t>(0x15u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetIsReady{ static_cast<uint8_t>(0x16u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetIsReady{ static_cast<uint8_t>(0x17u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetStartGameTime{ static_cast<uint8_t>(0x18u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::CancelStartGameTime{ static_cast<uint8_t>(0x19u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetIsInLobby{ static_cast<uint8_t>(0x1au) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetIsInLobby{ static_cast<uint8_t>(0x1bu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetCountdownEndTime{ static_cast<uint8_t>(0x1cu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetCountdownEndTime{ static_cast<uint8_t>(0x1du) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::CancelCountdown{ static_cast<uint8_t>(0x1eu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetOwnedSongPacks{ static_cast<uint8_t>(0x1fu) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetOwnedSongPacks{ static_cast<uint8_t>(0x20u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::RequestKickPlayer{ static_cast<uint8_t>(0x21u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetPermissionConfiguration{ static_cast<uint8_t>(0x22u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetPermissionConfiguration{ static_cast<uint8_t>(0x23u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::GetIsStartButtonEnabled{ static_cast<uint8_t>(0x24u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::SetIsStartButtonEnabled{ static_cast<uint8_t>(0x25u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::ClearSelectedBeatmap{ static_cast<uint8_t>(0x26u) };
constexpr ::GlobalNamespace::__MenuRpcManager__RpcType GlobalNamespace::__MenuRpcManager__RpcType::ClearSelectedGameplayModifiers{ static_cast<uint8_t>(0x27u) };
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4923c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc* GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetPlayersPermissionConfigurationRpc::__MenuRpcManager__GetPlayersPermissionConfigurationRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe4924c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc* GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetPlayersPermissionConfigurationRpc::__MenuRpcManager__SetPlayersPermissionConfigurationRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49294;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc* GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc::__MenuRpcManager__SetPlayersMissingEntitlementsToLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe492dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc* GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetIsEntitledToLevelRpc::__MenuRpcManager__GetIsEntitledToLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc* GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetIsEntitledToLevelRpc::__MenuRpcManager__SetIsEntitledToLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4936c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc* GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc::__MenuRpcManager__InvalidateLevelEntitlementStatusesRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc* GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SelectLevelPackRpc::__MenuRpcManager__SelectLevelPackRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe493bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc* GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetSelectedBeatmapRpc::__MenuRpcManager__SetSelectedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc* GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__ClearSelectedBeatmapRpc::__MenuRpcManager__ClearSelectedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4940c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc* GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetSelectedBeatmapRpc::__MenuRpcManager__GetSelectedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc* GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__RecommendBeatmapRpc::__MenuRpcManager__RecommendBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4945c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc* GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__ClearRecommendedBeatmapRpc::__MenuRpcManager__ClearRecommendedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc* GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetRecommendedBeatmapRpc::__MenuRpcManager__GetRecommendedBeatmapRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe4946c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc* GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetSelectedGameplayModifiersRpc::__MenuRpcManager__SetSelectedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe494b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc* GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__ClearSelectedGameplayModifiersRpc::__MenuRpcManager__ClearSelectedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe494bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc* GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetSelectedGameplayModifiersRpc::__MenuRpcManager__GetSelectedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe494c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc* GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__RecommendGameplayModifiersRpc::__MenuRpcManager__RecommendGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4950c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc* GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc::__MenuRpcManager__ClearRecommendedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc* GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetRecommendedGameplayModifiersRpc::__MenuRpcManager__GetRecommendedGameplayModifiersRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4951c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc* GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetIsStartButtonEnabledRpc::__MenuRpcManager__GetIsStartButtonEnabledRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc* GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetIsStartButtonEnabledRpc::__MenuRpcManager__SetIsStartButtonEnabledRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe4956c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc* GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__LevelLoadErrorRpc::__MenuRpcManager__LevelLoadErrorRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe495b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc* GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__LevelLoadSuccessRpc::__MenuRpcManager__LevelLoadSuccessRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__StartLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__StartLevelRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__StartLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe495fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__StartLevelRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__StartLevelRpc* GlobalNamespace::__MenuRpcManager__StartLevelRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__StartLevelRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__StartLevelRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__StartLevelRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__StartLevelRpc::__MenuRpcManager__StartLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc* GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetStartedLevelRpc::__MenuRpcManager__GetStartedLevelRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4964c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc* GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetMultiplayerGameStateRpc::__MenuRpcManager__GetMultiplayerGameStateRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc* GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetMultiplayerGameStateRpc::__MenuRpcManager__SetMultiplayerGameStateRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4969c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc* GlobalNamespace::__MenuRpcManager__CancelCountdownRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__CancelCountdownRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__CancelCountdownRpc::__MenuRpcManager__CancelCountdownRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe496a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc* GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetCountdownEndTimeRpc::__MenuRpcManager__SetCountdownEndTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe496ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc* GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetCountdownEndTimeRpc::__MenuRpcManager__GetCountdownEndTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe496f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc* GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__CancelLevelStartRpc::__MenuRpcManager__CancelLevelStartRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe496fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc* GlobalNamespace::__MenuRpcManager__GetIsReadyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetIsReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetIsReadyRpc::__MenuRpcManager__GetIsReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe49704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc* GlobalNamespace::__MenuRpcManager__SetIsReadyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetIsReadyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetIsReadyRpc::__MenuRpcManager__SetIsReadyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe4974c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc* GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetStartGameTimeRpc::__MenuRpcManager__SetStartGameTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc* GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__CancelStartGameTimeRpc::__MenuRpcManager__CancelStartGameTimeRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe4979c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc* GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetIsInLobbyRpc::__MenuRpcManager__GetIsInLobbyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe497a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc* GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetIsInLobbyRpc::__MenuRpcManager__SetIsInLobbyRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe497ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc* GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__GetOwnedSongPacksRpc::__MenuRpcManager__GetOwnedSongPacksRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe497f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc* GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__SetOwnedSongPacksRpc::__MenuRpcManager__SetOwnedSongPacksRpc() {}
//  Writing Method size for method: ::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc::*)()>(
    &::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe4983c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc* GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc*>());
}
inline void GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MenuRpcManager__RequestKickPlayerRpc::__MenuRpcManager__RequestKickPlayerRpc() {}
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_multiplayerSessionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerSessionManager* (::GlobalNamespace::MenuRpcManager::*)()>(
    &::GlobalNamespace::MenuRpcManager::get_multiplayerSessionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe43278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "get_multiplayerSessionManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::get_enabled)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe43280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "get_enabled",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.set_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(bool)>(&::GlobalNamespace::MenuRpcManager::set_enabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xe43340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_enabledForAllPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::get_enabledForAllPlayers)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xe43408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "get_enabledForAllPlayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.get_syncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::get_syncTime)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xe435e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "get_syncTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::IMultiplayerSessionManager*)>(
    &::GlobalNamespace::MenuRpcManager::_ctor)> {
  constexpr static std::size_t size = 0x1150;
  constexpr static std::size_t addrs = 0xe43688;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::Dispose)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe447d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "Dispose",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.EnabledForPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MenuRpcManager::EnabledForPlayer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe44834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "EnabledForPlayer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe448f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getPlayersPermissionConfigurationEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe449a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getPlayersPermissionConfigurationEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(
    &::GlobalNamespace::MenuRpcManager::GetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe44a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "GetPlayersPermissionConfiguration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe44aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetPlayersPermissionConfiguration",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::add_setPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe44abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setPlayersPermissionConfigurationEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setPlayersPermissionConfigurationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::remove_setPlayersPermissionConfigurationEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe44b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setPlayersPermissionConfigurationEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe44c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetPlayersPermissionConfiguration", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetPlayersPermissionConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*)>(&::GlobalNamespace::MenuRpcManager::InvokeSetPlayersPermissionConfiguration)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe44c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetPlayersPermissionConfiguration", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setPlayersMissingEntitlementsToLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::add_setPlayersMissingEntitlementsToLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe44c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setPlayersMissingEntitlementsToLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setPlayersMissingEntitlementsToLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::remove_setPlayersMissingEntitlementsToLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe44d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setPlayersMissingEntitlementsToLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetPlayersMissingEntitlementsToLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::SetPlayersMissingEntitlementsToLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe44df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetPlayersMissingEntitlementsToLevel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetPlayersMissingEntitlementsToLevelRpc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*)>(&::GlobalNamespace::MenuRpcManager::InvokeSetPlayersMissingEntitlementsToLevelRpc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe44e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetPlayersMissingEntitlementsToLevelRpc", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe44e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe44f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::GetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe44fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetIsEntitledToLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe4501c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsEntitledToLevel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*)>(&::GlobalNamespace::MenuRpcManager::add_setIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45038;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsEntitledToLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*)>(&::GlobalNamespace::MenuRpcManager::remove_setIsEntitledToLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe450e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::EntitlementsStatus)>(
    &::GlobalNamespace::MenuRpcManager::SetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe45198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsEntitledToLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EntitlementsStatus>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsEntitledToLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW, int32_t)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetIsEntitledToLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe45200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsEntitledToLevel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_levelEntitlementStatusesInvalidatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_levelEntitlementStatusesInvalidatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe4521c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_levelEntitlementStatusesInvalidatedEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_levelEntitlementStatusesInvalidatedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_levelEntitlementStatusesInvalidatedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe452cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_levelEntitlementStatusesInvalidatedEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvalidateLevelEntitlementStatuses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(
    &::GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatuses)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe4537c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "InvalidateLevelEntitlementStatuses", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeLevelEntitlementStatusesInvalidated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeLevelEntitlementStatusesInvalidated)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe453cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeLevelEntitlementStatusesInvalidated",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_selectedLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_selectedLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe453e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_selectedLevelPackEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_selectedLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_selectedLevelPackEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_selectedLevelPackEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SelectLevelPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::SelectLevelPack)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe45548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SelectLevelPack", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeOnSelectedLevelPackEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeOnSelectedLevelPackEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe455a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeOnSelectedLevelPackEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::add_setSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe455bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::remove_setSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe4566c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::SetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe4571c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetSelectedBeatmap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe45774;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetSelectedBeatmap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45840;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe458f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "ClearSelectedBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearSelectedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeClearSelectedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe45940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearSelectedBeatmap",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe4595c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getSelectedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getSelectedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetSelectedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetSelectedBeatmap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe45abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetSelectedBeatmap",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetSelectedBeatmapRpc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetSelectedBeatmapRpc)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe45b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetSelectedBeatmapRpc",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_recommendBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::add_recommendBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_recommendBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_recommendBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*)>(&::GlobalNamespace::MenuRpcManager::remove_recommendBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_recommendBeatmapEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.RecommendBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::RecommendBeatmap)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe45c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "RecommendBeatmap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeRecommendBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeRecommendBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe45ce0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeRecommendBeatmap", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearRecommendedBeatmapEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe45e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "ClearRecommendedBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeClearRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe45eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearRecommendedBeatmap",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45ec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getRecommendedBeatmapEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getRecommendedBeatmapEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe45f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe46028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "GetRecommendedBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetRecommendedBeatmap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetRecommendedBeatmap)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe46078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetRecommendedBeatmap",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setSelectedGameplayModifiersEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setSelectedGameplayModifiersEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::SetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe461f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetSelectedGameplayModifiers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe4624c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetSelectedGameplayModifiers", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearSelectedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearSelectedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::ClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe463c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "ClearSelectedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeClearSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe46418;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearSelectedGameplayModifiers",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getSelectedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getSelectedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getSelectedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe464e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getSelectedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe46594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "GetSelectedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetSelectedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetSelectedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe465e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetSelectedGameplayModifiers",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_recommendGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::add_recommendGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_recommendGameplayModifiersEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_recommendGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_recommendGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe466b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_recommendGameplayModifiersEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.RecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::RecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe46760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "RecommendGameplayModifiers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeRecommendGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::MenuRpcManager::InvokeRecommendGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe467b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeRecommendGameplayModifiers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_clearRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_clearRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe467d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearRecommendedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_clearRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_clearRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearRecommendedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.ClearRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(
    &::GlobalNamespace::MenuRpcManager::ClearRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe46934;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "ClearRecommendedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeClearRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeClearRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe46984;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearRecommendedGameplayModifiers",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe469a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getRecommendedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getRecommendedGameplayModifiersEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getRecommendedGameplayModifiersEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getRecommendedGameplayModifiersEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe46b00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "GetRecommendedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetRecommendedGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetRecommendedGameplayModifiers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe46b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetRecommendedGameplayModifiers",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsStartButtonEnabledEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe46ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "GetIsStartButtonEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe46d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsStartButtonEnabled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*)>(&::GlobalNamespace::MenuRpcManager::add_setIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46d38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsStartButtonEnabledEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*)>(&::GlobalNamespace::MenuRpcManager::remove_setIsStartButtonEnabledEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::MenuRpcManager::SetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe46e98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsStartButtonEnabled", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsStartButtonEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::CannotStartGameReason)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetIsStartButtonEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe46ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsStartButtonEnabled", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_levelLoadErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_levelLoadErrorEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_levelLoadErrorEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_levelLoadErrorEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_levelLoadErrorEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe46fbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_levelLoadErrorEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.LevelLoadError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::LevelLoadError)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe4706c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "LevelLoadError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeLevelLoadError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeLevelLoadError)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe470c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeLevelLoadError", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_levelLoadSuccessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_levelLoadSuccessEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe470e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_levelLoadSuccessEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_levelLoadSuccessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_levelLoadSuccessEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe47190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_levelLoadSuccessEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.LevelLoadSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::LevelLoadSuccess)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe47240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "LevelLoadSuccess", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeLevelLoadSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeLevelLoadSuccess)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe47298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeLevelLoadSuccess", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_startedLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*)>(&::GlobalNamespace::MenuRpcManager::add_startedLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe472b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_startedLevelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_startedLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*)>(
        &::GlobalNamespace::MenuRpcManager::remove_startedLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe47364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_startedLevelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.StartLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t)>(&::GlobalNamespace::MenuRpcManager::StartLevel)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xe47414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "StartLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeStartLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(
    ::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t)>(&::GlobalNamespace::MenuRpcManager::InvokeStartLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe47484;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeStartLevel", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getStartedLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getStartedLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe474a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getStartedLevelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getStartedLevelEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getStartedLevelEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe47550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getStartedLevelEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetStartedLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetStartedLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe47600;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetStartedLevel",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetStartedLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetStartedLevel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe47650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetStartedLevel",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe4766c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe4771c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getMultiplayerGameStateEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe477cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                               "GetMultiplayerGameState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe4781c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetMultiplayerGameState",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe47838;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setMultiplayerGameStateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setMultiplayerGameStateEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe478e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::MenuRpcManager::SetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe47998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetMultiplayerGameState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetMultiplayerGameState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::MultiplayerGameState)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetMultiplayerGameState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe479f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetMultiplayerGameState", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_cancelCountdownEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_cancelCountdownEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe47a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_cancelCountdownEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_cancelCountdownEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_cancelCountdownEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe47abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_cancelCountdownEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.CancelCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::CancelCountdown)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe47b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "CancelCountdown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeCancelCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeCancelCountdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe47bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeCancelCountdown",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe47bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe47c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetCountdownEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(int64_t)>(&::GlobalNamespace::MenuRpcManager::SetCountdownEndTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe47d40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetCountdownEndTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetCountdownEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, int64_t)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetCountdownEndTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe47d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetCountdownEndTime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe47db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getCountdownEndTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getCountdownEndTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe47e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetCountdownEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetCountdownEndTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe47f1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetCountdownEndTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetCountdownEndTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetCountdownEndTime)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe47f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetCountdownEndTime",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_cancelledLevelStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_cancelledLevelStartEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe47f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_cancelledLevelStartEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_cancelledLevelStartEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_cancelledLevelStartEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe4803c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_cancelledLevelStartEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.CancelLevelStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::CancelLevelStart)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe480f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "CancelLevelStart",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeCancelLevelStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeCancelLevelStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe48140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeCancelLevelStart",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getIsReadyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe4815c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsReadyEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getIsReadyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsReadyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetIsReady)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe482c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetIsReady",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetIsReady)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe48314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsReady", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setIsReadyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsReadyEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsReadyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setIsReadyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe483e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsReadyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(bool)>(&::GlobalNamespace::MenuRpcManager::SetIsReady)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe48498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsReady", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsReady
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, bool)>(&::GlobalNamespace::MenuRpcManager::InvokeSetIsReady)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe484f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsReady", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48510;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, int64_t>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe485c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetStartGameTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(int64_t)>(&::GlobalNamespace::MenuRpcManager::SetStartGameTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe48678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetStartGameTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetStartGameCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, int64_t)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetStartGameCountdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe486d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetStartGameCountdown", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_cancelStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_cancelStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe486ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_cancelStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_cancelStartGameTimeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_cancelStartGameTimeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe487a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_cancelStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.CancelStartGameTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::CancelStartGameTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe48854;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "CancelStartGameTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeCancelStartGameCountdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeCancelStartGameCountdown)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe488a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeCancelStartGameCountdown",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe488c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetIsInLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetIsInLobby)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe48a28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetIsInLobby",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetIsInLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::InvokeGetIsInLobby)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe48a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsInLobby", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setIsInLobbyEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, bool>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setIsInLobbyEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetIsInLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(bool)>(&::GlobalNamespace::MenuRpcManager::SetIsInLobby)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe48bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsInLobby", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetIsInLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, bool)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetIsInLobby)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xe48c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsInLobby", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_getOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_getOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_getOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_1<::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_getOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.GetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)()>(&::GlobalNamespace::MenuRpcManager::GetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe48ddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetOwnedSongPacks",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeGetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeGetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe48e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetOwnedSongPacks",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_setOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::MenuRpcManager::add_setOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48e48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_setOwnedSongPacksEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_setOwnedSongPacksEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe48efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.SetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::MenuRpcManager::SetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xe48fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetOwnedSongPacks", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeSetOwnedSongPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::GlobalNamespace::SongPackMask)>(
    &::GlobalNamespace::MenuRpcManager::InvokeSetOwnedSongPacks)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe49024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetOwnedSongPacks", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.add_requestedKickPlayerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::add_requestedKickPlayerEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe49060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_requestedKickPlayerEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.remove_requestedKickPlayerEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::System::Action_2<::StringW, ::StringW>*)>(
    &::GlobalNamespace::MenuRpcManager::remove_requestedKickPlayerEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe49114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_requestedKickPlayerEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.RequestKickPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW)>(&::GlobalNamespace::MenuRpcManager::RequestKickPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe491c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "RequestKickPlayer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MenuRpcManager.InvokeKickPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MenuRpcManager::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::MenuRpcManager::InvokeKickPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe49220;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeKickPlayer", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
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
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MenuRpcManager::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::MenuRpcManager::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MenuRpcManager::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>*& GlobalNamespace::MenuRpcManager::__get__rpcHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>*> const& GlobalNamespace::MenuRpcManager::__get__rpcHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rpcHandler;
}
constexpr void GlobalNamespace::MenuRpcManager::__set__rpcHandler(::GlobalNamespace::RpcHandler_1<::GlobalNamespace::__MenuRpcManager__RpcType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rpcHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getPlayersPermissionConfigurationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getPlayersPermissionConfigurationEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getPlayersPermissionConfigurationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getPlayersPermissionConfigurationEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getPlayersPermissionConfigurationEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*& GlobalNamespace::MenuRpcManager::__get_setPlayersPermissionConfigurationEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersPermissionConfigurationEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*> const&
GlobalNamespace::MenuRpcManager::__get_setPlayersPermissionConfigurationEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersPermissionConfigurationEvent;
}
constexpr void
GlobalNamespace::MenuRpcManager::__set_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setPlayersPermissionConfigurationEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*& GlobalNamespace::MenuRpcManager::__get_setPlayersMissingEntitlementsToLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersMissingEntitlementsToLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*> const&
GlobalNamespace::MenuRpcManager::__get_setPlayersMissingEntitlementsToLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setPlayersMissingEntitlementsToLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setPlayersMissingEntitlementsToLevelEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__get_getIsEntitledToLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsEntitledToLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getIsEntitledToLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsEntitledToLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getIsEntitledToLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*& GlobalNamespace::MenuRpcManager::__get_setIsEntitledToLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsEntitledToLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*> const&
GlobalNamespace::MenuRpcManager::__get_setIsEntitledToLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsEntitledToLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setIsEntitledToLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_levelEntitlementStatusesInvalidatedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEntitlementStatusesInvalidatedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_levelEntitlementStatusesInvalidatedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelEntitlementStatusesInvalidatedEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelEntitlementStatusesInvalidatedEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__get_selectedLevelPackEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLevelPackEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_selectedLevelPackEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectedLevelPackEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectedLevelPackEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*& GlobalNamespace::MenuRpcManager::__get_setSelectedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*> const&
GlobalNamespace::MenuRpcManager::__get_setSelectedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setSelectedBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_clearSelectedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_clearSelectedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clearSelectedBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getSelectedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getSelectedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getSelectedBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*& GlobalNamespace::MenuRpcManager::__get_recommendBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*> const&
GlobalNamespace::MenuRpcManager::__get_recommendBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recommendBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_clearRecommendedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_clearRecommendedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clearRecommendedBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getRecommendedBeatmapEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedBeatmapEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getRecommendedBeatmapEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedBeatmapEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getRecommendedBeatmapEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& GlobalNamespace::MenuRpcManager::__get_setSelectedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*> const&
GlobalNamespace::MenuRpcManager::__get_setSelectedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setSelectedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setSelectedGameplayModifiersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_clearSelectedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_clearSelectedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearSelectedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clearSelectedGameplayModifiersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getSelectedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getSelectedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getSelectedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getSelectedGameplayModifiersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*& GlobalNamespace::MenuRpcManager::__get_recommendGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*> const&
GlobalNamespace::MenuRpcManager::__get_recommendGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recommendGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___recommendGameplayModifiersEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_clearRecommendedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_clearRecommendedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearRecommendedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clearRecommendedGameplayModifiersEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getRecommendedGameplayModifiersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedGameplayModifiersEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getRecommendedGameplayModifiersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getRecommendedGameplayModifiersEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getRecommendedGameplayModifiersEvent)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getIsStartButtonEnabledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsStartButtonEnabledEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getIsStartButtonEnabledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsStartButtonEnabledEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getIsStartButtonEnabledEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*& GlobalNamespace::MenuRpcManager::__get_setIsStartButtonEnabledEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsStartButtonEnabledEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*> const&
GlobalNamespace::MenuRpcManager::__get_setIsStartButtonEnabledEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsStartButtonEnabledEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setIsStartButtonEnabledEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__get_levelLoadErrorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadErrorEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_levelLoadErrorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadErrorEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelLoadErrorEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__get_levelLoadSuccessEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadSuccessEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_levelLoadSuccessEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoadSuccessEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelLoadSuccessEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*&
GlobalNamespace::MenuRpcManager::__get_startedLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startedLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*> const&
GlobalNamespace::MenuRpcManager::__get_startedLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startedLevelEvent;
}
constexpr void
GlobalNamespace::MenuRpcManager::__set_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startedLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getStartedLevelEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getStartedLevelEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getStartedLevelEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getStartedLevelEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getStartedLevelEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getStartedLevelEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getMultiplayerGameStateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getMultiplayerGameStateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getMultiplayerGameStateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getMultiplayerGameStateEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getMultiplayerGameStateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*& GlobalNamespace::MenuRpcManager::__get_setMultiplayerGameStateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setMultiplayerGameStateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*> const&
GlobalNamespace::MenuRpcManager::__get_setMultiplayerGameStateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setMultiplayerGameStateEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setMultiplayerGameStateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_cancelCountdownEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelCountdownEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_cancelCountdownEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelCountdownEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_cancelCountdownEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cancelCountdownEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::MenuRpcManager::__get_setCountdownEndTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setCountdownEndTimeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& GlobalNamespace::MenuRpcManager::__get_setCountdownEndTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setCountdownEndTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setCountdownEndTimeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getCountdownEndTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getCountdownEndTimeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getCountdownEndTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getCountdownEndTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getCountdownEndTimeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_cancelledLevelStartEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelledLevelStartEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_cancelledLevelStartEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelledLevelStartEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_cancelledLevelStartEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cancelledLevelStartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getIsReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getIsReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsReadyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getIsReadyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getIsReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, bool>*& GlobalNamespace::MenuRpcManager::__get_setIsReadyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsReadyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, bool>*> const& GlobalNamespace::MenuRpcManager::__get_setIsReadyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsReadyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setIsReadyEvent(::System::Action_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setIsReadyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, int64_t>*& GlobalNamespace::MenuRpcManager::__get_setStartGameTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setStartGameTimeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, int64_t>*> const& GlobalNamespace::MenuRpcManager::__get_setStartGameTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setStartGameTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setStartGameTimeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_cancelStartGameTimeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelStartGameTimeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_cancelStartGameTimeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelStartGameTimeEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cancelStartGameTimeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getIsInLobbyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsInLobbyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getIsInLobbyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getIsInLobbyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getIsInLobbyEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getIsInLobbyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, bool>*& GlobalNamespace::MenuRpcManager::__get_setIsInLobbyEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsInLobbyEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, bool>*> const& GlobalNamespace::MenuRpcManager::__get_setIsInLobbyEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setIsInLobbyEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setIsInLobbyEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::StringW>*& GlobalNamespace::MenuRpcManager::__get_getOwnedSongPacksEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getOwnedSongPacksEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_getOwnedSongPacksEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___getOwnedSongPacksEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___getOwnedSongPacksEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*& GlobalNamespace::MenuRpcManager::__get_setOwnedSongPacksEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setOwnedSongPacksEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*> const& GlobalNamespace::MenuRpcManager::__get_setOwnedSongPacksEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___setOwnedSongPacksEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___setOwnedSongPacksEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::StringW, ::StringW>*& GlobalNamespace::MenuRpcManager::__get_requestedKickPlayerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedKickPlayerEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::StringW, ::StringW>*> const& GlobalNamespace::MenuRpcManager::__get_requestedKickPlayerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___requestedKickPlayerEvent;
}
constexpr void GlobalNamespace::MenuRpcManager::__set_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedKickPlayerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MenuRpcManager::get_multiplayerSessionManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "get_multiplayerSessionManager", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSessionManager*, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MenuRpcManager::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "get_enabled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::set_enabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "set_enabled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MenuRpcManager::get_enabledForAllPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "get_enabledForAllPlayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MenuRpcManager::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "get_syncTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MenuRpcManager* GlobalNamespace::MenuRpcManager::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MenuRpcManager*>(multiplayerSessionManager));
}
inline void GlobalNamespace::MenuRpcManager::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager);
}
inline void GlobalNamespace::MenuRpcManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MenuRpcManager::EnabledForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "EnabledForPlayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MenuRpcManager::add_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getPlayersPermissionConfigurationEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getPlayersPermissionConfigurationEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getPlayersPermissionConfigurationEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetPlayersPermissionConfiguration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "GetPlayersPermissionConfiguration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetPlayersPermissionConfiguration(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetPlayersPermissionConfiguration",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setPlayersPermissionConfigurationEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MenuRpcManager::remove_setPlayersPermissionConfigurationEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setPlayersPermissionConfigurationEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetPlayersPermissionConfiguration(::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetPlayersPermissionConfiguration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playersPermissionConfiguration);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetPlayersPermissionConfiguration(::StringW userId,
                                                                                     ::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable* playersPermissionConfiguration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetPlayersPermissionConfiguration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersLobbyPermissionConfigurationNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playersPermissionConfiguration);
}
inline void GlobalNamespace::MenuRpcManager::add_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setPlayersMissingEntitlementsToLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setPlayersMissingEntitlementsToLevelEvent(::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setPlayersMissingEntitlementsToLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetPlayersMissingEntitlementsToLevel(::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetPlayersMissingEntitlementsToLevel", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playersMissingEntitlements);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetPlayersMissingEntitlementsToLevelRpc(::StringW userId, ::GlobalNamespace::PlayersMissingEntitlementsNetSerializable* playersMissingEntitlements) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetPlayersMissingEntitlementsToLevelRpc", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayersMissingEntitlementsNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, playersMissingEntitlements);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsEntitledToLevelEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsEntitledToLevel(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetIsEntitledToLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsEntitledToLevel(::StringW userId, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsEntitledToLevel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, levelId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsEntitledToLevelEvent(::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsEntitledToLevelEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::StringW, ::StringW, ::GlobalNamespace::EntitlementsStatus>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsEntitledToLevel(::StringW levelId, ::GlobalNamespace::EntitlementsStatus entitlementStatus) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsEntitledToLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EntitlementsStatus>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId, entitlementStatus);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsEntitledToLevel(::StringW userId, ::StringW levelId, int32_t entitlementStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsEntitledToLevel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, levelId, entitlementStatus);
}
inline void GlobalNamespace::MenuRpcManager::add_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_levelEntitlementStatusesInvalidatedEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_levelEntitlementStatusesInvalidatedEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_levelEntitlementStatusesInvalidatedEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::InvalidateLevelEntitlementStatuses() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "InvalidateLevelEntitlementStatuses", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeLevelEntitlementStatusesInvalidated(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeLevelEntitlementStatusesInvalidated",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_selectedLevelPackEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_selectedLevelPackEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_selectedLevelPackEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SelectLevelPack(::StringW levelPackId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SelectLevelPack", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelPackId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeOnSelectedLevelPackEvent(::StringW userId, ::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeOnSelectedLevelPackEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, levelPackId);
}
inline void GlobalNamespace::MenuRpcManager::add_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setSelectedBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetSelectedBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetSelectedBeatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identifier);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetSelectedBeatmap(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetSelectedBeatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, identifier);
}
inline void GlobalNamespace::MenuRpcManager::add_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearSelectedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "ClearSelectedBeatmap",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearSelectedBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearSelectedBeatmap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getSelectedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getSelectedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetSelectedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetSelectedBeatmap",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetSelectedBeatmapRpc(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetSelectedBeatmapRpc",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_recommendBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_recommendBeatmapEvent(::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_recommendBeatmapEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::RecommendBeatmap(::GlobalNamespace::BeatmapIdentifierNetSerializable* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "RecommendBeatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identifier);
}
inline void GlobalNamespace::MenuRpcManager::InvokeRecommendBeatmap(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeRecommendBeatmap", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, identifier);
}
inline void GlobalNamespace::MenuRpcManager::add_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearRecommendedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "ClearRecommendedBeatmap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearRecommendedBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearRecommendedBeatmap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getRecommendedBeatmapEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getRecommendedBeatmapEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetRecommendedBeatmap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetRecommendedBeatmap",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetRecommendedBeatmap(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetRecommendedBeatmap",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setSelectedGameplayModifiersEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setSelectedGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setSelectedGameplayModifiersEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetSelectedGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetSelectedGameplayModifiers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetSelectedGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetSelectedGameplayModifiers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::add_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearSelectedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearSelectedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearSelectedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "ClearSelectedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearSelectedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearSelectedGameplayModifiers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getSelectedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getSelectedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getSelectedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetSelectedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "GetSelectedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetSelectedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetSelectedGameplayModifiers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_recommendGameplayModifiersEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_recommendGameplayModifiersEvent(::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_recommendGameplayModifiersEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::GameplayModifiers*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::RecommendGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "RecommendGameplayModifiers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::InvokeRecommendGameplayModifiers(::StringW userId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeRecommendGameplayModifiers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, gameplayModifiers);
}
inline void GlobalNamespace::MenuRpcManager::add_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_clearRecommendedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_clearRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_clearRecommendedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::ClearRecommendedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "ClearRecommendedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeClearRecommendedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeClearRecommendedGameplayModifiers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getRecommendedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getRecommendedGameplayModifiersEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getRecommendedGameplayModifiersEvent",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetRecommendedGameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "GetRecommendedGameplayModifiers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetRecommendedGameplayModifiers(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetRecommendedGameplayModifiers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsStartButtonEnabledEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsStartButtonEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "GetIsStartButtonEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsStartButtonEnabled(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsStartButtonEnabled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsStartButtonEnabledEvent(::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsStartButtonEnabledEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::CannotStartGameReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsStartButtonEnabled(::GlobalNamespace::CannotStartGameReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsStartButtonEnabled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsStartButtonEnabled(::StringW userId, ::GlobalNamespace::CannotStartGameReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsStartButtonEnabled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CannotStartGameReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, reason);
}
inline void GlobalNamespace::MenuRpcManager::add_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_levelLoadErrorEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_levelLoadErrorEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_levelLoadErrorEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::LevelLoadError(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "LevelLoadError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeLevelLoadError(::StringW userId, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeLevelLoadError", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, levelId);
}
inline void GlobalNamespace::MenuRpcManager::add_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_levelLoadSuccessEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_levelLoadSuccessEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_levelLoadSuccessEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::LevelLoadSuccess(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "LevelLoadSuccess", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, levelId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeLevelLoadSuccess(::StringW userId, ::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeLevelLoadSuccess", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, levelId);
}
inline void
GlobalNamespace::MenuRpcManager::add_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_startedLevelEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::MenuRpcManager::remove_startedLevelEvent(::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_startedLevelEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_4<::StringW, ::GlobalNamespace::BeatmapIdentifierNetSerializable*, ::GlobalNamespace::GameplayModifiers*, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::StartLevel(::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, int64_t startTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "StartLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapId, gameplayModifiers, startTime);
}
inline void GlobalNamespace::MenuRpcManager::InvokeStartLevel(::StringW userId, ::GlobalNamespace::BeatmapIdentifierNetSerializable* beatmapId, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                              int64_t startTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeStartLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapIdentifierNetSerializable*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, beatmapId, gameplayModifiers, startTime);
}
inline void GlobalNamespace::MenuRpcManager::add_getStartedLevelEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getStartedLevelEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getStartedLevelEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getStartedLevelEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetStartedLevel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetStartedLevel",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetStartedLevel(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetStartedLevel", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getMultiplayerGameStateEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetMultiplayerGameState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(),
                                                                             "GetMultiplayerGameState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetMultiplayerGameState(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetMultiplayerGameState",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setMultiplayerGameStateEvent(::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setMultiplayerGameStateEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::MultiplayerGameState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetMultiplayerGameState(::GlobalNamespace::MultiplayerGameState lobbyState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetMultiplayerGameState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbyState);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetMultiplayerGameState(::StringW userId, ::GlobalNamespace::MultiplayerGameState lobbyState) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetMultiplayerGameState", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerGameState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, lobbyState);
}
inline void GlobalNamespace::MenuRpcManager::add_cancelCountdownEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_cancelCountdownEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_cancelCountdownEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_cancelCountdownEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::CancelCountdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "CancelCountdown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeCancelCountdown(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeCancelCountdown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setCountdownEndTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetCountdownEndTime(int64_t newTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetCountdownEndTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTime);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetCountdownEndTime(::StringW userId, int64_t newTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetCountdownEndTime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, newTime);
}
inline void GlobalNamespace::MenuRpcManager::add_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getCountdownEndTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getCountdownEndTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetCountdownEndTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetCountdownEndTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetCountdownEndTime(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetCountdownEndTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_cancelledLevelStartEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_cancelledLevelStartEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_cancelledLevelStartEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_cancelledLevelStartEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::CancelLevelStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "CancelLevelStart",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeCancelLevelStart(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeCancelLevelStart", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsReadyEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsReadyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsReadyEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsReady() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetIsReady",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsReady(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsReady", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsReadyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsReadyEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsReadyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsReadyEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsReady(bool isReady) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsReady", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isReady);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsReady(::StringW userId, bool isReady) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsReady", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, isReady);
}
inline void GlobalNamespace::MenuRpcManager::add_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setStartGameTimeEvent(::System::Action_2<::StringW, int64_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, int64_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetStartGameTime(int64_t newTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetStartGameTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newTime);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetStartGameCountdown(::StringW userId, int64_t newTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetStartGameCountdown", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, newTime);
}
inline void GlobalNamespace::MenuRpcManager::add_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_cancelStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_cancelStartGameTimeEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_cancelStartGameTimeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::CancelStartGameTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "CancelStartGameTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeCancelStartGameCountdown(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeCancelStartGameCountdown",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_getIsInLobbyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getIsInLobbyEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetIsInLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetIsInLobby",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetIsInLobby(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetIsInLobby", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setIsInLobbyEvent(::System::Action_2<::StringW, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setIsInLobbyEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetIsInLobby(bool isBack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetIsInLobby", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isBack);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetIsInLobby(::StringW userId, bool isBack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetIsInLobby", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, isBack);
}
inline void GlobalNamespace::MenuRpcManager::add_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_getOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_getOwnedSongPacksEvent(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_getOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::GetOwnedSongPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "GetOwnedSongPacks",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MenuRpcManager::InvokeGetOwnedSongPacks(::StringW userId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeGetOwnedSongPacks",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline void GlobalNamespace::MenuRpcManager::add_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_setOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_setOwnedSongPacksEvent(::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_setOwnedSongPacksEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::GlobalNamespace::SongPackMask>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::SetOwnedSongPacks(::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "SetOwnedSongPacks", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songPackMask);
}
inline void GlobalNamespace::MenuRpcManager::InvokeSetOwnedSongPacks(::StringW userId, ::GlobalNamespace::SongPackMask songPackMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeSetOwnedSongPacks", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SongPackMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, songPackMask);
}
inline void GlobalNamespace::MenuRpcManager::add_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "add_requestedKickPlayerEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::remove_requestedKickPlayerEvent(::System::Action_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "remove_requestedKickPlayerEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MenuRpcManager::RequestKickPlayer(::StringW kickedPlayerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "RequestKickPlayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, kickedPlayerId);
}
inline void GlobalNamespace::MenuRpcManager::InvokeKickPlayer(::StringW userId, ::StringW kickedPlayerId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MenuRpcManager*>::get(), "InvokeKickPlayer", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, kickedPlayerId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MenuRpcManager::MenuRpcManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
