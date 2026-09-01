#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\FixedBuffer2_1.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_def.hpp"
template <typename T> inline ::by_ref<T> UnityEngine::UIElements::Layout::FixedBuffer2_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::FixedBuffer2_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "__0", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__1", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::Layout::FixedBuffer2_1<T>::FixedBuffer2_1(T __0, T __1) noexcept {
  this->__0 = __0;
  this->__1 = __1;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::FixedBuffer2_1<T>::FixedBuffer2_1() {}
