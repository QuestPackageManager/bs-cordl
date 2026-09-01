#pragma once
// IWYU pragma private; include "System\Collections\Concurrent\ConcurrentDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue> constexpr TKey& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr TKey const& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_set__key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____key = value;
}
template <typename TKey, typename TValue> constexpr TValue& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr TValue const& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_set__value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* const&
System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_set__next(::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____next = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__hashcode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashcode;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_get__hashcode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hashcode;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::__cordl_internal_set__hashcode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hashcode = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::_ctor(TKey key, TValue value, int32_t hashcode,
                                                                                              ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* next) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value, hashcode, next);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::New_ctor(TKey key, TValue value, int32_t hashcode,
                                                                                     ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* next) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>(key, value, hashcode, next));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>::ConcurrentDictionary_2_Node() {}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>&
System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*> const&
System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_set__buckets(
    ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buckets = value;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<::System::Object*>& System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_get__locks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locks;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Object*> const& System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_get__locks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____locks;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_set__locks(::ArrayW<::System::Object*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____locks = value;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<int32_t>& System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_get__countPerLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countPerLock;
}
template <typename TKey, typename TValue> constexpr ::ArrayW<int32_t> const& System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_get__countPerLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countPerLock;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::__cordl_internal_set__countPerLock(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countPerLock = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::_ctor(::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*> buckets,
                                                                                                ::ArrayW<::System::Object*> locks, ::ArrayW<int32_t> countPerLock) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>>(),
                                                                                             ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::ArrayW<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buckets, locks, countPerLock);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::New_ctor(::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*> buckets,
                                                                                       ::ArrayW<::System::Object*> locks, ::ArrayW<int32_t> countPerLock) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*>(buckets, locks, countPerLock));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>::ConcurrentDictionary_2_Tables() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*&
