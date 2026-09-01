#pragma once
// IWYU pragma private; include "Unity\Collections\Pair_2.hpp"
#include "Unity/Collections/zzzz__Pair_2_def.hpp"
template <typename Key, typename Value> inline void Unity::Collections::Pair_2<Key, Value>::_ctor(Key k, Value v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Pair_2<Key, Value>>(), { ".ctor", {}, { ::i2c::type_of<Key>(), ::i2c::type_of<Value>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, k, v);
}
template <typename Key, typename Value> inline ::StringW Unity::Collections::Pair_2<Key, Value>::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::Pair_2<Key, Value>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Key", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "Value", modifiers: "", def_value: Some("{}") }]
template <typename Key, typename Value> constexpr ::Unity::Collections::Pair_2<Key, Value>::Pair_2(Key key, Value value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename Key, typename Value> constexpr ::Unity::Collections::Pair_2<Key, Value>::Pair_2() {}
