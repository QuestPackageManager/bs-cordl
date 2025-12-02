#pragma once
// IWYU pragma private; include "GlobalNamespace/IMultiplayerSessionManager_1.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__ConnectedPlayerManager_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_1_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
template <typename TSessionType>
inline void GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>::InitializeState(TSessionType sessionType,
                                                                                                             ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerSessionManager_1_IPlayerStateManager<TSessionType>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionType, multiplayerSessionManager);
}
template <typename TSessionType>
inline void GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>::StartSession(TSessionType sessionType, ::GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionType, connectedPlayerManager);
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerSessionManager"
template <typename TSessionType> constexpr GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>::operator ::GlobalNamespace::IMultiplayerSessionManager*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerSessionManager"
template <typename TSessionType>
constexpr ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::IMultiplayerSessionManager_1<TSessionType>::i___GlobalNamespace__IMultiplayerSessionManager() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerSessionManager*>(static_cast<void*>(this));
}
