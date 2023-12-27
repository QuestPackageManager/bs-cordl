#pragma once
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyValuePair_2<TKey, TValue>::_ctor(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TKey System::Collections::Generic::KeyValuePair_2<TKey, TValue>::get_Key() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "get_Key",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::KeyValuePair_2<TKey, TValue>::get_Value() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "get_Value",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::StringW System::Collections::Generic::KeyValuePair_2<TKey, TValue>::ToString() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "ToString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline void System::Collections::Generic::KeyValuePair_2<TKey, TValue>::Deconstruct(ByRef<TKey> key, ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>::get(), "Deconstruct", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: Some("nullptr") }]
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>::KeyValuePair_2(TKey key, TValue value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>::KeyValuePair_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
