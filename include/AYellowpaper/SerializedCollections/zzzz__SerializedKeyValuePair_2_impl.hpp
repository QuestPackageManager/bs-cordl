#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedKeyValuePair_2.hpp"
#include "AYellowpaper/SerializedCollections/zzzz__SerializedKeyValuePair_2_def.hpp"
template <typename TKey, typename TValue> inline void AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "Key", ty: "TKey", modifiers: "", def_value: Some("{}") }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue> constexpr ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>::SerializedKeyValuePair_2(TKey Key, TValue Value) noexcept {
  this->Key = Key;
  this->Value = Value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2<TKey, TValue>::SerializedKeyValuePair_2() {}
