#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/CollectionWrapper_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__CollectionWrapper_1_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__IWrappedCollection_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr ::System::Collections::IList*& Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_get__list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
template <typename T> constexpr ::System::Collections::IList* const& Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_get__list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____list;
}
template <typename T> constexpr void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_set__list(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____list = value;
}
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>*& Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_get__genericCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____genericCollection;
}
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* const& Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_get__genericCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____genericCollection;
}
template <typename T> constexpr void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_set__genericCollection(::System::Collections::Generic::ICollection_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____genericCollection = value;
}
template <typename T> constexpr ::System::Object*& Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr ::System::Object* const& Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____syncRoot = value;
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::_ctor(::System::Collections::IList* list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::_ctor(::System::Collections::Generic::ICollection_1<T>* list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::ICollection_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Add(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Clear() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Contains(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 32 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline int32_t Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::get_Count() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 33 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::get_IsReadOnly() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 34 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::Remove(T item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::GetEnumerator() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline int32_t Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.IList.Add", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(),
                                                                                         { "System.Collections.IList.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename T> inline int32_t Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(),
                                                                                         { "System.Collections.IList.IndexOf", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.IList.RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(),
                                                           { "System.Collections.IList.Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.IList.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.IList.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.IList.get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, index);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(),
                                                           { "System.Collections.IList.set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline void Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::VerifyValueType(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "VerifyValueType", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline bool Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::IsCompatibleObject(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "IsCompatibleObject", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
template <typename T> inline ::System::Object* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::get_UnderlyingCollection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(), { "get_UnderlyingCollection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename T> inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::New_ctor(::System::Collections::IList* list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(list));
}
template <typename T>
inline ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::New_ctor(::System::Collections::Generic::ICollection_1<T>* list) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>*>(list));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Newtonsoft::Json::Utilities::IWrappedCollection"
template <typename T> constexpr Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::Newtonsoft::Json::Utilities::IWrappedCollection*() noexcept {
  return static_cast<::Newtonsoft::Json::Utilities::IWrappedCollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Utilities::IWrappedCollection"
template <typename T> constexpr ::Newtonsoft::Json::Utilities::IWrappedCollection* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::i___Newtonsoft__Json__Utilities__IWrappedCollection() noexcept {
  return static_cast<::Newtonsoft::Json::Utilities::IWrappedCollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
template <typename T> constexpr Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IList"
template <typename T> constexpr ::System::Collections::IList* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::i___System__Collections__IList() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename T> constexpr ::System::Collections::ICollection* Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Newtonsoft::Json::Utilities::CollectionWrapper_1<T>::CollectionWrapper_1() {}
