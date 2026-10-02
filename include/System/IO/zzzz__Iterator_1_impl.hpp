#pragma once
// IWYU pragma private; include "System/IO/Iterator_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Iterator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TSource> constexpr int32_t& System::IO::Iterator_1<TSource>::__cordl_internal_get__threadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadId;
}
template <typename TSource> constexpr int32_t const& System::IO::Iterator_1<TSource>::__cordl_internal_get__threadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____threadId;
}
template <typename TSource> constexpr void System::IO::Iterator_1<TSource>::__cordl_internal_set__threadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____threadId = value;
}
template <typename TSource> constexpr int32_t& System::IO::Iterator_1<TSource>::__cordl_internal_get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
template <typename TSource> constexpr int32_t const& System::IO::Iterator_1<TSource>::__cordl_internal_get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___state;
}
template <typename TSource> constexpr void System::IO::Iterator_1<TSource>::__cordl_internal_set_state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___state = value;
}
template <typename TSource> constexpr TSource& System::IO::Iterator_1<TSource>::__cordl_internal_get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
template <typename TSource> constexpr TSource const& System::IO::Iterator_1<TSource>::__cordl_internal_get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___current;
}
template <typename TSource> constexpr void System::IO::Iterator_1<TSource>::__cordl_internal_set_current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___current = value;
}
template <typename TSource> inline void System::IO::Iterator_1<TSource>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSource> inline TSource System::IO::Iterator_1<TSource>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template <typename TSource> inline ::System::IO::Iterator_1<TSource>* System::IO::Iterator_1<TSource>::Clone() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Iterator_1<TSource>*>(this, ___internal_method);
}
template <typename TSource> inline void System::IO::Iterator_1<TSource>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSource> inline void System::IO::Iterator_1<TSource>::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::IO::Iterator_1<TSource>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*>(this, ___internal_method);
}
template <typename TSource> inline bool System::IO::Iterator_1<TSource>::MoveNext() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::IO::Iterator_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::IO::Iterator_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TSource> inline void System::IO::Iterator_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::IO::Iterator_1<TSource>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSource> inline ::System::IO::Iterator_1<TSource>* System::IO::Iterator_1<TSource>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::IO::Iterator_1<TSource>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::IO::Iterator_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>* System::IO::Iterator_1<TSource>::i___System__Collections__Generic__IEnumerable_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::IO::Iterator_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource> constexpr ::System::Collections::IEnumerable* System::IO::Iterator_1<TSource>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::IO::Iterator_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>* System::IO::Iterator_1<TSource>::i___System__Collections__Generic__IEnumerator_1_TSource_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::IO::Iterator_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TSource> constexpr ::System::IDisposable* System::IO::Iterator_1<TSource>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::IO::Iterator_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TSource> constexpr ::System::Collections::IEnumerator* System::IO::Iterator_1<TSource>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::IO::Iterator_1<TSource>::Iterator_1() {}
