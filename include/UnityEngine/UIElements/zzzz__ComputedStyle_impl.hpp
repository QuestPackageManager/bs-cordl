#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ComputedStyle.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedTransitionProperty_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InheritedData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__LayoutData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__RareData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleDataRef_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransformData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualData_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyReader_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyValue_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValueManaged_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Align_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Background_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedTransitionProperty_def.hpp"
#include "UnityEngine/UIElements/zzzz__Cursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__DisplayStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__EditorTextRenderingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowClipBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "UnityEngine/UIElements/zzzz__VersionChangeType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/UIElements/zzzz__Wrap_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_customPropertiesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_customPropertiesCount)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6dbc7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_customPropertiesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_hasTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_hasTransition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6dbc838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_hasTransition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.FinalizeApply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::ComputedStyle::FinalizeApply)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6dbc858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                           { "FinalizeApply", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyGlobalKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyGlobalKeyword)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6dbc968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
            { "ApplyGlobalKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyGlobalKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId,
                                                                                                          ::UnityEngine::UIElements::StyleKeyword, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyGlobalKeyword)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dbca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyGlobalKeyword",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.RemoveCustomStyleProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*)>(
    &::UnityEngine::UIElements::ComputedStyle::RemoveCustomStyleProperty)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6dbe7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "RemoveCustomStyleProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyCustomStyleProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyCustomStyleProperty)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6dbe890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyCustomStyleProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyAllPropertyInitial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::ApplyAllPropertyInitial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dbe9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyAllPropertyInitial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ResetComputedTransitions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::ResetComputedTransitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dbeb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ResetComputedTransitions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInlineTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                                                                ::UnityEngine::UIElements::StyleTextShadow, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::ComputedStyle::StartAnimationInlineTextShadow)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x6dbeb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationInlineTextShadow",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInlineRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>, ::UnityEngine::UIElements::StyleRotate,
                                                                int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::ComputedStyle::StartAnimationInlineRotate)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6dbed24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationInlineRotate",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInlineTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                                                                ::UnityEngine::UIElements::StyleTranslate, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::ComputedStyle::StartAnimationInlineTranslate)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6dbeef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationInlineTranslate",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInlineScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>, ::UnityEngine::UIElements::StyleScale,
                                                                int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::ComputedStyle::StartAnimationInlineScale)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6dbf0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationInlineScale",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleScale>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInlineTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                                                                ::UnityEngine::UIElements::StyleTransformOrigin, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::ComputedStyle::StartAnimationInlineTransformOrigin)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6dbf278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationInlineTransformOrigin",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInlineBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                                                                ::UnityEngine::UIElements::StyleBackgroundSize, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::ComputedStyle::StartAnimationInlineBackgroundSize)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6dbf450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationInlineBackgroundSize",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_alignContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Align (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_alignContent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbf618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_alignContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_alignItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Align (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_alignItems)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbf668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_alignItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_alignSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Align (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_alignSelf)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbf6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_alignSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_backgroundColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbf708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_backgroundImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Background (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_backgroundImage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dbf75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_backgroundPositionX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_backgroundPositionX)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbf7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundPositionX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_backgroundPositionY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundPosition (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_backgroundPositionY)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbf814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundPositionY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_backgroundRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundRepeat (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_backgroundRepeat)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbf868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundRepeat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_backgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BackgroundSize (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_backgroundSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dbf8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderBottomColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderBottomColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbf920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderBottomLeftRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_borderBottomLeftRadius)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbf974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomLeftRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderBottomRightRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_borderBottomRightRadius)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbf9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomRightRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderBottomWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderBottomWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfa14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderLeftColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderLeftColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbfa64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderLeftColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderLeftWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderLeftWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderLeftWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderRightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderRightColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbfb08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderRightColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderRightWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderRightWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderRightWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderTopColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderTopColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbfbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderTopLeftRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_borderTopLeftRadius)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfc00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopLeftRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderTopRightRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_borderTopRightRadius)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopRightRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_borderTopWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_borderTopWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_bottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_bottom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_bottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_color)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dbfd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_cursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Cursor (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_cursor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dbfd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_cursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_display
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DisplayStyle (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_display)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_display", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_flexBasis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_flexBasis)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfe4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexBasis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_flexDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FlexDirection (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_flexDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfe9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_flexGrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_flexGrow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbfeec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexGrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_flexShrink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_flexShrink)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbff3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexShrink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_flexWrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Wrap (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_flexWrap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbff8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexWrap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_fontSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbc918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_height)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dbffdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_justifyContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Justify (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_justifyContent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc002c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_justifyContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_left)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc007c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_left", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_letterSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_letterSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc00cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_letterSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_marginBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_marginBottom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc011c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginBottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_marginLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_marginLeft)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc016c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_marginRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_marginRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc01bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_marginTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_marginTop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc020c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_maxHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_maxHeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_maxHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_maxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_maxWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc02ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_maxWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_minHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_minHeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc02fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_minHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_minWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_minWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc034c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_minWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_opacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_opacity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc039c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_opacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_overflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::OverflowInternal (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_overflow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc03ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_overflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_paddingBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_paddingBottom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc043c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingBottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_paddingLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_paddingLeft)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc048c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_paddingRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_paddingRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc04dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_paddingTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_paddingTop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc052c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Position (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_position)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc057c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_right)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc05cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_right", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_rotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Rotate (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_rotate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dc061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_rotate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Scale (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_scale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_textOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextOverflow (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_textOverflow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc06d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_textOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_textShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextShadow (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_textShadow)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dc0724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_textShadow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_top
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_top)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc078c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_top", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_transformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TransformOrigin (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_transformOrigin)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dc07dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transformOrigin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_transitionDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_transitionDelay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_transitionDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_transitionDuration)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_transitionProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_transitionProperty)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc08e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_transitionTimingFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_transitionTimingFunction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionTimingFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Translate (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_translate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6dc0984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_translate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityBackgroundImageTintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityBackgroundImageTintColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dc09ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityBackgroundImageTintColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityEditorTextRenderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EditorTextRenderingMode (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityEditorTextRenderingMode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityEditorTextRenderingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unityFont)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityFont", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityFontDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::FontDefinition (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityFontDefinition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityFontDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityFontStyleAndWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FontStyle (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityFontStyleAndWeight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityFontStyleAndWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityOverflowClipBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::OverflowClipBox (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityOverflowClipBox)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityOverflowClipBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityParagraphSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityParagraphSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityParagraphSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unitySliceBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unitySliceBottom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0c20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceBottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unitySliceLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unitySliceLeft)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unitySliceRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unitySliceRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unitySliceScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unitySliceScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unitySliceTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unitySliceTop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0d60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityTextAlign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAnchor (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unityTextAlign)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextAlign", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityTextGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGeneratorType (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityTextGenerator)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityTextOutlineColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unityTextOutlineColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6dc0e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextOutlineColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityTextOutlineWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_unityTextOutlineWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextOutlineWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_unityTextOverflowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextOverflowPosition (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_unityTextOverflowPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextOverflowPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_visibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Visibility (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_visibility)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_visibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_whiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::WhiteSpace (::UnityEngine::UIElements::ComputedStyle::*)()>(
    &::UnityEngine::UIElements::ComputedStyle::get_whiteSpace)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_whiteSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_width)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc0fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.get_wordSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Length (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::get_wordSpacing)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6dc1034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_wordSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ComputedStyle (*)(::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::ComputedStyle::Create)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6dc1084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "Create", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.CreateInitial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ComputedStyle (*)()>(&::UnityEngine::UIElements::ComputedStyle::CreateInitial)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6dc1204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "CreateInitial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.Acquire
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ComputedStyle (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::Acquire)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6dc1348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "Acquire", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.Release
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)()>(&::UnityEngine::UIElements::ComputedStyle::Release)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6dc1464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "Release", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.CopyFrom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::ComputedStyle::CopyFrom)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6dbea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyProperties)> {
  constexpr static std::size_t size = 0x1480;
  constexpr static std::size_t addrs = 0x6dc1564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
            { "ApplyProperties", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleValue, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyStyleValue)> {
  constexpr static std::size_t size = 0xde8;
  constexpr static std::size_t addrs = 0x6dc29e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                         { "ApplyStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValue>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleValueManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StyleValueManaged, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyStyleValueManaged)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x6dc37cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
            { "ApplyStyleValueManaged", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::Cursor)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleCursor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dc3bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleCursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Cursor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::TextShadow)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleTextShadow)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6dc3c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleTextShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextShadow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyFromComputedStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyFromComputedStyle)> {
  constexpr static std::size_t size = 0xfc8;
  constexpr static std::size_t addrs = 0x6dc3cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
            { "ApplyFromComputedStyle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::VisualElement*,
                                                                                                          ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x6dc4ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, float_t)>(&::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x6dc53d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, int32_t)>(&::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x6dc5778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundPosition)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6dc5ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundRepeat)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6dc6148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::BackgroundSize)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6dc62dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::Color)>(&::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6dc6454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Background)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6dc6760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::Font*)>(&::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6dc6910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::FontDefinition)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6dc6ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::TextShadow)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6dc6c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::TextShadow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Translate)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6dc6e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Translate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::TransformOrigin)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6dc6f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::VisualElement*,
                                                                                                          ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Rotate)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6dc70f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Rotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyPropertyAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::VisualElement*,
                                                                                                          ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::Scale)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6dc7260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyPropertyAnimation",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                                 ::i2c::type_of<::UnityEngine::UIElements::Scale>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                         ::by_ref<::UnityEngine::UIElements::ComputedStyle>, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::ComputedStyle::StartAnimation)> {
  constexpr static std::size_t size = 0x2f34;
  constexpr static std::size_t addrs = 0x6dc73d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                { "StartAnimation",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationAllProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                                                                ::by_ref<::UnityEngine::UIElements::ComputedStyle>, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(
    &::UnityEngine::UIElements::ComputedStyle::StartAnimationAllProperty)> {
  constexpr static std::size_t size = 0x37e0;
  constexpr static std::size_t addrs = 0x6dca304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "StartAnimationAllProperty",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                 ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.StartAnimationInline
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::ComputedStyle>,
                         ::UnityEngine::UIElements::StyleSheets::StyleValue, int32_t, int32_t, ::System::Func_2<float_t, float_t>*)>(&::UnityEngine::UIElements::ComputedStyle::StartAnimationInline)> {
  constexpr static std::size_t size = 0x2778;
  constexpr static std::size_t addrs = 0x6dcdae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                { "StartAnimationInline",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValue>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::TransformOrigin)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleTransformOrigin)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dd025c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                           { "ApplyStyleTransformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::Translate)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleTranslate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dd02c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::Translate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::Rotate)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleRotate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dd0334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::Rotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::Scale)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleScale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6dd03a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::Scale>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyStyleBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::BackgroundSize)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyStyleBackgroundSize)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dd0404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                           { "ApplyStyleBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyInitialValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyReader*)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyInitialValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6dbc9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                             { "ApplyInitialValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyInitialValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::ComputedStyle::ApplyInitialValue)> {
  constexpr static std::size_t size = 0x1d6c;
  constexpr static std::size_t addrs = 0x6dbca64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyInitialValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyUnsetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyUnsetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6dbca1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
            { "ApplyUnsetValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.ApplyUnsetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ComputedStyle::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::ApplyUnsetValue)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x6dd0470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
            { "ApplyUnsetValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ComputedStyle.CompareChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VersionChangeType (*)(
    ::by_ref<::UnityEngine::UIElements::ComputedStyle>, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::ComputedStyle::CompareChanges)> {
  constexpr static std::size_t size = 0x1210;
  constexpr static std::size_t addrs = 0x6dd075c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                            { "CompareChanges", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::ComputedStyle::get_customPropertiesCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_customPropertiesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::ComputedStyle::get_hasTransition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_hasTransition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ComputedStyle::FinalizeApply(::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                         { "FinalizeApply", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, parentStyle);
}
inline bool UnityEngine::UIElements::ComputedStyle::ApplyGlobalKeyword(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader,
                                                                       ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
          { "ApplyGlobalKeyword", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, reader, parentStyle);
}
inline bool UnityEngine::UIElements::ComputedStyle::ApplyGlobalKeyword(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleKeyword keyword,
                                                                       ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyGlobalKeyword",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleKeyword>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, id, keyword, parentStyle);
}
inline void UnityEngine::UIElements::ComputedStyle::RemoveCustomStyleProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "RemoveCustomStyleProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyCustomStyleProperty(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyCustomStyleProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyAllPropertyInitial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyAllPropertyInitial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ComputedStyle::ResetComputedTransitions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ResetComputedTransitions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInlineTextShadow(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                                                   ::UnityEngine::UIElements::StyleTextShadow textShadow, int32_t durationMs, int32_t delayMs,
                                                                                   ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationInlineTextShadow",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, computedStyle, textShadow, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInlineRotate(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                                               ::UnityEngine::UIElements::StyleRotate rotate, int32_t durationMs, int32_t delayMs,
                                                                               ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationInlineRotate",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, computedStyle, rotate, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInlineTranslate(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                                                  ::UnityEngine::UIElements::StyleTranslate translate, int32_t durationMs, int32_t delayMs,
                                                                                  ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationInlineTranslate",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, computedStyle, translate, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInlineScale(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                                              ::UnityEngine::UIElements::StyleScale scale, int32_t durationMs, int32_t delayMs,
                                                                              ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationInlineScale",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleScale>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, computedStyle, scale, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInlineTransformOrigin(::UnityEngine::UIElements::VisualElement* element,
                                                                                        ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                                                        ::UnityEngine::UIElements::StyleTransformOrigin transformOrigin, int32_t durationMs, int32_t delayMs,
                                                                                        ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationInlineTransformOrigin",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, computedStyle, transformOrigin, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInlineBackgroundSize(::UnityEngine::UIElements::VisualElement* element,
                                                                                       ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle,
                                                                                       ::UnityEngine::UIElements::StyleBackgroundSize backgroundSize, int32_t durationMs, int32_t delayMs,
                                                                                       ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationInlineBackgroundSize",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, computedStyle, backgroundSize, durationMs, delayMs, easingCurve);
}
inline ::UnityEngine::UIElements::Align UnityEngine::UIElements::ComputedStyle::get_alignContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_alignContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Align>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Align UnityEngine::UIElements::ComputedStyle::get_alignItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_alignItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Align>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Align UnityEngine::UIElements::ComputedStyle::get_alignSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_alignSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Align>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Background UnityEngine::UIElements::ComputedStyle::get_backgroundImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Background>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::ComputedStyle::get_backgroundPositionX() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundPositionX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::BackgroundPosition UnityEngine::UIElements::ComputedStyle::get_backgroundPositionY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundPositionY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundPosition>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::BackgroundRepeat UnityEngine::UIElements::ComputedStyle::get_backgroundRepeat() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundRepeat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundRepeat>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::BackgroundSize UnityEngine::UIElements::ComputedStyle::get_backgroundSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_backgroundSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BackgroundSize>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_borderBottomColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_borderBottomLeftRadius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomLeftRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_borderBottomRightRadius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomRightRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_borderBottomWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderBottomWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_borderLeftColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderLeftColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_borderLeftWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderLeftWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_borderRightColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderRightColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_borderRightWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderRightWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_borderTopColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_borderTopLeftRadius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopLeftRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_borderTopRightRadius() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopRightRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_borderTopWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_borderTopWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_bottom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_bottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Cursor UnityEngine::UIElements::ComputedStyle::get_cursor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_cursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Cursor>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::DisplayStyle UnityEngine::UIElements::ComputedStyle::get_display() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_display", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DisplayStyle>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_flexBasis() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexBasis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::FlexDirection UnityEngine::UIElements::ComputedStyle::get_flexDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FlexDirection>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_flexGrow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexGrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_flexShrink() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexShrink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Wrap UnityEngine::UIElements::ComputedStyle::get_flexWrap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_flexWrap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Wrap>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Justify UnityEngine::UIElements::ComputedStyle::get_justifyContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_justifyContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Justify>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_left() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_left", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_letterSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_letterSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_marginBottom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginBottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_marginLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_marginRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_marginTop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_marginTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_maxHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_maxHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_maxWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_maxWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_minHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_minHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_minWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_minWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_opacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_opacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::OverflowInternal UnityEngine::UIElements::ComputedStyle::get_overflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_overflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::OverflowInternal>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_paddingBottom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingBottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_paddingLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_paddingRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_paddingTop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_paddingTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Position UnityEngine::UIElements::ComputedStyle::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Position>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_right() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_right", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Rotate UnityEngine::UIElements::ComputedStyle::get_rotate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_rotate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Rotate>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Scale UnityEngine::UIElements::ComputedStyle::get_scale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Scale>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextOverflow UnityEngine::UIElements::ComputedStyle::get_textOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_textOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextOverflow>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextShadow UnityEngine::UIElements::ComputedStyle::get_textShadow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_textShadow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextShadow>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_top() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_top", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TransformOrigin UnityEngine::UIElements::ComputedStyle::get_transformOrigin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transformOrigin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TransformOrigin>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* UnityEngine::UIElements::ComputedStyle::get_transitionDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* UnityEngine::UIElements::ComputedStyle::get_transitionDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* UnityEngine::UIElements::ComputedStyle::get_transitionProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*>(*this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* UnityEngine::UIElements::ComputedStyle::get_transitionTimingFunction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_transitionTimingFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Translate UnityEngine::UIElements::ComputedStyle::get_translate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_translate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Translate>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_unityBackgroundImageTintColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityBackgroundImageTintColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::EditorTextRenderingMode UnityEngine::UIElements::ComputedStyle::get_unityEditorTextRenderingMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityEditorTextRenderingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EditorTextRenderingMode>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::UIElements::ComputedStyle::get_unityFont() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityFont", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::FontDefinition UnityEngine::UIElements::ComputedStyle::get_unityFontDefinition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityFontDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FontDefinition>(*this, ___internal_method);
}
inline ::UnityEngine::FontStyle UnityEngine::UIElements::ComputedStyle::get_unityFontStyleAndWeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityFontStyleAndWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FontStyle>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::OverflowClipBox UnityEngine::UIElements::ComputedStyle::get_unityOverflowClipBox() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityOverflowClipBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::OverflowClipBox>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_unityParagraphSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityParagraphSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::ComputedStyle::get_unitySliceBottom() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceBottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::ComputedStyle::get_unitySliceLeft() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::ComputedStyle::get_unitySliceRight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_unitySliceScale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::ComputedStyle::get_unitySliceTop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unitySliceTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::TextAnchor UnityEngine::UIElements::ComputedStyle::get_unityTextAlign() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextAlign", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAnchor>(*this, ___internal_method);
}
inline ::UnityEngine::TextGeneratorType UnityEngine::UIElements::ComputedStyle::get_unityTextGenerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGeneratorType>(*this, ___internal_method);
}
inline ::UnityEngine::Color UnityEngine::UIElements::ComputedStyle::get_unityTextOutlineColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextOutlineColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::ComputedStyle::get_unityTextOutlineWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextOutlineWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextOverflowPosition UnityEngine::UIElements::ComputedStyle::get_unityTextOverflowPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_unityTextOverflowPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextOverflowPosition>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Visibility UnityEngine::UIElements::ComputedStyle::get_visibility() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_visibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Visibility>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::WhiteSpace UnityEngine::UIElements::ComputedStyle::get_whiteSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_whiteSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::WhiteSpace>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::Length UnityEngine::UIElements::ComputedStyle::get_wordSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "get_wordSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Length>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ComputedStyle UnityEngine::UIElements::ComputedStyle::Create(::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "Create", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ComputedStyle>(nullptr, ___internal_method, parentStyle);
}
inline ::UnityEngine::UIElements::ComputedStyle UnityEngine::UIElements::ComputedStyle::CreateInitial() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "CreateInitial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ComputedStyle>(nullptr, ___internal_method);
}
inline ::UnityEngine::UIElements::ComputedStyle UnityEngine::UIElements::ComputedStyle::Acquire() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "Acquire", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ComputedStyle>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ComputedStyle::Release() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "Release", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ComputedStyle::CopyFrom(::by_ref<::UnityEngine::UIElements::ComputedStyle> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyProperties(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader,
                                                                    ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
          { "ApplyProperties", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader, parentStyle);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue sv, ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                          { "ApplyStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValue>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sv, parentStyle);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StyleValueManaged sv,
                                                                           ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
          { "ApplyStyleValueManaged", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sv, parentStyle);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleCursor(::UnityEngine::UIElements::Cursor cursor) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleCursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::Cursor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cursor);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleTextShadow(::UnityEngine::UIElements::TextShadow st) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleTextShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextShadow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, st);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::by_ref<::UnityEngine::UIElements::ComputedStyle> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
          { "ApplyFromComputedStyle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, other);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::Length newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Length>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, float_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                          { "ApplyPropertyAnimation",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id, int32_t newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                          { "ApplyPropertyAnimation",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::BackgroundPosition newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::BackgroundPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::BackgroundRepeat newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::BackgroundRepeat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::BackgroundSize newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::Color newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::Background newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Background>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::Font* newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::FontDefinition newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::FontDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::TextShadow newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::TextShadow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::Translate newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Translate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::TransformOrigin newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::Rotate newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Rotate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyPropertyAnimation(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                           ::UnityEngine::UIElements::Scale newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyPropertyAnimation",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                               ::i2c::type_of<::UnityEngine::UIElements::Scale>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ve, id, newValue);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimation(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                   ::by_ref<::UnityEngine::UIElements::ComputedStyle> oldStyle, ::by_ref<::UnityEngine::UIElements::ComputedStyle> newStyle,
                                                                   int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                              { "StartAnimation",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, id, oldStyle, newStyle, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationAllProperty(::UnityEngine::UIElements::VisualElement* element, ::by_ref<::UnityEngine::UIElements::ComputedStyle> oldStyle,
                                                                              ::by_ref<::UnityEngine::UIElements::ComputedStyle> newStyle, int32_t durationMs, int32_t delayMs,
                                                                              ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "StartAnimationAllProperty",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, oldStyle, newStyle, durationMs, delayMs, easingCurve);
}
inline bool UnityEngine::UIElements::ComputedStyle::StartAnimationInline(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                         ::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle, ::UnityEngine::UIElements::StyleSheets::StyleValue sv,
                                                                         int32_t durationMs, int32_t delayMs, ::System::Func_2<float_t, float_t>* easingCurve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                              { "StartAnimationInline",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValue>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_2<float_t, float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element, id, computedStyle, sv, durationMs, delayMs, easingCurve);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleTransformOrigin(::UnityEngine::UIElements::TransformOrigin st) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                         { "ApplyStyleTransformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::TransformOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, st);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleTranslate(::UnityEngine::UIElements::Translate translateValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::Translate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, translateValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleRotate(::UnityEngine::UIElements::Rotate rotateValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::Rotate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, rotateValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleScale(::UnityEngine::UIElements::Scale scaleValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(), { "ApplyStyleScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::Scale>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, scaleValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyStyleBackgroundSize(::UnityEngine::UIElements::BackgroundSize backgroundSizeValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                         { "ApplyStyleBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::BackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, backgroundSizeValue);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                           { "ApplyInitialValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                                                                                         { "ApplyInitialValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyUnsetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* reader,
                                                                    ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
          { "ApplyUnsetValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader, parentStyle);
}
inline void UnityEngine::UIElements::ComputedStyle::ApplyUnsetValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::by_ref<::UnityEngine::UIElements::ComputedStyle> parentStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
          { "ApplyUnsetValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, parentStyle);
}
inline ::UnityEngine::UIElements::VersionChangeType UnityEngine::UIElements::ComputedStyle::CompareChanges(::by_ref<::UnityEngine::UIElements::ComputedStyle> x,
                                                                                                           ::by_ref<::UnityEngine::UIElements::ComputedStyle> y) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ComputedStyle>(),
                          { "CompareChanges", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VersionChangeType>(nullptr, ___internal_method, x, y);
}
// Ctor Parameters [CppParam { name: "inheritedData", ty: "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "layoutData", ty: "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rareData", ty:
// "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "transformData", ty:
// "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "transitionData", ty:
// "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "visualData", ty:
// "::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData>", modifiers: "", def_value: Some("{}") }, CppParam { name: "customProperties", ty:
// "::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleSheets::StylePropertyValue>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "matchingRulesHash",
// ty: "int64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dpiScaling", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "computedTransitions", ty:
// "::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::ComputedStyle::ComputedStyle(
    ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::InheritedData> inheritedData, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::LayoutData> layoutData,
    ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::RareData> rareData, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransformData> transformData,
    ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::TransitionData> transitionData, ::UnityEngine::UIElements::StyleDataRef_1<::UnityEngine::UIElements::VisualData> visualData,
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyValue>* customProperties, int64_t matchingRulesHash, float_t dpiScaling,
    ::ArrayW<::UnityEngine::UIElements::ComputedTransitionProperty> computedTransitions) noexcept {
  this->inheritedData = inheritedData;
  this->layoutData = layoutData;
  this->rareData = rareData;
  this->transformData = transformData;
  this->transitionData = transitionData;
  this->visualData = visualData;
  this->customProperties = customProperties;
  this->matchingRulesHash = matchingRulesHash;
  this->dpiScaling = dpiScaling;
  this->computedTransitions = computedTransitions;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ComputedStyle::ComputedStyle() {}
