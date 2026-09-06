#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SerializedDictionary_2.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SerializedDictionary_2_def.hpp"
template <typename K, typename V> inline K UnityEngine::Rendering::SerializedDictionary_2<K, V>::SerializeKey(K key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>(), 48 })));
  return ::cordl_internals::RunMethodRethrow<K>(this, ___internal_method, key);
}
template <typename K, typename V> inline V UnityEngine::Rendering::SerializedDictionary_2<K, V>::SerializeValue(V val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>(), 49 })));
  return ::cordl_internals::RunMethodRethrow<V>(this, ___internal_method, val);
}
template <typename K, typename V> inline K UnityEngine::Rendering::SerializedDictionary_2<K, V>::DeserializeKey(K key) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>(), 50 })));
  return ::cordl_internals::RunMethodRethrow<K>(this, ___internal_method, key);
}
template <typename K, typename V> inline V UnityEngine::Rendering::SerializedDictionary_2<K, V>::DeserializeValue(V val) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>(), 51 })));
  return ::cordl_internals::RunMethodRethrow<V>(this, ___internal_method, val);
}
template <typename K, typename V> inline void UnityEngine::Rendering::SerializedDictionary_2<K, V>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename K, typename V> inline ::UnityEngine::Rendering::SerializedDictionary_2<K, V>* UnityEngine::Rendering::SerializedDictionary_2<K, V>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::SerializedDictionary_2<K, V>*>());
}
// Ctor Parameters []
template <typename K, typename V> constexpr ::UnityEngine::Rendering::SerializedDictionary_2<K, V>::SerializedDictionary_2() {}
