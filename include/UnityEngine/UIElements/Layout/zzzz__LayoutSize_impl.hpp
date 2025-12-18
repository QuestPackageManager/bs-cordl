#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutSize.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutSize::*)(float_t, float_t)>(
    &::UnityEngine::UIElements::Layout::LayoutSize::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b38284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutSize>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutSize::_ctor(float_t width, float_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutSize>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height);
}
// Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutSize::LayoutSize(float_t width, float_t height) noexcept {
  this->width = width;
  this->height = height;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutSize::LayoutSize() {}
