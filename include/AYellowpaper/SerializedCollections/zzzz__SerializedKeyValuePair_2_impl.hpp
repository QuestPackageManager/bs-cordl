#pragma once
// IWYU pragma private; include "AYellowpaper\SerializedCollections\SerializedKeyValuePair_2.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedKeyValuePair_2_def.hpp"
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "Key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue> constexpr ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>::SerializedKeyValuePair_2(TKey Key, TValue Value) noexcept {
  this->Key = Key;
  this->Value = Value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>::SerializedKeyValuePair_2() {}
