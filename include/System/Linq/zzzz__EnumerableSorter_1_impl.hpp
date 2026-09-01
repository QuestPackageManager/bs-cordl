#pragma once
// IWYU pragma private; include "System\Linq\EnumerableSorter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
template <typename TElement> inline void System::Linq::EnumerableSorter_1<TElement>::ComputeKeys(::ArrayW<TElement> elements, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::EnumerableSorter_1<TElement>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements, count);
}
template <typename TElement> inline int32_t System::Linq::EnumerableSorter_1<TElement>::CompareKeys(int32_t index1, int32_t index2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::EnumerableSorter_1<TElement>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index1, index2);
}
template <typename TElement> inline ::ArrayW<int32_t> System::Linq::EnumerableSorter_1<TElement>::Sort(::ArrayW<TElement> elements, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::EnumerableSorter_1<TElement>*>(), { "Sort", {}, { ::i2c::type_of<::ArrayW<TElement>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, elements, count);
}
template <typename TElement> inline void System::Linq::EnumerableSorter_1<TElement>::QuickSort(::ArrayW<int32_t> map, int32_t left, int32_t right) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::EnumerableSorter_1<TElement>*>(),
                                                           { "QuickSort", {}, { ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, left, right);
}
template <typename TElement> inline void System::Linq::EnumerableSorter_1<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::EnumerableSorter_1<TElement>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::EnumerableSorter_1<TElement>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::EnumerableSorter_1<TElement>*>());
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::EnumerableSorter_1<TElement>::EnumerableSorter_1() {}
