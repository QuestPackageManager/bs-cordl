#pragma once
// IWYU pragma private; include "GlobalNamespace/IConnectedPlayerFactory_3.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayerFactory_3_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnection_def.hpp"
#include "GlobalNamespace/zzzz__PlayerConnectedPacket_def.hpp"
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::CreateLocalPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, ::StringW userId, ::StringW userName, bool isConnectionOwner,
    ::ArrayW<uint8_t, ::Array<uint8_t>*> publicEncryptionKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> random, ::StringW compatibilityVersion) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, manager, userId, userName, isConnectionOwner, publicEncryptionKey, random, compatibilityVersion);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::CreateDirectlyConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, ::GlobalNamespace::IConnection* connection) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, manager, connectionId, connection);
}
template <typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline TConnectedPlayerImpl GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::CreateRemoteConnectedPlayer(
    ::GlobalNamespace::ConnectedPlayerManager_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>* manager, uint8_t connectionId, ::GlobalNamespace::PlayerConnectedPacket* packet,
    TConnectedPlayerImpl parent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IConnectedPlayerFactory_3<TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<TConnectedPlayerImpl, false>(this, ___internal_method, manager, connectionId, packet, parent);
}
