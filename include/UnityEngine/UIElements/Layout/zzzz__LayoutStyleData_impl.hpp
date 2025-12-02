#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutStyleData.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer2_1_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__FixedBuffer9_1_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutAlign_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDirection_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDisplay_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutFlexDirection_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutJustify_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutOverflow_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutPositionType_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutValue_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutWrap_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutStyleData_def.hpp"
inline void UnityEngine::UIElements::Layout::LayoutStyleData::setStaticF_Default(::UnityEngine::UIElements::Layout::LayoutStyleData value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::Layout::LayoutStyleData, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutStyleData>::get>(
      std::forward<::UnityEngine::UIElements::Layout::LayoutStyleData>(value));
}
inline ::UnityEngine::UIElements::Layout::LayoutStyleData UnityEngine::UIElements::Layout::LayoutStyleData::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::Layout::LayoutStyleData, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::LayoutStyleData>::get>();
}
// Ctor Parameters [CppParam { name: "Direction", ty: "::UnityEngine::UIElements::Layout::LayoutDirection", modifiers: "", def_value: Some("{}") }, CppParam { name: "FlexDirection", ty:
// "::UnityEngine::UIElements::Layout::LayoutFlexDirection", modifiers: "", def_value: Some("{}") }, CppParam { name: "JustifyContent", ty: "::UnityEngine::UIElements::Layout::LayoutJustify",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignContent", ty: "::UnityEngine::UIElements::Layout::LayoutAlign", modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignItems",
// ty: "::UnityEngine::UIElements::Layout::LayoutAlign", modifiers: "", def_value: Some("{}") }, CppParam { name: "AlignSelf", ty: "::UnityEngine::UIElements::Layout::LayoutAlign", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "PositionType", ty: "::UnityEngine::UIElements::Layout::LayoutPositionType", modifiers: "", def_value: Some("{}") }, CppParam { name: "AspectRatio", ty:
// "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FlexWrap", ty: "::UnityEngine::UIElements::Layout::LayoutWrap", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Overflow", ty: "::UnityEngine::UIElements::Layout::LayoutOverflow", modifiers: "", def_value: Some("{}") }, CppParam { name: "Display", ty: "::UnityEngine::UIElements::Layout::LayoutDisplay",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "FlexGrow", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "FlexShrink", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "FlexBasis", ty: "::UnityEngine::UIElements::Layout::LayoutValue", modifiers: "", def_value: Some("{}") }, CppParam { name: "border", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "position", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "margin", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "padding", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxDimensions", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "minDimensions", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }, CppParam { name: "dimensions", ty:
// "::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::LayoutStyleData::LayoutStyleData(
    ::UnityEngine::UIElements::Layout::LayoutDirection Direction, ::UnityEngine::UIElements::Layout::LayoutFlexDirection FlexDirection, ::UnityEngine::UIElements::Layout::LayoutJustify JustifyContent,
    ::UnityEngine::UIElements::Layout::LayoutAlign AlignContent, ::UnityEngine::UIElements::Layout::LayoutAlign AlignItems, ::UnityEngine::UIElements::Layout::LayoutAlign AlignSelf,
    ::UnityEngine::UIElements::Layout::LayoutPositionType PositionType, float_t AspectRatio, ::UnityEngine::UIElements::Layout::LayoutWrap FlexWrap,
    ::UnityEngine::UIElements::Layout::LayoutOverflow Overflow, ::UnityEngine::UIElements::Layout::LayoutDisplay Display, float_t FlexGrow, float_t FlexShrink,
    ::UnityEngine::UIElements::Layout::LayoutValue FlexBasis, ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> border,
    ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> position,
    ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> margin,
    ::UnityEngine::UIElements::Layout::FixedBuffer9_1<::UnityEngine::UIElements::Layout::LayoutValue> padding,
    ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> maxDimensions,
    ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> minDimensions,
    ::UnityEngine::UIElements::Layout::FixedBuffer2_1<::UnityEngine::UIElements::Layout::LayoutValue> dimensions) noexcept {
  this->Direction = Direction;
  this->FlexDirection = FlexDirection;
  this->JustifyContent = JustifyContent;
  this->AlignContent = AlignContent;
  this->AlignItems = AlignItems;
  this->AlignSelf = AlignSelf;
  this->PositionType = PositionType;
  this->AspectRatio = AspectRatio;
  this->FlexWrap = FlexWrap;
  this->Overflow = Overflow;
  this->Display = Display;
  this->FlexGrow = FlexGrow;
  this->FlexShrink = FlexShrink;
  this->FlexBasis = FlexBasis;
  this->border = border;
  this->position = position;
  this->margin = margin;
  this->padding = padding;
  this->maxDimensions = maxDimensions;
  this->minDimensions = minDimensions;
  this->dimensions = dimensions;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutStyleData::LayoutStyleData() {}
