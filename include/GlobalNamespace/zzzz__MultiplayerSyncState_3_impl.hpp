#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::get_stateBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "get_stateBuffer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::get_player() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "get_player",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline int64_t GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetLatestTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "GetLatestTime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetLatestState(TType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "GetLatestState",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetState(TType type, int64_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "GetState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type, time);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::ClearBufferedStates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(),
                                               "ClearBufferedStates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>());
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::MultiplayerSyncState_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
