#pragma once
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_def.hpp"
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>::Enqueue(TItem item, TPriority priority) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline TItem UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>::Dequeue() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline int32_t UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
