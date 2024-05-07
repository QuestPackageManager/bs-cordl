#pragma once
// IWYU pragma private; include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyValuePair_2<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::KeyValuePair_2<TKey, TValue>::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "get_Key",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::KeyValuePair_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "get_Value",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey, TValue>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyValuePair_2<TKey, TValue>::Deconstruct(ByRef<TKey> key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "Deconstruct", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("nullptr") }]
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>::KeyValuePair_2(TKey key, TValue value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>::KeyValuePair_2() {}
