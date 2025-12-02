#pragma once
// IWYU pragma private; include "System/Collections/Generic/LowLevelDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelDictionary_2_def.hpp"
template <typename TKey, typename TValue> constexpr TKey& System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr TKey const& System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_set__key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____key, value);
}
template <typename TKey, typename TValue> constexpr TValue& System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr TValue const& System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_set__value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____value, value);
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*& System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* const& System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::__cordl_internal_set__next(::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____next, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>());
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>::LowLevelDictionary_2_Entry() {}
template <typename TKey, typename TValue, typename T> inline bool System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::Equals(T x, T y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>*>::get(), "Equals",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x, y);
}
template <typename TKey, typename TValue, typename T> inline int32_t System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::GetHashCode(T obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>*>::get(),
                                  "GetHashCode", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
template <typename TKey, typename TValue, typename T> inline void System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue, typename T>
inline ::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>* System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<T>"
template <typename TKey, typename TValue, typename T>
constexpr System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::operator ::System::Collections::Generic::IEqualityComparer_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<T>"
template <typename TKey, typename TValue, typename T>
constexpr ::System::Collections::Generic::IEqualityComparer_1<T>*
System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::i___System__Collections__Generic__IEqualityComparer_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEqualityComparer_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TKey, typename TValue, typename T> constexpr ::System::Collections::Generic::LowLevelDictionary_2_DefaultComparer_1<TKey, TValue, T>::LowLevelDictionary_2_DefaultComparer_1() {}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*>&
System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__buckets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*> const&
System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__buckets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buckets;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_set__buckets(
    ::ArrayW<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, ::Array<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____buckets, value);
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__numEntries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEntries;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__numEntries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numEntries;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_set__numEntries(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numEntries = value;
}
template <typename TKey, typename TValue> constexpr int32_t& System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
template <typename TKey, typename TValue> constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_get__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparer;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::__cordl_internal_set__comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____comparer, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, comparer);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::Clear(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity);
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::Find(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "Find",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::UncheckedAdd(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "UncheckedAdd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LowLevelDictionary_2_Entry<TKey, TValue>*, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::ExpandBuckets() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "ExpandBuckets",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::GetBucket(TKey key, int32_t numBuckets) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>::get(), "GetBucket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key, numBuckets);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>* System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*
System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::New_ctor(int32_t capacity, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>*>(capacity, comparer));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::LowLevelDictionary_2<TKey, TValue>::LowLevelDictionary_2() {}
