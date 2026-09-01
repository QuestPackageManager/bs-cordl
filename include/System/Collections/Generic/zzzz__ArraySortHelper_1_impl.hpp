#pragma once
// IWYU pragma private; include "System\Collections\Generic\ArraySortHelper_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__ArraySortHelper_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::setStaticF_s_defaultArraySortHelper(::System::Collections::Generic::ArraySortHelper_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::ArraySortHelper_1<T>*, "s_defaultArraySortHelper", ::System::Collections::Generic::ArraySortHelper_1<T>*>(
      std::forward<::System::Collections::Generic::ArraySortHelper_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::ArraySortHelper_1<T>* System::Collections::Generic::ArraySortHelper_1<T>::getStaticF_s_defaultArraySortHelper() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::ArraySortHelper_1<T>*, "s_defaultArraySortHelper", ::System::Collections::Generic::ArraySortHelper_1<T>*>();
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::Sort(::ArrayW<T> keys, int32_t index, int32_t length, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                          { "Sort", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keys, index, length, comparer);
}
template <typename T>
inline int32_t System::Collections::Generic::ArraySortHelper_1<T>::BinarySearch(::ArrayW<T> array, int32_t index, int32_t length, T value, ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                                                                                         { "BinarySearch",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, array, index, length, value, comparer);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::Sort(::ArrayW<T> keys, int32_t index, int32_t length, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                                              { "Sort", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, index, length, comparer);
}
template <typename T>
inline int32_t System::Collections::Generic::ArraySortHelper_1<T>::InternalBinarySearch(::ArrayW<T> array, int32_t index, int32_t length, T value,
                                                                                        ::System::Collections::Generic::IComparer_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                                                                                         { "InternalBinarySearch",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::IComparer_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, index, length, value, comparer);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::SwapIfGreater(::ArrayW<T> keys, ::System::Comparison_1<T>* comparer, int32_t a, int32_t b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                          { "SwapIfGreater", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::System::Comparison_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, comparer, a, b);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::Swap(::ArrayW<T> a, int32_t i, int32_t j) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                                                                                         { "Swap", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, i, j);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::IntrospectiveSort(::ArrayW<T> keys, int32_t left, int32_t length, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                          { "IntrospectiveSort", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, left, length, comparer);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::IntroSort(::ArrayW<T> keys, int32_t lo, int32_t hi, int32_t depthLimit, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
          { "IntroSort", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, lo, hi, depthLimit, comparer);
}
template <typename T> inline int32_t System::Collections::Generic::ArraySortHelper_1<T>::PickPivotAndPartition(::ArrayW<T> keys, int32_t lo, int32_t hi, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                          { "PickPivotAndPartition", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, keys, lo, hi, comparer);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::Heapsort(::ArrayW<T> keys, int32_t lo, int32_t hi, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                                       { "Heapsort", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, lo, hi, comparer);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::DownHeap(::ArrayW<T> keys, int32_t i, int32_t n, int32_t lo, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
          { "DownHeap", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, i, n, lo, comparer);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::InsertionSort(::ArrayW<T> keys, int32_t lo, int32_t hi, ::System::Comparison_1<T>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(),
                          { "InsertionSort", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keys, lo, hi, comparer);
}
template <typename T> inline ::System::Collections::Generic::ArraySortHelper_1<T>* System::Collections::Generic::ArraySortHelper_1<T>::get_Default() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(), { "get_Default", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ArraySortHelper_1<T>*>(nullptr, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::ArraySortHelper_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ArraySortHelper_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::ArraySortHelper_1<T>* System::Collections::Generic::ArraySortHelper_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ArraySortHelper_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::ArraySortHelper_1<T>::ArraySortHelper_1() {}
