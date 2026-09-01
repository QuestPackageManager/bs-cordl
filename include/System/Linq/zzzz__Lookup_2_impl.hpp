#pragma once
// IWYU pragma private; include "System\Linq\Lookup_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Lookup_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Linq/zzzz__Lookup_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TElement> constexpr TElement& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement> constexpr TElement const& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_set___2__current(TElement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename TKey, typename TElement>
constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_set___4__this(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename TKey, typename TElement> inline void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TElement> inline void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline TElement System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::System_Collections_Generic_IEnumerator_TElement__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<TElement>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline void System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Object* System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TElement>
inline ::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>* System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
template <typename TKey, typename TElement>
constexpr System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::operator ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<TElement>*
System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::i___System__Collections__Generic__IEnumerator_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr ::System::IDisposable* System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement> constexpr System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement>
constexpr ::System::Collections::IEnumerator* System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::Grouping_Lookup_2__GetEnumerator_d__7<TKey, TElement>::Grouping_Lookup_2__GetEnumerator_d__7() {}
template <typename TKey, typename TElement> constexpr TKey& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TElement> constexpr TKey const& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
template <typename TKey, typename TElement> constexpr ::ArrayW<TElement>& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
template <typename TKey, typename TElement> constexpr ::ArrayW<TElement> const& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_set_elements(::ArrayW<TElement> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elements = value;
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_hashNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashNext;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_hashNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashNext;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_set_hashNext(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashNext = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2_Grouping<TKey, TElement>::__cordl_internal_set_next(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::Add(TElement element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "Add", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
template <typename TKey, typename TElement> inline ::System::Collections::Generic::IEnumerator_1<TElement>* System::Linq::Lookup_2_Grouping<TKey, TElement>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TElement>*>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Collections::IEnumerator* System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline TKey System::Linq::Lookup_2_Grouping<TKey, TElement>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline int32_t System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__get_Count() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "System.Collections.Generic.ICollection<TElement>.get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "System.Collections.Generic.ICollection<TElement>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Add(TElement item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TElement>.Add", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { "System.Collections.Generic.ICollection<TElement>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Contains(TElement item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TElement>.Contains", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TElement>
inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__CopyTo(::ArrayW<TElement> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                           { "System.Collections.Generic.ICollection<TElement>.CopyTo", {}, { ::i2c::type_of<::ArrayW<TElement>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TElement> inline bool System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Remove(TElement item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TElement>.Remove", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TElement> inline int32_t System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__IndexOf(TElement item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.IList<TElement>.IndexOf", {}, { ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__Insert(int32_t index, TElement item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                           { "System.Collections.Generic.IList<TElement>.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.IList<TElement>.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename TKey, typename TElement> inline TElement System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.IList<TElement>.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method, index);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__set_Item(int32_t index, TElement value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(),
                                                           { "System.Collections.Generic.IList<TElement>.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TElement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2_Grouping<TKey, TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Linq::Lookup_2_Grouping<TKey, TElement>* System::Linq::Lookup_2_Grouping<TKey, TElement>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>());
}
/// @brief Convert operator to "::System::Linq::IGrouping_2<TKey,TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2_Grouping<TKey, TElement>::operator ::System::Linq::IGrouping_2<TKey, TElement>*() noexcept {
  return static_cast<::System::Linq::IGrouping_2<TKey, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::IGrouping_2<TKey,TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Linq::IGrouping_2<TKey, TElement>* System::Linq::Lookup_2_Grouping<TKey, TElement>::i___System__Linq__IGrouping_2_TKey_TElement_() noexcept {
  return static_cast<::System::Linq::IGrouping_2<TKey, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2_Grouping<TKey, TElement>::operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* System::Linq::Lookup_2_Grouping<TKey, TElement>::i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2_Grouping<TKey, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr ::System::Collections::IEnumerable* System::Linq::Lookup_2_Grouping<TKey, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2_Grouping<TKey, TElement>::operator ::System::Collections::Generic::IList_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IList_1<TElement>* System::Linq::Lookup_2_Grouping<TKey, TElement>::i___System__Collections__Generic__IList_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2_Grouping<TKey, TElement>::operator ::System::Collections::Generic::ICollection_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::ICollection_1<TElement>* System::Linq::Lookup_2_Grouping<TKey, TElement>::i___System__Collections__Generic__ICollection_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TElement>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>::Lookup_2_Grouping() {}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::IGrouping_2<TKey, TElement>*& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement>
constexpr ::System::Linq::IGrouping_2<TKey, TElement>* const& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement>
constexpr void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_set___2__current(::System::Linq::IGrouping_2<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2<TKey, TElement>*& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr ::System::Linq::Lookup_2<TKey, TElement>* const& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_set___4__this(::System::Linq::Lookup_2<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get__g_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____g_5__2;
}
template <typename TKey, typename TElement>
constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_get__g_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____g_5__2;
}
template <typename TKey, typename TElement>
constexpr void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::__cordl_internal_set__g_5__2(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____g_5__2 = value;
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TElement>
inline ::System::Linq::IGrouping_2<TKey, TElement>*
System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IGrouping_2<TKey, TElement>*>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Object* System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TElement>
inline ::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>* System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::operator ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::i___System__Collections__Generic__IEnumerator_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr ::System::IDisposable* System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement> constexpr ::System::Collections::IEnumerator* System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2__GetEnumerator_d__12<TKey, TElement>::Lookup_2__GetEnumerator_d__12() {}
template <typename TKey, typename TElement> constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TElement> constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TKey, typename TElement> constexpr ::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_groupings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupings;
}
template <typename TKey, typename TElement>
constexpr ::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*> const& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_groupings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupings;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_set_groupings(::ArrayW<::System::Linq::Lookup_2_Grouping<TKey, TElement>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___groupings = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>*& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_lastGrouping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastGrouping;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2_Grouping<TKey, TElement>* const& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_lastGrouping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastGrouping;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_set_lastGrouping(::System::Linq::Lookup_2_Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastGrouping = value;
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__cordl_internal_set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TKey, typename TElement>
template <typename TSource>
inline ::System::Linq::Lookup_2<TKey, TElement>* System::Linq::Lookup_2<TKey, TElement>::Create(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                ::System::Func_2<TSource, TKey>* keySelector, ::System::Func_2<TSource, TElement>* elementSelector,
                                                                                                ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(),
                                              { "Create",
                                                { ::i2c::class_of<TSource>() },
                                                { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, TKey>*>(),
                                                  ::i2c::type_of<::System::Func_2<TSource, TElement>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TSource>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Lookup_2<TKey, TElement>*>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2<TKey, TElement>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TKey, typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* System::Linq::Lookup_2<TKey, TElement>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Collections::IEnumerator* System::Linq::Lookup_2<TKey, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline int32_t System::Linq::Lookup_2<TKey, TElement>::InternalGetHashCode(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(), { "InternalGetHashCode", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TElement> inline ::System::Linq::Lookup_2_Grouping<TKey, TElement>* System::Linq::Lookup_2<TKey, TElement>::GetGrouping(TKey key, bool create) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(), { "GetGrouping", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>(this, ___internal_method, key, create);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2<TKey, TElement>::Resize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Linq::Lookup_2<TKey, TElement>*>(), { "Resize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TElement>
inline ::System::Linq::Lookup_2<TKey, TElement>* System::Linq::Lookup_2<TKey, TElement>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Linq::Lookup_2<TKey, TElement>*>(comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr System::Linq::Lookup_2<TKey, TElement>::operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
System::Linq::Lookup_2<TKey, TElement>::i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2<TKey, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr ::System::Collections::IEnumerable* System::Linq::Lookup_2<TKey, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2<TKey, TElement>::Lookup_2() {}
