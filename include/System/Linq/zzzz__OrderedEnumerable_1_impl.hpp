#pragma once
// IWYU pragma private; include "System\Linq\OrderedEnumerable_1.hpp"
#include "System/Linq/zzzz__Buffer_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Linq/zzzz__IOrderedEnumerable_1_def.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TElement> constexpr int32_t& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TElement> constexpr int32_t const& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TElement> constexpr TElement& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TElement> constexpr TElement const& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_set___2__current(TElement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename TElement> constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TElement> constexpr ::System::Linq::OrderedEnumerable_1<TElement>* const& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_set___4__this(::System::Linq::OrderedEnumerable_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TElement> constexpr ::System::Linq::Buffer_1<TElement>& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get__buffer_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer_5__2;
}
template <typename TElement> constexpr ::System::Linq::Buffer_1<TElement> const& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get__buffer_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buffer_5__2;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_set__buffer_5__2(::System::Linq::Buffer_1<TElement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buffer_5__2 = value;
}
template <typename TElement> constexpr ::ArrayW<int32_t>& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get__map_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map_5__3;
}
template <typename TElement> constexpr ::ArrayW<int32_t> const& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get__map_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____map_5__3;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_set__map_5__3(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____map_5__3 = value;
}
template <typename TElement> constexpr int32_t& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get__i_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__4;
}
template <typename TElement> constexpr int32_t const& System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_get__i_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__4;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::__cordl_internal_set__i_5__4(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__4 = value;
}
template <typename TElement> inline void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename TElement> inline void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline bool System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TElement> inline TElement System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::System_Collections_Generic_IEnumerator_TElement__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<TElement>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method);
}
template <typename TElement> inline void System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline ::System::Object* System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TElement> inline ::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>* System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
template <typename TElement> constexpr System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::operator ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TElement>"
template <typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<TElement>*
System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::i___System__Collections__Generic__IEnumerator_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TElement> constexpr System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TElement> constexpr ::System::IDisposable* System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TElement> constexpr System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TElement> constexpr ::System::Collections::IEnumerator* System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::OrderedEnumerable_1__GetEnumerator_d__1<TElement>::OrderedEnumerable_1__GetEnumerator_d__1() {}
template <typename TElement> constexpr ::System::Collections::Generic::IEnumerable_1<TElement>*& System::Linq::OrderedEnumerable_1<TElement>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TElement> constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* const& System::Linq::OrderedEnumerable_1<TElement>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TElement> constexpr void System::Linq::OrderedEnumerable_1<TElement>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
template <typename TElement> inline ::System::Collections::Generic::IEnumerator_1<TElement>* System::Linq::OrderedEnumerable_1<TElement>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1<TElement>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TElement>*>(this, ___internal_method);
}
template <typename TElement> inline ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::OrderedEnumerable_1<TElement>::GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Linq::OrderedEnumerable_1<TElement>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::EnumerableSorter_1<TElement>*>(this, ___internal_method, next);
}
template <typename TElement> inline ::System::Collections::IEnumerator* System::Linq::OrderedEnumerable_1<TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1<TElement>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TElement>
template <typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TElement>*
System::Linq::OrderedEnumerable_1<TElement>::System_Linq_IOrderedEnumerable_TElement__CreateOrderedEnumerable(::System::Func_2<TElement, TKey>* keySelector,
                                                                                                              ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1<TElement>*>(),
                                       { "System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable",
                                         { ::i2c::class_of<TKey>() },
                                         { ::i2c::type_of<::System::Func_2<TElement, TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
template <typename TElement> inline void System::Linq::OrderedEnumerable_1<TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::OrderedEnumerable_1<TElement>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TElement> inline ::System::Linq::OrderedEnumerable_1<TElement>* System::Linq::OrderedEnumerable_1<TElement>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::OrderedEnumerable_1<TElement>*>());
}
/// @brief Convert operator to "::System::Linq::IOrderedEnumerable_1<TElement>"
template <typename TElement> constexpr System::Linq::OrderedEnumerable_1<TElement>::operator ::System::Linq::IOrderedEnumerable_1<TElement>*() noexcept {
  return static_cast<::System::Linq::IOrderedEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::IOrderedEnumerable_1<TElement>"
template <typename TElement> constexpr ::System::Linq::IOrderedEnumerable_1<TElement>* System::Linq::OrderedEnumerable_1<TElement>::i___System__Linq__IOrderedEnumerable_1_TElement_() noexcept {
  return static_cast<::System::Linq::IOrderedEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TElement> constexpr System::Linq::OrderedEnumerable_1<TElement>::operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* System::Linq::OrderedEnumerable_1<TElement>::i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TElement> constexpr System::Linq::OrderedEnumerable_1<TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TElement> constexpr ::System::Collections::IEnumerable* System::Linq::OrderedEnumerable_1<TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TElement> constexpr ::System::Linq::OrderedEnumerable_1<TElement>::OrderedEnumerable_1() {}
