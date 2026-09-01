#pragma once
// IWYU pragma private; include "System\Linq\GroupedEnumerable_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__GroupedEnumerable_3_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* const& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Func_2<TSource, TKey>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Func_2<TSource, TKey>* const& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_keySelector(::System::Func_2<TSource, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keySelector = value;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Func_2<TSource, TElement>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_elementSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementSelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Func_2<TSource, TElement>* const& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_elementSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementSelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_elementSelector(::System::Func_2<TSource, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementSelector = value;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TSource, typename TKey, typename TElement>
inline void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                              ::System::Func_2<TSource, TElement>* elementSelector,
                                                                              ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, TKey>*>(),
                                                  ::i2c::type_of<::System::Func_2<TSource, TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, elementSelector, comparer);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(this, ___internal_method);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::IEnumerator* System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*
System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                     ::System::Func_2<TSource, TElement>* elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>(source, keySelector, elementSelector, comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TSource, typename TKey, typename TElement>
constexpr System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource, typename TKey, typename TElement> constexpr System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::IEnumerable* System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSource, typename TKey, typename TElement> constexpr ::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::GroupedEnumerable_3() {}
