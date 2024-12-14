#pragma once
// IWYU pragma private; include "HMUI/IColorStyledComponent.hpp"
#include "HMUI/zzzz__IColorStyledComponent_def.hpp"
#include "GlobalNamespace/zzzz__GradientDirection_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyColorStyle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::HMUI::IColorStyledComponent.get_colorStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadOnlyColorStyle* (::HMUI::IColorStyledComponent::*)()>(
    &::HMUI::IColorStyledComponent::get_colorStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IColorStyledComponent.UpdateColorStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IColorStyledComponent::*)(::GlobalNamespace::IReadOnlyColorStyle*)>(
    &::HMUI::IColorStyledComponent::UpdateColorStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IColorStyledComponent.UpdateColorStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::IColorStyledComponent::*)(
    ::UnityEngine::Color, float_t, bool, ::GlobalNamespace::GradientDirection, ::UnityEngine::Color, ::UnityEngine::Color)>(&::HMUI::IColorStyledComponent::UpdateColorStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(), 2));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadOnlyColorStyle* HMUI::IColorStyledComponent::get_colorStyle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadOnlyColorStyle*, false>(this, ___internal_method);
}
inline void HMUI::IColorStyledComponent::UpdateColorStyle(::GlobalNamespace::IReadOnlyColorStyle* colorStyle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorStyle);
}
inline void HMUI::IColorStyledComponent::UpdateColorStyle(::UnityEngine::Color color, float_t globalLightTintIntensity, bool gradient, ::GlobalNamespace::GradientDirection gradientDirection,
                                                          ::UnityEngine::Color color0, ::UnityEngine::Color color1) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::IColorStyledComponent*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color, globalLightTintIntensity, gradient, gradientDirection, color0, color1);
}
