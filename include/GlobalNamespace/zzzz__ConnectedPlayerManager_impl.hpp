#pragma once
// IWYU pragma private; include "GlobalNamespace/ConnectedPlayerManager.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_impl.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "BGNet/Core/zzzz__DeliveryMethod_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__ByteArrayNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EncryptionUtility_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__IDiffieHellmanKeyPair_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__LongRollingAverage_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_connection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_connection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_connectionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_connectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd5d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_connectionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_remoteConnectionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_remoteConnectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_remoteConnectionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_isConnected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_isConnectionOwner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_isKicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isKicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_isKicked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_disconnectedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_disconnectedReason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_sortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_sortIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_sortIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_userId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_userName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_isMe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isMe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_isMe",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_hasValidLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_hasValidLatency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22bd628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_hasValidLatency",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_currentLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_currentLatency)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22bd658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_currentLatency",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22bd6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_offsetSyncTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bd710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                 "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.set_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::set_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bd724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "set_multiplayerAvatarsData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_publicEncryptionKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_publicEncryptionKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_publicEncryptionKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_random
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_random",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_isDirectConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isDirectConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22b7d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_isDirectConnection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.get_encryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EncryptionUtility_IEncryptionState* (
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_encryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "get_encryptionState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager*, uint8_t, uint8_t, ::GlobalNamespace::IConnection*, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, ::StringW, ::StringW, bool, bool,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22bd750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.CreateLocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* (*)(::GlobalNamespace::ConnectedPlayerManager*, ::StringW, ::StringW, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::CreateLocalPlayer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22bb7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "CreateLocalPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.CreateDirectlyConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* (*)(::GlobalNamespace::ConnectedPlayerManager*, uint8_t, ::GlobalNamespace::IConnection*)>(
        &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::CreateDirectlyConnectedPlayer)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x22bb91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                 "CreateDirectlyConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.CreateRemoteConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* (*)(::GlobalNamespace::ConnectedPlayerManager*, uint8_t, ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*,
                                                                               ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*)>(
        &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::CreateRemoteConnectedPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22bc5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "CreateRemoteConnectedPlayer",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.GetPlayerConnectedPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerConnectedPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22b7c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "GetPlayerConnectedPacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.GetPlayerIdentityPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerIdentityPacket)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22b7ee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "GetPlayerIdentityPacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.GetPlayerStatePacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* (
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerStatePacket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22bb504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "GetPlayerStatePacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.GetPlayerAvatarPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerAvatarPacket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22bb5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "GetPlayerAvatarPacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.GetPlayerSortOrderPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerSortOrderPacket)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22b7e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "GetPlayerSortOrderPacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::Disconnect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x22b74fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.UpdateLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(int64_t)>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateLatency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bd528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateLatency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.UpdateSortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(int32_t)>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateSortIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bb760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateSortIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.SetKicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::SetKicked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22bb418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "SetKicked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.UpdateIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*)>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateIdentity)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22bc844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*)>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bca0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.UpdateAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*)>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateAvatar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22bcb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateAvatar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.SetEncryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(
    ::GlobalNamespace::EncryptionUtility_IEncryptionState*)>(&::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::SetEncryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "SetEncryptionState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(::StringW)>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::HasState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22bd8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "HasState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.SetPlayerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)(::GlobalNamespace::PlayerStateHash)>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::SetPlayerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "SetPlayerState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::ToString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22bd8fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isMe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
