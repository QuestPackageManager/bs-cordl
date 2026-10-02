#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayer_3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerExtension_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAvatarPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerControllerDataPacket_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x352d868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_isAvatarResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(&::GlobalNamespace::BeatSaberConnectedPlayer::get_isAvatarResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352d87c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_isAvatarResolved", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.set_isAvatarResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(bool)>(&::GlobalNamespace::BeatSaberConnectedPlayer::set_isAvatarResolved)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352d884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "set_isAvatarResolved", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_activeHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerActiveHand (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::get_activeHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352d88c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_activeHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_extension
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ConnectedPlayerExtension* (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::get_extension)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352d894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_extension", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.add_avatarDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::add_avatarDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x352d89c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                             { "add_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.remove_avatarDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::remove_avatarDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x352d95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                             { "remove_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
    uint8_t, uint8_t, ::GlobalNamespace::IConnection*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::StringW, ::StringW, bool, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::StringW)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x352da1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                             ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IConnection*>(),
                                             ::i2c::type_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                             ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetGameSpecificPlayerIdentityData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberPlayerIdentityPacketData (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetGameSpecificPlayerIdentityData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x352db2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetPlayerControllerDataPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerControllerDataPacket* (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerControllerDataPacket)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x352db6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "GetPlayerControllerDataPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.UpdateIdentity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::BeatSaberPlayerIdentityPacketData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::UpdateIdentity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x352dc1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                                                           { "UpdateIdentity", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.SetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::SetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x352dd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                                                           { "SetMultiplayerAvatarsData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.UpdatePlayerControllerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::PlayerControllerDataPacket*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::UpdatePlayerControllerData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x352dd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                             { "UpdatePlayerControllerData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerControllerDataPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.SetActiveHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::MultiplayerActiveHand)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::SetActiveHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x352dd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "SetActiveHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetPlayerAvatarPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAvatarPacket* (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerAvatarPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x352dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "GetPlayerAvatarPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.UpdateAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::PlayerAvatarPacket*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::UpdateAvatar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x352de08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "UpdateAvatar", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAvatarPacket*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerAvatarsData& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__playerAvatars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr ::GlobalNamespace::MultiplayerAvatarsData const& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__playerAvatars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAvatars;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_set__playerAvatars(::GlobalNamespace::MultiplayerAvatarsData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerAvatars = value;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__activeHand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeHand;
}
constexpr ::GlobalNamespace::MultiplayerActiveHand const& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__activeHand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeHand;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_set__activeHand(::GlobalNamespace::MultiplayerActiveHand value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeHand = value;
}
constexpr ::GlobalNamespace::ConnectedPlayerExtension*& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__extension() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extension;
}
constexpr ::GlobalNamespace::ConnectedPlayerExtension* const& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__extension() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____extension;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_set__extension(::GlobalNamespace::ConnectedPlayerExtension* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____extension = value;
}
constexpr bool& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__isAvatarResolved_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAvatarResolved_k__BackingField;
}
constexpr bool const& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get__isAvatarResolved_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isAvatarResolved_k__BackingField;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_set__isAvatarResolved_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isAvatarResolved_k__BackingField = value;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get_avatarDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarDidChangeEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* const& GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_get_avatarDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___avatarDidChangeEvent;
}
constexpr void GlobalNamespace::BeatSaberConnectedPlayer::__cordl_internal_set_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___avatarDidChangeEvent = value;
}
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::BeatSaberConnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatSaberConnectedPlayer::get_isAvatarResolved() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_isAvatarResolved", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::set_isAvatarResolved(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "set_isAvatarResolved", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::BeatSaberConnectedPlayer::get_activeHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_activeHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerActiveHand>(this, ___internal_method);
}
inline ::GlobalNamespace::ConnectedPlayerExtension* GlobalNamespace::BeatSaberConnectedPlayer::get_extension() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_extension", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ConnectedPlayerExtension*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::add_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                           { "add_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::remove_avatarDidChangeEvent(::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                           { "remove_avatarDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::IBeatSaberConnectedPlayer*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::_ctor(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                         ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>* manager,
                                                             uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection,
                                                             ::GlobalNamespace::BeatSaberConnectedPlayer* parent, ::StringW userId, ::StringW userName, bool isConnectionOwner, bool isMe,
                                                             ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                      ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                           ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IConnection*>(),
                                           ::i2c::type_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                           ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, connectionId, remoteConnectionId, connection, parent, userId, userName, isConnectionOwner, isMe,
                                                   publicEncryptionKey, random, compatibilityVersion);
}
inline ::GlobalNamespace::BeatSaberPlayerIdentityPacketData GlobalNamespace::BeatSaberConnectedPlayer::GetGameSpecificPlayerIdentityData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerControllerDataPacket* GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerControllerDataPacket() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "GetPlayerControllerDataPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerControllerDataPacket*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::UpdateIdentity(::GlobalNamespace::BeatSaberPlayerIdentityPacketData identityData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                                                         { "UpdateIdentity", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, identityData);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::SetMultiplayerAvatarsData(::GlobalNamespace::MultiplayerAvatarsData playerAvatars) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                                                         { "SetMultiplayerAvatarsData", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerAvatarsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerAvatars);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::UpdatePlayerControllerData(::GlobalNamespace::PlayerControllerDataPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                                                         { "UpdatePlayerControllerData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerControllerDataPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::SetActiveHand(::GlobalNamespace::MultiplayerActiveHand newActiveHand) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "SetActiveHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newActiveHand);
}
inline ::GlobalNamespace::PlayerAvatarPacket* GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerAvatarPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "GetPlayerAvatarPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAvatarPacket*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatSaberConnectedPlayer::UpdateAvatar(::GlobalNamespace::PlayerAvatarPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "UpdateAvatar", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAvatarPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayer::New_ctor(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    uint8_t connectionId, uint8_t remoteConnectionId, ::GlobalNamespace::IConnection* connection, ::GlobalNamespace::BeatSaberConnectedPlayer* parent, ::StringW userId, ::StringW userName,
    bool isConnectionOwner, bool isMe, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberConnectedPlayer*>(manager, connectionId, remoteConnectionId, connection, parent, userId, userName,
                                                                                                        isConnectionOwner, isMe, publicEncryptionKey, random, compatibilityVersion));
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr GlobalNamespace::BeatSaberConnectedPlayer::operator ::GlobalNamespace::IBeatSaberConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberConnectedPlayer"
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayer::i___GlobalNamespace__IBeatSaberConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IConnectedPlayer"
constexpr GlobalNamespace::BeatSaberConnectedPlayer::operator ::GlobalNamespace::IConnectedPlayer*() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IConnectedPlayer"
constexpr ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayer::i___GlobalNamespace__IConnectedPlayer() noexcept {
  return static_cast<::GlobalNamespace::IConnectedPlayer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayer::BeatSaberConnectedPlayer() {}