System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::__cordl_internal_get__enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerator;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* const&
System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::__cordl_internal_get__enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumerator;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::__cordl_internal_set__enumerator(
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enumerator = value;
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::_ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline ::System::Collections::DictionaryEntry System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Entry() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::New_ctor(::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>*>(dictionary));
}
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::operator ::System::Collections::IDictionaryEnumerator*() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator*
System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::i___System__Collections__IDictionaryEnumerator() noexcept {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_DictionaryEnumerator<TKey, TValue>::ConcurrentDictionary_2_DictionaryEnumerator() {}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> const&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_set___2__current(::System::Collections::Generic::KeyValuePair_2<TKey, TValue> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* const&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_set___4__this(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*>&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get__buckets_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets_5__2;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*> const&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get__buckets_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets_5__2;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_set__buckets_5__2(
    ::ArrayW<::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buckets_5__2 = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__3;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__3 = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>*&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get__current_5__4() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_5__4;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* const&
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_get__current_5__4() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____current_5__4;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::__cordl_internal_set__current_5__4(
    ::System::Collections::Concurrent::ConcurrentDictionary_2_Node<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____current_5__4 = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_TKey_TValue___get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<
    TKey, TValue>::i___System__Collections__Generic__IEnumerator_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue>
constexpr ::System::IDisposable* System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2__GetEnumerator_d__35<TKey, TValue>::ConcurrentDictionary_2__GetEnumerator_d__35() {}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__tables() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* const&
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__tables() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tables;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__tables(::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tables = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____comparer = value;
}
template <typename TKey, typename TValue> constexpr bool& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__growLockArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____growLockArray;
}
template <typename TKey, typename TValue> constexpr bool const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__growLockArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____growLockArray;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__growLockArray(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____growLockArray = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__budget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____budget;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__budget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____budget;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__budget(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____budget = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__serializationArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationArray;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> const&
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__serializationArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationArray;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__serializationArray(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializationArray = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__serializationConcurrencyLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationConcurrencyLevel;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__serializationConcurrencyLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationConcurrencyLevel;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__serializationConcurrencyLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializationConcurrencyLevel = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__serializationCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationCapacity;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_get__serializationCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serializationCapacity;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::__cordl_internal_set__serializationCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____serializationCapacity = value;
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::setStaticF_s_isValueWriteAtomic(bool value) {
  ::cordl_internals::setStaticField<bool, "s_isValueWriteAtomic", ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(std::forward<bool>(value));
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::getStaticF_s_isValueWriteAtomic() {
  return ::cordl_internals::getStaticField<bool, "s_isValueWriteAtomic", ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>();
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::IsValueWriteAtomic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "IsValueWriteAtomic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::InitializeFromCollection(
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                          { "InitializeFromCollection", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::_ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray,
                                                                                         ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, concurrencyLevel, capacity, growLockArray, comparer);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::TryAdd(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "TryAdd", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::TryRemove(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "TryRemove", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::TryRemoveInternal(TKey key, ::by_ref<TValue> value, bool matchValue, TValue oldValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                              { "TryRemoveInternal", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<bool>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value, matchValue, oldValue);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::TryGetValueInternal(TKey key, int32_t hashcode, ::by_ref<TValue> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "TryGetValueInternal", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, hashcode, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue>
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::ToArray() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::CopyToPairs(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                              { "CopyToPairs", {}, { ::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::CopyToEntries(::ArrayW<::System::Collections::DictionaryEntry> array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "CopyToEntries", {}, { ::i2c::type_of<::ArrayW<::System::Collections::DictionaryEntry>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::CopyToObjects(::ArrayW<::System::Object*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "CopyToObjects", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::TryAddInternal(TKey key, int32_t hashcode, TValue value, bool updateIfExists, bool acquireLock,
                                                                                                  ::by_ref<TValue> resultingValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                          { "TryAddInternal",
                            {},
                            { ::i2c::type_of<TKey>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<TValue>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, hashcode, value, updateIfExists, acquireLock, resultingValue);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::ThrowKeyNotFoundException(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "ThrowKeyNotFoundException", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::ThrowKeyNullException() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "ThrowKeyNullException", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetCountInternal() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "GetCountInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetOrAdd(TKey key, ::System::Func_2<TKey, TValue>* valueFactory) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "GetOrAdd", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::System::Func_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key, valueFactory);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetOrAdd(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "GetOrAdd", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.IDictionary<TKey,TValue>.Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IDictionary<TKey,TValue>.Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TKey>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> keyValuePair) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, keyValuePair);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.Add", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Contains", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsFixedSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Keys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.Remove", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ICollection* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.IDictionary.get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "System.Collections.IDictionary.get_Item", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.IDictionary.set_Item", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "System.Collections.ICollection.CopyTo", {}, { ::i2c::type_of<::System::Array*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_IsSynchronized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "System.Collections.ICollection.get_SyncRoot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GrowTable(::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>* tables) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "GrowTable", {}, { ::i2c::type_of<::System::Collections::Concurrent::ConcurrentDictionary_2_Tables<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tables);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetBucket(int32_t hashcode, int32_t bucketCount) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "GetBucket", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hashcode, bucketCount);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetBucketAndLockNo(int32_t hashcode, ::by_ref<int32_t> bucketNo, ::by_ref<int32_t> lockNo, int32_t bucketCount,
                                                                                                      int32_t lockCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                          { "GetBucketAndLockNo",
                            {},
                            { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hashcode, bucketNo, lockNo, bucketCount, lockCount);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::get_DefaultConcurrencyLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "get_DefaultConcurrencyLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::AcquireAllLocks(::by_ref<int32_t> locksAcquired) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "AcquireAllLocks", {}, { ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locksAcquired);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::AcquireLocks(int32_t fromInclusive, int32_t toExclusive, ::by_ref<int32_t> locksAcquired) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                           { "AcquireLocks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromInclusive, toExclusive, locksAcquired);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::ReleaseLocks(int32_t fromInclusive, int32_t toExclusive) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "ReleaseLocks", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromInclusive, toExclusive);
}
template <typename TKey, typename TValue> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetKeys() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "GetKeys", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<TKey>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::GetValues() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(), { "GetValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<TValue>*>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::OnSerializing(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "OnSerializing", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
template <typename TKey, typename TValue> inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::OnSerialized(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "OnSerialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
template <typename TKey, typename TValue>
inline void System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::OnDeserialized(::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(),
                                                                                         { "OnDeserialized", {}, { ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(comparer));
}
template <typename TKey, typename TValue>
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::New_ctor(int32_t concurrencyLevel, int32_t capacity, bool growLockArray,
                                                                                ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>*>(concurrencyLevel, capacity, growLockArray, comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionary* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<TKey, TValue>::ConcurrentDictionary_2() {}
