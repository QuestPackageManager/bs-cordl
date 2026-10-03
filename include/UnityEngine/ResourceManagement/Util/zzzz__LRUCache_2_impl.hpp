#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache_2.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
template <typename TKey, typename TValue> inline void UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::setStaticF_typeType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "typeType", ::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>(std::forward<::System::Type*>(value));
}
template <typename TKey, typename TValue> inline ::System::Type* UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::getStaticF_typeType() {
  return ::cordl_internals::getStaticField<::System::Type*, "typeType", ::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>();
}
template <typename TKey, typename TValue> inline void UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::_ctor(TKey k, ::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, k, t);
}
template <typename TKey, typename TValue>
inline bool UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::System_IEquatable_UnityEngine_ResourceManagement_Util_LRUCache_TKey_TValue__Key__Equals(
    ::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>(),
                                                                                         { "System.IEquatable<UnityEngine.ResourceManagement.Util.LRUCache<TKey,TValue>.Key>.Equals",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename TKey, typename TValue> inline int32_t UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>*
UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__LRUCache_2_Key_TKey_TValue__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("{}"),
// comment: None }]
template <typename TKey, typename TValue> constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::LRUCache_2_Key(TKey key, ::System::Type* type) noexcept {
  this->key = key;
  this->type = type;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>::LRUCache_2_Key() {}
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
// Ctor Parameters [CppParam { name: "lruNode", ty: "::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>*", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::LRUCache_2_Entry(
    ::System::Collections::Generic::LinkedListNode_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>* lruNode, TValue Value) noexcept {
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
template <typename TKey, typename TValue> inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::TryGet(::System::Type* type, TKey id, ::by_ref<TValue> val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>(),
                                                           { "TryGet", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, type, id, val);
}
// Ctor Parameters [CppParam { name: "requestHits", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestCount", ty: "int32_t", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "entryLimit", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cache", ty:
// "::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>,::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>*",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lru", ty:
// "::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey,TValue>>*", modifiers: "", def_value: Some("{}"), comment: None }]
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::LRUCache_2(
    int32_t requestHits, int32_t requestCount, int32_t entryLimit,
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>, ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache,
    ::System::Collections::Generic::LinkedList_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Key<TKey, TValue>>* lru) noexcept {
  this->requestHits = requestHits;
  this->requestCount = requestCount;
  this->entryLimit = entryLimit;
  this->cache = cache;
  this->lru = lru;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::LRUCache_2() {}
