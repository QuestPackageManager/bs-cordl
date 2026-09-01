#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\IPriorityQueue_2.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_def.hpp"
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>::Enqueue(TItem item, TPriority priority) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline TItem UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>::Dequeue() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline int32_t UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>::get_Count() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
