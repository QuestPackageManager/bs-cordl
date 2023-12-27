#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HMCache_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template <typename K, typename V> constexpr ::System::Action_1<V>*& GlobalNamespace::HMCache_2<K, V>::__get_itemWillBeRemovedFromCacheEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___itemWillBeRemovedFromCacheEvent;
}
template <typename K, typename V> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<V>*> const& GlobalNamespace::HMCache_2<K, V>::__get_itemWillBeRemovedFromCacheEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___itemWillBeRemovedFromCacheEvent;
}
template <typename K, typename V> constexpr void GlobalNamespace::HMCache_2<K, V>::__set_itemWillBeRemovedFromCacheEvent(::System::Action_1<V>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___itemWillBeRemovedFromCacheEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V> constexpr ::System::Collections::Generic::Dictionary_2<K, V>*& GlobalNamespace::HMCache_2<K, V>::__get__cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cache;
}
template <typename K, typename V> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<K, V>*> const& GlobalNamespace::HMCache_2<K, V>::__get__cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cache;
}
template <typename K, typename V> constexpr void GlobalNamespace::HMCache_2<K, V>::__set__cache(::System::Collections::Generic::Dictionary_2<K, V>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V> constexpr ::System::Collections::Generic::Queue_1<K>*& GlobalNamespace::HMCache_2<K, V>::__get__addedElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____addedElements;
}
template <typename K, typename V> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<K>*> const& GlobalNamespace::HMCache_2<K, V>::__get__addedElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____addedElements;
}
template <typename K, typename V> constexpr void GlobalNamespace::HMCache_2<K, V>::__set__addedElements(::System::Collections::Generic::Queue_1<K>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____addedElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename K, typename V> constexpr int32_t& GlobalNamespace::HMCache_2<K, V>::__get__maxNumberElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxNumberElements;
}
template <typename K, typename V> constexpr int32_t const& GlobalNamespace::HMCache_2<K, V>::__get__maxNumberElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____maxNumberElements;
}
template <typename K, typename V> constexpr void GlobalNamespace::HMCache_2<K, V>::__set__maxNumberElements(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____maxNumberElements = value;
}
template <typename K, typename V> inline void GlobalNamespace::HMCache_2<K, V>::add_itemWillBeRemovedFromCacheEvent(::System::Action_1<V>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "add_itemWillBeRemovedFromCacheEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<V>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename K, typename V> inline void GlobalNamespace::HMCache_2<K, V>::remove_itemWillBeRemovedFromCacheEvent(::System::Action_1<V>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "remove_itemWillBeRemovedFromCacheEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<V>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename K, typename V> inline ::GlobalNamespace::HMCache_2<K, V>* GlobalNamespace::HMCache_2<K, V>::New_ctor(int32_t maxNumberElements) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HMCache_2<K, V>*>(maxNumberElements));
}
template <typename K, typename V> inline void GlobalNamespace::HMCache_2<K, V>::_ctor(int32_t maxNumberElements) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNumberElements);
}
template <typename K, typename V> inline bool GlobalNamespace::HMCache_2<K, V>::IsInCache(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "IsInCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline void GlobalNamespace::HMCache_2<K, V>::UpdateOrderInCache(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "UpdateOrderInCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline V GlobalNamespace::HMCache_2<K, V>::GetFromCache(K key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "GetFromCache", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get() })));
  return ::cordl_internals::RunMethodRethrow<V, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline void GlobalNamespace::HMCache_2<K, V>::PutToCache(K key, V value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "PutToCache", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename K, typename V> inline void GlobalNamespace::HMCache_2<K, V>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HMCache_2<K, V>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::GlobalNamespace::HMCache_2<K, V>::HMCache_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
