#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutCachedMeasurement.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutMeasureMode_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutCachedMeasurement_def.hpp"
inline void UnityEngine::UIElements::Layout::LayoutCachedMeasurement::setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutCachedMeasurement value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>::get>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement UnityEngine::UIElements::Layout::LayoutCachedMeasurement::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutCachedMeasurement>::get>();
}
// Ctor Parameters [CppParam { name: "AvailableWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AvailableHeight", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "ParentWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ParentHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "WidthMeasureMode", ty: "::UnityEngine::UIElements::Layout::LayoutMeasureMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "HeightMeasureMode", ty:
// "::UnityEngine::UIElements::Layout::LayoutMeasureMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComputedWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "ComputedHeight", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::LayoutCachedMeasurement(float_t AvailableWidth, float_t AvailableHeight, float_t ParentWidth, float_t ParentHeight,
                                                                                              ::UnityEngine::UIElements::Layout::LayoutMeasureMode WidthMeasureMode,
                                                                                              ::UnityEngine::UIElements::Layout::LayoutMeasureMode HeightMeasureMode, float_t ComputedWidth,
                                                                                              float_t ComputedHeight) noexcept {
  this->AvailableWidth = AvailableWidth;
  this->AvailableHeight = AvailableHeight;
  this->ParentWidth = ParentWidth;
  this->ParentHeight = ParentHeight;
  this->WidthMeasureMode = WidthMeasureMode;
  this->HeightMeasureMode = HeightMeasureMode;
  this->ComputedWidth = ComputedWidth;
  this->ComputedHeight = ComputedHeight;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutCachedMeasurement::LayoutCachedMeasurement() {}
