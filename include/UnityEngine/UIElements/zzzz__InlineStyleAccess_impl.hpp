#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccess.hpp"
#include "UnityEngine/UIElements/zzzz__StyleBackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleCursor_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_impl.hpp"
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
#include "UnityEngine/UIElements/zzzz__FlexDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__InlineStyleAccess_def.hpp"
#include "UnityEngine/UIElements/zzzz__Justify_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowClipBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__Overflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
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
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleRule_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleScale_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
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
// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: Some("{}") }, CppParam { name: "rule", ty:
// "::UnityEngine::UIElements::StyleRule*", modifiers: "", def_value: Some("{}") }, CppParam { name: "propertyIds", ty:
// "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId,::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::InlineStyleAccess_InlineRule::InlineStyleAccess_InlineRule(
    ::UnityW<::UnityEngine::UIElements::StyleSheet> sheet, ::UnityEngine::UIElements::StyleRule* rule,
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::Array<::UnityEngine::UIElements::StyleSheets::StylePropertyId>*> propertyIds) noexcept {
  this->sheet = sheet;
  this->rule = rule;
  this->propertyIds = propertyIds;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::InlineStyleAccess_InlineRule::InlineStyleAccess_InlineRule() {}
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_alignContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignContent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c127e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_alignContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_alignContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignContent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c12848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_alignContent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_alignItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignItems)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c1290c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_alignItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_alignItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignItems)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c12970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_alignItems",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_alignSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignSelf)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c12a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_alignSelf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_alignSelf
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignSelf)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6c12a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_alignSelf",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundColor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c12b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_backgroundColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c12bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleBackground (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundImage)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6c12d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_backgroundImage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackground)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundImage)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c12dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundImage",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackground>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundPositionX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleBackgroundPosition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionX)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c13300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_backgroundPositionX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundPositionX
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundPosition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionX)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c13364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                    "UnityEngine.UIElements.IStyle.set_backgroundPositionX", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundPosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundPositionY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleBackgroundPosition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionY)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c13534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_backgroundPositionY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundPositionY
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundPosition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionY)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c13598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                    "UnityEngine.UIElements.IStyle.set_backgroundPositionY", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundPosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundRepeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleBackgroundRepeat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundRepeat)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c135ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_backgroundRepeat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundRepeat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundRepeat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundRepeat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c13650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundRepeat",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundRepeat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c137c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderBottomColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c13844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c138b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderBottomLeftRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c138cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomRightRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomRightRadius)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c13ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderBottomRightRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomRightRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomRightRadius)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c13ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomRightRadius",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderBottomWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c13b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderBottomWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderBottomWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c13b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderLeftColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c13d3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderLeftColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderLeftColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c13db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderLeftColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderLeftWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c13e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderLeftWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderLeftWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c13e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderLeftWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderRightColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c13f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderRightColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderRightColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c13f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderRightColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderRightWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c13fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderRightWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderRightWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c1404c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderRightWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c140cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderTopColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c14148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopLeftRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopLeftRadius)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c141b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderTopLeftRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopLeftRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopLeftRadius)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c141d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopLeftRadius",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopRightRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopRightRadius)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c1422c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderTopRightRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopRightRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopRightRadius)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c1424c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopRightRadius",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_borderTopWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c142a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_borderTopWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_borderTopWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopWidth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c14304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_bottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_bottom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_bottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_bottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_bottom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c143a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_bottom",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_color)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6c14438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_color", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_color
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_color)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6c144b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_color",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_display)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c14518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_display", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_display
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_display)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c1457c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_display",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexBasis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexBasis)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_flexBasis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexBasis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexBasis)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c14664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexBasis",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexDirection)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c14708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_flexDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexDirection)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c1476c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexDirection",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexGrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexGrow)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c14834;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_flexGrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexGrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexGrow)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c14894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexGrow",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexShrink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexShrink)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c14914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_flexShrink", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexShrink
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexShrink)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6c14974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexShrink",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_flexWrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexWrap)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c149f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_flexWrap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_flexWrap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexWrap)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c14a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexWrap",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_fontSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_fontSize)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c14b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_fontSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_fontSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_fontSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c14b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_fontSize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_height)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_height", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_height)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c14bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_height",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_justifyContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_justifyContent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c14c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_justifyContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_justifyContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_justifyContent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c14ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_justifyContent",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_left
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_left)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_left",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_left
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_left)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c14d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_left",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_letterSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_letterSpacing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_letterSpacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_letterSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_letterSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c14e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_letterSpacing",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginBottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginBottom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14e9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_marginBottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginBottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginBottom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c14ebc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginBottom",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c14f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_marginLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginLeft)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c14f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginLeft",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_marginRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginRight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c15024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginRight",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_marginTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginTop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c150b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_marginTop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_marginTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginTop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c150d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginTop",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_maxHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c1516c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_maxHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_maxHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c1518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_maxHeight",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_maxWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_maxWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_maxWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxWidth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c15240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_maxWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_minHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c152d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_minHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_minHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c152f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_minHeight",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_minWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minWidth)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_minWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_minWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minWidth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c153a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_minWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_opacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_opacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c1543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_opacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_opacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_opacity)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c1549c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_opacity",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_overflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_overflow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c154ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_overflow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_overflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_overflow)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6c15550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_overflow",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingBottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingBottom)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_paddingBottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingBottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingBottom)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c15688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingBottom",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingLeft)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c1571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_paddingLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingLeft)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c1573c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingLeft",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingRight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c157d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_paddingRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingRight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c157f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingRight",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_paddingTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingTop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_paddingTop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_paddingTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingTop)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c158a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingTop",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_position)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c15938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_position", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_position)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6c1599c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_position",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_right
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_right)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_right", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_right
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_right)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c15a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_right",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_textOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textOverflow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c15b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_textOverflow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_textOverflow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textOverflow)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c15b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_textOverflow",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_top
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_top)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c15c1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_top",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_top
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_top)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c15c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_top", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDelay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c15cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_transitionDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDelay)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c15d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionDelay",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDuration)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c15dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_transitionDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDuration)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c15e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionDuration",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionProperty)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c15ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_transitionProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionProperty)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c15f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionProperty",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transitionTimingFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionTimingFunction)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c15fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_transitionTimingFunction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transitionTimingFunction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionTimingFunction)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6c16010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionTimingFunction",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c160b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                    "UnityEngine.UIElements.IStyle.get_unityBackgroundImageTintColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c16134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c161a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                    "UnityEngine.UIElements.IStyle.get_unityEditorTextRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>)>(
        &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c16204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                    "UnityEngine.UIElements.IStyle.set_unityEditorTextRenderingMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityFont
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFont (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFont)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c162a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityFont", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityFont
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFont)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFont)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6c162b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityFont",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFont>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityFontDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFontDefinition (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontDefinition)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6c16510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityFontDefinition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityFontDefinition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFontDefinition)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontDefinition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c1654c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityFontDefinition",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFontDefinition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c168e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityFontStyleAndWeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c16944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityFontStyleAndWeight",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityOverflowClipBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityOverflowClipBox)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c169e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityOverflowClipBox", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityOverflowClipBox
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityOverflowClipBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6c16a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityOverflowClipBox",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityParagraphSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityParagraphSpacing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c16ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityParagraphSpacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityParagraphSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityParagraphSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c16b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityParagraphSpacing",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceBottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceBottom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c16b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unitySliceBottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceBottom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceBottom)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c16b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceBottom",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c16ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unitySliceLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceLeft)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c16cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceLeft",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c16d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unitySliceRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceRight)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c16d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceRight",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceScale)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c16da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unitySliceScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceScale)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c16e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceScale",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unitySliceTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleInt (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceTop)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6c16e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unitySliceTop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unitySliceTop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleInt)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceTop)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c16e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceTop",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextAlign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextAlign)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c16eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityTextAlign", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextAlign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextAlign)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c16f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextAlign",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextGenerator)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c16fb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityTextGenerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextGenerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextGenerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c1701c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextGenerator",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextOutlineColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleColor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6c170bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityTextOutlineColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextOutlineColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleColor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineColor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6c17138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextOutlineColor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleFloat (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6c171a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityTextOutlineWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleFloat)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c17204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextOutlineWidth",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c17254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_unityTextOverflowPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>)>(
        &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c172b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextOverflowPosition",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_visibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_visibility)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c17358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_visibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_visibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_visibility)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6c173bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_visibility",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_whiteSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> (
    ::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_whiteSpace)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c17460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_whiteSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_whiteSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>)>(&::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_whiteSpace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6c174c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_whiteSpace",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_width)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c17564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_width", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_width)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6c17584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_width",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_wordSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleLength (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_wordSpacing)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c17618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_wordSpacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_wordSpacing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleLength)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_wordSpacing)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6c17638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_wordSpacing",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.get_ve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::get_ve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c17690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "get_ve",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.set_ve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::InlineStyleAccess::set_ve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c17698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "set_ve", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::InlineStyleAccess::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6c176a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)()>(&::UnityEngine::UIElements::InlineStyleAccess::Finalize)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6c176c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheet*, ::UnityEngine::UIElements::StyleRule*)>(&::UnityEngine::UIElements::InlineStyleAccess::SetInlineRule)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6c177e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineRule", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.IsValueSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::InlineStyleAccess::IsValueSet)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x6c1822c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "IsValueSet", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyInlineStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::ComputedStyle>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyInlineStyles)> {
  constexpr static std::size_t size = 0x9bc;
  constexpr static std::size_t addrs = 0x6c17870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyInlineStyles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_cursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleCursor (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_cursor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c184fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_cursor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_cursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleCursor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_cursor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c18568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_cursor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleCursor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_textShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleTextShadow (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textShadow)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6c18700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_textShadow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_textShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextShadow)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textShadow)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c18770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_textShadow",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTextShadow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_backgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleBackgroundSize (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c18908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_backgroundSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_backgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c18970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundSize",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValueManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValueManaged)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetStyleValueManaged)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6c18ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValueManaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetStyleValueManaged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::ByRef<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>)>(
        &::UnityEngine::UIElements::InlineStyleAccess::TryGetStyleValueManaged)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6c18ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetStyleValueManaged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_transformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleTransformOrigin (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transformOrigin)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6c18df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_transformOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_transformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transformOrigin)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c18e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.set_transformOrigin", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTransformOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_translate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleTranslate (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_translate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c19000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_translate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_translate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_translate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c19078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_translate",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_rotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleRotate (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_rotate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6c19230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_rotate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_rotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRotate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_rotate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c192a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_rotate",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRotate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_get_scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleScale (::UnityEngine::UIElements::InlineStyleAccess::*)()>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_scale)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6c19464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                                 "UnityEngine.UIElements.IStyle.get_scale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.UnityEngine_UIElements_IStyle_set_scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleScale)>(
    &::UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_scale)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6c194c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_scale",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleScale>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleBackgroundPosition)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6c133b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundPosition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleBackgroundRepeat)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6c136a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundRepeat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleLength)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6c13920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFloat)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6c13c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleInt)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6c16bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleColor)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6c12c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleBackground)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x6c12e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackground>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFontDefinition)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6c165b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFontDefinition>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::UnityEngine::UIElements::StyleFont)>(&::UnityEngine::UIElements::InlineStyleAccess::SetStyleValue)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x6c16308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFont>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleCursor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineCursor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6c185c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineCursor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleCursor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleCursor)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleCursor)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6c199dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleCursor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleCursor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTextShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextShadow)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTextShadow)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6c187cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineTextShadow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTextShadow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTextShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTextShadow)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTextShadow)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6c19b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleTextShadow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTextShadow>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTransformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTransformOrigin)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6c18ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineTransformOrigin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTransformOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTransformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTransformOrigin)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTransformOrigin)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6c19d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleTransformOrigin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTransformOrigin>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineTranslate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineTranslate)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6c190dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineTranslate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleTranslate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleTranslate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTranslate)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6c19f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleTranslate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleScale)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineScale)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6c19524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleScale>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleScale)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleScale)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6c1a0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleScale>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineRotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRotate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineRotate)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6c1930c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineRotate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRotate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleRotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleRotate)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleRotate)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6c1a270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleRotate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRotate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.SetInlineBackgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::SetInlineBackgroundSize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6c189d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineBackgroundSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleBackgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleBackgroundSize)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleBackgroundSize)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x6c1a460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleBackgroundSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundSize>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValue)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6c1975c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValue>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyStyleValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StyleValueManaged)>(
    &::UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6c1a624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.RemoveInlineStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::UnityEngine::UIElements::StyleSheets::StylePropertyId)>(
    &::UnityEngine::UIElements::InlineStyleAccess::RemoveInlineStyle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6c19668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "RemoveInlineStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.ApplyFromComputedStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::InlineStyleAccess::*)(
    ::UnityEngine::UIElements::StyleSheets::StylePropertyId, ::ByRef<::UnityEngine::UIElements::ComputedStyle>)>(&::UnityEngine::UIElements::InlineStyleAccess::ApplyFromComputedStyle)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x6c1a6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyFromComputedStyle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineCursor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleCursor>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineCursor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c1854c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineCursor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleCursor>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTextShadow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleTextShadow>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextShadow)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6c18750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineTextShadow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleTextShadow>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTransformOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleTransformOrigin>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTransformOrigin)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c18e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineTransformOrigin", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleTransformOrigin>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineTranslate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleTranslate>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTranslate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c1904c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineTranslate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleTranslate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineRotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleRotate>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineRotate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6c1927c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineRotate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleRotate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineScale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleScale>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineScale)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c1949c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineScale", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleScale>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::InlineStyleAccess.TryGetInlineBackgroundSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::InlineStyleAccess::*)(::ByRef<::UnityEngine::UIElements::StyleBackgroundSize>)>(
    &::UnityEngine::UIElements::InlineStyleAccess::TryGetInlineBackgroundSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6c1894c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineBackgroundSize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleBackgroundSize>>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ValuesManaged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ve_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "s_StylePropertyReader",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get>(
      std::forward<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*>(value));
}
inline ::UnityEngine::UIElements::StyleSheets::StylePropertyReader* UnityEngine::UIElements::InlineStyleAccess::getStaticF_s_StylePropertyReader() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::StyleSheets::StylePropertyReader*, "s_StylePropertyReader",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get>();
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignContent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_alignContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_alignContent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignItems() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_alignItems", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignItems(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_alignItems",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_alignSelf() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_alignSelf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_alignSelf(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_alignSelf",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Align>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_backgroundColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackground UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundImage() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_backgroundImage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackground, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundImage(::UnityEngine::UIElements::StyleBackground value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundImage",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackground>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundPosition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionX() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_backgroundPositionX", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundPosition, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionX(::UnityEngine::UIElements::StyleBackgroundPosition value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundPositionX",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundPosition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundPositionY() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_backgroundPositionY", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundPosition, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundPositionY(::UnityEngine::UIElements::StyleBackgroundPosition value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundPositionY",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundRepeat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundRepeat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_backgroundRepeat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundRepeat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundRepeat(::UnityEngine::UIElements::StyleBackgroundRepeat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundRepeat",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundRepeat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderBottomColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomLeftRadius() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderBottomLeftRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomRightRadius() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderBottomRightRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomRightRadius",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderBottomWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderBottomWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderBottomWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderBottomWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderLeftColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderLeftColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderLeftWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderLeftWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderLeftWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderLeftWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderRightColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderRightColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderRightWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderRightWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderRightWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderRightWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderTopColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopLeftRadius() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderTopLeftRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopLeftRadius",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopRightRadius() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderTopRightRadius", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopRightRadius(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopRightRadius",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_borderTopWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_borderTopWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_borderTopWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_borderTopWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_bottom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_bottom",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_bottom(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_bottom",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_color() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_color",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_color(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_color", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_display() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_display", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_display(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_display",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexBasis() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_flexBasis", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexBasis(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexBasis",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexDirection() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_flexDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexDirection(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexDirection",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::FlexDirection>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexGrow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_flexGrow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexGrow(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexGrow",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexShrink() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_flexShrink", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexShrink(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexShrink",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_flexWrap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_flexWrap", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_flexWrap(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_flexWrap",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Wrap>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_fontSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_fontSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_fontSize(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_fontSize",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_height() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_height",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_height(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_height",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_justifyContent() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_justifyContent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_justifyContent(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_justifyContent",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Justify>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_left() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_left",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_left(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_left", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_letterSpacing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_letterSpacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_letterSpacing(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_letterSpacing",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginBottom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_marginBottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginBottom(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginBottom",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginLeft() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_marginLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginLeft(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginLeft",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginRight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_marginRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginRight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginRight",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_marginTop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_marginTop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_marginTop(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_marginTop",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_maxHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxHeight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_maxHeight",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_maxWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_maxWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_maxWidth(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_maxWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minHeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_minHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minHeight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_minHeight",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_minWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_minWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_minWidth(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_minWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_opacity() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_opacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_opacity(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_opacity",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_overflow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_overflow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_overflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_overflow",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingBottom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_paddingBottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingBottom(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingBottom",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingLeft() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_paddingLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingLeft(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingLeft",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingRight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_paddingRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingRight(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingRight",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_paddingTop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_paddingTop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_paddingTop(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_paddingTop",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_position() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_position", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_position(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_position",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Position>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_right() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_right",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_right(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_right", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textOverflow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_textOverflow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textOverflow(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_textOverflow",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflow>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_top() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_top",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_top(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_top", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDelay() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_transitionDelay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDelay(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionDelay",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionDuration() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_transitionDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionDuration(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionDuration",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::TimeValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionProperty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_transitionProperty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionProperty(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionProperty",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::StylePropertyName>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transitionTimingFunction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_transitionTimingFunction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transitionTimingFunction(::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transitionTimingFunction",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<::UnityEngine::UIElements::EasingFunction>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityBackgroundImageTintColor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                  "UnityEngine.UIElements.IStyle.get_unityBackgroundImageTintColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityEditorTextRenderingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityEditorTextRenderingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityEditorTextRenderingMode(
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityEditorTextRenderingMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::EditorTextRenderingMode>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFont UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFont() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityFont", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFont, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFont(::UnityEngine::UIElements::StyleFont value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityFont",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFont>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFontDefinition UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontDefinition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityFontDefinition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFontDefinition, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontDefinition(::UnityEngine::UIElements::StyleFontDefinition value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityFontDefinition",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFontDefinition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityFontStyleAndWeight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityFontStyleAndWeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityFontStyleAndWeight(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityFontStyleAndWeight",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::FontStyle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityOverflowClipBox() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityOverflowClipBox", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityOverflowClipBox(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityOverflowClipBox",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::OverflowClipBox>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityParagraphSpacing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityParagraphSpacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityParagraphSpacing(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityParagraphSpacing",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceBottom() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unitySliceBottom", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceBottom(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceBottom",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceLeft() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unitySliceLeft", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceLeft(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceLeft",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceRight() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unitySliceRight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceRight(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceRight",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceScale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unitySliceScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceScale(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceScale",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleInt UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unitySliceTop() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unitySliceTop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleInt, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unitySliceTop(::UnityEngine::UIElements::StyleInt value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unitySliceTop",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextAlign() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityTextAlign", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextAlign(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextAlign",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextAnchor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextGenerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityTextGenerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextGenerator(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextGenerator",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::TextGeneratorType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleColor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineColor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityTextOutlineColor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleColor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineColor(::UnityEngine::UIElements::StyleColor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextOutlineColor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleFloat UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOutlineWidth() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityTextOutlineWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleFloat, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOutlineWidth(::UnityEngine::UIElements::StyleFloat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextOutlineWidth",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_unityTextOverflowPosition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_unityTextOverflowPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_unityTextOverflowPosition(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_unityTextOverflowPosition",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::TextOverflowPosition>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_visibility() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_visibility", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_visibility(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_visibility",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_whiteSpace() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_whiteSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_whiteSpace(::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_whiteSpace",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::WhiteSpace>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_width() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_width",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_width(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_width", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleLength UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_wordSpacing() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_wordSpacing", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleLength, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_wordSpacing(::UnityEngine::UIElements::StyleLength value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_wordSpacing",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::InlineStyleAccess::get_ve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "get_ve",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::set_ve(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "set_ve", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::_ctor(::UnityEngine::UIElements::VisualElement* ve) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve);
}
inline void UnityEngine::UIElements::InlineStyleAccess::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::SetInlineRule(::UnityEngine::UIElements::StyleSheet* sheet, ::UnityEngine::UIElements::StyleRule* rule) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineRule", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheet*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRule*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sheet, rule);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::IsValueSet(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "IsValueSet", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyInlineStyles(::ByRef<::UnityEngine::UIElements::ComputedStyle> computedStyle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyInlineStyles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, computedStyle);
}
inline ::UnityEngine::UIElements::StyleCursor UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_cursor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_cursor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleCursor, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_cursor(::UnityEngine::UIElements::StyleCursor value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_cursor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleCursor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleTextShadow UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_textShadow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_textShadow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTextShadow, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_textShadow(::UnityEngine::UIElements::StyleTextShadow value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_textShadow",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTextShadow>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleBackgroundSize UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_backgroundSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_backgroundSize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleBackgroundSize, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_backgroundSize(::UnityEngine::UIElements::StyleBackgroundSize value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_backgroundSize",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::StyleList_1<T> UnityEngine::UIElements::InlineStyleAccess::GetStyleList(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "GetStyleList",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleList_1<T>, false>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::SetStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StyleValueManaged value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValueManaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetStyleValueManaged(::UnityEngine::UIElements::StyleSheets::StylePropertyId id,
                                                                                ::ByRef<::UnityEngine::UIElements::StyleSheets::StyleValueManaged> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetStyleValueManaged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, value);
}
inline ::UnityEngine::UIElements::StyleTransformOrigin UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_transformOrigin() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_transformOrigin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTransformOrigin, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_transformOrigin(::UnityEngine::UIElements::StyleTransformOrigin value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_transformOrigin",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTransformOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleTranslate UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_translate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(),
                                               "UnityEngine.UIElements.IStyle.get_translate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleTranslate, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_translate(::UnityEngine::UIElements::StyleTranslate value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_translate",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleRotate UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_rotate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_rotate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleRotate, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_rotate(::UnityEngine::UIElements::StyleRotate value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_rotate",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRotate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::StyleScale UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_get_scale() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.get_scale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleScale, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::InlineStyleAccess::UnityEngine_UIElements_IStyle_set_scale(::UnityEngine::UIElements::StyleScale value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "UnityEngine.UIElements.IStyle.set_scale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleScale>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleBackgroundPosition inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleBackgroundRepeat inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundRepeat>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleLength inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleLength>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFloat inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFloat>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleInt inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleInt>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleColor inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleColor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
template <typename T>
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleEnum_1<T> inlineValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleEnum_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleBackground inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackground>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFontDefinition inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFontDefinition>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleFont inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleFont>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
template <typename T>
inline bool UnityEngine::UIElements::InlineStyleAccess::SetStyleValue(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::UnityEngine::UIElements::StyleList_1<T> inlineValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetStyleValue",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleList_1<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, inlineValue);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineCursor(::UnityEngine::UIElements::StyleCursor inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineCursor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleCursor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleCursor(::UnityEngine::UIElements::StyleCursor cursor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleCursor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleCursor>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cursor);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTextShadow(::UnityEngine::UIElements::StyleTextShadow inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineTextShadow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTextShadow>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTextShadow(::UnityEngine::UIElements::StyleTextShadow textShadow) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleTextShadow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTextShadow>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textShadow);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineTransformOrigin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTransformOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTransformOrigin(::UnityEngine::UIElements::StyleTransformOrigin transformOrigin) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleTransformOrigin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTransformOrigin>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transformOrigin);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineTranslate(::UnityEngine::UIElements::StyleTranslate inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineTranslate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleTranslate(::UnityEngine::UIElements::StyleTranslate translate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleTranslate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleTranslate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, translate);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineScale(::UnityEngine::UIElements::StyleScale inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleScale>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleScale(::UnityEngine::UIElements::StyleScale scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleScale>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scale);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineRotate(::UnityEngine::UIElements::StyleRotate inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineRotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRotate>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleRotate(::UnityEngine::UIElements::StyleRotate rotate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleRotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleRotate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotate);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::SetInlineBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize inlineValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "SetInlineBackgroundSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inlineValue);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleBackgroundSize(::UnityEngine::UIElements::StyleBackgroundSize backgroundSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleBackgroundSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleBackgroundSize>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, backgroundSize);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyStyleValue(::UnityEngine::UIElements::StyleSheets::StyleValueManaged value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyStyleValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StyleValueManaged>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::RemoveInlineStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "RemoveInlineStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id);
}
inline void UnityEngine::UIElements::InlineStyleAccess::ApplyFromComputedStyle(::UnityEngine::UIElements::StyleSheets::StylePropertyId id, ::ByRef<::UnityEngine::UIElements::ComputedStyle> newStyle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "ApplyFromComputedStyle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::StylePropertyId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::ComputedStyle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, newStyle);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineCursor(::ByRef<::UnityEngine::UIElements::StyleCursor> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineCursor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleCursor>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTextShadow(::ByRef<::UnityEngine::UIElements::StyleTextShadow> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineTextShadow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleTextShadow>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTransformOrigin(::ByRef<::UnityEngine::UIElements::StyleTransformOrigin> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineTransformOrigin", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleTransformOrigin>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineTranslate(::ByRef<::UnityEngine::UIElements::StyleTranslate> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineTranslate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleTranslate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineRotate(::ByRef<::UnityEngine::UIElements::StyleRotate> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineRotate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleRotate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineScale(::ByRef<::UnityEngine::UIElements::StyleScale> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineScale", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleScale>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::InlineStyleAccess::TryGetInlineBackgroundSize(::ByRef<::UnityEngine::UIElements::StyleBackgroundSize> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::InlineStyleAccess*>::get(), "TryGetInlineBackgroundSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::StyleBackgroundSize>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::InlineStyleAccess* UnityEngine::UIElements::InlineStyleAccess::New_ctor(::UnityEngine::UIElements::VisualElement* ve) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::InlineStyleAccess*>(ve));
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
