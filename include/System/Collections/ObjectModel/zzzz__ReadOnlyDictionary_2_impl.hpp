#pragma once
// IWYU pragma private; include "System\Collections\ObjectModel\ReadOnlyDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline ::System::Collections::DictionaryEntry System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::operator ::System::Collections::IDictionaryEnumerator*() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::i___System__Collections__IDictionaryEnumerator() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::IDictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_enumerator", ty:
// "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::ReadOnlyDictionary_2_DictionaryEnumerator(
    ::System::Collections::Generic::IDictionary_2<TKey, TValue>* _dictionary,
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _enumerator) noexcept {
  this->_dictionary = _dictionary;
  this->_enumerator = _enumerator;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_DictionaryEnumerator<TKey, TValue>::ReadOnlyDictionary_2_DictionaryEnumerator() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>*& System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>* const& System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_set__collection(::System::Collections::Generic::ICollection_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____collection = value;
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr ::System::Object* const& System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::_ctor(::System::Collections::Generic::ICollection_1<TKey>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Add(TKey item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Add", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Contains(TKey item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Contains", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::CopyTo(::ArrayW<TKey> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Remove(TKey item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TKey>* System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::ICollection_1<TKey>* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(collection));
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TKey>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>::ReadOnlyDictionary_2_KeyCollection() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>*& System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>* const& System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_set__collection(::System::Collections::Generic::ICollection_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____collection = value;
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr ::System::Object* const& System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::_ctor(::System::Collections::Generic::ICollection_1<TValue>* collection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Add(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Add", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Contains(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Contains", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::CopyTo(::ArrayW<TValue> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Remove(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Remove", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::ICollection_1<TValue>* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(collection));
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>::ReadOnlyDictionary_2_ValueCollection() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get_m_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dictionary;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* const& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get_m_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dictionary;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set_m_dictionary(::System::Collections::Generic::IDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_dictionary = value;
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr ::System::Object* const& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>* const&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set__keys(::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keys = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>* const&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set__values(::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IDictionary<TKey,TValue>.Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline TValue System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Item(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__set_Item(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IDictionary<TKey,TValue>.set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::IsCompatibleKey(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "IsCompatibleKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TKey>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionary* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::ReadOnlyDictionary_2() {}
