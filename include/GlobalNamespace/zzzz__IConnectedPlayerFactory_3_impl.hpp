#pragma once
// IWYU pragma private; include "GlobalNamespace\IConnectedPlayerFactory_3.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerFactory_3_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__PlayerConnectedPacket_def.hpp"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::CreateLocalPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, ::StringW userId, ::StringW userName, bool isConnectionOwner,
    ::ArrayW<uint8_t> publicEncryptionKey, ::ArrayW<uint8_t> random, ::StringW compatibilityVersion) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl>(this, ___internal_method, manager, userId, userName, isConnectionOwner, publicEncryptionKey, random, compatibilityVersion);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::CreateDirectlyConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, ::GlobalNamespace::IConnection* connection) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl>(this, ___internal_method, manager, connectionId, connection);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::CreateRemoteConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, ::GlobalNamespace::PlayerConnectedPacket* packet,
    TConnectedPlayerImpl parent) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                              { ::i2c::class_of<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl>(this, ___internal_method, manager, connectionId, packet, parent);
}
