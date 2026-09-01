#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\KeyValue_2.hpp"
#include "System/Runtime/Serialization/zzzz__KeyValue_2_def.hpp"
template <typename K, typename V> inline void System::Runtime::Serialization::KeyValue_2<K, V>::_ctor(K key, V value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KeyValue_2<K, V>>(), { ".ctor", {}, { ::i2c::type_of<K>(), ::i2c::type_of<V>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "K", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "V", modifiers: "", def_value: Some("{}") }]
template <typename K, typename V> constexpr ::System::Runtime::Serialization::KeyValue_2<K, V>::KeyValue_2(K key, V value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::System::Runtime::Serialization::KeyValue_2<K, V>::KeyValue_2() {}
