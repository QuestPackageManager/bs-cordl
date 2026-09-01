#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\Collections\LRUCache_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template <typename TKey, typename TValue> constexpr TKey& BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr TKey const& BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr void BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::__cordl_internal_set__key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____key = value;
}
template <typename TKey, typename TValue> constexpr TValue& BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr TValue const& BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr void BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::__cordl_internal_set_value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
template <typename TKey, typename TValue> inline TKey BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::get_key() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>(), { "get_key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline ::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>* BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::New_ctor(TKey key, TValue value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>(key, value));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>::LRUCache_2_CacheElement() {}
template <typename TKey, typename TValue>
constexpr ::System::Action_2<TKey, TValue>*& BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get_itemWillBeRemovedFromCacheEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemWillBeRemovedFromCacheEvent;
}
template <typename TKey, typename TValue>
constexpr ::System::Action_2<TKey, TValue>* const& BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get_itemWillBeRemovedFromCacheEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemWillBeRemovedFromCacheEvent;
}
template <typename TKey, typename TValue>
constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___itemWillBeRemovedFromCacheEvent = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>*&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__cacheContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheContent;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>* const&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__cacheContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheContent;
}
template <typename TKey, typename TValue>
constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set__cacheContent(
    ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheContent = value;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>*>*&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>*>* const&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue>
constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set__index(
    ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____index = value;
}
template <typename TKey, typename TValue> constexpr int32_t& BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__maxNumberElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberElements;
}
template <typename TKey, typename TValue> constexpr int32_t const& BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__maxNumberElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxNumberElements;
}
template <typename TKey, typename TValue> constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set__maxNumberElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxNumberElements = value;
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::add_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(),
                                                                                         { "add_itemWillBeRemovedFromCacheEvent", {}, { ::i2c::type_of<::System::Action_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::remove_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(),
                                                                                         { "remove_itemWillBeRemovedFromCacheEvent", {}, { ::i2c::type_of<::System::Action_2<TKey, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::_ctor(int32_t maxNumberElements) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxNumberElements);
}
template <typename TKey, typename TValue> inline bool BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::IsInCache(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(), { "IsInCache", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::MakeNodeMostRecentlyUsed(
    ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(),
          { "MakeNodeMostRecentlyUsed", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::LRUCache_2_CacheElement<TKey, TValue>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename TKey, typename TValue> inline bool BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::TryGetFromCache(TKey key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(),
                                                                                         { "TryGetFromCache", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::RemoveLeastUsedElement() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(), { "RemoveLeastUsedElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>* BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::New_ctor(int32_t maxNumberElements) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(maxNumberElements));
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::LRUCache_2() {}
