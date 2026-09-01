#pragma once
// IWYU pragma private; include "System\Linq\EnumerableSorter_2.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_impl.hpp"
#include "System/Linq/zzzz__EnumerableSorter_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>*& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>* const& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_set_keySelector(::System::Func_2<TElement, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySelector = value;
}
template <typename TElement, typename TKey> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TElement, typename TKey> constexpr bool& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_descending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr bool const& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_descending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_set_descending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descending = value;
}
template <typename TElement, typename TKey> constexpr ::System::Linq::EnumerableSorter_1<TElement>*& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TElement, typename TKey> constexpr ::System::Linq::EnumerableSorter_1<TElement>* const& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_set_next(::System::Linq::EnumerableSorter_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
template <typename TElement, typename TKey> constexpr ::ArrayW<TKey>& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TElement, typename TKey> constexpr ::ArrayW<TKey> const& System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__cordl_internal_set_keys(::ArrayW<TKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
template <typename TElement, typename TKey>
inline void System::Linq::EnumerableSorter_2<TElement, TKey>::_ctor(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending,
                                                                    ::System::Linq::EnumerableSorter_1<TElement>* next) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::EnumerableSorter_2<TElement, TKey>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Func_2<TElement, TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::System::Linq::EnumerableSorter_1<TElement>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keySelector, comparer, descending, next);
}
template <typename TElement, typename TKey> inline void System::Linq::EnumerableSorter_2<TElement, TKey>::ComputeKeys(::ArrayW<TElement> elements, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::EnumerableSorter_2<TElement, TKey>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements, count);
}
template <typename TElement, typename TKey> inline int32_t System::Linq::EnumerableSorter_2<TElement, TKey>::CompareKeys(int32_t index1, int32_t index2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::EnumerableSorter_2<TElement, TKey>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index1, index2);
}
template <typename TElement, typename TKey>
inline ::System::Linq::EnumerableSorter_2<TElement, TKey>* System::Linq::EnumerableSorter_2<TElement, TKey>::New_ctor(::System::Func_2<TElement, TKey>* keySelector,
                                                                                                                      ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending,
                                                                                                                      ::System::Linq::EnumerableSorter_1<TElement>* next) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::EnumerableSorter_2<TElement, TKey>*>(keySelector, comparer, descending, next));
}
// Ctor Parameters []
template <typename TElement, typename TKey> constexpr ::System::Linq::EnumerableSorter_2<TElement, TKey>::EnumerableSorter_2() {}
