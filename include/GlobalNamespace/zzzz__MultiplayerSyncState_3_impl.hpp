#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__StateBuffer_3_def.hpp"
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::get_stateBuffer() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StateBuffer_3<TStateTable, TType, TState>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline ::GlobalNamespace::IConnectedPlayer* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::get_player() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IConnectedPlayer*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline int64_t GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetLatestTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "GetLatestTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetLatestState(TType type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), "GetLatestState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TType>::get() })));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::GetState(TType type, int64_t time) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type, time);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::ClearBufferedStates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(),
                                               "ClearBufferedStates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>* GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>());
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState> constexpr ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>::MultiplayerSyncState_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
