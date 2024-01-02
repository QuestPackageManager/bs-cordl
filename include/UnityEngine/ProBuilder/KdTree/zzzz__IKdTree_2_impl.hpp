#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::Add(::ArrayW<TKey, ::Array<TKey>*> point, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::TryFindValueAt(::ArrayW<TKey, ::Array<TKey>*> point, ByRef<TValue> value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline TValue UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::FindValueAt(::ArrayW<TKey, ::Array<TKey>*> point) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, point);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::TryFindValue(TValue value, ByRef<::ArrayW<TKey, ::Array<TKey>*>> point) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, point);
}
template <typename TKey, typename TValue> inline ::ArrayW<TKey, ::Array<TKey>*> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::FindValue(TValue value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TKey, ::Array<TKey>*>, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>
UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::RadialSearch(::ArrayW<TKey, ::Array<TKey>*> center, TKey radius, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>, false>(
      this, ___internal_method, center, radius, count);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::RemoveAt(::ArrayW<TKey, ::Array<TKey>*> point) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, point);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param count: int32_t (default: static_cast<int32_t>(0x7fffffff))
template <typename TKey, typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>
UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::GetNearestNeighbours(::ArrayW<TKey, ::Array<TKey>*> point, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*, ::Array<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>, false>(
      this, ___internal_method, point, count);
}
template <typename TKey, typename TValue> inline int32_t UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
