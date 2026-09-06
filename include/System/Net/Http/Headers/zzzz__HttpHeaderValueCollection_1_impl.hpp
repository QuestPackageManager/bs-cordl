#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpHeaderValueCollection_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaderValueCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Net/Http/Headers/zzzz__HeaderInfo_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename T> constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_set_list(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
template <typename T> constexpr ::System::Net::Http::Headers::HttpHeaders*& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
template <typename T> constexpr ::System::Net::Http::Headers::HttpHeaders* const& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headers;
}
template <typename T> constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_set_headers(::System::Net::Http::Headers::HttpHeaders* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headers = value;
}
template <typename T> constexpr ::System::Net::Http::Headers::HeaderInfo*& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_headerInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerInfo;
}
template <typename T> constexpr ::System::Net::Http::Headers::HeaderInfo* const& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_headerInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___headerInfo;
}
template <typename T> constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_set_headerInfo(::System::Net::Http::Headers::HeaderInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___headerInfo = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::StringW>*& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_invalidValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidValues;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::StringW>* const& System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_get_invalidValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___invalidValues;
}
template <typename T> constexpr void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::__cordl_internal_set_invalidValues(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___invalidValues = value;
}
template <typename T>
inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::_ctor(::System::Net::Http::Headers::HttpHeaders* headers, ::System::Net::Http::Headers::HeaderInfo* headerInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Net::Http::Headers::HttpHeaders*>(), ::i2c::type_of<::System::Net::Http::Headers::HeaderInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headers, headerInfo);
}
template <typename T> inline int32_t System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::List_1<::StringW>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_InvalidValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "get_InvalidValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
template <typename T> inline bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::AddRange(::System::Collections::Generic::List_1<T>* values) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(),
                                                                                         { "AddRange", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::AddInvalidValue(::StringW invalidValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "AddInvalidValue", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, invalidValue);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline bool System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::StringW System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline T System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::Find(::System::Predicate_1<T>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(), { "Find", {}, { ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, predicate);
}
template <typename T>
inline ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::New_ctor(::System::Net::Http::Headers::HttpHeaders* headers,
                                                                                                                                          ::System::Net::Http::Headers::HeaderInfo* headerInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>*>(headers, headerInfo));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::ICollection_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T>::HttpHeaderValueCollection_1() {}
