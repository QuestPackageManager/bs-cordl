#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/FixedBuffer2_1.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_def.hpp"
template <typename T> inline ::ByRef<T> UnityEngine::UIElements::Layout::FixedBuffer2_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::FixedBuffer2_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "__0", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "__1", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::Layout::FixedBuffer2_1<T>::FixedBuffer2_1(T __0, T __1) noexcept {
  this->__0 = __0;
  this->__1 = __1;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::FixedBuffer2_1<T>::FixedBuffer2_1() {}
