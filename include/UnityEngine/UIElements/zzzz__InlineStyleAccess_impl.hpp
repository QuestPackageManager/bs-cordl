#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccess.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleList_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextAutoSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueCollection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyReader_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValueManaged_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/zzzz__StyleValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Align_def.hpp"
#include "UnityEngine/UIElements/zzzz__ComputedStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__DisplayStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__EasingFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__EditorTextRenderingMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__FilterFunction_def.hpp"
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowClipBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__Overflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliceType_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundRepeat_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackground_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleColor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleEnum_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFloat_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleFont_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleInt_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleLength_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleMaterialDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRatio_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextAutoSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTextShadow_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleTranslate_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__TimeValue_def.hpp"
#include "UnityEngine/UIElements/zzzz__Visibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__WhiteSpace_def.hpp"
#include "UnityEngine/UIElements/zzzz__Wrap_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGeneratorType_def.hpp"
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rule", ty:
// "::UnityEngine::UIElements::StyleRule*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::InlineStyleAccess_InlineRule::InlineStyleAccess_InlineRule(::UnityW<::UnityEngine::UIElements::StyleSheet> sheet,
                                                                                                ::UnityEngine::UIElements::StyleRule* rule) noexcept {
  this->sheet = sheet;
  this->rule = rule;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InlineStyleAccess_InlineRule::InlineStyleAccess_InlineRule() {}
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_alignContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignContent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b29b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_alignContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_alignContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignContent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x70b2a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_alignContent", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_alignItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignItems)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b2b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_alignItems", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_alignItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignItems)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x70b2b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_alignItems", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_alignSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignSelf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b2c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_alignSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_alignSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignSelf)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x70b2ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_alignSelf", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRatio (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_aspectRatio)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b2d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_aspectRatio", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_aspectRatio
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRatio)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_aspectRatio)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b2dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_aspectRatio", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRatio>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundColor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x70b2fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x70b301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackground (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundImage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x70b31e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackground)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundImage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b3220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_backgroundImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundPositionX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackgroundPosition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionX)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b3748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundPositionX", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundPositionX
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundPosition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionX)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b37ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                { "UnityEngine.UIElements.IStyle.set_backgroundPositionX", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundPositionY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackgroundPosition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionY)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b397c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundPositionY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundPositionY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundPosition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionY)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b39e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                { "UnityEngine.UIElements.IStyle.set_backgroundPositionY", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackgroundRepeat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundRepeat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b3a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundRepeat", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundRepeat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundRepeat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundRepeat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b3a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_backgroundRepeat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundRepeat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x70b3c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b3c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderBottomColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x70b3cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomLeftRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b3d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomRightRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomRightRadius)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b3efc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomRightRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomRightRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomRightRadius)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b3f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderBottomRightRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b3f74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b3fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderBottomWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderLeftColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x70b4184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderLeftColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderLeftColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b4200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderLeftColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderLeftWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b426c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderLeftWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderLeftWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b42cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderLeftWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderRightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x70b434c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderRightColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderRightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b43c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderRightColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderRightWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b4434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderRightWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderRightWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b4494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderRightWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x70b4514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b4590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderTopColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopLeftRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopLeftRadius)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b45fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopLeftRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopLeftRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopLeftRadius)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b461c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderTopLeftRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopRightRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopRightRadius)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b4674;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopRightRadius", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopRightRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopRightRadius)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b4694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderTopRightRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b46ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b474c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_borderTopWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_bottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_bottom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b47cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_bottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_bottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_bottom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b47ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_bottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_color)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x70b4880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_color)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x70b48f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_color", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_display
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_display)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b4960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_display", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_display
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_display)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x70b49c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_display", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexBasis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexBasis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b4a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexBasis", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexBasis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexBasis)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x70b4aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_flexBasis", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexDirection)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b4b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexDirection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x70b4bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_flexDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexGrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexGrow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b4c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexGrow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexGrow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexGrow)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b4cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_flexGrow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexShrink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexShrink)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b4d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexShrink", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexShrink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexShrink)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x70b4dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_flexShrink", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexWrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexWrap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b4e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexWrap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexWrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexWrap)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x70b4ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                { "UnityEngine.UIElements.IStyle.set_flexWrap", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_fontSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x70b4f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_fontSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b4f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_fontSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_height)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b4fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_height)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b4ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_height", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_justifyContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_justifyContent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b508c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_justifyContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_justifyContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_justifyContent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x70b50f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_justifyContent", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_left)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b51b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_left", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_left
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_left)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b51d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_left", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_letterSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_letterSpacing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b526c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_letterSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_letterSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_letterSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b528c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_letterSpacing", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginBottom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b52e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginBottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginBottom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_marginBottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5398;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginLeft)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b53b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_marginLeft", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b544c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginRight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b546c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_marginRight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginTop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginTop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_marginTop", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_maxHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b55b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_maxHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_maxHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b55d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_maxHeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_maxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_maxWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_maxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxWidth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_maxWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_minHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b571c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_minHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_minHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b573c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_minHeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_minWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b57d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_minWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_minWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minWidth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b57f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_minWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_opacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_opacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b5884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_opacity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_opacity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_opacity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b58e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_opacity", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_overflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_overflow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b5934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_overflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_overflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_overflow)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x70b5998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_overflow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingBottom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingBottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingBottom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5ad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_paddingBottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingLeft)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_paddingLeft", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingRight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_paddingRight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingTop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5ccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingTop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_paddingTop", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_position)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b5d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_position)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x70b5de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_position", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_right)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b5eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_right", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_right
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_right)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b5ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_right", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_textOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textOverflow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b5f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_textOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_textOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textOverflow)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b5fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_textOverflow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_top
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_top)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b6064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_top", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_top
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_top)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b6084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_top", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDelay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b6118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDelay)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x70b6168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_transitionDelay", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDuration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b620c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDuration)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x70b6260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_transitionDuration", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionProperty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b6308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionProperty)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x70b635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                         { "UnityEngine.UIElements.IStyle.set_transitionProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionTimingFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionTimingFunction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b6404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionTimingFunction", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionTimingFunction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionTimingFunction)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x70b6458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
            { "UnityEngine.UIElements.IStyle.set_transitionTimingFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x70b6500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityBackgroundImageTintColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b65e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityEditorTextRenderingMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>)>(
        &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b664c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityEditorTextRenderingMode",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFont (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFont)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70b66ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityFont", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFont)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFont)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70b66fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityFont", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityFontDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFontDefinition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontDefinition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x70b6958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityFontDefinition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityFontDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFontDefinition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontDefinition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b6994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityFontDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFontDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b6d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityFontStyleAndWeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b6d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_unityFontStyleAndWeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleMaterialDefinition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityMaterial)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x70b6e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityMaterial", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityMaterial
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleMaterialDefinition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityMaterial)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b6e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleMaterialDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityOverflowClipBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityOverflowClipBox)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b70e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityOverflowClipBox", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityOverflowClipBox
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityOverflowClipBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x70b7140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                         { "UnityEngine.UIElements.IStyle.set_unityOverflowClipBox", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityParagraphSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityParagraphSpacing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b71dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityParagraphSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityParagraphSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityParagraphSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b71fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityParagraphSpacing", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceBottom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70b7254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceBottom", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceBottom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceBottom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b7264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unitySliceBottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70b73e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceLeft", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceLeft
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceLeft)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b73f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unitySliceLeft", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70b7440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceRight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceRight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b7450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unitySliceRight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b74a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceScale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b7500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unitySliceScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceTop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x70b7550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceTop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceTop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceTop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b7560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unitySliceTop", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b75b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b7614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_unitySliceType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextAlign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextAlign)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b76b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextAlign", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextAlign
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextAlign)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b7718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                { "UnityEngine.UIElements.IStyle.set_unityTextAlign", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextGenerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b77b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextGenerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b781c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "UnityEngine.UIElements.IStyle.set_unityTextGenerator", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextOutlineColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x70b78bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextOutlineColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextOutlineColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x70b7938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityTextOutlineColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b79a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextOutlineWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b7a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityTextOutlineWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b7a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextOverflowPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b7ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
            { "UnityEngine.UIElements.IStyle.set_unityTextOverflowPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_visibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_visibility)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b7b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_visibility", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_visibility
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_visibility)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x70b7bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_visibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_whiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_whiteSpace)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b7c60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_whiteSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_whiteSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_whiteSpace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x70b7cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_whiteSpace", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_width)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b7d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_width)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x70b7d84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_width", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_wordSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_wordSpacing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b7e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_wordSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_wordSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_wordSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x70b7e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_wordSpacing", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.get_ve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::get_ve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70b7e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "get_ve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.set_ve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::InlineStyleAccess::set_ve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x70b7e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "set_ve", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::InlineStyleAccess::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x70b7ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::Finalize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x70b7ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineRule
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineRule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x70b7fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                { "SetInlineRule", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.IsValueSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::InlineStyleAccess::IsValueSet)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x70b8b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "IsValueSet", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyInlineStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyInlineStyles)> {
  constexpr static std::size_t size = 0xb68;
  constexpr static std::size_t addrs = 0x70b8000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "ApplyInlineStyles", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_cursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleCursor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_cursor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b8edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_cursor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_cursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleCursor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_cursor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x70b8f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_cursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleCursor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_textShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleTextShadow (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textShadow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x70b90e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_textShadow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_textShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextShadow)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textShadow)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x70b9150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_textShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleTextAutoSize (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextAutoSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x70b92e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextAutoSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextAutoSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextAutoSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b9358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_unityTextAutoSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextAutoSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleBackgroundSize (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundSize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x70b94d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b9544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_backgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_filter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_filter)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x70b96c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_filter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_filter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_filter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70b9740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                         { "UnityEngine.UIElements.IStyle.set_filter", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValueManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValueManaged)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetStyleValueManaged)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x70b9870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "SetStyleValueManaged", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetStyleValueManaged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>)>(
        &::UnityEngine::UIElements::InlineStyleAccess::TryGetStyleValueManaged)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x70b9a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "TryGetStyleValueManaged",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleTransformOrigin (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transformOrigin)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x70b9b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transformOrigin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transformOrigin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b9bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_transformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleTranslate (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_translate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x70b9d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_translate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_translate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_translate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70b9e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_translate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_rotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleRotate (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_rotate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x70b9fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_rotate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_rotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRotate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_rotate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70ba034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_rotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::StyleScale (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_scale)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x70ba198;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_scale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_scale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleScale)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_scale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x70ba1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "UnityEngine.UIElements.IStyle.set_scale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleScale>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleBackgroundPosition)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x70b3800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundPosition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleBackgroundRepeat)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x70b3af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                         { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundRepeat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x70b3d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x70b4054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleInt)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x70b72b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x70b3084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleBackground)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x70b328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFontDefinition)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x70b6a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFontDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFont)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x70b6750;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleMaterialDefinition)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x70b6ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleMaterialDefinition>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleRatio)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x70b2e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                            { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleRatio>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleCursor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineCursor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x70b8fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "SetInlineCursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleCursor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleCursor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleCursor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x70ba718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "ApplyStyleCursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleCursor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextShadow)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTextShadow)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x70b91ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "SetInlineTextShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextShadow)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTextShadow)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x70ba8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "ApplyStyleTextShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextAutoSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTextAutoSize)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x70b93bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "SetInlineTextAutoSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextAutoSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextAutoSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTextAutoSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x70baaac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "ApplyStyleTextAutoSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextAutoSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTransformOrigin)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x70b9c50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "SetInlineTransformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTransformOrigin)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x70bab00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "ApplyStyleTransformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTranslate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x70b9e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "SetInlineTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTranslate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x70bacb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "ApplyStyleTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleScale)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineScale)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x70ba258;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "SetInlineScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleScale>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleScale)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleScale)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x70bae70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "ApplyStyleScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleScale>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRotate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineRotate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x70ba098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "SetInlineRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRotate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleRotate)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x70bb030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "ApplyStyleRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineBackgroundSize)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x70b95a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "SetInlineBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleBackgroundSize)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x70bb228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "ApplyStyleBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineFilter)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x70b9784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "SetInlineFilter", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleFilter)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x70bb3f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "ApplyStyleFilter", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValue)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x70ba490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "ApplyStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValue>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValueManaged)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x70bb5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "ApplyStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.RemoveInlineStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::InlineStyleAccess::RemoveInlineStyle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x70ba39c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "RemoveInlineStyle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyFromComputedStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::by_ref<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::ApplyFromComputedStyle)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x70bb664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
            { "ApplyFromComputedStyle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineCursor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleCursor>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineCursor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x70b8f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "TryGetInlineCursor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleCursor>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTextShadow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleTextShadow>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextShadow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b9130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "TryGetInlineTextShadow", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTextShadow>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTextAutoSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleTextAutoSize>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextAutoSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x70b9334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "TryGetInlineTextAutoSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTextAutoSize>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTransformOrigin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleTransformOrigin>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTransformOrigin)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x70b9bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "TryGetInlineTransformOrigin", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTransformOrigin>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTranslate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleTranslate>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTranslate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x70b9dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "TryGetInlineTranslate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTranslate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineRotate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleRotate>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineRotate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x70ba008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "TryGetInlineRotate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleRotate>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineScale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleScale>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineScale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x70ba1d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                           { "TryGetInlineScale", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleScale>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineBackgroundSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::by_ref<::UnityEngine::UIElements::StyleBackgroundSize>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineBackgroundSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x70b951c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                             { "TryGetInlineBackgroundSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleBackgroundSize>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::by_ref<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>)>(&::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineFilter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x70b9720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                { "TryGetInlineFilter", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>*& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_ValuesManaged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValuesManaged;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* const&
UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_ValuesManaged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValuesManaged;
}
constexpr void
UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_ValuesManaged(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ValuesManaged = value;
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get__ve_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ve_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get__ve_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ve_k__BackingField;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set__ve_k__BackingField(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ve_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineCursor;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineCursor;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineCursor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineCursor = value;
}
constexpr ::UnityEngine::UIElements::StyleCursor& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineCursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineCursor;
}
constexpr ::UnityEngine::UIElements::StyleCursor const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineCursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineCursor;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineCursor(::UnityEngine::UIElements::StyleCursor value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineCursor = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTextShadow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTextShadow;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTextShadow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTextShadow;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineTextShadow(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineTextShadow = value;
}
constexpr ::UnityEngine::UIElements::StyleTextShadow& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTextShadow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTextShadow;
}
constexpr ::UnityEngine::UIElements::StyleTextShadow const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTextShadow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTextShadow;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineTextShadow(::UnityEngine::UIElements::StyleTextShadow value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineTextShadow = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTextAutoSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTextAutoSize;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTextAutoSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTextAutoSize;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineTextAutoSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineTextAutoSize = value;
}
constexpr ::UnityEngine::UIElements::StyleTextAutoSize& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTextAutoSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTextAutoSize;
}
constexpr ::UnityEngine::UIElements::StyleTextAutoSize const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTextAutoSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTextAutoSize;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineTextAutoSize = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTransformOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTransformOrigin;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTransformOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTransformOrigin;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineTransformOrigin(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineTransformOrigin = value;
}
constexpr ::UnityEngine::UIElements::StyleTransformOrigin& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTransformOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTransformOrigin;
}
constexpr ::UnityEngine::UIElements::StyleTransformOrigin const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTransformOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTransformOrigin;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineTransformOrigin = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTranslate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTranslate;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineTranslate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineTranslate;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineTranslate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineTranslate = value;
}
constexpr ::UnityEngine::UIElements::StyleTranslate& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTranslateOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTranslateOperation;
}
constexpr ::UnityEngine::UIElements::StyleTranslate const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineTranslateOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineTranslateOperation;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineTranslateOperation(::UnityEngine::UIElements::StyleTranslate value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineTranslateOperation = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineRotate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineRotate;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineRotate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineRotate;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineRotate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineRotate = value;
}
constexpr ::UnityEngine::UIElements::StyleRotate& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineRotateOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineRotateOperation;
}
constexpr ::UnityEngine::UIElements::StyleRotate const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineRotateOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineRotateOperation;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineRotateOperation(::UnityEngine::UIElements::StyleRotate value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineRotateOperation = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineScale;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineScale;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineScale(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineScale = value;
}
constexpr ::UnityEngine::UIElements::StyleScale& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineScale;
}
constexpr ::UnityEngine::UIElements::StyleScale const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineScale;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineScale(::UnityEngine::UIElements::StyleScale value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineScale = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineBackgroundSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineBackgroundSize;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineBackgroundSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineBackgroundSize;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineBackgroundSize(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineBackgroundSize = value;
}
constexpr ::UnityEngine::UIElements::StyleBackgroundSize& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineBackgroundSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineBackgroundSize;
}
constexpr ::UnityEngine::UIElements::StyleBackgroundSize const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineBackgroundSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineBackgroundSize;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineBackgroundSize = value;
}
constexpr bool& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineFilter;
}
constexpr bool const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_HasInlineFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasInlineFilter;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_HasInlineFilter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasInlineFilter = value;
}
constexpr ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineFilter;
}
constexpr ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineFilter;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineFilter(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineFilter = value;
}
constexpr ::UnityEngine::UIElements::InlineStyleAccess_InlineRule& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineRule;
}
constexpr ::UnityEngine::UIElements::InlineStyleAccess_InlineRule const& UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_get_m_InlineRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InlineRule;
}
constexpr void UnityEngine::UIElements::InlineStyleAccess::__cordl_internal_set_m_InlineRule(::UnityEngine::UIElements::InlineStyleAccess_InlineRule value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_InlineRule = value;
}
inline void UnityEngine::UIElements::InlineStyleAccess::setStaticF_s_StylePropertyReader(::UnityEngine::UIElements::StyleSheets::StylePropertyReader* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "s_StylePropertyReader", ::UnityEngine::UIElements::InlineStyleAccess*>(
      std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* UnityEngine::UIElements::InlineStyleAccess::getStaticF_s_StylePropertyReader() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "s_StylePropertyReader", ::UnityEngine::UIElements::InlineStyleAccess*>();
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignContent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_alignContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_alignContent", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignItems() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_alignItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignItems(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                              { "UnityEngine.UIElements.IStyle.set_alignItems", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignSelf() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_alignSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignSelf(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                              { "UnityEngine.UIElements.IStyle.set_alignSelf", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleRatio UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_aspectRatio() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_aspectRatio", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRatio>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_aspectRatio(::UnityEngine::UIElements::StyleRatio value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_aspectRatio", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRatio>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackground UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundImage() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackground>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundImage(::UnityEngine::UIElements::StyleBackground value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_backgroundImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundPosition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionX() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundPositionX", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundPosition>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionX(::UnityEngine::UIElements::StyleBackgroundPosition value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_backgroundPositionX", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundPosition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionY() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundPositionY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundPosition>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionY(::UnityEngine::UIElements::StyleBackgroundPosition value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_backgroundPositionY", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundRepeat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundRepeat() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundRepeat", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundRepeat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundRepeat(::UnityEngine::UIElements::StyleBackgroundRepeat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_backgroundRepeat", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundRepeat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderBottomColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomLeftRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomRightRadius() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomRightRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderBottomRightRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderBottomWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderBottomWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderLeftColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderLeftColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderLeftWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderLeftWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderRightColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderRightColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderRightWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderRightWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderTopColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopLeftRadius() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopLeftRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderTopLeftRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopRightRadius() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopRightRadius", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderTopRightRadius", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_borderTopWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_borderTopWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_bottom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_bottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_bottom(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_bottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_color() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_color(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_color", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_display() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_display", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_display", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexBasis() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexBasis", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexBasis(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_flexBasis", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexDirection() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_flexDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexGrow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexGrow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexGrow(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_flexGrow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexShrink() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexShrink", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexShrink(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_flexShrink", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexWrap() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_flexWrap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexWrap(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                              { "UnityEngine.UIElements.IStyle.set_flexWrap", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_fontSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_fontSize(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_fontSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_height() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_height(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_height", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_justifyContent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_justifyContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_justifyContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_justifyContent", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_left() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_left", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_left(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_left", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_letterSpacing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_letterSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_letterSpacing(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_letterSpacing", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginBottom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginBottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginBottom(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_marginBottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginLeft() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginLeft(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_marginLeft", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginRight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginRight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_marginRight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginTop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_marginTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginTop(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_marginTop", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_maxHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxHeight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_maxHeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_maxWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxWidth(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_maxWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minHeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_minHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minHeight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_minHeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_minWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minWidth(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_minWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_opacity() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_opacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_opacity(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_opacity", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_overflow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_overflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_overflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_overflow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingBottom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingBottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingBottom(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_paddingBottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingLeft() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingLeft(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_paddingLeft", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingRight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingRight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_paddingRight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingTop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_paddingTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingTop(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_paddingTop", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_position() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_position", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_right() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_right", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_right(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_right", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textOverflow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_textOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textOverflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_textOverflow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_top() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_top", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_top(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_top", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDelay() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDelay(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_transitionDelay", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDuration() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDuration(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_transitionDuration", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionProperty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionProperty(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_transitionProperty", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionTimingFunction() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transitionTimingFunction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionTimingFunction(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                       { "UnityEngine.UIElements.IStyle.set_transitionTimingFunction", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityBackgroundImageTintColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityEditorTextRenderingMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
          { "UnityEngine.UIElements.IStyle.set_unityEditorTextRenderingMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFont UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFont() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityFont", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFont>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFont(::UnityEngine::UIElements::StyleFont value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityFont", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFontDefinition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityFontDefinition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFontDefinition>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontDefinition(::UnityEngine::UIElements::StyleFontDefinition value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityFontDefinition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFontDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityFontStyleAndWeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_unityFontStyleAndWeight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleMaterialDefinition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityMaterial", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleMaterialDefinition>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityMaterial(::UnityEngine::UIElements::StyleMaterialDefinition value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityMaterial", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleMaterialDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityOverflowClipBox() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityOverflowClipBox", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityOverflowClipBox(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_unityOverflowClipBox", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityParagraphSpacing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityParagraphSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityParagraphSpacing(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityParagraphSpacing", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceBottom() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceBottom", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceBottom(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unitySliceBottom", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceLeft() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceLeft", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceLeft(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unitySliceLeft", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceRight() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceRight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceRight(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unitySliceRight", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceScale() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceScale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceScale(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unitySliceScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceTop() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceTop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceTop(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unitySliceTop", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceType() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unitySliceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceType(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_unitySliceType", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::SliceType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextAlign() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextAlign", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextAlign(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                              { "UnityEngine.UIElements.IStyle.set_unityTextAlign", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextGenerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextGenerator(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "UnityEngine.UIElements.IStyle.set_unityTextGenerator", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineColor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextOutlineColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityTextOutlineColor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextOutlineWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityTextOutlineWidth", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextOverflowPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
          { "UnityEngine.UIElements.IStyle.set_unityTextOverflowPosition", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_visibility() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_visibility", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_visibility", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_whiteSpace() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_whiteSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_whiteSpace(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_whiteSpace", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_width() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_width(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_width", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_wordSpacing() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_wordSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_wordSpacing(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_wordSpacing", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::InlineStyleAccess::get_ve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "get_ve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::set_ve(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "set_ve", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::_ctor(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::InlineStyleAccess::Finalize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                              { "SetInlineRule", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheet*>(), ::i2c::type_of<::UnityEngine::UIElements::StyleRule*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sheet, rule);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "IsValueSet", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyInlineStyles(::by_ref<::UnityEngine::UIElements::ComputedStyle> computedStyle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyInlineStyles", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computedStyle);
}
inline ::UnityEngine::UIElements::StyleCursor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_cursor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_cursor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleCursor>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_cursor(::UnityEngine::UIElements::StyleCursor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_cursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleCursor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleTextShadow UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textShadow() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_textShadow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTextShadow>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textShadow(::UnityEngine::UIElements::StyleTextShadow value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_textShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleTextAutoSize UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextAutoSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_unityTextAutoSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTextAutoSize>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_unityTextAutoSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextAutoSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundSize UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundSize() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_backgroundSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundSize>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundSize(::UnityEngine::UIElements::StyleBackgroundSize value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_backgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_filter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_filter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_filter(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "UnityEngine.UIElements.IStyle.set_filter", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::StyleList_1<T> UnityEngine::UIElements::InlineStyleAccess::GetStyleList(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "GetStyleList", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<T>>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::SetStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StyleValueManaged value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "SetStyleValueManaged", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                                ::by_ref<::UnityEngine::UIElements::StyleSheets::StyleValueManaged> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "TryGetStyleValueManaged",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, value);
}
inline ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transformOrigin() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_transformOrigin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTransformOrigin>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transformOrigin(::UnityEngine::UIElements::StyleTransformOrigin value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_transformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleTranslate UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_translate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_translate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTranslate>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_translate(::UnityEngine::UIElements::StyleTranslate value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_translate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleRotate UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_rotate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_rotate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRotate>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_rotate(::UnityEngine::UIElements::StyleRotate value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_rotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleScale UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_scale() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "UnityEngine.UIElements.IStyle.get_scale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleScale>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_scale(::UnityEngine::UIElements::StyleScale value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "UnityEngine.UIElements.IStyle.set_scale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleScale>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleBackgroundPosition inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                       { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundPosition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleBackgroundRepeat inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundRepeat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleLength inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleLength>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFloat inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFloat>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleInt inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                       { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleInt>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleColor inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleColor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
template <typename T>
  requires(::cordl_internals::type_constraint<T, ::System::IConvertible*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleEnum_1<T> inlineValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
          { "SetStyleValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleEnum_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleBackground inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleBackground>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFontDefinition inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFontDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFont inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleFont>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleMaterialDefinition inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                       { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleMaterialDefinition>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
template <typename T>
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleList_1<T> inlineValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
          { "SetStyleValue", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleRatio inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                          { "SetStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::UnityEngine::UIElements::StyleRatio>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineCursor(::UnityEngine::UIElements::StyleCursor inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "SetInlineCursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleCursor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleCursor(::UnityEngine::UIElements::StyleCursor cursor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "ApplyStyleCursor", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleCursor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cursor);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTextShadow(::UnityEngine::UIElements::StyleTextShadow inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "SetInlineTextShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTextShadow(::UnityEngine::UIElements::StyleTextShadow textShadow) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleTextShadow", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextShadow>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textShadow);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "SetInlineTextAutoSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextAutoSize>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTextAutoSize(::UnityEngine::UIElements::StyleTextAutoSize textAutoSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleTextAutoSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTextAutoSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textAutoSize);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "SetInlineTransformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin transformOrigin) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleTransformOrigin", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTransformOrigin>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformOrigin);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "SetInlineTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate translate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleTranslate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleTranslate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translate);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineScale(::UnityEngine::UIElements::StyleScale inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "SetInlineScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleScale>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleScale(::UnityEngine::UIElements::StyleScale scale) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "ApplyStyleScale", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleScale>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineRotate(::UnityEngine::UIElements::StyleRotate inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "SetInlineRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleRotate(::UnityEngine::UIElements::StyleRotate rotate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(), { "ApplyStyleRotate", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleRotate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotate);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize inlineValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "SetInlineBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize backgroundSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleBackgroundSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleBackgroundSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backgroundSize);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineFilter(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> inlineValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "SetInlineFilter", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleFilter(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction> filter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "ApplyStyleFilter", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValueManaged value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "ApplyStyleValue", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "RemoveInlineStyle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                               ::by_ref<::UnityEngine::UIElements::ComputedStyle> newStyle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
          { "ApplyFromComputedStyle", {}, { ::i2c::type_of<::UnityEngine::UIElements::StyleSheets::StylePropertyId>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::ComputedStyle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, newStyle);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineCursor(::by_ref<::UnityEngine::UIElements::StyleCursor> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "TryGetInlineCursor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleCursor>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextShadow(::by_ref<::UnityEngine::UIElements::StyleTextShadow> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "TryGetInlineTextShadow", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTextShadow>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextAutoSize(::by_ref<::UnityEngine::UIElements::StyleTextAutoSize> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "TryGetInlineTextAutoSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTextAutoSize>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTransformOrigin(::by_ref<::UnityEngine::UIElements::StyleTransformOrigin> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "TryGetInlineTransformOrigin", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTransformOrigin>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTranslate(::by_ref<::UnityEngine::UIElements::StyleTranslate> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "TryGetInlineTranslate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleTranslate>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineRotate(::by_ref<::UnityEngine::UIElements::StyleRotate> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "TryGetInlineRotate", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleRotate>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineScale(::by_ref<::UnityEngine::UIElements::StyleScale> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                                                         { "TryGetInlineScale", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleScale>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineBackgroundSize(::by_ref<::UnityEngine::UIElements::StyleBackgroundSize> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                                           { "TryGetInlineBackgroundSize", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleBackgroundSize>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineFilter(::by_ref<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::InlineStyleAccess*>(),
                                              { "TryGetInlineFilter", {}, { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::FilterFunction>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::InlineStyleAccess* UnityEngine::UIElements::InlineStyleAccess::New_ctor(::UnityEngine::UIElements::VisualElement* ve) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::InlineStyleAccess*>(ve));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IStyle"
constexpr UnityEngine::UIElements::InlineStyleAccess::operator ::UnityEngine::UIElements::IStyle*() noexcept {
  return static_cast<::UnityEngine::UIElements::IStyle*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IStyle"
constexpr ::UnityEngine::UIElements::IStyle* UnityEngine::UIElements::InlineStyleAccess::i___UnityEngine__UIElements__IStyle() noexcept {
  return static_cast<::UnityEngine::UIElements::IStyle*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InlineStyleAccess::InlineStyleAccess() {}