constexpr bool const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isMe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__isMe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMe = value;
}
constexpr bool& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr bool const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
constexpr ::GlobalNamespace::ConnectedPlayerManager*& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr ::GlobalNamespace::ConnectedPlayerManager* const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__manager(::GlobalNamespace::ConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnection*& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connection;
}
constexpr ::GlobalNamespace::IConnection* const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connection;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__connection(::GlobalNamespace::IConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__parent(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__connectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionId;
}
constexpr uint8_t const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__connectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__connectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionId = value;
}
constexpr uint8_t& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__remoteConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteConnectionId;
}
constexpr uint8_t const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__remoteConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteConnectionId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__remoteConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteConnectionId = value;
}
constexpr int32_t& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr int32_t const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__sortIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortIndex = value;
}
constexpr bool& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isConnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected;
}
constexpr bool const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isConnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__isConnected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnected = value;
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectedReason = value;
}
constexpr bool& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isKicked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked;
}
constexpr bool const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__isKicked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__isKicked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isKicked = value;
}
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerState = value;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__playerAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__playerAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerAvatars = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__publicEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicEncryptionKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__publicEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicEncryptionKey;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__publicEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____publicEncryptionKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__random(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState*& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__encryptionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
constexpr ::GlobalNamespace::EncryptionUtility_IEncryptionState* const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__encryptionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__encryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encryptionState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LongRollingAverage*& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__latency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
constexpr ::GlobalNamespace::LongRollingAverage* const& GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_get__latency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::__cordl_internal_set__latency(::GlobalNamespace::LongRollingAverage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_connection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_connection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_connectionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_connectionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_remoteConnectionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_remoteConnectionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isKicked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_isKicked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_disconnectedReason() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_disconnectedReason", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_sortIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_sortIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_userId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_userName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isMe() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_isMe", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_hasValidLatency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_hasValidLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_currentLatency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_currentLatency", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_offsetSyncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_offsetSyncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "set_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_publicEncryptionKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_publicEncryptionKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_random() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_random", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_isDirectConnection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_isDirectConnection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EncryptionUtility_IEncryptionState* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::get_encryptionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "get_encryptionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EncryptionUtility_IEncryptionState*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                           ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* parent,
                                                                           ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe,
                                                          publicEncryptionKey, random);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*
GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "CreateLocalPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, false>(nullptr, ___internal_method, manager, userId, userName, isConnectionOwner,
                                                                                                                publicEncryptionKey, random);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*
GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                       ::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                               "CreateDirectlyConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, false>(nullptr, ___internal_method, manager, connectionId, connection);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*
GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                     ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* packet,
                                                                                     ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "CreateRemoteConnectedPlayer",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, false>(nullptr, ___internal_method, manager, connectionId, packet, parent);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerConnectedPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "GetPlayerConnectedPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerIdentityPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "GetPlayerIdentityPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerStatePacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "GetPlayerStatePacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerAvatarPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "GetPlayerAvatarPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::GetPlayerSortOrderPacket() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "GetPlayerSortOrderPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateLatency(int64_t latency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateLatency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, latency);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateSortIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateSortIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::SetKicked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                             "SetKicked", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateIdentity(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateState(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::UpdateAvatar(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "UpdateAvatar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::SetEncryptionState(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "SetEncryptionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionState);
}
inline bool GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::HasState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "HasState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::SetPlayerState(::GlobalNamespace::PlayerStateHash playerState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), "SetPlayerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerState);
}
inline ::StringW GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*
GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::New_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                  ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* parent, ::StringW userId,
                                                                  ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName,
                                                                                                              isConnectionOwner, isMe, publicEncryptionKey, random));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer::ConnectedPlayerManager_ConnectedPlayer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType::ConnectedPlayerManager_InternalMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType::ConnectedPlayerManager_InternalMessageType() {}
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::SyncTime{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerConnected{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerIdentity{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerLatencyUpdate{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerDisconnected{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerSortOrderUpdate{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::Party{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::MultiplayerSession{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::KickPlayer{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerStateUpdate{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::PlayerAvatarUpdate{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::Ping{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_InternalMessageType GlobalNamespace::ConnectedPlayerManager_InternalMessageType::Pong{ static_cast<uint8_t>(0xcu) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType::ConnectedPlayerManager_MessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType::ConnectedPlayerManager_MessageType() {}
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType GlobalNamespace::ConnectedPlayerManager_MessageType::Party{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::ConnectedPlayerManager_MessageType GlobalNamespace::ConnectedPlayerManager_MessageType::MultiplayerSession{ static_cast<uint8_t>(0x7u) };
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22bda78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22bdad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bc6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::*)(uint8_t, ::StringW, ::StringW, bool)>(&::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bd84c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bdb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint8_t& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_remoteConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteConnectionId;
}
constexpr uint8_t const& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_remoteConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteConnectionId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_set_remoteConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remoteConnectionId = value;
}
constexpr ::StringW& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectionOwner;
}
constexpr bool const& GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_get_isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectionOwner;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::__cordl_internal_set_isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConnectionOwner = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>* GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::Init(uint8_t connectionId, ::StringW userId, ::StringW userName,
                                                                                                                                            bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*, false>(this, ___internal_method, connectionId, userId, userName, isConnectionOwner);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket::ConnectedPlayerManager_PlayerConnectedPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22bdb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Deserialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22bdba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Release)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22bdc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::*)(::GlobalNamespace::PlayerStateHash, ::GlobalNamespace::MultiplayerAvatarsData, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                       ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22bd860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22bdc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerState = value;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_playerAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_playerAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerAvatar = value;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_set_random(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_publicEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicEncryptionKey;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable* const& GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_get_publicEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicEncryptionKey;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::__cordl_internal_set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicEncryptionKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>* GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::Init(::GlobalNamespace::PlayerStateHash states,
                                                                                                                                          ::GlobalNamespace::MultiplayerAvatarsData avatar,
                                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> random,
                                                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*, false>(this, ___internal_method, states, avatar, random, publicEncryptionKey);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket::ConnectedPlayerManager_PlayerIdentityPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Serialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22bdd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22bdd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bcb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::*)(::GlobalNamespace::MultiplayerAvatarsData)>(&::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bd8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bddb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::__cordl_internal_get_playerAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::__cordl_internal_get_playerAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::__cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerAvatar = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>* GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::Init(::GlobalNamespace::MultiplayerAvatarsData avatar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*, false>(this, ___internal_method, avatar);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket::ConnectedPlayerManager_PlayerAvatarPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Serialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22bddc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bddcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bca28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::*)(::GlobalNamespace::PlayerStateHash)>(&::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bddec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::__cordl_internal_get_playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::__cordl_internal_get_playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::__cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerState = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>* GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::Init(::GlobalNamespace::PlayerStateHash states) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*, false>(this, ___internal_method, states);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket::ConnectedPlayerManager_PlayerStatePacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22bddf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22bde34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bcf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::*)(::StringW, int32_t)>(&::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22bd8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bde78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::__cordl_internal_get_sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortIndex;
}
constexpr int32_t const& GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::__cordl_internal_get_sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortIndex;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::__cordl_internal_set_sortIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortIndex = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>* GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::Init(::StringW userId, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*, false>(this, ___internal_method, userId, sortIndex);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket::ConnectedPlayerManager_PlayerSortOrderPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bbc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bde80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bde94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bcc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22bdeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::__cordl_internal_get_disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::__cordl_internal_get_disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::__cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectedReason = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>* GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*
GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Init(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket* GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket::ConnectedPlayerManager_PlayerDisconnectedPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bb410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bdec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bded8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bcda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bdef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::__cordl_internal_get_disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::__cordl_internal_get_disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::__cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectedReason = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>* GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(),
                                                                             "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Init(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket::ConnectedPlayerManager_KickPlayerPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                                                               "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bdf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bdf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* (
    ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::*)(int64_t)>(&::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bd0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bdf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::__cordl_internal_get_syncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTime;
}
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::__cordl_internal_get_syncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTime;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::__cordl_internal_set_syncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>* GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                                                             "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Init(int64_t syncTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*, false>(this, ___internal_method, syncTime);
}
inline void GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket::ConnectedPlayerManager_SyncTimePacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PingPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PingPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22b7a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                               "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PingPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PingPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PingPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bdf3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PingPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PingPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PingPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bdf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PingPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PingPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PingPacket::*)(int64_t)>(&::GlobalNamespace::ConnectedPlayerManager_PingPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b7b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PingPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PingPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PingPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bd2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PingPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PingPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PingPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bdf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager_PingPacket::__cordl_internal_get_pingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager_PingPacket::__cordl_internal_get_pingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PingPacket::__cordl_internal_set_pingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>* GlobalNamespace::ConnectedPlayerManager_PingPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                             "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PingPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PingPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PingPacket* GlobalNamespace::ConnectedPlayerManager_PingPacket::Init(int64_t pingTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PingPacket*, false>(this, ___internal_method, pingTime);
}
inline void GlobalNamespace::ConnectedPlayerManager_PingPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PingPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PingPacket* GlobalNamespace::ConnectedPlayerManager_PingPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PingPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PingPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PingPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PingPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PingPacket::ConnectedPlayerManager_PingPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PongPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>* (*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PongPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22ba630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                               "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PongPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PongPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PongPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22bdf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PongPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PongPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::ConnectedPlayerManager_PongPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22bdf8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PongPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_PongPacket* (
    ::GlobalNamespace::ConnectedPlayerManager_PongPacket::*)(int64_t)>(&::GlobalNamespace::ConnectedPlayerManager_PongPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bd350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PongPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PongPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PongPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22bd4d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager_PongPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager_PongPacket::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager_PongPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22bdfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager_PongPacket::__cordl_internal_get_pingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager_PongPacket::__cordl_internal_get_pingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr void GlobalNamespace::ConnectedPlayerManager_PongPacket::__cordl_internal_set_pingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>* GlobalNamespace::ConnectedPlayerManager_PongPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                             "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PongPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::ConnectedPlayerManager_PongPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PongPacket* GlobalNamespace::ConnectedPlayerManager_PongPacket::Init(int64_t pingTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_PongPacket*, false>(this, ___internal_method, pingTime);
}
inline void GlobalNamespace::ConnectedPlayerManager_PongPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager_PongPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager_PongPacket* GlobalNamespace::ConnectedPlayerManager_PongPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>());
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::ConnectedPlayerManager_PongPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::ConnectedPlayerManager_PongPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::ConnectedPlayerManager_PongPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::ConnectedPlayerManager_PongPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager_PongPacket::ConnectedPlayerManager_PongPacket() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::MoveNext)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x22bdfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x22be5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ConnectedPlayerManager*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "player", ty: "::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_isClient_5__2", ty:
// "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::ConnectedPlayerManager__InitializePlayerEncryption_d__132(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::ConnectedPlayerManager* __4__this,
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player, bool _isClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EncryptionUtility_IEncryptionState*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->player = player;
  this->_isClient_5__2 = _isClient_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager__InitializePlayerEncryption_d__132::ConnectedPlayerManager__InitializePlayerEncryption_d__132() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetNextConnectionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::GetNextConnectionId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22b72a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "GetNextConnectionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.RemoveAllPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::ConnectedPlayerManager::RemoveAllPlayers)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22b73ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RemoveAllPlayers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.RemovePlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::ConnectedPlayerManager::RemovePlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22b7438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RemovePlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.AddPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*)>(
    &::GlobalNamespace::ConnectedPlayerManager::AddPlayer)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x22b7794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "AddPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* (::GlobalNamespace::ConnectedPlayerManager::*)(uint8_t)>(
    &::GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22b72e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* (
    ::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::IConnection*, uint8_t)>(&::GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22b8050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* (::GlobalNamespace::ConnectedPlayerManager::*)(::StringW)>(
    &::GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22b8144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::ConnectedPlayerManager::*)(int32_t)>(
    &::GlobalNamespace::ConnectedPlayerManager::GetConnectedPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22b8210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetConnectedPlayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_connectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b8268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_connectedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_connectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b8304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_connectedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_initializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_initializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b83a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_initializedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_initializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_initializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b843c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_initializedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_disconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b84d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_disconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b86e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b88f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b89a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_playerStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_playerStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_playerOrderChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_playerOrderChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerOrderChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_playerOrderChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_playerOrderChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8dc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerOrderChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_playerLatencyInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_playerLatencyInitializedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerLatencyInitializedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_playerLatencyInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_playerLatencyInitializedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22b8f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerLatencyInitializedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.add_syncTimeInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action*)>(
    &::GlobalNamespace::ConnectedPlayerManager::add_syncTimeInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b8fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_syncTimeInitializedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.remove_syncTimeInitializedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::System::Action*)>(
    &::GlobalNamespace::ConnectedPlayerManager::remove_syncTimeInitializedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b9074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_syncTimeInitializedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22b9110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_isConnectedOrConnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_isConnectedOrConnecting)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b91b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_isConnectedOrConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::get_isConnected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22b7644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_isConnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_isConnecting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22b91dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_isDisconnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22b9280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_localPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_localPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b9324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_connectedPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_connectedPlayerCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22b932c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_syncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::get_syncTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b9374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_syncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_syncTimeInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::get_syncTimeInitialized)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22b939c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "get_syncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.get_runTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::get_runTime)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22b7a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "get_runTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::IConnectionManager*)>(
    &::GlobalNamespace::ConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22b93d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IConnectionManager*)>(&::GlobalNamespace::ConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0xfb8;
  constexpr static std::size_t addrs = 0x22b9478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.PollUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(int32_t)>(
    &::GlobalNamespace::ConnectedPlayerManager::PollUpdate)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22ba9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "PollUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.PollLateUpdateOptional
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::PollLateUpdateOptional)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22bacd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "PollLateUpdateOptional", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.RegisterSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_MessageType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::RegisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22bad04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.UnregisterSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_MessageType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::UnregisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22bad6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::Dispose)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x22badd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::ConnectedPlayerManager::Disconnect)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22b76e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.KickPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::StringW, ::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::ConnectedPlayerManager::KickPlayer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22bb344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "KickPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SetLocalPlayerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::StringW, bool)>(
    &::GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22bb424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetLocalPlayerState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SetLocalPlayerAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerAvatar)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22bb564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetLocalPlayerAvatar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SetLocalPlayerSortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(int32_t)>(
    &::GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerSortIndex)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22bb678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetLocalPlayerSortIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SetPlayerSortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::IConnectedPlayer*, int32_t)>(
    &::GlobalNamespace::ConnectedPlayerManager::SetPlayerSortIndex)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22bb688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetPlayerSortIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.ResetLocalState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::ResetLocalState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22ba670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "ResetLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::HandleInitialized)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bb77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::HandleConnected)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x22ba698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "HandleConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::ConnectedPlayerManager::HandleDisconnected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22bb8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleConnectionFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::ConnectedPlayerManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22bb900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleConnectionFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleConnectionConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::IConnection*)>(
    &::GlobalNamespace::ConnectedPlayerManager::HandleConnectionConnected)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22ba980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleConnectionConnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleConnectionDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::IConnection*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::ConnectedPlayerManager::HandleConnectionDisconnected)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x22bbaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleConnectionDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleNetworkReceive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::IConnection*, ::LiteNetLib::Utils::NetDataReader*, ::BGNet::Core::DeliveryMethod)>(&::GlobalNamespace::ConnectedPlayerManager::HandleNetworkReceive)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x22bbd04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleNetworkReceive", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediately
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::LiteNetLib::Utils::INetSerializable*, bool)>(
    &::GlobalNamespace::ConnectedPlayerManager::SendImmediately)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22b7b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediately", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyExcludingPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, bool)>(&::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyExcludingPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22b7c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyExcludingPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyToPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyToPlayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22b7d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyToPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyFromPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, bool)>(&::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x22bbc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyFromPlayerToPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*)>(
    &::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22b7f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayerToPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.FlushReliableQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::FlushReliableQueue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22bab20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "FlushReliableQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.FlushUnreliableQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::FlushUnreliableQueue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x22babfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "FlushUnreliableQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.WriteOne
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (
    ::GlobalNamespace::ConnectedPlayerManager::*)(uint8_t, uint8_t, ::LiteNetLib::Utils::INetSerializable*)>(&::GlobalNamespace::ConnectedPlayerManager::WriteOne)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22bc204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOne", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.WriteOneEncrypted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (
    ::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::EncryptionUtility_IEncryptionState*, uint8_t, uint8_t, ::LiteNetLib::Utils::INetSerializable*)>(
    &::GlobalNamespace::ConnectedPlayerManager::WriteOneEncrypted)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x22bc368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOneEncrypted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.WriteOneOnlyToFirstDegreeConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NetDataWriter* (
    ::GlobalNamespace::ConnectedPlayerManager::*)(uint8_t, ::LiteNetLib::Utils::INetSerializable*)>(&::GlobalNamespace::ConnectedPlayerManager::WriteOneOnlyToFirstDegreeConnections)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22bc4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOneOnlyToFirstDegreeConnections", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::LiteNetLib::Utils::NetDataWriter*, ::LiteNetLib::Utils::INetSerializable*)>(&::GlobalNamespace::ConnectedPlayerManager::Write)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22bc270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleServerPlayerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerConnected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22bc52c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerConnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerIdentityUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerIdentityUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x22bc710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerIdentityUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.InitializePlayerEncryption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*)>(
    &::GlobalNamespace::ConnectedPlayerManager::InitializePlayerEncryption)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22bc8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "InitializePlayerEncryption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerStateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerStateUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x22bc944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerStateUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerAvatarUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerAvatarUpdate)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x22bca7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerAvatarUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleServerPlayerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerDisconnected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22bcbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleKickPlayerPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleKickPlayerPacket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22bccc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleKickPlayerPacket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerSortOrderUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerSortOrderUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x22bcdf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerSortOrderUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleSyncTimePacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleSyncTimePacket)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x22bcf74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleSyncTimePacket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PingPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePing)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x22bd108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::ConnectedPlayerManager_PongPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePong)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x22bd360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::StringW)>(&::GlobalNamespace::ConnectedPlayerManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x22bd544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_connectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_initializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_initializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initializedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_initializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___initializedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_disconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_disconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerStateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerAvatarChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerAvatarChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAvatarChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerOrderChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerOrderChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerOrderChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerOrderChangedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerOrderChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerLatencyInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLatencyInitializedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerLatencyInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerLatencyInitializedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerLatencyInitializedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_syncTimeInitializedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTimeInitializedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_syncTimeInitializedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTimeInitializedEvent;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set_syncTimeInitializedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___syncTimeInitializedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__startTicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__startTicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startTicks;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__startTicks(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startTicks = value;
}
constexpr ::GlobalNamespace::LongRollingAverage*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__syncTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTimeOffset;
}
constexpr ::GlobalNamespace::LongRollingAverage* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__syncTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncTimeOffset;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__syncTimeOffset(::GlobalNamespace::LongRollingAverage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncTimeOffset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITimeProvider*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr ::BGNet::Core::ITimeProvider* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeProvider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Core::ITaskUtility*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__taskUtility() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr ::BGNet::Core::ITaskUtility* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__taskUtility() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskUtility;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__taskUtility(::BGNet::Core::ITaskUtility* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____taskUtility)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectionManager*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__connectionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
constexpr ::GlobalNamespace::IConnectionManager* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__connectionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionManager;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__connectionManager(::GlobalNamespace::IConnectionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__temporaryDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryDataWriter;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__temporaryDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryDataWriter;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__temporaryDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporaryDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__temporaryEncryptedDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryEncryptedDataWriter;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__temporaryEncryptedDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____temporaryEncryptedDataWriter;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__temporaryEncryptedDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____temporaryEncryptedDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__reliableDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reliableDataWriter;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__reliableDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reliableDataWriter;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__reliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reliableDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__unreliableDataWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableDataWriter;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__unreliableDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableDataWriter;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__unreliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unreliableDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__players() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__players() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__players(::System::Collections::Generic::List_1<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____players)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayerAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerAvatars;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayerAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerAvatars;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__localPlayerAvatars(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerAvatars = value;
}
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__encryptionKeys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionKeys;
}
constexpr ::GlobalNamespace::IDiffieHellmanKeyPair* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__encryptionKeys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionKeys;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__encryptionKeys(::GlobalNamespace::IDiffieHellmanKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encryptionKeys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__encryptionRandom() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionRandom;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__encryptionRandom() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionRandom;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__encryptionRandom(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encryptionRandom)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
constexpr ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__localPlayer(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastConnectionId;
}
constexpr uint8_t const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastConnectionId;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__lastConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastConnectionId = value;
}
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastPollTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollTime;
}
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastPollTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollTime;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__lastPollTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPollTime = value;
}
constexpr int32_t& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastPollFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollFrame;
}
constexpr int32_t const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastPollFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPollFrame;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__lastPollFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPollFrame = value;
}
constexpr int64_t& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastPingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPingTime;
}
constexpr int64_t const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__lastPingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPingTime;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__lastPingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPingTime = value;
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__messageSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageSerializer;
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__messageSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageSerializer;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__messageSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::ConnectedPlayerManager_InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messageSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint8_t GlobalNamespace::ConnectedPlayerManager::GetNextConnectionId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "GetNextConnectionId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::RemoveAllPlayers(::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RemoveAllPlayers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void GlobalNamespace::ConnectedPlayerManager::RemovePlayer(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player, ::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RemovePlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, reason);
}
inline void GlobalNamespace::ConnectedPlayerManager::AddPlayer(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "AddPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetPlayer(uint8_t connectionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, false>(this, ___internal_method, connectionId);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetPlayer(::GlobalNamespace::IConnection* connection, uint8_t remoteConnectionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, false>(this, ___internal_method, connection, remoteConnectionId);
}
inline ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*, false>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetConnectedPlayer(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetConnectedPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_connectedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_connectedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_initializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_initializedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_initializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_initializedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerOrderChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_playerOrderChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerOrderChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_playerLatencyInitializedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_playerLatencyInitializedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_playerLatencyInitializedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::add_syncTimeInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "add_syncTimeInitializedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::ConnectedPlayerManager::remove_syncTimeInitializedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "remove_syncTimeInitializedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::ConnectedPlayerManager::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager::get_isConnectedOrConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_isConnectedOrConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::ConnectedPlayerManager::get_connectedPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::ConnectedPlayerManager::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "get_syncTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::ConnectedPlayerManager::get_syncTimeInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "get_syncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::ConnectedPlayerManager::get_runTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "get_runTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::_ctor(::GlobalNamespace::IConnectionManager* connectionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionManager);
}
inline void GlobalNamespace::ConnectedPlayerManager::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                           ::GlobalNamespace::IConnectionManager* connectionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, taskUtility, connectionManager);
}
inline void GlobalNamespace::ConnectedPlayerManager::PollUpdate(int32_t frameCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "PollUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameCount);
}
inline void GlobalNamespace::ConnectedPlayerManager::PollLateUpdateOptional() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "PollLateUpdateOptional", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::RegisterSerializer(::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType,
                                                                        ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
inline void GlobalNamespace::ConnectedPlayerManager::UnregisterSerializer(::GlobalNamespace::ConnectedPlayerManager_MessageType serializerType,
                                                                          ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename T> inline T GlobalNamespace::ConnectedPlayerManager::GetConnectionManager() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetConnectionManager",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager::KickPlayer(::StringW userId, ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "KickPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerState(::StringW state, bool setState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetLocalPlayerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, setState);
}
inline void GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetLocalPlayerAvatar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerAvatarsData);
}
inline void GlobalNamespace::ConnectedPlayerManager::SetLocalPlayerSortIndex(int32_t sortIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetLocalPlayerSortIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sortIndex);
}
inline void GlobalNamespace::ConnectedPlayerManager::SetPlayerSortIndex(::GlobalNamespace::IConnectedPlayer* player, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SetPlayerSortIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, sortIndex);
}
inline void GlobalNamespace::ConnectedPlayerManager::ResetLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "ResetLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "HandleConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleConnectionFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleConnectionConnected(::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleConnectionConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleConnectionDisconnected(::GlobalNamespace::IConnection* connection, ::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleConnectionDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, disconnectedReason);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleNetworkReceive(::GlobalNamespace::IConnection* connection, ::LiteNetLib::Utils::NetDataReader* reader,
                                                                          ::BGNet::Core::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleNetworkReceive", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::DeliveryMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connection, reader, deliveryMethod);
}
template <typename T> inline void GlobalNamespace::ConnectedPlayerManager::Send(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Send",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T> inline void GlobalNamespace::ConnectedPlayerManager::SendUnreliable(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendUnreliable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T> inline void GlobalNamespace::ConnectedPlayerManager::SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendToPlayer",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename T> inline void GlobalNamespace::ConnectedPlayerManager::SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendUnreliableEncryptedToPlayer",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename T> inline void GlobalNamespace::ConnectedPlayerManager::SendUnreliableOnlyToFirstDegreeConnections(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendUnreliableOnlyToFirstDegreeConnections",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager::SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendUnreliableFromPlayerToPlayer",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediately(::LiteNetLib::Utils::INetSerializable* message, bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediately", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, onlyFirstDegree);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                    ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* excludingPlayer, bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyExcludingPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, excludingPlayer, onlyFirstDegree);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* toPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, toPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* fromPlayer,
                                                                               bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, onlyFirstDegree);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                       ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* fromPlayer,
                                                                                       ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* toPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayerToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayerUnreliable(T message, ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* fromPlayer,
                                                                                                 ::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayerToPlayerUnreliable",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::FlushReliableQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "FlushReliableQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ConnectedPlayerManager::FlushUnreliableQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                             "FlushUnreliableQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::ConnectedPlayerManager::WriteOne(uint8_t senderId, uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOne", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, senderId, receiverId, message);
}
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::ConnectedPlayerManager::WriteOneEncrypted(::GlobalNamespace::EncryptionUtility_IEncryptionState* encryptionState, uint8_t senderId,
                                                                                                      uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOneEncrypted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EncryptionUtility_IEncryptionState*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, encryptionState, senderId, receiverId, message);
}
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::ConnectedPlayerManager::WriteOneOnlyToFirstDegreeConnections(uint8_t senderId, ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOneOnlyToFirstDegreeConnections", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::Utils::NetDataWriter*, false>(this, ___internal_method, senderId, message);
}
inline void GlobalNamespace::ConnectedPlayerManager::Write(::LiteNetLib::Utils::NetDataWriter* writer, ::LiteNetLib::Utils::INetSerializable* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Write", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer, packet);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerConnected(::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket* packet,
                                                                                 ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerConnectedPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerIdentityUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerIdentityUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerIdentityPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::InitializePlayerEncryption(::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "InitializePlayerEncryption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerStateUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerStateUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerStatePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerAvatarUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerAvatarUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerAvatarPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerDisconnected(::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket* packet,
                                                                                    ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerDisconnectedPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleKickPlayerPacket(::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleKickPlayerPacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_KickPlayerPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerSortOrderUpdate(::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket* packet,
                                                                                 ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerSortOrderUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PlayerSortOrderPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleSyncTimePacket(::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket* packet, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleSyncTimePacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_SyncTimePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePing(::GlobalNamespace::ConnectedPlayerManager_PingPacket* packet, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PingPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePong(::GlobalNamespace::ConnectedPlayerManager_PongPacket* packet, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager_PongPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::ConnectedPlayerManager::New_ctor(::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager*>(connectionManager));
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::ConnectedPlayerManager::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                    ::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager*>(timeProvider, taskUtility, connectionManager));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ConnectedPlayerManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ConnectedPlayerManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager::ConnectedPlayerManager() {}
