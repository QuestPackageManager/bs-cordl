#pragma once
// IWYU pragma private; include "BGLib\UnityExtension\SerializableHashSet_1.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_impl.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSet_1_def.hpp"
#include "BGLib/UnityExtension/zzzz__SerializableHashSetBase_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
template <typename T> constexpr ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>*& BGLib::UnityExtension::SerializableHashSet_1<T>::__cordl_internal_get_m_hashSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hashSet;
}
template <typename T> constexpr ::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>* const& BGLib::UnityExtension::SerializableHashSet_1<T>::__cordl_internal_get_m_hashSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hashSet;
}
template <typename T> constexpr void BGLib::UnityExtension::SerializableHashSet_1<T>::__cordl_internal_set_m_hashSet(::BGLib::UnityExtension::SerializableHashSetBase_HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hashSet = value;
}
template <typename T> constexpr ::ArrayW<T>& BGLib::UnityExtension::SerializableHashSet_1<T>::__cordl_internal_get_m_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keys;
}
template <typename T> constexpr ::ArrayW<T> const& BGLib::UnityExtension::SerializableHashSet_1<T>::__cordl_internal_get_m_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_keys;
}
template <typename T> constexpr void BGLib::UnityExtension::SerializableHashSet_1<T>::__cordl_internal_set_m_keys(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_keys = value;
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::_ctor(::System::Collections::Generic::ISet_1<T>* set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::ISet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::CopyFrom(::System::Collections::Generic::ISet_1<T>* set) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "CopyFrom", {}, { ::i2c::type_of<::System::Collections::Generic::ISet_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, set);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::OnAfterDeserialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "OnAfterDeserialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::OnBeforeSerialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "OnBeforeSerialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline int32_t BGLib::UnityExtension::SerializableHashSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::ExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "ExceptWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::IntersectWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "IntersectWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::IsProperSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "IsProperSubsetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::IsProperSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "IsProperSupersetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::IsSubsetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "IsSubsetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::IsSupersetOf(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "IsSupersetOf", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::Overlaps(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "Overlaps", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "SetEquals", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::SymmetricExceptWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "SymmetricExceptWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::UnionWith(::System::Collections::Generic::IEnumerable_1<T>* other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                                                                                         { "UnionWith", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::System_Collections_Generic_ICollection_T__Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "System.Collections.Generic.ICollection<T>.Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline bool BGLib::UnityExtension::SerializableHashSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* BGLib::UnityExtension::SerializableHashSet_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline void BGLib::UnityExtension::SerializableHashSet_1<T>::OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(), { "OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
template <typename T>
inline void BGLib::UnityExtension::SerializableHashSet_1<T>::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T>
inline void BGLib::UnityExtension::SerializableHashSet_1<T>::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(),
                          { "GetObjectData", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
template <typename T> inline ::BGLib::UnityExtension::SerializableHashSet_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSet_1<T>*>());
}
template <typename T> inline ::BGLib::UnityExtension::SerializableHashSet_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::New_ctor(::System::Collections::Generic::ISet_1<T>* set) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(set));
}
template <typename T>
inline ::BGLib::UnityExtension::SerializableHashSet_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                    ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::UnityExtension::SerializableHashSet_1<T>*>(info, context));
}
/// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::System::Collections::Generic::ISet_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ISet_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::i___System__Collections__Generic__ISet_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ISet_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* BGLib::UnityExtension::SerializableHashSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* BGLib::UnityExtension::SerializableHashSet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
template <typename T> constexpr ::UnityEngine::ISerializationCallbackReceiver* BGLib::UnityExtension::SerializableHashSet_1<T>::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
template <typename T>
constexpr ::System::Runtime::Serialization::IDeserializationCallback* BGLib::UnityExtension::SerializableHashSet_1<T>::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr BGLib::UnityExtension::SerializableHashSet_1<T>::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
template <typename T> constexpr ::System::Runtime::Serialization::ISerializable* BGLib::UnityExtension::SerializableHashSet_1<T>::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::UnityExtension::SerializableHashSet_1<T>::SerializableHashSet_1() {}
