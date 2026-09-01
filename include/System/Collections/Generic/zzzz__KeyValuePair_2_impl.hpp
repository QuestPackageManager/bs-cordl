#pragma once
// IWYU pragma private; include "System\Collections\Generic\KeyValuePair_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyValuePair_2<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(), { ".ctor", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::KeyValuePair_2<TKey, TValue>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(), { "get_Key", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TKey>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::KeyValuePair_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey, TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyValuePair_2<TKey, TValue>::Deconstruct(::by_ref<TKey> key, ::by_ref<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>(),
                                                                                         { "Deconstruct", {}, { ::i2c::type_of<::by_ref<TKey>>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>::KeyValuePair_2(TKey key, TValue value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>::KeyValuePair_2() {}
