#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Utilities\DictionaryWrapper_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DictionaryWrapper_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DictionaryWrapper_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedDictionary_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::_ctor(
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* e) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, e);
}
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline ::System::Collections::DictionaryEntry Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(*this, ___internal_method);
}
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline ::System::Object* Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline ::System::Object* Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline ::System::Object* Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::operator ::System::Collections::IDictionaryEnumerator*() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
constexpr ::System::Collections::IDictionaryEnumerator*
Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::i___System__Collections__IDictionaryEnumerator() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
constexpr ::System::Collections::IEnumerator*
Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_e", ty: "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey,TEnumeratorValue>>*", modifiers: "",
// def_value: Some("{}") }]
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
constexpr ::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::DictionaryWrapper_2_DictionaryEnumerator_2(
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TEnumeratorKey, TEnumeratorValue>>* _e) noexcept {
  this->_e = _e;
}
// Ctor Parameters []
template <typename TKey, typename TValue, typename TEnumeratorKey, typename TEnumeratorValue>
constexpr ::Newtonsoft::Json::Utilities::DictionaryWrapper_2_DictionaryEnumerator_2<TKey, TValue, TEnumeratorKey, TEnumeratorValue>::DictionaryWrapper_2_DictionaryEnumerator_2() {}
template <typename TKey, typename TValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::setStaticF___9(::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*, "<>9", ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>(
      std::forward<::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>(value));
}
template <typename TKey, typename TValue>
inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>* Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*, "<>9", ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>();
}
template <typename TKey, typename TValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::setStaticF___9__29_0(
    ::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, "<>9__29_0",
                                    ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>(
      std::forward<::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(value));
}
template <typename TKey, typename TValue>
inline ::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, "<>9__29_0",
                                           ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>();
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>
Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::_GetEnumerator_b__29_0(::System::Collections::DictionaryEntry de) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>(),
                                                                                         { "<GetEnumerator>b__29_0", {}, { ::i2c::type_of<::System::Collections::DictionaryEntry>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(this, ___internal_method, de);
}
template <typename TKey, typename TValue> inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>* Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Newtonsoft::Json::Utilities::DictionaryWrapper_2___c<TKey, TValue>::DictionaryWrapper_2___c() {}
template <typename TKey, typename TValue> constexpr ::System::Collections::IDictionary*& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionary* const& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dictionary;
}
template <typename TKey, typename TValue> constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_set__dictionary(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dictionary = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__genericDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____genericDictionary;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>* const& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__genericDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____genericDictionary;
}
template <typename TKey, typename TValue>
constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_set__genericDictionary(::System::Collections::Generic::IDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____genericDictionary = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__readOnlyDictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnlyDictionary;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* const& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__readOnlyDictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readOnlyDictionary;
}
template <typename TKey, typename TValue>
constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_set__readOnlyDictionary(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readOnlyDictionary = value;
}
template <typename TKey, typename TValue> constexpr ::System::Object*& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr ::System::Object* const& Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::_ctor(::System::Collections::IDictionary* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IDictionary_2<TKey, TValue>* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_GenericDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_GenericDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::ICollection_1<TKey>* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::ICollection_1<TValue>* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "Contains", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline int32_t Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "Remove", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline ::System::Object* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.IDictionary.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::get_UnderlyingDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(), { "get_UnderlyingDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::New_ctor(::System::Collections::IDictionary* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue>
inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(dictionary));
}
template <typename TKey, typename TValue>
inline ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>*>(dictionary));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,
                                                           TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey,
                                                           TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedDictionary"
template <typename TKey, typename TValue> constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::operator ::Newtonsoft::Json::Utilities::IWrappedDictionary*() noexcept {
  return static_cast<::Newtonsoft::Json::Utilities::IWrappedDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Utilities::IWrappedDictionary"
template <typename TKey, typename TValue>
constexpr ::Newtonsoft::Json::Utilities::IWrappedDictionary* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___Newtonsoft__Json__Utilities__IWrappedDictionary() noexcept {
  return static_cast<::Newtonsoft::Json::Utilities::IWrappedDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionary* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Newtonsoft::Json::Utilities::DictionaryWrapper_2<TKey, TValue>::DictionaryWrapper_2() {}
