#pragma once
// IWYU pragma private; include "System\Collections\Generic\ArraySortHelper_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__ArraySortHelper_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*, "s_defaultArraySortHelper", ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(
      std::forward<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::getStaticF_s_defaultArraySortHelper() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*, "s_defaultArraySortHelper",
                                           ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>();
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::Sort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t index, int32_t length,
                                                                                ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                                                         { "Sort",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, values, index, length, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::SwapIfGreaterWithItems(::ArrayW<TKey> keys, ::ArrayW<TValue> values,
                                                                                                  ::System::Collections::Generic::IComparer_1<TKey>* comparer, int32_t a, int32_t b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                           { "SwapIfGreaterWithItems",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, comparer, a, b);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::Swap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t j) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                              { "Swap", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, i, j);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::IntrospectiveSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t left, int32_t length,
                                                                                             ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                                                         { "IntrospectiveSort",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, left, length, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::IntroSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi, int32_t depthLimit,
                                                                                     ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                           { "IntroSort",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, lo, hi, depthLimit, comparer);
}
template <typename TKey, typename TValue>
inline int32_t System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::PickPivotAndPartition(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi,
                                                                                                    ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                                                         { "PickPivotAndPartition",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::Heapsort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi,
                                                                                    ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                                                         { "Heapsort",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::DownHeap(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t i, int32_t n, int32_t lo,
                                                                                    ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                           { "DownHeap",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, i, n, lo, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::InsertionSort(::ArrayW<TKey> keys, ::ArrayW<TValue> values, int32_t lo, int32_t hi,
                                                                                         ::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(),
                                                                                         { "InsertionSort",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, values, lo, hi, comparer);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::get_Default() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>* System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::ArraySortHelper_2<TKey, TValue>::ArraySortHelper_2() {}
