#pragma once
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehavior_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPacketSubSerializer_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__UpdateConnectionStateReason_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType::__MultiplayerSessionManager__MessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType::__MultiplayerSessionManager__MessageType() {}
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::MenuRpc{ static_cast<uint8_t>(0x0u) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::GameplayRpc{ static_cast<uint8_t>(0x1u) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::NodePoseSyncState{ static_cast<uint8_t>(0x2u) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::ScoreSyncState{ static_cast<uint8_t>(0x3u) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::NodePoseSyncStateDelta{ static_cast<uint8_t>(0x4u) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::ScoreSyncStateDelta{ static_cast<uint8_t>(0x5u) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__MessageType GlobalNamespace::__MultiplayerSessionManager__MessageType::OptionalAvatarData{ static_cast<uint8_t>(0x6u) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerSessionManager__SessionType::__MultiplayerSessionManager__SessionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerSessionManager__SessionType::__MultiplayerSessionManager__SessionType() {}
constexpr ::GlobalNamespace::__MultiplayerSessionManager__SessionType GlobalNamespace::__MultiplayerSessionManager__SessionType::Player{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__SessionType GlobalNamespace::__MultiplayerSessionManager__SessionType::Spectator{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__SessionType GlobalNamespace::__MultiplayerSessionManager__SessionType::DedicatedServer{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState::__MultiplayerSessionManager__ConnectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState::__MultiplayerSessionManager__ConnectionState() {}
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState GlobalNamespace::__MultiplayerSessionManager__ConnectionState::Disconnected{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState GlobalNamespace::__MultiplayerSessionManager__ConnectionState::Connecting{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState GlobalNamespace::__MultiplayerSessionManager__ConnectionState::Connected{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState GlobalNamespace::__MultiplayerSessionManager__ConnectionState::Disconnecting{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::*)()>(
    &::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe776e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0._GetPlayerByUserId_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::*)(
    ::GlobalNamespace::IConnectedPlayer*)>(&::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::_GetPlayerByUserId_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe77ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0*>::get(), "<GetPlayerByUserId>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr ::StringW const& GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::__cordl_internal_set_userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0* GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0*>());
}
inline void GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::_GetPlayerByUserId_b__0(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0*>::get(), "<GetPlayerByUserId>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerSessionManager____c__DisplayClass98_0::__MultiplayerSessionManager____c__DisplayClass98_0() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerSessionManager____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerSessionManager____c::*)()>(
    &::GlobalNamespace::__MultiplayerSessionManager____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe77be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerSessionManager____c._TryUpdateConnectedPlayer_b__104_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__MultiplayerSessionManager____c::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::__MultiplayerSessionManager____c::_TryUpdateConnectedPlayer_b__104_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe77bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get(), "<TryUpdateConnectedPlayer>b__104_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__MultiplayerSessionManager____c::setStaticF___9(::GlobalNamespace::__MultiplayerSessionManager____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__MultiplayerSessionManager____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get>(
      std::forward<::GlobalNamespace::__MultiplayerSessionManager____c*>(value));
}
inline ::GlobalNamespace::__MultiplayerSessionManager____c* GlobalNamespace::__MultiplayerSessionManager____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__MultiplayerSessionManager____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get>();
}
inline void GlobalNamespace::__MultiplayerSessionManager____c::setStaticF___9__104_0(::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>*, "<>9__104_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>* GlobalNamespace::__MultiplayerSessionManager____c::getStaticF___9__104_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::IConnectedPlayer*, int32_t>*, "<>9__104_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get>();
}
inline ::GlobalNamespace::__MultiplayerSessionManager____c* GlobalNamespace::__MultiplayerSessionManager____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerSessionManager____c*>());
}
inline void GlobalNamespace::__MultiplayerSessionManager____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__MultiplayerSessionManager____c::_TryUpdateConnectedPlayer_b__104_0(::GlobalNamespace::IConnectedPlayer* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerSessionManager____c*>::get(), "<TryUpdateConnectedPlayer>b__104_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerSessionManager____c::__MultiplayerSessionManager____c() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_connectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe74bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_connectedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_connectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_connectedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe74c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_connectedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::MultiplayerSessionManager::add_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe74d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_connectionFailedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(
    ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*)>(&::GlobalNamespace::MultiplayerSessionManager::remove_connectionFailedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe74db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe74e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_playerConnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_playerConnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe74f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe74fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_playerDisconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_playerDisconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe75070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe75120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe751d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_playerStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe75280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_playerStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_playerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe75330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_connectionOwnerStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_connectionOwnerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe753e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_connectionOwnerStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_connectionOwnerStateChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe75490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_connectionOwnerStateChangedEvent",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_disconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe75540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_disconnectedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action_1<::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_disconnectedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xe755f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.add_pollUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerSessionManager::add_pollUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe756a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_pollUpdateEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.remove_pollUpdateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::System::Action*)>(
    &::GlobalNamespace::MultiplayerSessionManager::remove_pollUpdateEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xe7573c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_pollUpdateEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isConnectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isConnectionOwner)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe757d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_connectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_connectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe757f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_connectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.set_connectionOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::set_connectionOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe757f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "set_connectionOwner", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isSpectating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isSpectating)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xe75800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isSpectating", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isConnectingOrConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isConnectingOrConnected)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe75918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isConnectingOrConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe7593c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isConnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isConnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe7592c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isDisconnecting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isDisconnecting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe7594c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_connectedPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* (
    ::GlobalNamespace::MultiplayerSessionManager::*)()>(&::GlobalNamespace::MultiplayerSessionManager::get_connectedPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7595c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_connectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_connectedPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe75964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_syncTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_syncTime)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe759ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_syncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_isSyncTimeInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_isSyncTimeInitialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe759c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_isSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_localPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_localPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe759d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_connectedPlayerManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ConnectedPlayerManager* (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe759ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_connectedPlayerManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.get_maxPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::get_maxPlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe759f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "get_maxPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(&::GlobalNamespace::MultiplayerSessionManager::Start)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe759fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(&::GlobalNamespace::MultiplayerSessionManager::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe75afc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::LateUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe75b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(&::GlobalNamespace::MultiplayerSessionManager::OnDestroy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xe75b70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.OnApplicationPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(bool)>(
    &::GlobalNamespace::MultiplayerSessionManager::OnApplicationPause)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe76418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.RegisterSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(
    ::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::RegisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe76470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.UnregisterSerializer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(
    ::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*)>(
    &::GlobalNamespace::MultiplayerSessionManager::UnregisterSerializer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe764d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.StartSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(
    ::GlobalNamespace::__MultiplayerSessionManager__SessionType, ::GlobalNamespace::ConnectedPlayerManager*)>(&::GlobalNamespace::MultiplayerSessionManager::StartSession)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0xe76540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "StartSession", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__SessionType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.SetMaxPlayerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerSessionManager::SetMaxPlayerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe76b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SetMaxPlayerCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.EndSession
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::EndSession)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xe75f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "EndSession", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.Disconnect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::Disconnect)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe76b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "Disconnect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandleInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::HandleInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe76b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandleConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::HandleConnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe76b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "HandleConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandleDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandleDisconnected)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe76b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandleDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandleConnectionFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandleConnectionFailed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe76b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandleConnectionFailed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandleSyncTimeInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::HandleSyncTimeInitialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe76b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "HandleSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandlePlayerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandlePlayerConnected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe76b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerConnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandlePlayerDisconnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandlePlayerDisconnected)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe77218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandlePlayerStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandlePlayerStateChanged)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xe772d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerStateChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandlePlayerAvatarChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandlePlayerAvatarChanged)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xe7747c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerAvatarChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandlePlayerOrderChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandlePlayerOrderChanged)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xe77500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerOrderChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.HandlePlayerLatencyInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*)>(
    &::GlobalNamespace::MultiplayerSessionManager::HandlePlayerLatencyInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe7753c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerLatencyInitialized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.GetPlayerByUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::MultiplayerSessionManager::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerSessionManager::GetPlayerByUserId)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xe77544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "GetPlayerByUserId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.GetConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IConnectedPlayer* (::GlobalNamespace::MultiplayerSessionManager::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerSessionManager::GetConnectedPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xe776e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "GetConnectedPlayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.SetLocalPlayerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::StringW, bool)>(
    &::GlobalNamespace::MultiplayerSessionManager::SetLocalPlayerState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe75a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SetLocalPlayerState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.KickPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerSessionManager::KickPlayer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe77740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "KickPlayer",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.LocalPlayerHasState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerSessionManager::LocalPlayerHasState)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xe77758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "LocalPlayerHasState",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.UpdateConnectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)(
    ::GlobalNamespace::UpdateConnectionStateReason, ::GlobalNamespace::DisconnectedReason, ::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerSessionManager::UpdateConnectionState)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xe75b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "UpdateConnectionState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UpdateConnectionStateReason>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.TryUpdateConnectedPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerSessionManager::*)(::GlobalNamespace::IConnectedPlayer*, bool)>(
    &::GlobalNamespace::MultiplayerSessionManager::TryUpdateConnectedPlayer)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0xe76c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "TryUpdateConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager.GetNextAvailableSortIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerSessionManager::*)()>(
    &::GlobalNamespace::MultiplayerSessionManager::GetNextAvailableSortIndex)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xe7783c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                               "GetNextAvailableSortIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerSessionManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerSessionManager::*)()>(&::GlobalNamespace::MultiplayerSessionManager::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xe778f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
constexpr GlobalNamespace::MultiplayerSessionManager::operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerSessionManager::i___GlobalNamespace__IMultiplayerSessionManager() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>*&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__packetSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__packetSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetSerializer;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__packetSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::__MultiplayerSessionManager__MessageType, ::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packetSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectedPlayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectedPlayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayers;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__connectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__localPlayerState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__localPlayerState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerState;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__localPlayerState(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localPlayerState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__maxPlayerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayerCount;
}
constexpr int32_t const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__maxPlayerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxPlayerCount;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__maxPlayerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxPlayerCount = value;
}
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::GlobalNamespace::__MultiplayerSessionManager__ConnectionState const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__connectionState(::GlobalNamespace::__MultiplayerSessionManager__ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::System::Collections::Generic::Queue_1<int32_t>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__freeSortIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeSortIndices;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<int32_t>*> const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__freeSortIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____freeSortIndices;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__freeSortIndices(::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____freeSortIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_connectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_connectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_connectedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_connectionFailedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_connectionFailedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionFailedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerConnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerConnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerConnectedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerConnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerDisconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerDisconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerDisconnectedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerDisconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerAvatarChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerAvatarChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAvatarChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_playerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerStateChangedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerStateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_connectionOwnerStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionOwnerStateChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_connectionOwnerStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___connectionOwnerStateChangedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectionOwnerStateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_disconnectedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const&
GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_disconnectedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disconnectedEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disconnectedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_pollUpdateEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pollUpdateEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get_pollUpdateEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pollUpdateEvent;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set_pollUpdateEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pollUpdateEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IConnectedPlayer*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectionOwner_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionOwner_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectionOwner_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionOwner_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__connectionOwner_k__BackingField(::GlobalNamespace::IConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectionOwner_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ConnectedPlayerManager*& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectedPlayerManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConnectedPlayerManager*> const& GlobalNamespace::MultiplayerSessionManager::__cordl_internal_get__connectedPlayerManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerManager;
}
constexpr void GlobalNamespace::MultiplayerSessionManager::__cordl_internal_set__connectedPlayerManager(::GlobalNamespace::ConnectedPlayerManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedPlayerManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerSessionManager::add_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_connectedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_connectedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_connectedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_connectionFailedEvent(::System::Action_1<::GlobalNamespace::ConnectionFailedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_connectionFailedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::ConnectionFailedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_playerConnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerConnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_playerDisconnectedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerDisconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_playerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_playerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_connectionOwnerStateChangedEvent(::System::Action_1<::GlobalNamespace::IConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_connectionOwnerStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_disconnectedEvent(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_disconnectedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::DisconnectedReason>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::add_pollUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "add_pollUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerSessionManager::remove_pollUpdateEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "remove_pollUpdateEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isConnectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isConnectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager::get_connectionOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_connectionOwner", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::set_connectionOwner(::GlobalNamespace::IConnectedPlayer* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "set_connectionOwner", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isSpectating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isSpectating", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isConnectingOrConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isConnectingOrConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isConnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isConnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isDisconnecting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isDisconnecting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::MultiplayerSessionManager::get_connectedPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_connectedPlayers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MultiplayerSessionManager::get_syncTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_syncTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerSessionManager::get_isSyncTimeInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_isSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager::get_localPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_localPlayer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerManager* GlobalNamespace::MultiplayerSessionManager::get_connectedPlayerManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_connectedPlayerManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerManager*, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MultiplayerSessionManager::get_maxPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "get_maxPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::Update() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::OnApplicationPause(bool pauseStatus) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pauseStatus);
}
inline void GlobalNamespace::MultiplayerSessionManager::RegisterSerializer(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                                                           ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "RegisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
inline void GlobalNamespace::MultiplayerSessionManager::UnregisterSerializer(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                                                             ::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "UnregisterSerializer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPacketSubSerializer_1<::GlobalNamespace::IConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, subSerializer);
}
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager::RegisterCallback(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType,
                                                                         ::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>* callback, ::System::Func_1<T>* constructor) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "RegisterCallback",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<T, ::GlobalNamespace::IConnectedPlayer*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType, callback, constructor);
}
template <typename T> inline void GlobalNamespace::MultiplayerSessionManager::UnregisterCallback(::GlobalNamespace::__MultiplayerSessionManager__MessageType serializerType) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "UnregisterCallback",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__MessageType>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializerType);
}
inline void GlobalNamespace::MultiplayerSessionManager::StartSession(::GlobalNamespace::__MultiplayerSessionManager__SessionType sessionType,
                                                                     ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "StartSession", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerSessionManager__SessionType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectedPlayerManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionType, connectedPlayerManager);
}
inline void GlobalNamespace::MultiplayerSessionManager::SetMaxPlayerCount(int32_t maxPlayerCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SetMaxPlayerCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxPlayerCount);
}
inline void GlobalNamespace::MultiplayerSessionManager::EndSession() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "EndSession",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "Disconnect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MultiplayerSessionManager::Send(T message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "Send",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T> inline void GlobalNamespace::MultiplayerSessionManager::SendToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SendToPlayer",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename T> inline void GlobalNamespace::MultiplayerSessionManager::SendUnreliable(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SendUnreliable",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T> inline void GlobalNamespace::MultiplayerSessionManager::SendUnreliableEncryptedToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SendUnreliableEncryptedToPlayer",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, player);
}
template <typename T> inline void GlobalNamespace::MultiplayerSessionManager::SendUnreliableOnlyToFirstDegreeConnections(T message) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                               "SendUnreliableOnlyToFirstDegreeConnections", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
template <typename T>
inline void GlobalNamespace::MultiplayerSessionManager::SendUnreliableFromPlayerToPlayer(T message, ::GlobalNamespace::IConnectedPlayer* fromPlayer, ::GlobalNamespace::IConnectedPlayer* toPlayer) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SendUnreliableFromPlayerToPlayer",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, fromPlayer, toPlayer);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandleInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "HandleInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandleConnected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "HandleConnected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandleDisconnected(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandleDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandleConnectionFailed(::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandleConnectionFailed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandleSyncTimeInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "HandleSyncTimeInitialized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandlePlayerStateChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerStateChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandlePlayerAvatarChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerAvatarChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandlePlayerOrderChanged(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerOrderChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::MultiplayerSessionManager::HandlePlayerLatencyInitialized(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "HandlePlayerLatencyInitialized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager::GetPlayerByUserId(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "GetPlayerByUserId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method, userId);
}
inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSessionManager::GetConnectedPlayer(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "GetConnectedPlayer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method, i);
}
inline void GlobalNamespace::MultiplayerSessionManager::SetLocalPlayerState(::StringW state, bool hasState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "SetLocalPlayerState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, hasState);
}
inline void GlobalNamespace::MultiplayerSessionManager::KickPlayer(::StringW userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "KickPlayer", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline bool GlobalNamespace::MultiplayerSessionManager::LocalPlayerHasState(::StringW state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "LocalPlayerHasState",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
/// @param disconnectedReason: ::GlobalNamespace::DisconnectedReason (default: static_cast<int32_t>(0x1))
/// @param connectionFailedReason: ::GlobalNamespace::ConnectionFailedReason (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::MultiplayerSessionManager::UpdateConnectionState(::GlobalNamespace::UpdateConnectionStateReason updateReason, ::GlobalNamespace::DisconnectedReason disconnectedReason,
                                                                              ::GlobalNamespace::ConnectionFailedReason connectionFailedReason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "UpdateConnectionState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UpdateConnectionStateReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DisconnectedReason>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateReason, disconnectedReason, connectionFailedReason);
}
/// @param isPlayerConnected: bool (default: true)
inline bool GlobalNamespace::MultiplayerSessionManager::TryUpdateConnectedPlayer(::GlobalNamespace::IConnectedPlayer* player, bool isPlayerConnected) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), "TryUpdateConnectedPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, player, isPlayerConnected);
}
inline int32_t GlobalNamespace::MultiplayerSessionManager::GetNextAvailableSortIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(),
                                                                             "GetNextAvailableSortIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerSessionManager* GlobalNamespace::MultiplayerSessionManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSessionManager*>());
}
inline void GlobalNamespace::MultiplayerSessionManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSessionManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerSessionManager::MultiplayerSessionManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
