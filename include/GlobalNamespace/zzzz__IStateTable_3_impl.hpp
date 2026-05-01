#pragma once
// IWYU pragma private; include "GlobalNamespace/IStateTable_3.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
template <typename TStateTable, typename TType, typename TState> inline TState GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::GetState(TType type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, type);
}
template <typename TStateTable, typename TType, typename TState> inline void GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::SetState(TType type, TState state) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, state);
}
template <typename TStateTable, typename TType, typename TState> inline TStateTable GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::GetDelta(::ByRef<TStateTable> stateTable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<TStateTable, false>(this, ___internal_method, stateTable);
}
template <typename TStateTable, typename TType, typename TState> inline TStateTable GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::ApplyDelta(::ByRef<TStateTable> delta) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<TStateTable, false>(this, ___internal_method, delta);
}
template <typename TStateTable, typename TType, typename TState> inline int32_t GlobalNamespace::IStateTable_3<TStateTable, TType, TState>::GetSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IStateTable_3<TStateTable, TType, TState>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
