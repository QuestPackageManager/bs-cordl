#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Length_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_impl.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__FontStyle_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__TextAnchor_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__FontDefinition_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextHandle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContextUtils_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__OverflowInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextNativeSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflowPosition_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextOverflow_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "leftColorPage", ty:
// "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColorPage", ty:
// "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::__MeshGenerationContextUtils__BorderParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor, ::UnityEngine::Color bottomColor,
    float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius,
    ::UnityEngine::Vector2 bottomLeftRadius, ::UnityW<::UnityEngine::Material> material, ::UnityEngine::UIElements::ColorPage leftColorPage, ::UnityEngine::UIElements::ColorPage topColorPage,
    ::UnityEngine::UIElements::ColorPage rightColorPage, ::UnityEngine::UIElements::ColorPage bottomColorPage) noexcept {
  this->rect = rect;
  this->playmodeTintColor = playmodeTintColor;
  this->leftColor = leftColor;
  this->topColor = topColor;
  this->rightColor = rightColor;
  this->bottomColor = bottomColor;
  this->leftWidth = leftWidth;
  this->topWidth = topWidth;
  this->rightWidth = rightWidth;
  this->bottomWidth = bottomWidth;
  this->topLeftRadius = topLeftRadius;
  this->topRightRadius = topRightRadius;
  this->bottomRightRadius = bottomRightRadius;
  this->bottomLeftRadius = bottomLeftRadius;
  this->material = material;
  this->leftColorPage = leftColorPage;
  this->topColorPage = topColorPage;
  this->rightColorPage = rightColorPage;
  this->bottomColorPage = bottomColorPage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__BorderParams::__MeshGenerationContextUtils__BorderParams() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.AdjustUVsForScaleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>)>(
        &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustUVsForScaleMode)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2f87f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "AdjustUVsForScaleMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.AdjustSpriteUVsForScaleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*,
                                                                                           ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ByRef<::UnityEngine::Rect>, ByRef<::UnityEngine::Rect>)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustSpriteUVsForScaleMode)> {
  constexpr static std::size_t size = 0x760;
  constexpr static std::size_t addrs = 0x2f88268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "AdjustSpriteUVsForScaleMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.RectIntersection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::RectIntersection)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2f889c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                                 "RectIntersection", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ComputeGeomRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeGeomRect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2f88ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "ComputeGeomRect",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ComputeUVRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeUVRect)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2f88bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "ComputeUVRect",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.ApplyPackingRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::SpritePackingRotation)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ApplyPackingRotation)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2f88c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                                 "ApplyPackingRotation", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpritePackingRotation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.MakeTextured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeTextured)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2f88dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                                 "MakeTextured", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.MakeSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::UnityEngine::UIElements::ContextType, bool, ByRef<::UnityEngine::Vector4>)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeSprite)> {
  constexpr static std::size_t size = 0x6c4;
  constexpr static std::size_t addrs = 0x2f88f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "MakeSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.MakeVectorTextured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VectorImage*, ::UnityEngine::ScaleMode, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeVectorTextured)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2f895f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                                 "MakeVectorTextured", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams.HasRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::*)(float_t)>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::HasRadius)> {
  constexpr static std::size_t size = 0x1074;
  constexpr static std::size_t addrs = 0x2f89710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "HasRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture* texture,
                                                                                                          ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Rect> rectOut,
                                                                                                          ByRef<::UnityEngine::Rect> uvOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "AdjustUVsForScaleMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, rectOut, uvOut);
}
inline void UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::AdjustSpriteUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Rect geomRect,
                                                                                                                ::UnityEngine::Texture* texture, ::UnityEngine::Sprite* sprite,
                                                                                                                ::UnityEngine::ScaleMode scaleMode, ByRef<::UnityEngine::Rect> rectOut,
                                                                                                                ByRef<::UnityEngine::Rect> uvOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "AdjustSpriteUVsForScaleMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, uv, geomRect, texture, sprite, scaleMode, rectOut, uvOut);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::RectIntersection(::UnityEngine::Rect a, ::UnityEngine::Rect b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                               "RectIntersection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeGeomRect(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "ComputeGeomRect",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ComputeUVRect(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "ComputeUVRect",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::ApplyPackingRotation(::UnityEngine::Rect uv, ::UnityEngine::SpritePackingRotation rotation) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                               "ApplyPackingRotation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpritePackingRotation>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, uv, rotation);
}
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams
UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture* texture,
                                                                                     ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::UIElements::ContextType panelContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "MakeTextured", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, panelContext);
}
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams
UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeSprite(::UnityEngine::Rect rect, ::UnityEngine::Sprite* sprite, ::UnityEngine::ScaleMode scaleMode,
                                                                                   ::UnityEngine::UIElements::ContextType panelContext, bool hasRadius, ByRef<::UnityEngine::Vector4> slices) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "MakeSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, sprite, scaleMode, panelContext,
                                                                                                                              hasRadius, slices);
}
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams
UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::MakeVectorTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::UIElements::VectorImage* vectorImage,
                                                                                           ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::UIElements::ContextType panelContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(),
                                               "MakeVectorTextured", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams, false>(nullptr, ___internal_method, rect, uv, vectorImage, scaleMode,
                                                                                                                              panelContext);
}
inline bool UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::HasRadius(float_t epsilon) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get(), "HasRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, epsilon);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "vectorImage", ty:
// "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topSlice", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshFlags", ty:
// "::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::__MeshGenerationContextUtils__RectangleParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Color color, ::UnityW<::UnityEngine::Texture> texture, ::UnityW<::UnityEngine::Sprite> sprite,
    ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage, ::UnityW<::UnityEngine::Material> material, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color playmodeTintColor,
    ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, int32_t leftSlice, int32_t topSlice,
    int32_t rightSlice, int32_t bottomSlice, float_t sliceScale, ::UnityEngine::Rect spriteGeomRect, ::UnityEngine::UIElements::ColorPage colorPage,
    ::UnityEngine::UIElements::__MeshGenerationContext__MeshFlags meshFlags) noexcept {
  this->rect = rect;
  this->uv = uv;
  this->color = color;
  this->texture = texture;
  this->sprite = sprite;
  this->vectorImage = vectorImage;
  this->material = material;
  this->scaleMode = scaleMode;
  this->playmodeTintColor = playmodeTintColor;
  this->topLeftRadius = topLeftRadius;
  this->topRightRadius = topRightRadius;
  this->bottomRightRadius = bottomRightRadius;
  this->bottomLeftRadius = bottomLeftRadius;
  this->leftSlice = leftSlice;
  this->topSlice = topSlice;
  this->rightSlice = rightSlice;
  this->bottomSlice = bottomSlice;
  this->sliceScale = sliceScale;
  this->spriteGeomRect = spriteGeomRect;
  this->colorPage = colorPage;
  this->meshFlags = meshFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams::__MeshGenerationContextUtils__RectangleParams() {}
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::*)()>(
    &::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::GetHashCode)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2f8a784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams.MakeStyleBased
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams (*)(
    ::UnityEngine::UIElements::VisualElement*, ::StringW)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::MakeStyleBased)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x2f8aa24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), "MakeStyleBased", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams.GetTextNativeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextNativeSettings (*)(
    ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, float_t)>(&::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::GetTextNativeSettings)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2f8adcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), "GetTextNativeSettings",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams
UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::MakeStyleBased(::UnityEngine::UIElements::VisualElement* ve, ::StringW text) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), "MakeStyleBased", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, false>(nullptr, ___internal_method, ve, text);
}
inline ::UnityEngine::UIElements::TextNativeSettings
UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::GetTextNativeSettings(::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, float_t scaling) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(), "GetTextNativeSettings",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextNativeSettings, false>(nullptr, ___internal_method, textParams, scaling);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "font", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "fontDefinition", ty: "::UnityEngine::UIElements::FontDefinition",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "letterSpacing", ty:
// "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") },
// CppParam { name: "paragraphSpacing", ty: "::UnityEngine::UIElements::Length", modifiers: "", def_value: Some("{}") }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fontColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityEngine::TextAnchor", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "wordWrap", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "wordWrapWidth", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "richText", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "textOverflow", ty: "::UnityEngine::UIElements::TextOverflow", modifiers: "", def_value: Some("{}") }, CppParam { name: "textOverflowPosition", ty:
// "::UnityEngine::UIElements::TextOverflowPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "overflow", ty: "::UnityEngine::UIElements::OverflowInternal", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "panel", ty: "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::__MeshGenerationContextUtils__TextParams(
    ::UnityEngine::Rect rect, ::StringW text, ::UnityW<::UnityEngine::Font> font, ::UnityEngine::UIElements::FontDefinition fontDefinition, int32_t fontSize,
    ::UnityEngine::UIElements::Length letterSpacing, ::UnityEngine::UIElements::Length wordSpacing, ::UnityEngine::UIElements::Length paragraphSpacing, ::UnityEngine::FontStyle fontStyle,
    ::UnityEngine::Color fontColor, ::UnityEngine::TextAnchor anchor, bool wordWrap, float_t wordWrapWidth, bool richText, ::UnityEngine::Color playmodeTintColor,
    ::UnityEngine::UIElements::TextOverflow textOverflow, ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition, ::UnityEngine::UIElements::OverflowInternal overflow,
    ::UnityEngine::UIElements::IPanel* panel) noexcept {
  this->rect = rect;
  this->text = text;
  this->font = font;
  this->fontDefinition = fontDefinition;
  this->fontSize = fontSize;
  this->letterSpacing = letterSpacing;
  this->wordSpacing = wordSpacing;
  this->paragraphSpacing = paragraphSpacing;
  this->fontStyle = fontStyle;
  this->fontColor = fontColor;
  this->anchor = anchor;
  this->wordWrap = wordWrap;
  this->wordWrapWidth = wordWrapWidth;
  this->richText = richText;
  this->playmodeTintColor = playmodeTintColor;
  this->textOverflow = textOverflow;
  this->textOverflowPosition = textOverflowPosition;
  this->overflow = overflow;
  this->panel = panel;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams::__MeshGenerationContextUtils__TextParams() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.Rectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::UIElements::MeshGenerationContext*, ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams)>(&::UnityEngine::UIElements::MeshGenerationContextUtils::Rectangle)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2f875e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "Rectangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.Text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::MeshGenerationContext*, ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams, ::UnityEngine::UIElements::ITextHandle*, float_t)>(
        &::UnityEngine::UIElements::MeshGenerationContextUtils::Text)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2f876e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "Text", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.ConvertBorderRadiusPercentToPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::UIElements::Length)>(
    &::UnityEngine::UIElements::MeshGenerationContextUtils::ConvertBorderRadiusPercentToPoints)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2f8781c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                                                 "ConvertBorderRadiusPercentToPoints", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.GetVisualElementRadii
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>)>(
        &::UnityEngine::UIElements::MeshGenerationContextUtils::GetVisualElementRadii)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x2f87858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "GetVisualElementRadii", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshGenerationContextUtils.AdjustBackgroundSizeForBorders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ByRef<::UnityEngine::Rect>)>(
    &::UnityEngine::UIElements::MeshGenerationContextUtils::AdjustBackgroundSizeForBorders)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x2f87af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                                                 "AdjustBackgroundSizeForBorders", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::MeshGenerationContextUtils::Rectangle(::UnityEngine::UIElements::MeshGenerationContext* mgc,
                                                                           ::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams rectParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "Rectangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__RectangleParams>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mgc, rectParams);
}
inline void UnityEngine::UIElements::MeshGenerationContextUtils::Text(::UnityEngine::UIElements::MeshGenerationContext* mgc,
                                                                      ::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle* handle,
                                                                      float_t pixelsPerPoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "Text", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__MeshGenerationContextUtils__TextParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ITextHandle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mgc, textParams, handle, pixelsPerPoint);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::MeshGenerationContextUtils::ConvertBorderRadiusPercentToPoints(::UnityEngine::Vector2 borderRectSize, ::UnityEngine::UIElements::Length length) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(),
                                               "ConvertBorderRadiusPercentToPoints", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::Length>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, borderRectSize, length);
}
inline void UnityEngine::UIElements::MeshGenerationContextUtils::GetVisualElementRadii(::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::Vector2> topLeft,
                                                                                       ByRef<::UnityEngine::Vector2> bottomLeft, ByRef<::UnityEngine::Vector2> topRight,
                                                                                       ByRef<::UnityEngine::Vector2> bottomRight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "GetVisualElementRadii", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ve, topLeft, bottomLeft, topRight, bottomRight);
}
inline void UnityEngine::UIElements::MeshGenerationContextUtils::AdjustBackgroundSizeForBorders(::UnityEngine::UIElements::VisualElement* visualElement, ByRef<::UnityEngine::Rect> rect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshGenerationContextUtils*>::get(), "AdjustBackgroundSizeForBorders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, visualElement, rect);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshGenerationContextUtils::MeshGenerationContextUtils() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
