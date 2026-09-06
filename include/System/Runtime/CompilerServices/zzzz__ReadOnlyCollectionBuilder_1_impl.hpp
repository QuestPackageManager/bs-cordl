#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ReadOnlyCollectionBuilder_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ReadOnlyCollectionBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ReadOnlyCollectionBuilder_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T>
constexpr ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__builder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
template <typename T>
constexpr ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* const&
System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__builder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____builder;
}
template <typename T>
constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_set__builder(::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____builder = value;
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_set__index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
template <typename T> constexpr T& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename T> constexpr T const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::__cordl_internal_set__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::_ctor(::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* builder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
template <typename T> inline T System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*
System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::New_ctor(::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* builder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>*>(builder));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*
System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1_Enumerator<T>::ReadOnlyCollectionBuilder_1_Enumerator() {}
template <typename T> constexpr ::ArrayW<T>& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr ::ArrayW<T> const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_set__items(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_set__size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size = value;
}
template <typename T> constexpr int32_t& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr int32_t const& System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename T> constexpr void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::set_Capacity(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "IndexOf", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Insert(int32_t index, T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline T System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "System.Collections.Generic.ICollection<T>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "System.Collections.IList.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                           { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                           { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ToArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ToReadOnlyCollection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "ToReadOnlyCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(this, ___internal_method);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::EnsureCapacity(int32_t min) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min);
}
template <typename T> inline bool System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::IsCompatibleObject(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "IsCompatibleObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
template <typename T> inline void System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ValidateNullValue(::System::Object* value, ::StringW argument) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(),
                                                                                         { "ValidateNullValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, argument);
}
template <typename T> inline ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>());
}
template <typename T> inline ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
template <typename T> constexpr ::System::Collections::IList* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Runtime::CompilerServices::ReadOnlyCollectionBuilder_1<T>::ReadOnlyCollectionBuilder_1() {}
