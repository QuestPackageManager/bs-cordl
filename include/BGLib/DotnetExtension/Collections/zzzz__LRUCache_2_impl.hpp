#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "BGLib/DotnetExtension/Collections/zzzz__LRUCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
template <typename TKey, typename TValue> constexpr TKey& BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr TKey const& BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
template <typename TKey, typename TValue> constexpr void BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__cordl_internal_set__key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr TValue& BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr TValue const& BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename TKey, typename TValue> constexpr void BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__cordl_internal_set_value(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline TKey BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::get_key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>::get(),
                                               "get_key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>* BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::New_ctor(TKey key,
                                                                                                                                                                                TValue value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>(key, value));
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>::__LRUCache_2__CacheElement() {}
template <typename TKey, typename TValue>
constexpr ::System::Action_2<TKey, TValue>*& BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get_itemWillBeRemovedFromCacheEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemWillBeRemovedFromCacheEvent;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<TKey, TValue>*> const&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get_itemWillBeRemovedFromCacheEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___itemWillBeRemovedFromCacheEvent;
}
template <typename TKey, typename TValue>
constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemWillBeRemovedFromCacheEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__cacheContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheContent;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*> const&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__cacheContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheContent;
}
template <typename TKey, typename TValue>
constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set__cacheContent(
    ::System::Collections::Generic::LinkedList_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>*&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<
    ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>*> const&
BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_get__index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____index;
}
template <typename TKey, typename TValue>
constexpr void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::__cordl_internal_set__index(
    ::System::Collections::Generic::Dictionary_2<TKey, ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____index)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "add_itemWillBeRemovedFromCacheEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::remove_itemWillBeRemovedFromCacheEvent(::System::Action_2<TKey, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "remove_itemWillBeRemovedFromCacheEvent",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<TKey, TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue>
inline ::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>* BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::New_ctor(int32_t maxNumberElements) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>(maxNumberElements));
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::_ctor(int32_t maxNumberElements) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNumberElements);
}
template <typename TKey, typename TValue> inline bool BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::IsInCache(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "IsInCache",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "get_Count",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue>
inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::MakeNodeMostRecentlyUsed(
    ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(),
                                               "MakeNodeMostRecentlyUsed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::System::Collections::Generic::LinkedListNode_1<::BGLib::DotnetExtension::Collections::__LRUCache_2__CacheElement<TKey, TValue>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename TKey, typename TValue> inline bool BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::TryGetFromCache(TKey key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "TryGetFromCache", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::Add(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::RemoveLeastUsedElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(),
                                               "RemoveLeastUsedElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::BGLib::DotnetExtension::Collections::LRUCache_2<TKey, TValue>::LRUCache_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
