#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/FixedBuffer9_1.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer9_1_def.hpp"
template <typename T> inline ::ByRef<T> UnityEngine::UIElements::Layout::FixedBuffer9_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::FixedBuffer9_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "__0", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__1", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__2", ty: "T",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__3", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__5", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__6", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7", ty: "T", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__8", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::Layout::FixedBuffer9_1<T>::FixedBuffer9_1(T __0, T __1, T __2, T __3, T __4, T __5, T __6, T __7, T __8) noexcept {
  this->__0 = __0;
  this->__1 = __1;
  this->__2 = __2;
  this->__3 = __3;
  this->__4 = __4;
  this->__5 = __5;
  this->__6 = __6;
  this->__7 = __7;
  this->__8 = __8;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::FixedBuffer9_1<T>::FixedBuffer9_1() {}
