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
  this->___comparer = value;
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
  this->___dict = value;
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template <typename TKey, typename TItem>
inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer, dictionaryCreationThreshold);
}
template <typename TKey, typename TItem> inline ::System::Collections::Generic::List_1<TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Items() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "get_Items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TItem>*>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline TItem System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TItem>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline bool System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::Contains(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "Contains", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline bool System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::TryGetValue(TKey key, ::by_ref<TItem> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TItem>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, item);
}
template <typename TKey, typename TItem> inline ::System::Collections::Generic::IDictionary_2<TKey, TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::get_Dictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "get_Dictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<TKey, TItem>*>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::ClearItems() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline TKey System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::GetKeyForItem(TItem item) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), 39 })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::InsertItem(int32_t index, TItem item) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), 36 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::RemoveItem(int32_t index) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), 37 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::SetItem(int32_t index, TItem item) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), 38 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::AddKey(TKey key, TItem item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "AddKey", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TItem>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, item);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::CreateDictionary() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "CreateDictionary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TItem> inline void System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::RemoveKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(), { "RemoveKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
template <typename TKey, typename TItem> inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>* System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>());
}
template <typename TKey, typename TItem>
inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(comparer));
}
template <typename TKey, typename TItem>
inline ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*
System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer, int32_t dictionaryCreationThreshold) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>*>(comparer, dictionaryCreationThreshold));
}
// Ctor Parameters []
template <typename TKey, typename TItem> constexpr ::System::Collections::ObjectModel::KeyedCollection_2<TKey, TItem>::KeyedCollection_2() {}
