#pragma once
// IWYU pragma private; include "System/Collections/ObjectModel/ReadOnlyDictionary_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyDictionary_2_def.hpp"
#include "System/Collections/zzzz__DictionaryEntry_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IDictionaryEnumerator_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::operator ::System::Collections::IDictionaryEnumerator*() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IDictionaryEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionaryEnumerator* System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::i___System__Collections__IDictionaryEnumerator() {
  return static_cast<::System::Collections::IDictionaryEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerator* System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dictionary);
}
template <typename TKey, typename TValue> inline ::System::Collections::DictionaryEntry System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  "get_Entry", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::DictionaryEntry, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  "get_Value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>>::get(),
                                  "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_dictionary", ty: "::System::Collections::Generic::IDictionary_2<TKey,TValue>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_enumerator", ty:
// "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*", modifiers: "", def_value: Some("nullptr") }]
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::__ReadOnlyDictionary_2__DictionaryEnumerator(
    ::System::Collections::Generic::IDictionary_2<TKey, TValue>* _dictionary,
    ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>* _enumerator) noexcept {
  this->_dictionary = _dictionary;
  this->_enumerator = _enumerator;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__DictionaryEnumerator<TKey, TValue>::__ReadOnlyDictionary_2__DictionaryEnumerator() {}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TKey>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TKey>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TKey>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TKey_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TKey>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TKey>*& System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__cordl_internal_get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<TKey>*> const&
System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__cordl_internal_get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__cordl_internal_set__collection(::System::Collections::Generic::ICollection_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____collection, value);
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____syncRoot, value);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::ICollection_1<TKey>* collection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>(collection));
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::_ctor(::System::Collections::Generic::ICollection_1<TKey>* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Add(TKey item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Contains(TKey item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.Contains", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::CopyTo(::ArrayW<TKey, ::Array<TKey>*> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "CopyTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TKey, ::Array<TKey>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_Generic_ICollection_TKey__Remove(TKey item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<TKey>.Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TKey>* System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(), "System.Collections.ICollection.CopyTo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>::__ReadOnlyDictionary_2__KeyCollection() {}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::i___System__Collections__Generic__ICollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TValue>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TValue>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<TValue>*& System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__cordl_internal_get__collection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::ICollection_1<TValue>*> const&
System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__cordl_internal_get__collection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____collection;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__cordl_internal_set__collection(::System::Collections::Generic::ICollection_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____collection, value);
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const&
System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____syncRoot, value);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*
System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::New_ctor(::System::Collections::Generic::ICollection_1<TValue>* collection) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>(collection));
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::_ctor(::System::Collections::Generic::ICollection_1<TValue>* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Add(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<TValue>.Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Clear() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<TValue>.Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Contains(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<TValue>.Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::CopyTo(::ArrayW<TValue, ::Array<TValue>*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(), "CopyTo",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TValue, ::Array<TValue>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "get_Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<TValue>.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_Generic_ICollection_TValue__Remove(TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<TValue>.Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>* System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
      "System.Collections.ICollection.CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.ICollection.get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(),
                                  "System.Collections.ICollection.get_SyncRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>::__ReadOnlyDictionary_2__ValueCollection() {}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::ICollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IEnumerable* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IDictionary"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::IDictionary*() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IDictionary"
template <typename TKey, typename TValue>
constexpr ::System::Collections::IDictionary* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__IDictionary() noexcept {
  return static_cast<::System::Collections::IDictionary*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename TKey, typename TValue> constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::ICollection"
template <typename TKey, typename TValue>
constexpr ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__ICollection() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyDictionary_2<TKey,TValue>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyDictionary_2_TKey_TValue_() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::i___System__Collections__Generic__IReadOnlyCollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey, TValue>*& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get_m_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dictionary;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IDictionary_2<TKey, TValue>*> const&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get_m_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_dictionary;
}
template <typename TKey, typename TValue>
constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set_m_dictionary(::System::Collections::Generic::IDictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_dictionary, value);
}
template <typename TKey, typename TValue> constexpr ::System::Object*& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename TKey, typename TValue> constexpr void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____syncRoot, value);
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*& System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*> const&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keys;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set__keys(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____keys, value);
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*> const&
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename TKey, typename TValue>
constexpr void
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::__cordl_internal_set__values(::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____values, value);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "get_Keys",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__KeyCollection<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "get_Values",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::__ReadOnlyDictionary_2__ValueCollection<TKey, TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "ContainsKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::TryGetValue(TKey key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IDictionary<TKey,TValue>.get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "System.Collections.Generic.IDictionary<TKey,TValue>.Add",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IDictionary<TKey,TValue>.Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline TValue System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.IDictionary<TKey,TValue>.get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IDictionary_TKey_TValue__set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
      "System.Collections.Generic.IDictionary<TKey,TValue>.set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline int32_t System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>, ::Array<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(),
                                               ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
      "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::IsCompatibleKey(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "IsCompatibleKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.Clear", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Contains(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "System.Collections.IDictionary.Contains",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::System::Collections::IDictionaryEnumerator* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IDictionaryEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.get_IsFixedSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.get_IsReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Keys() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_Remove(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "System.Collections.IDictionary.Remove",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline ::System::Collections::ICollection* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_get_Item(::System::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "System.Collections.IDictionary.get_Item",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.IDictionary.set_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline void System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(), "System.Collections.ICollection.CopyTo",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename TKey, typename TValue> inline bool System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TKey>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Keys", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TKey>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>*
System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>*>::get(),
                                  "System.Collections.Generic.IReadOnlyDictionary<TKey,TValue>.get_Values", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::ObjectModel::ReadOnlyDictionary_2<TKey, TValue>::ReadOnlyDictionary_2() {}
