#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\FixedBuffer9_1.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer9_1_def.hpp"
template <typename T> inline ::by_ref<T> UnityEngine::UIElements::Layout::FixedBuffer9_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::FixedBuffer9_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
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
