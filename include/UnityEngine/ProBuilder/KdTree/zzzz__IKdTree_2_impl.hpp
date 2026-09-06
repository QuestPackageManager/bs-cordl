#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/KdTree/IKdTree_2.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IKdTree_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__KdTreeNode_2_def.hpp"
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::Add(::ArrayW<TKey> point, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::TryFindValueAt(::ArrayW<TKey> point, ::by_ref<TValue> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, value);
}
template <typename TKey, typename TValue> inline TValue UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::FindValueAt(::ArrayW<TKey> point) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, point);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::TryFindValue(TValue value, ::by_ref<::ArrayW<TKey>> point) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, point);
}
template <typename TKey, typename TValue> inline ::ArrayW<TKey> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::FindValue(TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TKey>>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::RadialSearch(::ArrayW<TKey> center, TKey radius,
                                                                                                                                                       int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>>(this, ___internal_method, center, radius, count);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::RemoveAt(::ArrayW<TKey> point) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point);
}
template <typename TKey, typename TValue> inline void UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*> UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::GetNearestNeighbours(::ArrayW<TKey> point, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>>(this, ___internal_method, point, count);
}
template <typename TKey, typename TValue> inline int32_t UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey,TValue>*>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*
UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___UnityEngine__ProBuilder__KdTree__KdTreeNode_2_TKey_TValue___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::KdTree::KdTreeNode_2<TKey, TValue>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* UnityEngine::ProBuilder::KdTree::IKdTree_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
