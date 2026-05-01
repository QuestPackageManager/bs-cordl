#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/INearestNeighbourList_2.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__INearestNeighbourList_2_def.hpp"
template <typename TItem, typename TDistance> inline bool UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::Add(TItem item, TDistance distance) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item, distance);
}
template <typename TItem, typename TDistance> inline TItem UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::GetFurtherest() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline TItem UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::RemoveFurtherest() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline int32_t UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::get_MaxCapacity() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline int32_t UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::get_Count() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
