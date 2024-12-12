#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/LRUCache_2.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__LRUCache_2_def.hpp"
template <typename TKey, typename TValue>
inline bool UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::Equals(::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename TKey, typename TValue> inline int32_t UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::operator ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*
UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>::i___System__IEquatable_1___UnityEngine__ResourceManagement__Util__LRUCache_2_Entry_TKey_TValue__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, limit);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::TryAdd(TKey id, TValue obj) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>::get(), "TryAdd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, obj);
}
template <typename TKey, typename TValue> inline bool UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::TryGet(TKey offset, ::ByRef<TValue> val) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>>::get(), "TryGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, offset, val);
}
// Ctor Parameters [CppParam { name: "entryLimit", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cache", ty:
// "::System::Collections::Generic::Dictionary_2<TKey,::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey,TValue>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "lru", ty:
// "::System::Collections::Generic::LinkedList_1<TKey>*", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::LRUCache_2(
    int32_t entryLimit, ::System::Collections::Generic::Dictionary_2<TKey, ::UnityEngine::ResourceManagement::Util::LRUCache_2_Entry<TKey, TValue>>* cache,
    ::System::Collections::Generic::LinkedList_1<TKey>* lru) noexcept {
  this->entryLimit = entryLimit;
  this->cache = cache;
  this->lru = lru;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::UnityEngine::ResourceManagement::Util::LRUCache_2<TKey, TValue>::LRUCache_2() {}
