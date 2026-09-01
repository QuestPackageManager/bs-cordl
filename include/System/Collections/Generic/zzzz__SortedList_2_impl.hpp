#pragma once
// IWYU pragma private; include "System\Collections\Generic\SortedList_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList, int32_t getEnumeratorRetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sortedList, getEnumeratorRetType);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "System.Collections.IDictionaryEnumerator.get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::DictionaryEntry System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "System.Collections.IDictionaryEnumerator.get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "System.Collections.IDictionaryEnumerator.get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerator* System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::operator ::System::Collections::IDictionaryEnumerator*() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::i___System__Collections__IDictionaryEnumerator() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_sortedList", ty: "::System::Collections::Generic::SortedList_2<TKey,TValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_key", ty: "TKey",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_value", ty: "TValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::SortedList_2_Enumerator(::System::Collections::Generic::SortedList_2<TKey, TValue>* _sortedList, TKey _key,
                                                                                                         TValue _value, int32_t _index, int32_t _version, int32_t _getEnumeratorRetType) noexcept {
  this->_sortedList = _sortedList;
  this->_key = _key;
  this->_value = _value;
  this->_index = _index;
  this->_version = _version;
  this->_getEnumeratorRetType = _getEnumeratorRetType;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedList_2_Enumerator<TKey, TValue>::SortedList_2_Enumerator() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__sortedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const&
System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__sortedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_set__sortedList(::System::Collections::Generic::SortedList_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortedList = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename TKey, typename TValue> constexpr TKey& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__currentKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentKey;
}
template <typename TKey, typename TValue> constexpr TKey const& System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_get__currentKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentKey;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::__cordl_internal_set__currentKey(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentKey = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortedList);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*
System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>*>(sortedList));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TKey>*
System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedList_2_SortedListKeyEnumerator<TKey, TValue>::SortedList_2_SortedListKeyEnumerator() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__sortedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const&
System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__sortedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortedList;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_set__sortedList(::System::Collections::Generic::SortedList_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sortedList = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename TKey, typename TValue> constexpr TValue& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__currentValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentValue;
}
template <typename TKey, typename TValue> constexpr TValue const& System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_get__currentValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentValue;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::__cordl_internal_set__currentValue(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentValue = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortedList);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*
System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* sortedList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>*>(sortedList));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>*
System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedList_2_SortedListValueEnumerator<TKey, TValue>::SortedList_2_SortedListValueEnumerator() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::__cordl_internal_get__dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dict;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const& System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::__cordl_internal_get__dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dict;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::__cordl_internal_set__dict(::System::Collections::Generic::SortedList_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dict = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::Add(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::Contains(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "Contains", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::CopyTo(::ArrayW<TKey> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::Insert(int32_t index, TKey value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(),
                                                                                         { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, index);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::set_Item(int32_t index, TKey value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerator_1<TKey>* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::IndexOf(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "IndexOf", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*
System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(dictionary));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<TKey>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::operator ::System::Collections::Generic::IList_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IList_1<TKey>* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::i___System__Collections__Generic__IList_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TKey>* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>::SortedList_2_KeyList() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>*& System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::__cordl_internal_get__dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dict;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>* const& System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::__cordl_internal_get__dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dict;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::__cordl_internal_set__dict(::System::Collections::Generic::SortedList_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dict = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::Add(TValue key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::Contains(TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "Contains", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::CopyTo(::ArrayW<TValue> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::Insert(int32_t index, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(),
                                                                                         { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, index);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::set_Item(int32_t index, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerator_1<TValue>* System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::IndexOf(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "IndexOf", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::Remove(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*
System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::New_ctor(::System::Collections::Generic::SortedList_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(dictionary));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::operator ::System::Collections::Generic::IList_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IList_1<TValue>* System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::i___System__Collections__Generic__IList_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>*
System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>::SortedList_2_ValueList() {}
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey>& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey> const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set_keys(::ArrayW<TKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keys = value;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<TValue>& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<TValue> const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set_values(::ArrayW<TValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___version;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___version = value;
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___comparer = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_keyList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyList;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_keyList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyList;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set_keyList(::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyList = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_valueList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueList;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get_valueList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueList;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set_valueList(::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueList = value;
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr ::System::Object* const& System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedList_2<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IList_1<TKey>* System::Collections::Generic::SortedList_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TKey>* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IList_1<TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::GetKeyListHelper() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "GetKeyListHelper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedList_2_KeyList<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::GetValueListHelper() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "GetValueListHelper", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedList_2_ValueList<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::ContainsValue(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "ContainsValue", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::EnsureCapacity(int32_t min) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::SortedList_2<TKey, TValue>::GetByIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "GetByIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, index);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* System::Collections::Generic::SortedList_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.IDictionary.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::SortedList_2<TKey, TValue>::GetKey(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "GetKey", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, index);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::SortedList_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2<TKey, TValue>::IndexOfKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "IndexOfKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedList_2<TKey, TValue>::IndexOfValue(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "IndexOfValue", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::Insert(int32_t index, TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedList_2<TKey, TValue>::System_Collections_IDictionary_Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedList_2<TKey, TValue>::IsCompatibleKey(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(), { "IsCompatibleKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::SortedList_2<TKey, TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedList_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::SortedList_2<TKey, TValue>* System::Collections::Generic::SortedList_2<TKey, TValue>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedList_2<TKey, TValue>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr ::System::Collections::IDictionary* System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedList_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*
System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedList_2<TKey,
                                                     TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedList_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedList_2<TKey, TValue>::SortedList_2() {}
