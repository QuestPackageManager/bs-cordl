#pragma once
// IWYU pragma private; include "IntervalTree/IIntervalTree_2.hpp"
#include "IntervalTree/zzzz__IIntervalTree_2_def.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::get_Values() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t IntervalTree::IIntervalTree_2<TKey, TValue>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::Query(TKey value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::Query(TKey from, TKey to) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::QueryWithCount(TKey from, TKey to) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Add(TKey from, TKey to, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, value);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Remove(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::IntervalTree::IIntervalTree_2<TKey, TValue>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr IntervalTree::IIntervalTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
IntervalTree::IIntervalTree_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___IntervalTree__RangeValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr IntervalTree::IIntervalTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* IntervalTree::IIntervalTree_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
