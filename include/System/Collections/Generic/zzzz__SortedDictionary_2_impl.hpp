#pragma once
// IWYU pragma private; include "System\Collections\Generic\SortedDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__Comparer_1_impl.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__TreeSet_1_def.hpp"
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
inline void System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary,
                                                                                             int32_t getEnumeratorRetType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary, getEnumeratorRetType);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::get_NotStartedOrEnded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "get_NotStartedOrEnded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IDictionaryEnumerator.get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IDictionaryEnumerator.get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::DictionaryEntry System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IDictionaryEnumerator_get_Entry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IDictionaryEnumerator.get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_Enumerator<TKey,
                                                                      TValue>::operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::Collections::IDictionaryEnumerator*() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__IDictionaryEnumerator() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_treeEnum", ty: "::System::Collections::Generic::SortedSet_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_getEnumeratorRetType", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::SortedDictionary_2_Enumerator(
    ::System::Collections::Generic::SortedSet_1_Enumerator<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> _treeEnum, int32_t _getEnumeratorRetType) noexcept {
  this->_treeEnum = _treeEnum;
  this->_getEnumeratorRetType = _getEnumeratorRetType;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>::SortedDictionary_2_Enumerator() {}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TKey>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TKey>*
System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1_TKey_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictEnum", ty: "::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey,TValue>", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::KeyCollection_SortedDictionary_2_Enumerator(
    ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue> _dictEnum) noexcept {
  this->_dictEnum = _dictEnum;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyCollection_SortedDictionary_2_Enumerator<TKey, TValue>::KeyCollection_SortedDictionary_2_Enumerator() {}
template <typename TKey, typename TValue> constexpr ::ArrayW<TKey>& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<TKey> const& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_set_array(::ArrayW<TKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___array = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue>
constexpr int32_t const& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::_CopyTo_b__0(
    ::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*>(),
                                       { "<CopyTo>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*
System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::KeyCollection_SortedDictionary_2___c__DisplayClass5_0() {}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue>
constexpr int32_t const& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Object*>& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Object*> const& System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_set_objects(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objects = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::_System_Collections_ICollection_CopyTo_b__0(
    ::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*>(),
                                                           { "<System.Collections.ICollection.CopyTo>b__0",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*
System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::KeyCollection_SortedDictionary_2___c__DisplayClass6_0() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*& System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_get__dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* const&
System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_get__dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::__cordl_internal_set__dictionary(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dictionary = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TKey>* System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_IEnumerable_TKey__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<TKey>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::CopyTo(::ArrayW<TKey> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TKey>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Add(TKey item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Add", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Contains(TKey item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Contains", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Remove(TKey item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TKey>.Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*
System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(dictionary));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>*
System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TKey>*
System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*
System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>::SortedDictionary_2_KeyCollection() {}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>>(),
                                                                                         { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>*
System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_dictEnum", ty: "::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey,TValue>", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::ValueCollection_SortedDictionary_2_Enumerator(
    ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue> _dictEnum) noexcept {
  this->_dictEnum = _dictEnum;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::ValueCollection_SortedDictionary_2_Enumerator<TKey, TValue>::ValueCollection_SortedDictionary_2_Enumerator() {}
template <typename TKey, typename TValue>
constexpr ::ArrayW<TValue>& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<TValue> const& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___array;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_set_array(::ArrayW<TValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___array = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue>
constexpr int32_t const& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::_CopyTo_b__0(
    ::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*>(),
                                       { "<CopyTo>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*
System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass5_0<TKey, TValue>::ValueCollection_SortedDictionary_2___c__DisplayClass5_0() {}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue>
constexpr int32_t const& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Object*>& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Object*> const& System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_get_objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___objects;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::__cordl_internal_set_objects(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___objects = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::_System_Collections_ICollection_CopyTo_b__0(
    ::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*>(),
                                                           { "<System.Collections.ICollection.CopyTo>b__0",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*
System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ValueCollection_SortedDictionary_2___c__DisplayClass6_0<TKey, TValue>::ValueCollection_SortedDictionary_2___c__DisplayClass6_0() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*& System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_get__dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* const&
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_get__dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::__cordl_internal_set__dictionary(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dictionary = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>*
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::CopyTo(::ArrayW<TValue> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TValue>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Add(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Add", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Contains(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Contains", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Remove(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<TValue>.Remove", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(),
                                                                                         { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(dictionary));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>*
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*
System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>::SortedDictionary_2_ValueCollection() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::__cordl_internal_get_keyComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyComparer;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::__cordl_internal_get_keyComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyComparer;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::__cordl_internal_set_keyComparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyComparer = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::_ctor(::System::Collections::Generic::IComparer_1<TKey>* keyComparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyComparer);
}
template <typename TKey, typename TValue>
inline int32_t System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::Compare(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> x,
                                                                                                            ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> y) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                                                  { ::i2c::class_of<::System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>*
System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::New_ctor(::System::Collections::Generic::IComparer_1<TKey>* keyComparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>*>(keyComparer));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2_KeyValuePairComparer<TKey, TValue>::SortedDictionary_2_KeyValuePairComparer() {}
template <typename TKey, typename TValue> constexpr bool& System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::__cordl_internal_get_found() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___found;
}
template <typename TKey, typename TValue> constexpr bool const& System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::__cordl_internal_get_found() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___found;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::__cordl_internal_set_found(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___found = value;
}
template <typename TKey, typename TValue> constexpr TValue& System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr TValue const& System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::__cordl_internal_set_value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::_ContainsValue_b__0(
    ::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>*>(),
                          { "<ContainsValue>b__0", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>* System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>::SortedDictionary_2___c__DisplayClass34_0() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::EqualityComparer_1<TValue>*& System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::__cordl_internal_get_valueComparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueComparer;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::EqualityComparer_1<TValue>* const&
System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::__cordl_internal_get_valueComparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueComparer;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::__cordl_internal_set_valueComparer(::System::Collections::Generic::EqualityComparer_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueComparer = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>*&
System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::__cordl_internal_get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>* const&
System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::__cordl_internal_get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CS$__8__locals1;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::__cordl_internal_set_CS$__8__locals1(
    ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_0<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CS$__8__locals1 = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::_ContainsValue_b__1(
    ::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>*>(),
                          { "<ContainsValue>b__1", {}, { ::i2c::type_of<::System::Collections::Generic::SortedSet_1_Node<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>* System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2___c__DisplayClass34_1<TKey, TValue>::SortedDictionary_2___c__DisplayClass34_1() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*& System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>* const& System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_set__keys(::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keys = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*& System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>* const&
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_set__values(::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::TreeSet_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*&
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_get__set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::TreeSet_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* const&
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_get__set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::__cordl_internal_set__set(
    ::System::Collections::Generic::TreeSet_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____set = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::SortedDictionary_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::SortedDictionary_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedDictionary_2_KeyCollection<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TKey>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedDictionary_2_ValueCollection<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::ContainsValue(TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "ContainsValue", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue> System::Collections::Generic::SortedDictionary_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedDictionary_2_Enumerator<TKey, TValue>>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::IsCompatibleKey(::System::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "IsCompatibleKey", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IDictionary_Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::SortedDictionary_2<TKey, TValue>*>(comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2<TKey,
                                                           TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2<TKey,
                                                           TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionary* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::SortedDictionary_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::SortedDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Generic::SortedDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::SortedDictionary_2<TKey, TValue>::SortedDictionary_2() {}
