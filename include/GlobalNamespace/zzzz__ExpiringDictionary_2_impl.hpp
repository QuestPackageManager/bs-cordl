#pragma once
// IWYU pragma private; include "GlobalNamespace/ExpiringDictionary_2.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "BGNet/Core/zzzz__ITimeProvider_def.hpp"
#include "GlobalNamespace/zzzz__ExpiringDictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TKey, typename TValue> constexpr TKey& GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr TKey const& GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___key, value);
}
template <typename TKey, typename TValue> constexpr TValue& GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr TValue const& GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_set_value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___value, value);
}
template <typename TKey, typename TValue> constexpr int64_t& GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_get_expireTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expireTime;
}
template <typename TKey, typename TValue> constexpr int64_t const& GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_get_expireTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___expireTime;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::__cordl_internal_set_expireTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___expireTime = value;
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>());
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>::ExpiringDictionary_2_Entry() {}
template <typename TKey, typename TValue> constexpr int32_t& GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr int32_t const& GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TValue> constexpr TValue& GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue> constexpr TValue const& GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_set___2__current(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____2__current, value);
}
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*& GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* const& GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_set___4__this(::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*&
GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const&
GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__cordl_internal_set___7__wrap1(
    ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____7__wrap1, value);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(), "<>m__Finally1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::System_Collections_Generic_IEnumerator_TValue__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TValue>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>* GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<TValue>*
GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::ExpiringDictionary_2__Enumerate_d__14<TKey, TValue>::ExpiringDictionary_2__Enumerate_d__14() {}
template <typename TKey, typename TValue> constexpr ::BGNet::Core::ITimeProvider*& GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__timeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
template <typename TKey, typename TValue> constexpr ::BGNet::Core::ITimeProvider* const& GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__timeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeProvider;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_set__timeProvider(::BGNet::Core::ITimeProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____timeProvider, value);
}
template <typename TKey, typename TValue> constexpr int64_t& GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__expirationLengthMs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expirationLengthMs;
}
template <typename TKey, typename TValue> constexpr int64_t const& GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__expirationLengthMs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expirationLengthMs;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_set__expirationLengthMs(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____expirationLengthMs = value;
}
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*& GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__expirationQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expirationQueue;
}
template <typename TKey, typename TValue>
constexpr ::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const&
GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__expirationQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expirationQueue;
}
template <typename TKey, typename TValue>
constexpr void
GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_set__expirationQueue(::GlobalNamespace::OrderedSet_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____expirationQueue, value);
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*&
GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__entryLookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entryLookup;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const&
GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__entryLookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entryLookup;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_set__entryLookup(
    ::System::Collections::Generic::Dictionary_2<TKey, ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____entryLookup, value);
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>*&
GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__reusableEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableEntries;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* const&
GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_get__reusableEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableEntries;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::__cordl_internal_set__reusableEntries(
    ::System::Collections::Generic::List_1<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____reusableEntries, value);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                                                             "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::_ctor(::BGNet::Core::ITimeProvider* timeProvider, int64_t expirationLengthMs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Core::ITimeProvider*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, timeProvider, expirationLengthMs);
}
template <typename TKey, typename TValue>
inline int32_t GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::CompareEntries(::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* a,
                                                                                   ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "CompareEntries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, a, b);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::RemoveExpiredEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                                                             "RemoveExpiredEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerator_1<TValue>* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Enumerate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                                                             "Enumerate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "ContainsKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::TryGetValue(TKey key, ::ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::TryGetValueAndResetExpiration(TKey key, ::ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "TryGetValueAndResetExpiration", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::ResetExpiration(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "ResetExpiration",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TValue GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Get(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "Get",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Set(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TValue GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::PollUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                                                             "PollUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::GetEntry(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "GetEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::ReleaseEntry(::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>* entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>::get(), "ReleaseEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ExpiringDictionary_2_Entry<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entry);
}
template <typename TKey, typename TValue>
inline ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::New_ctor(::BGNet::Core::ITimeProvider* timeProvider, int64_t expirationLengthMs) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>*>(timeProvider, expirationLengthMs));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::ExpiringDictionary_2<TKey, TValue>::ExpiringDictionary_2() {}
