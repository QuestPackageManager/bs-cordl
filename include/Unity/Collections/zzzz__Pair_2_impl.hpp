#pragma once
// IWYU pragma private; include "Unity/Collections/Pair_2.hpp"
#include "Unity/Collections/zzzz__Pair_2_def.hpp"
template <typename Key, typename Value> inline void Unity::Collections::Pair_2<Key, Value>::_ctor(Key k, Value v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Pair_2<Key, Value>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Key>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Value>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, k, v);
}
template <typename Key, typename Value> inline ::StringW Unity::Collections::Pair_2<Key, Value>::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::Pair_2<Key, Value>>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "key", ty: "Key", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "Value", modifiers: "", def_value: Some("{}") }]
template <typename Key, typename Value> constexpr ::Unity::Collections::Pair_2<Key, Value>::Pair_2(Key key, Value value) noexcept {
  this->key = key;
  this->value = value;
}
// Ctor Parameters []
template <typename Key, typename Value> constexpr ::Unity::Collections::Pair_2<Key, Value>::Pair_2() {}
