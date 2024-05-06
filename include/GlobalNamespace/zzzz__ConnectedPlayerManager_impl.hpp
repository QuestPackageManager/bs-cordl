#pragma once
#include "GlobalNamespace/zzzz__DisconnectedReason_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerStateHash_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
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
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
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
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_connection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnection* (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_connection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_connection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_connectionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_connectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_connectionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_remoteConnectionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_remoteConnectionId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_remoteConnectionId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isConnected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isConnected",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isConnectionOwner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_isKicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isKicked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isKicked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_disconnectedReason
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DisconnectedReason (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_disconnectedReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_disconnectedReason",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_sortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_sortIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_sortIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_userId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_userName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_isMe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isMe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isMe",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_hasValidLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_hasValidLatency)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x108f6ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_hasValidLatency",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_currentLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_currentLatency)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x108f71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_currentLatency",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_offsetSyncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_offsetSyncTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x108f788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_offsetSyncTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x108f7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                 "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.set_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::set_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x108f7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "set_multiplayerAvatarsData",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_publicEncryptionKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_publicEncryptionKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                 "get_publicEncryptionKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_random
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_random)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_random",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_isDirectConnection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isDirectConnection)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1089e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isDirectConnection",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.get_encryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__EncryptionUtility__IEncryptionState* (
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_encryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_encryptionState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager*, uint8_t, uint8_t, ::GlobalNamespace::IConnection*, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, ::StringW, ::StringW, bool, bool,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x108f814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.CreateLocalPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* (*)(::GlobalNamespace::ConnectedPlayerManager*, ::StringW, ::StringW, bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::CreateLocalPlayer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x108d958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "CreateLocalPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.CreateDirectlyConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* (*)(::GlobalNamespace::ConnectedPlayerManager*, uint8_t, ::GlobalNamespace::IConnection*)>(
        &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::CreateDirectlyConnectedPlayer)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x108da80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                 "CreateDirectlyConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.CreateRemoteConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* (*)(::GlobalNamespace::ConnectedPlayerManager*, uint8_t, ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*,
                                                                      ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::CreateRemoteConnectedPlayer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x108e764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "CreateRemoteConnectedPlayer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.GetPlayerConnectedPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerConnectedPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1089cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                 "GetPlayerConnectedPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.GetPlayerIdentityPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerIdentityPacket)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1089f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                 "GetPlayerIdentityPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.GetPlayerStatePacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerStatePacket)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x108d65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerStatePacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.GetPlayerAvatarPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerAvatarPacket)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x108d750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerAvatarPacket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.GetPlayerSortOrderPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerSortOrderPacket)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1089f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                 "GetPlayerSortOrderPacket", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::Disconnect)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x10895ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.UpdateLatency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(int64_t)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateLatency)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x108f5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateLatency",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.UpdateSortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(int32_t)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateSortIndex)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x108d8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateSortIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.SetKicked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::SetKicked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x108d570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "SetKicked",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.UpdateIdentity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*)>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateIdentity)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x108e9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateIdentity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.UpdateState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*)>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x108eb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.UpdateAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*)>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateAvatar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x108ec64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateAvatar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.SetEncryptionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(
    ::GlobalNamespace::__EncryptionUtility__IEncryptionState*)>(&::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::SetEncryptionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "SetEncryptionState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.HasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(::StringW)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::HasState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x108f9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "HasState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.SetPlayerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)(::GlobalNamespace::PlayerStateHash)>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::SetPlayerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f9bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "SetPlayerState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::ToString)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x108f9c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isMe() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
