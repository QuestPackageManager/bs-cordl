#pragma once
// IWYU pragma private; include "System/Linq/OrderedEnumerable_2.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_impl.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TElement, typename TKey> constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename TElement, typename TKey> constexpr ::System::Linq::OrderedEnumerable_1<TElement>* const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_parent(::System::Linq::OrderedEnumerable_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___parent = value;
}
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>* const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_keySelector(::System::Func_2<TElement, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySelector = value;
}
template <typename TElement, typename TKey> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TElement, typename TKey> constexpr bool& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_descending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr bool const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_descending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_descending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descending = value;
}
template <typename TElement, typename TKey>
inline void System::Linq::OrderedEnumerable_2<TElement, TKey>::_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector,
                                                                     ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TElement>*>(), ::i2c::type_of<::System::Func_2<TElement, TKey>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, comparer, descending);
}
template <typename TElement, typename TKey>
inline ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::OrderedEnumerable_2<TElement, TKey>::GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::EnumerableSorter_1<TElement>*>(this, ___internal_method, next);
}
template <typename TElement, typename TKey>
inline ::System::Linq::OrderedEnumerable_2<TElement, TKey>* System::Linq::OrderedEnumerable_2<TElement, TKey>::New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source,
                                                                                                                        ::System::Func_2<TElement, TKey>* keySelector,
                                                                                                                        ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>(source, keySelector, comparer, descending));
}
// Ctor Parameters []
template <typename TElement, typename TKey> constexpr ::System::Linq::OrderedEnumerable_2<TElement, TKey>::OrderedEnumerable_2() {}
