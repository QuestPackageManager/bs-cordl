#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionary_2.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_2_def.hpp"
template <typename K, typename V> inline K UnityEngine::Rendering::SerializedDictionary_2<K, V>::SerializeKey(K key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>::get(), 48)));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline V UnityEngine::Rendering::SerializedDictionary_2<K, V>::SerializeValue(V val) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>::get(), 49)));
  return ::cordl_internals::RunMethodRethrow<V, false>(this, ___internal_method, val);
}
template <typename K, typename V> inline K UnityEngine::Rendering::SerializedDictionary_2<K, V>::DeserializeKey(K key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>::get(), 50)));
  return ::cordl_internals::RunMethodRethrow<K, false>(this, ___internal_method, key);
}
template <typename K, typename V> inline V UnityEngine::Rendering::SerializedDictionary_2<K, V>::DeserializeValue(V val) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>::get(), 51)));
  return ::cordl_internals::RunMethodRethrow<V, false>(this, ___internal_method, val);
}
template <typename K, typename V> inline void UnityEngine::Rendering::SerializedDictionary_2<K, V>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename K, typename V> inline ::UnityEngine::Rendering::SerializedDictionary_2<K, V>* UnityEngine::Rendering::SerializedDictionary_2<K, V>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>());
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::UnityEngine::Rendering::SerializedDictionary_2<K, V>::SerializedDictionary_2() {}
