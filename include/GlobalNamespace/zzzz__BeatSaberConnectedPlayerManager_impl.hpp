#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayerManager.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "BGNet/Core/zzzz__ITaskUtility_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerFactory_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAvatarPacket_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::BeatSaberConnectedPlayerManager_BeatSaberMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::BeatSaberConnectedPlayerManager_BeatSaberMessageType() {}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::PlayerAvatarUpdate{ static_cast<uint8_t>(
    0x0u) };
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.add_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(&::GlobalNamespace::BeatSaberConnectedPlayerManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31d22b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.remove_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(&::GlobalNamespace::BeatSaberConnectedPlayerManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x31d2370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::GlobalNamespace::IConnectionManager*,
    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x31d2430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerFactory_3<
                ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IConnectionManager*,
    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x31d24e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerFactory_3<
                ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandleGameSpecificConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificConnected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x31d26e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandleGameSpecificPlayerAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::BeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x31d2710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandleGameSpecificPlayerIdentityUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::BeatSaberPlayerIdentityPacketData, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
        &::GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerIdentityUpdate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x31d2714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.SetLocalPlayerAvatar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::SetLocalPlayerAvatar)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x31d2830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "SetLocalPlayerAvatar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandlePlayerAvatarUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::GlobalNamespace::PlayerAvatarPacket*, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::GlobalNamespace::BeatSaberConnectedPlayerManager::HandlePlayerAvatarUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x31d290c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "HandlePlayerAvatarUpdate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAvatarPacket*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.DisposeGameSpecificResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::DisposeGameSpecificResources)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x31d29e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 8));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get_playerAvatarChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get_playerAvatarChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerAvatarChangedEvent;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_set_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___playerAvatarChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get__localPlayerAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerAvatars;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get__localPlayerAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerAvatars;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_set__localPlayerAvatars(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerAvatars = value;
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>*&
GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get__beatSaberMessageSerializer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatSaberMessageSerializer;
}
constexpr ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* const&
GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get__beatSaberMessageSerializer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatSaberMessageSerializer;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_set__beatSaberMessageSerializer(
    ::GlobalNamespace::NetworkPacketSerializer_2<::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType, ::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatSaberMessageSerializer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "add_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "remove_playerAvatarChangedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void
GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor(::GlobalNamespace::IConnectionManager* connectionManager,
                                                        ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                     ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerFactory_3<
              ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionManager, connectedPlayerFactory);
}
inline void
GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
                                                        ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                     ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITaskUtility*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectionManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayerFactory_3<
              ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, taskUtility, connectionManager, connectedPlayerFactory);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificConnected() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerAdded(::GlobalNamespace::BeatSaberConnectedPlayer* player) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerIdentityUpdate(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData,
                                                                                                     ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, identityData, iPlayer);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "SetLocalPlayerAvatar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerAvatarsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerAvatarsData);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandlePlayerAvatarUpdate(::GlobalNamespace::PlayerAvatarPacket* packet, ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), "HandlePlayerAvatarUpdate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAvatarPacket*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatSaberConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::DisposeGameSpecificResources() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatSaberConnectedPlayerManager*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerManager*
GlobalNamespace::BeatSaberConnectedPlayerManager::New_ctor(::GlobalNamespace::IConnectionManager* connectionManager,
                                                           ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(connectionManager, connectedPlayerFactory));
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerManager* GlobalNamespace::BeatSaberConnectedPlayerManager::New_ctor(
    ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        connectedPlayerFactory) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(timeProvider, taskUtility, connectionManager, connectedPlayerFactory));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager::BeatSaberConnectedPlayerManager() {}
