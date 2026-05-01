#pragma once
// IWYU pragma private; include "System/Collections/ObjectModel/KeyedCollection_2.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__KeyedCollection_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename TKey, typename TItem>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TItem>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TItem>
constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___comparer, value);
}
template <typename TKey, typename TItem>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TItem>*& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dict;
}
template <typename TKey, typename TItem>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, TItem>* const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dict;
}
template <typename TKey, typename TItem>
constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_set_dict(::System::Collections::Generic::Dictionary_2<TKey, TItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___dict, value);
}
template <typename TKey, typename TItem> constexpr int32_t& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_keyCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyCount;
}
template <typename TKey, typename TItem> constexpr int32_t const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_keyCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyCount;
}
template <typename TKey, typename TItem> constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_set_keyCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___keyCount = value;
}
template <typename TKey, typename TItem> constexpr int32_t& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
template <typename TKey, typename TItem> constexpr int32_t const& System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
template <typename TKey, typename TItem> constexpr void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::__cordl_internal_set_threshold(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TItem>
inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer, dictionaryCreationThreshold);
}
template <typename TKey, typename TItem> inline ::System::Collections::Generic::List_1<TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "get_Items",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TItem>*, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline TItem System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<TItem, false>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline bool System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::Contains(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline bool System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::TryGetValue(TKey key, ::ByRef<TItem> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "TryGetValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TItem>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TItem> inline ::System::Collections::Generic::IDictionary_2<TKey, TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Dictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "get_Dictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<TKey, TItem>*, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::ClearItems() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline TKey System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::GetKeyForItem(TItem item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), 39)));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::InsertItem(int32_t index, TItem item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::RemoveItem(int32_t index) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::SetItem(int32_t index, TItem item) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::AddKey(TKey key, TItem item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "AddKey", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TItem>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::CreateDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "CreateDictionary",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::RemoveKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>::get(), "RemoveKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>());
}
template <typename TKey, typename TItem>
inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(comparer));
}
template <typename TKey, typename TItem>
inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(comparer, dictionaryCreationThreshold));
}
// Ctor Parameters []
template <typename TKey, typename TItem> constexpr ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::KeyedCollection_2() {}
