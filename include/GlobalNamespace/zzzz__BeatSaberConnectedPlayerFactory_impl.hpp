#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatSaberConnectedPlayerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayerFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__BeatSaberPlayerIdentityPacketData_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerFactory_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__PlayerConnectedPacket_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory.CreateLocalPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayer* (
    ::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
                                                           ::StringW, ::StringW, bool, ::ArrayW<uint8_t>, ::ArrayW<uint8_t>, ::StringW)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateLocalPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x32a5874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(),
                                         { "CreateLocalPlayer",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                             ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                             ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory.CreateDirectlyConnectedPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayer* (
    ::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
                                                           uint8_t, ::GlobalNamespace::IConnection*)>(&::GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateDirectlyConnectedPlayer)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x32a5938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(),
                                         { "CreateDirectlyConnectedPlayer",
                                           {},
                                           { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                        ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                             ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory.CreateRemoteConnectedPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatSaberConnectedPlayer* (
    ::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)(::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*,
                                                           uint8_t, ::GlobalNamespace::PlayerConnectedPacket*, ::GlobalNamespace::BeatSaberConnectedPlayer*)>(
    &::GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateRemoteConnectedPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x32a5b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(),
                            { "CreateRemoteConnectedPlayer",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                           ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::PlayerConnectedPacket*>(), ::i2c::type_of<::GlobalNamespace::BeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatSaberConnectedPlayerFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatSaberConnectedPlayerFactory::*)()>(&::GlobalNamespace::BeatSaberConnectedPlayerFactory::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32a5c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateLocalPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    ::StringW userId, ::StringW userName, bool isConnectionOwner, ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(),
                                       { "CreateLocalPlayer",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                      ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::ArrayW<uint8_t>>(),
                                           ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayer*>(this, ___internal_method, manager, userId, userName, isConnectionOwner, publicEncryptionKey, random,
                                                                                           compatibilityVersion);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateDirectlyConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    uint8_t connectionId, ::GlobalNamespace::IConnection* connection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(),
                                       { "CreateDirectlyConnectedPlayer",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                                      ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                                           ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::IConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayer*>(this, ___internal_method, manager, connectionId, connection);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayer* GlobalNamespace::BeatSaberConnectedPlayerFactory::CreateRemoteConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
        manager,
    uint8_t connectionId, ::GlobalNamespace::PlayerConnectedPacket* packet, ::GlobalNamespace::BeatSaberConnectedPlayer* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(),
                          { "CreateRemoteConnectedPlayer",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::ConnectedPlayerManager_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                                                         ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(),
                              ::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::PlayerConnectedPacket*>(), ::i2c::type_of<::GlobalNamespace::BeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatSaberConnectedPlayer*>(this, ___internal_method, manager, connectionId, packet, parent);
}
inline void GlobalNamespace::BeatSaberConnectedPlayerFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatSaberConnectedPlayerFactory* GlobalNamespace::BeatSaberConnectedPlayerFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatSaberConnectedPlayerFactory*>());
}
/// @brief Convert operator to
/// "::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr GlobalNamespace::BeatSaberConnectedPlayerFactory::operator ::GlobalNamespace::IConnectedPlayerFactory_3<
    ::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*() noexcept {
  return static_cast<
      ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(
      static_cast<void*>(this));
}
/// @brief Convert to
/// "::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberConnectedPlayer*,::GlobalNamespace::BeatSaberPlayerIdentityPacketData>"
constexpr ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*,
                                                       ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*
GlobalNamespace::BeatSaberConnectedPlayerFactory::
    i___GlobalNamespace__IConnectedPlayerFactory_3___GlobalNamespace__IBeatSaberConnectedPlayer____GlobalNamespace__BeatSaberConnectedPlayer____GlobalNamespace__BeatSaberPlayerIdentityPacketData_() noexcept {
  return static_cast<
      ::GlobalNamespace::IConnectedPlayerFactory_3<::GlobalNamespace::IBeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberConnectedPlayer*, ::GlobalNamespace::BeatSaberPlayerIdentityPacketData>*>(
      static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatSaberConnectedPlayerFactory::BeatSaberConnectedPlayerFactory() {}
