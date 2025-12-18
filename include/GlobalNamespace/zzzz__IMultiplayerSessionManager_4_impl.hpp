#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionManager_4.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_4_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
template <typename TConnectedPlayerManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
inline void GlobalNamespace::IMultiplayerSessionManager_4<TConnectedPlayerManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>::StartSession(
    TConnectedPlayerManager connectedPlayerManager, ::GlobalNamespace::IMultiplayerSessionManager_1_IMultiplayerSessionInitializer<TConnectedPlayer>* multiplayerSessionInitializer) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<
                                             ::GlobalNamespace::IMultiplayerSessionManager_4<TConnectedPlayerManager, TConnectedPlayer, TConnectedPlayerImpl, TGameSpecificIdentityData>*>::get(),
                                         0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectedPlayerManager, multiplayerSessionInitializer);
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
template <typename TConnectedPlayerManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr GlobalNamespace::IMultiplayerSessionManager_4<TConnectedPlayerManager, TConnectedPlayer, TConnectedPlayerImpl,
                                                        TGameSpecificIdentityData>::operator ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>"
template <typename TConnectedPlayerManager, typename TConnectedPlayer, typename TConnectedPlayerImpl, typename TGameSpecificIdentityData>
constexpr ::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*
GlobalNamespace::IMultiplayerSessionManager_4<TConnectedPlayerManager, TConnectedPlayer, TConnectedPlayerImpl,
                                              TGameSpecificIdentityData>::i___GlobalNamespace__IMultiplayerSessionManager_1_TConnectedPlayer_() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager_1<TConnectedPlayer>*>(static_cast<void*>(this));
}
