#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\Util\LRUCache_2.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LinkedListNodeCache_1_def.hpp"
template <typename TKey, typename TValue>
inline bool UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::Equals(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>(),
                                                           { "Equals", {}, { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TKey, typename TValue> inline int32_t UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*
UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__LRUCache_2_Entry_TKey_TValue__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "lruNode", ty: "::System::Collections::Generic::LinkedListNode_1<TKey>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "TValue",
// modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::LRUCache_2_Entry(::System::Collections::Generic::LinkedListNode_1<TKey>* lruNode, TValue Value) noexcept {
  this->lruNode = lruNode;
  this->Value = Value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::LRUCache_2_Entry() {}
template <typename TKey, typename TValue> inline void UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::_ctor(int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, limit);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::TryAdd(TKey id, TValue obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>(), { "TryAdd", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, id, obj);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::TryGet(TKey offset, ::by_ref<TValue> val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>(),
                                                                                         { "TryGet", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, offset, val);
}
// Ctor Parameters [CppParam { name: "requestHits", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "requestCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "entryLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cache", ty:
// "::System::Collections::Generic::Dictionary_2<TKey,::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lru", ty:
// "::System::Collections::Generic::LinkedList_1<TKey>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "nodeCache", ty:
// "::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<TKey>*", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::LRUCache_2(
    int32_t requestHits, int32_t requestCount, int32_t entryLimit, ::System::Collections::Generic::Dictionary_2<TKey, ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache,
    ::System::Collections::Generic::LinkedList_1<TKey>* lru, ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<TKey>* nodeCache) noexcept {
  this->requestHits = requestHits;
  this->requestCount = requestCount;
  this->entryLimit = entryLimit;
  this->cache = cache;
  this->lru = lru;
  this->nodeCache = nodeCache;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::LRUCache_2() {}
