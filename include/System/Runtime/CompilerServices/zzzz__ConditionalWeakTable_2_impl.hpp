#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/ConditionalWeakTable_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__Ephemeron_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename TKey, typename TValue> inline TValue System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>::Invoke(TKey key) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>*
System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>*>(object, method));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>::ConditionalWeakTable_2_CreateValueCallback() {}
template <typename TKey, typename TValue>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*&
System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_get__table() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
template <typename TKey, typename TValue>
constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* const&
System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_get__table() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____table;
}
template <typename TKey, typename TValue>
constexpr void
System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_set__table(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____table = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_get__currentIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_get__currentIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentIndex;
}
template <typename TKey, typename TValue> constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_set__currentIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentIndex = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>& System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_get__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const&
System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_get__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current;
}
template <typename TKey, typename TValue>
constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::__cordl_internal_set__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current = value;
}
template <typename TKey, typename TValue>
inline void System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* table) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*
System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::New_ctor(::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* table) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>*>(table));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey,
                                                                     TValue>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2_Enumerator<TKey, TValue>::ConditionalWeakTable_2_Enumerator() {}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron>& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_get_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Runtime::CompilerServices::Ephemeron> const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_get_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___data;
}
template <typename TKey, typename TValue>
constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_set_data(::ArrayW<::System::Runtime::CompilerServices::Ephemeron> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___data = value;
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
template <typename TKey, typename TValue> constexpr ::System::Object* const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
template <typename TKey, typename TValue> constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lock = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_get_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_get_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___size;
}
template <typename TKey, typename TValue> constexpr void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::__cordl_internal_set_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___size = value;
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Finalize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::RehashWithoutResize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), { "RehashWithoutResize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::RecomputeSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), { "RecomputeSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Rehash() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), { "Rehash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline TValue
System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::GetValue(TKey key,
                                                                                  ::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>* createValueCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(),
                          { "GetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2_CreateValueCallback<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key, createValueCallback);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Runtime::CompilerServices::ConditionalWeakTable_2<TKey, TValue>::ConditionalWeakTable_2() {}
