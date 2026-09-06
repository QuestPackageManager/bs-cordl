#pragma once
// IWYU pragma private; include "Priority_Queue/IFixedSizePriorityQueue_2.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_def.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
template <typename TItem, typename TPriority> inline void Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::Resize(int32_t maxNodes) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNodes);
}
template <typename TItem, typename TPriority> inline int32_t Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::get_MaxSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TItem, typename TPriority> inline void Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::ResetNode(TItem node) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
template <typename TItem, typename TPriority>
constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority> constexpr Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TItem>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority> constexpr Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TItem, typename TPriority>
constexpr ::System::Collections::IEnumerable* Priority_Queue::IFixedSizePriorityQueue_2<TItem, TPriority>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
