#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/KeyValue_2.hpp"
#include "System/Runtime/Serialization/zzzz__KeyValue_2_def.hpp"
template <typename K, typename V> inline void System::Runtime::Serialization::KeyValue_2<K, V>::_ctor(K key, V value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::KeyValue_2<K, V>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<K>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<V>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "K", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "V", modifiers: "", def_value: Some("{}") }]
template <typename K, typename V> constexpr ::System::Runtime::Serialization::KeyValue_2<K, V>::KeyValue_2(K key, V value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::System::Runtime::Serialization::KeyValue_2<K, V>::KeyValue_2() {}
