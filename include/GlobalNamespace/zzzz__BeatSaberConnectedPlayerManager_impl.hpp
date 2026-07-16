#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayerManager.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
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
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__NetworkPacketSerializer_2_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAvatarPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerControllerDataPacket_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::BeatSaberConnectedPlayerManager_BeatSaberMessageType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::BeatSaberConnectedPlayerManager_BeatSaberMessageType() {}
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::PlayerAvatarUpdate{ static_cast<uint8_t>(
    0x0u) };
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType GlobalNamespace::BeatSaberConnectedPlayerManager_BeatSaberMessageType::PlayerControllerDataUpdate{
  static_cast<uint8_t>(0x1u)
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.add_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::add_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a5c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                             { "add_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.remove_playerAvatarChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::remove_playerAvatarChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a5d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                             { "remove_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.add_playerControllerDataChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::add_playerControllerDataChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a5df8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                { "add_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.remove_playerControllerDataChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::remove_playerControllerDataChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32a5eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                { "remove_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::GlobalNamespace::IConnectionManager*,
    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32a5f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::IConnectionManager*>(),
                                             ::i2c::type_of<::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                         ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::BGNet::Core::ITimeProvider*, ::BGNet::Core::ITaskUtility*, ::GlobalNamespace::IConnectionManager*,
    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x32a6030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::GlobalNamespace::IConnectionManager*>(),
                                             ::i2c::type_of<::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                         ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandleGameSpecificConnected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificConnected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32a6358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandleGameSpecificPlayerAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::BeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerAdded)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a6394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandleGameSpecificPlayerIdentityUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::BeatSaberPlayerIdentityPacketData, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
        &::GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerIdentityUpdate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x32a6398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.SetLocalPlayerAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::SetLocalPlayerAvatar)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x32a64d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                                                           { "SetLocalPlayerAvatar", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.SetLocalPlayerActiveHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(::GlobalNamespace::MultiplayerActiveHand)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::SetLocalPlayerActiveHand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32a65b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                                                           { "SetLocalPlayerActiveHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandlePlayerAvatarUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::GlobalNamespace::PlayerAvatarPacket*, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::GlobalNamespace::BeatSaberConnectedPlayerManager::HandlePlayerAvatarUpdate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32a6644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                            { "HandlePlayerAvatarUpdate", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAvatarPacket*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.HandlePlayerControllerDataUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)(
    ::GlobalNamespace::PlayerControllerDataPacket*, ::GlobalNamespace::IBeatSaberConnectedPlayer*)>(&::GlobalNamespace::BeatSaberConnectedPlayerManager::HandlePlayerControllerDataUpdate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x32a671c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
            { "HandlePlayerControllerDataUpdate", {}, { ::i2c::type_of<::GlobalNamespace::PlayerControllerDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerManager.DisposeGameSpecificResources
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerManager::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayerManager::DisposeGameSpecificResources)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32a6840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 9 }));
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
  this->___playerAvatarChangedEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get_playerControllerDataChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerControllerDataChangedEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get_playerControllerDataChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerControllerDataChangedEvent;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_set_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerControllerDataChangedEvent = value;
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
constexpr ::GlobalNamespace::MultiplayerActiveHand& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get__localPlayerActiveHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerActiveHand;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand const& GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_get__localPlayerActiveHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerActiveHand;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayerManager::__cordl_internal_set__localPlayerActiveHand(::GlobalNamespace::MultiplayerActiveHand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerActiveHand = value;
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
  this->____beatSaberMessageSerializer = value;
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::add_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                           { "add_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::remove_playerAvatarChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                           { "remove_playerAvatarChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::add_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                           { "add_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::remove_playerControllerDataChangedEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                              { "remove_playerControllerDataChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor(::GlobalNamespace::IConnectionManager* connectionManager,
                                                        ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                     ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::IConnectionManager*>(),
                                           ::i2c::type_of<::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionManager, connectedPlayerFactory);
}
inline void
GlobalNamespace::BeatSaberConnectedPlayerManager::_ctor(::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
                                                        ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                     ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::BGNet::Core::ITimeProvider*>(), ::i2c::type_of<::BGNet::Core::ITaskUtility*>(), ::i2c::type_of<::GlobalNamespace::IConnectionManager*>(),
                                           ::i2c::type_of<::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider, taskUtility, connectionManager, connectedPlayerFactory);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificConnected() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerAdded(::GlobalNamespace::BeatSaberConnectedPlayer* player) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandleGameSpecificPlayerIdentityUpdate(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData,
                                                                                                     ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identityData, iPlayer);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::SetLocalPlayerAvatar(::GlobalNamespace::MultiplayerAvatarsData multiplayerAvatarsData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                                                         { "SetLocalPlayerAvatar", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerAvatarsData);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::SetLocalPlayerActiveHand(::GlobalNamespace::MultiplayerActiveHand activeHand) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                                                                                         { "SetLocalPlayerActiveHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeHand);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandlePlayerAvatarUpdate(::GlobalNamespace::PlayerAvatarPacket* packet, ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
                          { "HandlePlayerAvatarUpdate", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAvatarPacket*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::HandlePlayerControllerDataUpdate(::GlobalNamespace::PlayerControllerDataPacket* packet,
                                                                                               ::GlobalNamespace::IBeatSaberConnectedPlayer* iPlayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(),
          { "HandlePlayerControllerDataUpdate", {}, { ::i2c::type_of<::GlobalNamespace::PlayerControllerDataPacket*>(), ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, iPlayer);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerManager::DisposeGameSpecificResources() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerManager*
GlobalNamespace::BeatSaberConnectedPlayerManager::New_ctor(::GlobalNamespace::IConnectionManager* connectionManager,
                                                           ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* connectedPlayerFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(connectionManager, connectedPlayerFactory));
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerManager* GlobalNamespace::BeatSaberConnectedPlayerManager::New_ctor(
    ::BGNet::Core::ITimeProvider* timeProvider, ::BGNet::Core::ITaskUtility* taskUtility, ::GlobalNamespace::IConnectionManager* connectionManager,
    ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        connectedPlayerFactory) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberConnectedPlayerManager*>(timeProvider, taskUtility, connectionManager, connectedPlayerFactory));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerManager::BeatSaberConnectedPlayerManager() {}
