#pragma once
// IWYU pragma private; include "GlobalNamespace/IReferenceCountingCache_2.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::Insert(TKey key, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::AddReference(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::RemoveReference(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::GetReferenceCount(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>::TryGet(TKey key, ::ByRef<TValue> result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, result);
}
