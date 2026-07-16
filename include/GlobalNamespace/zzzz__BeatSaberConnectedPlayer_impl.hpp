#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayer.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_impl.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayer_3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerActiveHand_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAvatarPacket_def.hpp"
#include "GlobalNamespace/zzzz__PlayerControllerDataPacket_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_multiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerAvatarsData (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::get_multiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32a55bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.get_activeHand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerActiveHand (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::get_activeHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32a55d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_activeHand", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
    uint8_t, uint8_t, ::GlobalNamespace::IConnection*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::StringW, ::StringW, bool, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::StringW)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32a55d8;

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
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32a56b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { ::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetPlayerAvatarPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAvatarPacket* (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerAvatarPacket)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x32a56e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "GetPlayerAvatarPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.GetPlayerControllerDataPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerControllerDataPacket* (::GlobalNamespace::BeatSaberConnectedPlayer::*)()>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerControllerDataPacket)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x32a5754;

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
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32a5804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(),
                                                                                           { "UpdateIdentity", {}, { ::i2c::type_of<::GlobalNamespace::BeatSaberPlayerIdentityPacketData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.UpdateAvatar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::PlayerAvatarPacket*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::UpdateAvatar)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32a5820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "UpdateAvatar", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAvatarPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayer.SetMultiplayerAvatarsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayer::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::GlobalNamespace::BeatSaberConnectedPlayer::SetMultiplayerAvatarsData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32a5840;

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
  constexpr static std::size_t addrs = 0x32a5854;

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
  constexpr static std::size_t addrs = 0x32a586c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "SetActiveHand", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerActiveHand>() } })));
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
inline ::GlobalNamespace::MultiplayerAvatarsData GlobalNamespace::BeatSaberConnectedPlayer::get_multiplayerAvatarsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_multiplayerAvatarsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerAvatarsData>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerActiveHand GlobalNamespace::BeatSaberConnectedPlayer::get_activeHand() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "get_activeHand", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerActiveHand>(this, ___internal_method);
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
inline ::GlobalNamespace::PlayerAvatarPacket* GlobalNamespace::BeatSaberConnectedPlayer::GetPlayerAvatarPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "GetPlayerAvatarPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAvatarPacket*>(this, ___internal_method);
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
inline void GlobalNamespace::BeatSaberConnectedPlayer::UpdateAvatar(::GlobalNamespace::PlayerAvatarPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayer*>(), { "UpdateAvatar", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAvatarPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
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
