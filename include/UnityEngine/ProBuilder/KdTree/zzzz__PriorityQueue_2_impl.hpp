#pragma once
// IWYU pragma private; include "UnityEngine\ProBuilder\KdTree\PriorityQueue_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ItemPriority_2_impl.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__PriorityQueue_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__IPriorityQueue_2_def.hpp"
#include "UnityEngine/ProBuilder/KdTree/zzzz__ITypeMath_1_def.hpp"
template <typename TItem, typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_priorityMath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityMath;
}
template <typename TItem, typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_priorityMath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___priorityMath;
}
template <typename TItem, typename TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_priorityMath(::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___priorityMath = value;
}
template <typename TItem, typename TPriority>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>>& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename TItem, typename TPriority>
constexpr ::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>> const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___queue;
}
template <typename TItem, typename TPriority>
constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_queue(::ArrayW<::UnityEngine::ProBuilder::KdTree::ItemPriority_2<TItem, TPriority>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___queue = value;
}
template <typename TItem, typename TPriority> constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capacity;
}
template <typename TItem, typename TPriority> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capacity;
}
template <typename TItem, typename TPriority> constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___capacity = value;
}
template <typename TItem, typename TPriority> constexpr int32_t& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TItem, typename TPriority> constexpr int32_t const& UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TItem, typename TPriority> constexpr void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TItem, typename TPriority>
inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::_ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, priorityMath);
}
template <typename TItem, typename TPriority> inline int32_t UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::ExpandCapacity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(), { "ExpandCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::Enqueue(TItem item, TPriority priority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "Enqueue", {}, { ::i2c::type_of<TItem>(), ::i2c::type_of<TPriority>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, priority);
}
template <typename TItem, typename TPriority> inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::Dequeue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::ReorderItem(int32_t index, int32_t direction) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(),
                                                                                         { "ReorderItem", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, direction);
}
template <typename TItem, typename TPriority> inline TItem UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::GetHighest() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(), { "GetHighest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline TPriority UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::GetHighestPriority() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(), { "GetHighestPriority", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TPriority>(this, ___internal_method);
}
template <typename TItem, typename TPriority>
inline ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*
UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::New_ctor(int32_t capacity, ::UnityEngine::ProBuilder::KdTree::ITypeMath_1<TPriority>* priorityMath) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>*>(capacity, priorityMath));
}
/// @brief Convert operator to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::operator ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*
UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::i___UnityEngine__ProBuilder__KdTree__IPriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::UnityEngine::ProBuilder::KdTree::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TItem, typename TPriority> constexpr ::UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TPriority>::PriorityQueue_2() {}
