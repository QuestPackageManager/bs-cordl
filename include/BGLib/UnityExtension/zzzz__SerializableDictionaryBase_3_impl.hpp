#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionaryBase_3.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_3_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>*&
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_get_m_dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dict;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* const&
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_get_m_dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dict;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr void
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_set_m_dict(::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_dict = value;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::ArrayW<TKey>& BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_get_m_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keys;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::ArrayW<TKey> const& BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_get_m_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keys;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_set_m_keys(::ArrayW<TKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_keys = value;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::ArrayW<TValueStorage>& BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_get_m_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_values;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::ArrayW<TValueStorage> const& BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_get_m_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_values;
}
template <typename TKey, typename TValue, typename TValueStorage>
constexpr void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::__cordl_internal_set_m_values(::ArrayW<TValueStorage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_values = value;
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::SetValue(::ArrayW<TValueStorage> storage, int32_t i, TValue value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), 40 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, storage, i, value);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline TValue BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::GetValue(::ArrayW<TValueStorage> storage, int32_t i) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, storage, i);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::CopyFrom(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "CopyFrom", {}, { ::i2c::type_of<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::Generic::ICollection_1<TKey>* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::Generic::ICollection_1<TValue>* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline int32_t BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline TValue BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_Item(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue, typename TValueStorage> inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue, typename TValueStorage> inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Remove(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Add(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Contains(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Contains", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                           { "CopyTo", {}, { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Remove(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Remove", {}, { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::IEnumerator* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::ICollection* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "System.Collections.IDictionary.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::ICollection* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "System.Collections.IDictionary.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline ::System::Object* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(), { "get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Object* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue, typename TValueStorage> inline bool BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::System::Collections::IDictionaryEnumerator* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "System.Collections.IDictionary.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename TValueStorage> inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                                                                                         { "OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline void BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                            ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>());
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(dict));
}
template <typename TKey, typename TValue, typename TValueStorage>
inline ::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                           ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>*>(info, context));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Collections::Generic::ICollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue,
                                                    TValueStorage>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue,
                                                    TValueStorage>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Collections::IEnumerable* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Collections::IDictionary* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Collections::ICollection* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::UnityEngine::ISerializationCallbackReceiver* BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Runtime::Serialization::IDeserializationCallback*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename TKey, typename TValue, typename TValueStorage>
constexpr ::System::Runtime::Serialization::ISerializable*
BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue, typename TValueStorage> constexpr ::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage>::SerializableDictionaryBase_3() {}