constexpr bool const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isMe() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isMe;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__isMe(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isMe = value;
}
constexpr bool& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr bool const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnectionOwner;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnectionOwner = value;
}
constexpr ::GlobalNamespace::ConnectedPlayerManager*& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__manager(::GlobalNamespace::ConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____manager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnection*& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__connection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connection;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnection*> const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__connection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connection;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__connection(::GlobalNamespace::IConnection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*> const&
GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parent;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__parent(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint8_t& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__connectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionId;
}
constexpr uint8_t const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__connectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionId;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__connectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionId = value;
}
constexpr uint8_t& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__remoteConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteConnectionId;
}
constexpr uint8_t const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__remoteConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteConnectionId;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__remoteConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteConnectionId = value;
}
constexpr int32_t& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr int32_t const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndex;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__sortIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortIndex = value;
}
constexpr bool& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isConnected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected;
}
constexpr bool const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isConnected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isConnected;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__isConnected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isConnected = value;
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedReason;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectedReason = value;
}
constexpr bool& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isKicked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked;
}
constexpr bool const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__isKicked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isKicked;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__isKicked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isKicked = value;
}
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerState;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerState = value;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__playerAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__playerAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerAvatars = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__publicEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicEncryptionKey;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__publicEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____publicEncryptionKey;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__publicEncryptionKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____publicEncryptionKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__random(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EncryptionUtility__IEncryptionState*& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__encryptionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> const&
GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__encryptionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____encryptionState;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__encryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encryptionState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LongRollingAverage*& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__latency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LongRollingAverage*> const& GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_get__latency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latency;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__cordl_internal_set__latency(::GlobalNamespace::LongRollingAverage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latency)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::IConnection* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_connection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_connection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnection*, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_connectionId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_connectionId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_remoteConnectionId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_remoteConnectionId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isConnected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isConnected",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isConnectionOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isConnectionOwner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isKicked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isKicked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DisconnectedReason GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_disconnectedReason() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_disconnectedReason",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::DisconnectedReason, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_sortIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_sortIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_userId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_userId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_userName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_userName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isMe() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isMe",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_hasValidLatency() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_hasValidLatency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_currentLatency() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_currentLatency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_offsetSyncTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_offsetSyncTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                               "get_multiplayerAvatarsData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::set_multiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "set_multiplayerAvatarsData",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_publicEncryptionKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_publicEncryptionKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_random() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_random",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_isDirectConnection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_isDirectConnection",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__EncryptionUtility__IEncryptionState* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::get_encryptionState() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "get_encryptionState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__EncryptionUtility__IEncryptionState*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*
GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::New_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                     ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent, ::StringW userId,
                                                                     ::StringW userName, bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey,
                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName,
                                                                                                                 isConnectionOwner, isMe, publicEncryptionKey, random));
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::_ctor(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId, uint8_t remoteConnectionId,
                                                                              ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent,
                                                                              ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe,
                                                          publicEncryptionKey, random);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*
GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::CreateLocalPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, ::StringW userId, ::StringW userName, bool isConnectionOwner,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "CreateLocalPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, false>(nullptr, ___internal_method, manager, userId, userName, isConnectionOwner,
                                                                                                                   publicEncryptionKey, random);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*
GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::CreateDirectlyConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                          ::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                               "CreateDirectlyConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, false>(nullptr, ___internal_method, manager, connectionId, connection);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*
GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::CreateRemoteConnectedPlayer(::GlobalNamespace::ConnectedPlayerManager* manager, uint8_t connectionId,
                                                                                        ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* packet,
                                                                                        ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "CreateRemoteConnectedPlayer",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, false>(nullptr, ___internal_method, manager, connectionId, packet, parent);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerConnectedPacket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerConnectedPacket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerIdentityPacket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerIdentityPacket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerStatePacket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerStatePacket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerAvatarPacket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerAvatarPacket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::GetPlayerSortOrderPacket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "GetPlayerSortOrderPacket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateLatency(int64_t latency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateLatency",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, latency);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateSortIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateSortIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::SetKicked() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "SetKicked",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateIdentity(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateIdentity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateState(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::UpdateAvatar(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "UpdateAvatar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::SetEncryptionState(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "SetEncryptionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionState);
}
inline bool GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::HasState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "HasState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
inline void GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::SetPlayerState(::GlobalNamespace::PlayerStateHash playerState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), "SetPlayerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerState);
}
inline ::StringW GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer::__ConnectedPlayerManager__ConnectedPlayer() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::__ConnectedPlayerManager__InternalMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::__ConnectedPlayerManager__InternalMessageType() {}
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::SyncTime{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerConnected{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerIdentity{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerLatencyUpdate{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerDisconnected{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerSortOrderUpdate{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::Party{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::MultiplayerSession{ static_cast<uint8_t>(0x7u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::KickPlayer{ static_cast<uint8_t>(0x8u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerStateUpdate{ static_cast<uint8_t>(0x9u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::PlayerAvatarUpdate{ static_cast<uint8_t>(0xau) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::Ping{ static_cast<uint8_t>(0xbu) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType GlobalNamespace::__ConnectedPlayerManager__InternalMessageType::Pong{ static_cast<uint8_t>(0xcu) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ConnectedPlayerManager__MessageType::__ConnectedPlayerManager__MessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__MessageType::__ConnectedPlayerManager__MessageType() {}
constexpr ::GlobalNamespace::__ConnectedPlayerManager__MessageType GlobalNamespace::__ConnectedPlayerManager__MessageType::Party{ static_cast<uint8_t>(0x6u) };
constexpr ::GlobalNamespace::__ConnectedPlayerManager__MessageType GlobalNamespace::__ConnectedPlayerManager__MessageType::MultiplayerSession{ static_cast<uint8_t>(0x7u) };
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x108fb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x108fba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108e834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::*)(uint8_t, ::StringW, ::StringW, bool)>(&::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x108f914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108fc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr uint8_t& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_remoteConnectionId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteConnectionId;
}
constexpr uint8_t const& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_remoteConnectionId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___remoteConnectionId;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_set_remoteConnectionId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___remoteConnectionId = value;
}
constexpr ::StringW& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr ::StringW const& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userName;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_set_userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_isConnectionOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectionOwner;
}
constexpr bool const& GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_get_isConnectionOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isConnectionOwner;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__cordl_internal_set_isConnectionOwner(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isConnectionOwner = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>* GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::Init(uint8_t connectionId, ::StringW userId,
                                                                                                                                                  ::StringW userName, bool isConnectionOwner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*, false>(this, ___internal_method, connectionId, userId, userName, isConnectionOwner);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket::__ConnectedPlayerManager__PlayerConnectedPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x108fc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Deserialize)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x108fc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Release)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x108fce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::*)(::GlobalNamespace::PlayerStateHash, ::GlobalNamespace::MultiplayerAvatarsData, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Init)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x108f928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x108fd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerState = value;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_playerAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_playerAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerAvatar = value;
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const&
GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___random;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_set_random(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___random)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ByteArrayNetSerializable*& GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_publicEncryptionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicEncryptionKey;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ByteArrayNetSerializable*> const&
GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_get_publicEncryptionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___publicEncryptionKey;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__cordl_internal_set_publicEncryptionKey(::GlobalNamespace::ByteArrayNetSerializable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___publicEncryptionKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>* GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*
GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::Init(::GlobalNamespace::PlayerStateHash states, ::GlobalNamespace::MultiplayerAvatarsData avatar,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*, false>(this, ___internal_method, states, avatar, random, publicEncryptionKey);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket::__ConnectedPlayerManager__PlayerIdentityPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Serialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x108fe40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108fe4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108fe8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::*)(::GlobalNamespace::MultiplayerAvatarsData)>(&::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x108f988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108fee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::__cordl_internal_get_playerAvatar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::__cordl_internal_get_playerAvatar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatar;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::__cordl_internal_set_playerAvatar(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerAvatar = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>* GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::Init(::GlobalNamespace::MultiplayerAvatarsData avatar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*, false>(this, ___internal_method, avatar);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket::__ConnectedPlayerManager__PlayerAvatarPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Serialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x108fee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x108fef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108ff14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::*)(::GlobalNamespace::PlayerStateHash)>(&::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108ff68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::PlayerStateHash& GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::__cordl_internal_get_playerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr ::GlobalNamespace::PlayerStateHash const& GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::__cordl_internal_get_playerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerState;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::__cordl_internal_set_playerState(::GlobalNamespace::PlayerStateHash value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerState = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>* GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::Init(::GlobalNamespace::PlayerStateHash states) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerStateHash>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*, false>(this, ___internal_method, states);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket::__ConnectedPlayerManager__PlayerStatePacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108ff70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x108ffb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108efe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::*)(::StringW, int32_t)>(&::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x108f99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108fff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__cordl_internal_get_sortIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortIndex;
}
constexpr int32_t const& GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__cordl_internal_get_sortIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortIndex;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__cordl_internal_set_sortIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortIndex = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>* GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::Init(::StringW userId, int32_t sortIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*, false>(this, ___internal_method, userId, sortIndex);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket::__ConnectedPlayerManager__PlayerSortOrderPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108dd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x108fffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1090010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108ed30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1090030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::__cordl_internal_get_disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::__cordl_internal_get_disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::__cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectedReason = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>* GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*
GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Init(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket::__ConnectedPlayerManager__PlayerDisconnectedPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::*)(::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108d568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1090040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1090054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108ee64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1090074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::DisconnectedReason& GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::__cordl_internal_get_disconnectedReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr ::GlobalNamespace::DisconnectedReason const& GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::__cordl_internal_get_disconnectedReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedReason;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::__cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disconnectedReason = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>* GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Init(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket::__ConnectedPlayerManager__KickPlayerPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "get_pool",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x109007c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1090090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::*)(int64_t)>(&::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f41c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108f178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Release",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10900b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr int64_t& GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::__cordl_internal_get_syncTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTime;
}
constexpr int64_t const& GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::__cordl_internal_get_syncTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___syncTime;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::__cordl_internal_set_syncTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___syncTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>* GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::get_pool() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "get_pool",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Init(int64_t syncTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*, false>(this, ___internal_method, syncTime);
}
inline void GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::Release() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket::__ConnectedPlayerManager__SyncTimePacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PingPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PingPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1089ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                               "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PingPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PingPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PingPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10900b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PingPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PingPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PingPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x10900cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PingPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PingPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PingPacket::*)(int64_t)>(&::GlobalNamespace::__ConnectedPlayerManager__PingPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1089bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PingPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PingPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PingPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108f3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PingPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PingPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PingPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10900ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PingPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PingPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PingPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PingPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr int64_t& GlobalNamespace::__ConnectedPlayerManager__PingPacket::__cordl_internal_get_pingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr int64_t const& GlobalNamespace::__ConnectedPlayerManager__PingPacket::__cordl_internal_get_pingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PingPacket::__cordl_internal_set_pingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>* GlobalNamespace::__ConnectedPlayerManager__PingPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                             "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PingPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PingPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PingPacket* GlobalNamespace::__ConnectedPlayerManager__PingPacket::Init(int64_t pingTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*, false>(this, ___internal_method, pingTime);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PingPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PingPacket* GlobalNamespace::__ConnectedPlayerManager__PingPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PingPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PingPacket::__ConnectedPlayerManager__PingPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PongPacket.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>* (*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PongPacket::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x108c774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                               "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PongPacket.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PongPacket::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PongPacket::Serialize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x10900f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PongPacket.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PongPacket::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::__ConnectedPlayerManager__PongPacket::Deserialize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1090108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PongPacket.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__PongPacket* (
    ::GlobalNamespace::__ConnectedPlayerManager__PongPacket::*)(int64_t)>(&::GlobalNamespace::__ConnectedPlayerManager__PongPacket::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x108f414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(), "Init",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PongPacket.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PongPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PongPacket::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x108f598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager__PongPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager__PongPacket::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager__PongPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1090128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::__ConnectedPlayerManager__PongPacket::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::__ConnectedPlayerManager__PongPacket::i___LiteNetLib__Utils__INetSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::__ConnectedPlayerManager__PongPacket::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPoolablePacket"
constexpr ::GlobalNamespace::IPoolablePacket* GlobalNamespace::__ConnectedPlayerManager__PongPacket::i___GlobalNamespace__IPoolablePacket() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr int64_t& GlobalNamespace::__ConnectedPlayerManager__PongPacket::__cordl_internal_get_pingTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr int64_t const& GlobalNamespace::__ConnectedPlayerManager__PongPacket::__cordl_internal_get_pingTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pingTime;
}
constexpr void GlobalNamespace::__ConnectedPlayerManager__PongPacket::__cordl_internal_set_pingTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pingTime = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>* GlobalNamespace::__ConnectedPlayerManager__PongPacket::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                             "get_pool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>*, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PongPacket::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PongPacket::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PongPacket* GlobalNamespace::__ConnectedPlayerManager__PongPacket::Init(int64_t pingTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(), "Init",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*, false>(this, ___internal_method, pingTime);
}
inline void GlobalNamespace::__ConnectedPlayerManager__PongPacket::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__PongPacket* GlobalNamespace::__ConnectedPlayerManager__PongPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>());
}
inline void GlobalNamespace::__ConnectedPlayerManager__PongPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager__PongPacket::__ConnectedPlayerManager__PongPacket() {}
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::*)()>(
    &::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::MoveNext)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x1090130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1090784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::ConnectedPlayerManager*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "player", ty: "::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_isClient_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t,::Array<uint8_t>*>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>", modifiers:
// "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::__ConnectedPlayerManager___InitializePlayerEncryption_d__132(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::ConnectedPlayerManager* __4__this,
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player, bool _isClient_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<uint8_t, ::Array<uint8_t>*>> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__EncryptionUtility__IEncryptionState*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->player = player;
  this->_isClient_5__2 = _isClient_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ConnectedPlayerManager___InitializePlayerEncryption_d__132::__ConnectedPlayerManager___InitializePlayerEncryption_d__132() {}
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetNextConnectionId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::GetNextConnectionId)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1089358;

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
  constexpr static std::size_t addrs = 0x108945c;

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
    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, ::GlobalNamespace::DisconnectedReason)>(&::GlobalNamespace::ConnectedPlayerManager::RemovePlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x10894e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RemovePlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.AddPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*)>(
    &::GlobalNamespace::ConnectedPlayerManager::AddPlayer)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x1089844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "AddPlayer", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* (::GlobalNamespace::ConnectedPlayerManager::*)(uint8_t)>(&::GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1089398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.GetPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* (
    ::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::IConnection*, uint8_t)>(&::GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x108a104;

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* (::GlobalNamespace::ConnectedPlayerManager::*)(::StringW)>(&::GlobalNamespace::ConnectedPlayerManager::GetPlayer)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x108a1f8;

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
  constexpr static std::size_t addrs = 0x108a2c4;

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
  constexpr static std::size_t addrs = 0x108a31c;

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
  constexpr static std::size_t addrs = 0x108a3b8;

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
  constexpr static std::size_t addrs = 0x108a454;

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
  constexpr static std::size_t addrs = 0x108a4f0;

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
  constexpr static std::size_t addrs = 0x108a58c;

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
  constexpr static std::size_t addrs = 0x108a63c;

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
  constexpr static std::size_t addrs = 0x108a6ec;

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
  constexpr static std::size_t addrs = 0x108a79c;

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
  constexpr static std::size_t addrs = 0x108a84c;

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
  constexpr static std::size_t addrs = 0x108a8fc;

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
  constexpr static std::size_t addrs = 0x108a9ac;

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
  constexpr static std::size_t addrs = 0x108aa5c;

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
  constexpr static std::size_t addrs = 0x108ab0c;

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
  constexpr static std::size_t addrs = 0x108abbc;

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
  constexpr static std::size_t addrs = 0x108ac6c;

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
  constexpr static std::size_t addrs = 0x108ad1c;

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
  constexpr static std::size_t addrs = 0x108adcc;

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
  constexpr static std::size_t addrs = 0x108ae7c;

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
  constexpr static std::size_t addrs = 0x108af2c;

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
  constexpr static std::size_t addrs = 0x108afdc;

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
  constexpr static std::size_t addrs = 0x108b08c;

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
  constexpr static std::size_t addrs = 0x108b128;

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
  constexpr static std::size_t addrs = 0x108b1c4;

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
  constexpr static std::size_t addrs = 0x108b268;

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
  constexpr static std::size_t addrs = 0x10896f4;

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
  constexpr static std::size_t addrs = 0x108b290;

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
  constexpr static std::size_t addrs = 0x108b334;

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
  constexpr static std::size_t addrs = 0x108b3d8;

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
  constexpr static std::size_t addrs = 0x108b3e0;

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
  constexpr static std::size_t addrs = 0x108b428;

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
  constexpr static std::size_t addrs = 0x108b450;

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
  constexpr static std::size_t addrs = 0x1089b20;

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
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x108b484;

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
  constexpr static std::size_t size = 0x1034;
  constexpr static std::size_t addrs = 0x108b540;

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
  constexpr static std::size_t addrs = 0x108cafc;

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
  constexpr static std::size_t addrs = 0x108ce1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(),
                                                                               "PollLateUpdateOptional", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.RegisterSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__MessageType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::RegisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x108ce48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.UnregisterSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__MessageType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::ConnectedPlayerManager::UnregisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x108ceb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(&::GlobalNamespace::ConnectedPlayerManager::Dispose)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x108cf18;

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
  constexpr static std::size_t addrs = 0x1089798;

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
  constexpr static std::size_t addrs = 0x108d49c;

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
  constexpr static std::size_t addrs = 0x108d57c;

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
  constexpr static std::size_t addrs = 0x108d6bc;

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
  constexpr static std::size_t addrs = 0x108d7d0;

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
  constexpr static std::size_t addrs = 0x108d7e0;

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
  constexpr static std::size_t addrs = 0x108c7b4;

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
  constexpr static std::size_t addrs = 0x108d8d8;

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
  constexpr static std::size_t addrs = 0x108c7dc;

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
  constexpr static std::size_t addrs = 0x108da18;

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
  constexpr static std::size_t addrs = 0x108da64;

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
  constexpr static std::size_t addrs = 0x108cac4;

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
  constexpr static std::size_t addrs = 0x108dc60;

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
  constexpr static std::size_t addrs = 0x108de6c;

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
  constexpr static std::size_t addrs = 0x1089bf4;

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
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, bool)>(&::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyExcludingPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1089d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyExcludingPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyToPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyToPlayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1089e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyToPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyFromPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, bool)>(&::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x108dd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.SendImmediatelyFromPlayerToPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::LiteNetLib::Utils::INetSerializable*, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*)>(
    &::GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayer)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x108a024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayerToPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.FlushReliableQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)()>(
    &::GlobalNamespace::ConnectedPlayerManager::FlushReliableQueue)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x108cc64;

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
  constexpr static std::size_t addrs = 0x108cd40;

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
  constexpr static std::size_t addrs = 0x108e36c;

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
    ::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::__EncryptionUtility__IEncryptionState*, uint8_t, uint8_t, ::LiteNetLib::Utils::INetSerializable*)>(
    &::GlobalNamespace::ConnectedPlayerManager::WriteOneEncrypted)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x108e4d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOneEncrypted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(),
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
  constexpr static std::size_t addrs = 0x108e638;

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
  constexpr static std::size_t addrs = 0x108e3d8;

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
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerConnected)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x108e698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerConnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerIdentityUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerIdentityUpdate)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x108e888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerIdentityUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.InitializePlayerEncryption
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*)>(
    &::GlobalNamespace::ConnectedPlayerManager::InitializePlayerEncryption)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x108ea20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "InitializePlayerEncryption", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerStateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerStateUpdate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x108eac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerStateUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerAvatarUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerAvatarUpdate)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x108eb9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerAvatarUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleServerPlayerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerDisconnected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x108ec88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleKickPlayerPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleKickPlayerPacket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x108ed84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleKickPlayerPacket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePlayerSortOrderUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePlayerSortOrderUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x108eeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerSortOrderUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandleSyncTimePacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandleSyncTimePacket)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x108f038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleSyncTimePacket", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PingPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePing)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x108f1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePing", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.HandlePong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(
    ::GlobalNamespace::__ConnectedPlayerManager__PongPacket*, ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::ConnectedPlayerManager::HandlePong)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x108f424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePong", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConnectedPlayerManager.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConnectedPlayerManager::*)(::StringW)>(&::GlobalNamespace::ConnectedPlayerManager::Log)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x108f608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::ConnectedPlayerManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::ConnectedPlayerManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Action*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_initializedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_disconnectedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_connectionFailedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerConnectedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerDisconnectedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerStateChangedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerAvatarChangedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerOrderChangedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_playerLatencyInitializedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get_syncTimeInitializedEvent() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LongRollingAverage*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__syncTimeOffset() const {
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
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITimeProvider*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__timeProvider() const {
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
constexpr ::cordl_internals::to_const_pointer<::BGNet::Core::ITaskUtility*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__taskUtility() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectionManager*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__connectionManager() const {
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
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__temporaryDataWriter() const {
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
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__temporaryEncryptedDataWriter() const {
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
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__reliableDataWriter() const {
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
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__unreliableDataWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableDataWriter;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__unreliableDataWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unreliableDataWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__players() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__players() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____players;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__players(::System::Collections::Generic::List_1<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____players)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayerState() const {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDiffieHellmanKeyPair*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__encryptionKeys() const {
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
constexpr ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*> const& GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__localPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayer;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__localPlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* value) {
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
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__messageSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageSerializer;
}
constexpr ::cordl_internals::to_const_pointer<
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::ConnectedPlayerManager::__cordl_internal_get__messageSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messageSerializer;
}
constexpr void GlobalNamespace::ConnectedPlayerManager::__cordl_internal_set__messageSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__ConnectedPlayerManager__InternalMessageType, ::GlobalNamespace::IConnectedPlayer*>* value) {
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
inline void GlobalNamespace::ConnectedPlayerManager::RemovePlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player, ::GlobalNamespace::DisconnectedReason reason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RemovePlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player, reason);
}
inline void GlobalNamespace::ConnectedPlayerManager::AddPlayer(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "AddPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetPlayer(uint8_t connectionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, false>(this, ___internal_method, connectionId);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetPlayer(::GlobalNamespace::IConnection* connection, uint8_t remoteConnectionId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnection*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, false>(this, ___internal_method, connection, remoteConnectionId);
}
inline ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* GlobalNamespace::ConnectedPlayerManager::GetPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "GetPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*, false>(this, ___internal_method, userId);
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
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::ConnectedPlayerManager::New_ctor(::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager*>(connectionManager));
}
inline void GlobalNamespace::ConnectedPlayerManager::_ctor(::GlobalNamespace::IConnectionManager* connectionManager) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionManager);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::ConnectedPlayerManager::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility,
                                                                                                    ::GlobalNamespace::IConnectionManager* connectionManager) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ConnectedPlayerManager*>(timeProvider, taskUtility, connectionManager));
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
inline void GlobalNamespace::ConnectedPlayerManager::RegisterSerializer(::GlobalNamespace::__ConnectedPlayerManager__MessageType serializerType,
                                                                        ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
inline void GlobalNamespace::ConnectedPlayerManager::UnregisterSerializer(::GlobalNamespace::__ConnectedPlayerManager__MessageType serializerType,
                                                                          ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__MessageType>::get(),
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
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x2))
inline void GlobalNamespace::ConnectedPlayerManager::Disconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Disconnect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x4))
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
/// @param onlyFirstDegree: bool (default: false)
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediately(::LiteNetLib::Utils::INetSerializable* message, bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediately", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, onlyFirstDegree);
}
/// @param onlyFirstDegree: bool (default: false)
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyExcludingPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                    ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* excludingPlayer, bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyExcludingPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, excludingPlayer, onlyFirstDegree);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyToPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, toPlayer);
}
/// @param onlyFirstDegree: bool (default: false)
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayer(::LiteNetLib::Utils::INetSerializable* message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                                               bool onlyFirstDegree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, onlyFirstDegree);
}
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayer(::LiteNetLib::Utils::INetSerializable* message,
                                                                                       ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                                                       ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayerToPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::INetSerializable*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
template <typename T>
inline void GlobalNamespace::ConnectedPlayerManager::SendImmediatelyFromPlayerToPlayerUnreliable(T message, ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* fromPlayer,
                                                                                                 ::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "SendImmediatelyFromPlayerToPlayerUnreliable",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
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
inline ::LiteNetLib::Utils::NetDataWriter* GlobalNamespace::ConnectedPlayerManager::WriteOneEncrypted(::GlobalNamespace::__EncryptionUtility__IEncryptionState* encryptionState, uint8_t senderId,
                                                                                                      uint8_t receiverId, ::LiteNetLib::Utils::INetSerializable* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "WriteOneEncrypted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EncryptionUtility__IEncryptionState*>::get(),
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
inline void GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerConnected(::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket* packet,
                                                                                 ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerConnectedPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerIdentityUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket* packet,
                                                                                ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerIdentityUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerIdentityPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::InitializePlayerEncryption(::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "InitializePlayerEncryption", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__ConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerStateUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerStateUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerStatePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerAvatarUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerAvatarUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerAvatarPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleServerPlayerDisconnected(::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket* packet,
                                                                                    ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleServerPlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerDisconnectedPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleKickPlayerPacket(::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket* packet, ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleKickPlayerPacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__KickPlayerPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePlayerSortOrderUpdate(::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket* packet,
                                                                                 ::GlobalNamespace::IConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePlayerSortOrderUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PlayerSortOrderPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandleSyncTimePacket(::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket* packet, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandleSyncTimePacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__SyncTimePacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePing(::GlobalNamespace::__ConnectedPlayerManager__PingPacket* packet, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePing", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PingPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::HandlePong(::GlobalNamespace::__ConnectedPlayerManager__PongPacket* packet, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "HandlePong", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ConnectedPlayerManager__PongPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
inline void GlobalNamespace::ConnectedPlayerManager::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConnectedPlayerManager*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConnectedPlayerManager::ConnectedPlayerManager() {}
