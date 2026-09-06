#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/INearestNeighbourList_2.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__INearestNeighbourList_2_def.hpp"
template <typename TItem, typename TDistance> inline bool UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::Add(TItem item, TDistance distance) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, distance);
}
template <typename TItem, typename TDistance> inline TItem UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::GetFurtherest() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline TItem UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::RemoveFurtherest() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline int32_t UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::get_MaxCapacity() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TItem, typename TDistance> inline int32_t UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>::get_Count() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::INearestNeighbourList_2<TItem, TDistance>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
