#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/MeshGenerator.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundPosition_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundRepeat_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BackgroundSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ColorPage_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TempMeshAllocator_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__MeshGenerator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Jobs/zzzz__IJobParallelFor_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativePagedList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/UIElements/zzzz__UnsafeMeshGenerationNode_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__SpritePackingRotation_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_RepeatRectUV::MeshGenerator_RepeatRectUV(::UnityEngine::Rect rect, ::UnityEngine::Rect uv) noexcept {
  this->rect = rect;
  this->uv = uv;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_RepeatRectUV::MeshGenerator_RepeatRectUV() {}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_BackgroundRepeatInstance::MeshGenerator_BackgroundRepeatInstance(::UnityEngine::Rect rect, ::UnityEngine::Rect backgroundRepeatRect,
                                                                                                                         ::UnityEngine::Rect uv) noexcept {
  this->rect = rect;
  this->backgroundRepeatRect = backgroundRepeatRect;
  this->uv = uv;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_BackgroundRepeatInstance::MeshGenerator_BackgroundRepeatInstance() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams.ToNativeParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams (
    ::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::*)()>(&::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::ToNativeParams)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b17c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>::get(), "ToNativeParams",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::ToNativeParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>::get(),
                                                                             "ToNativeParams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "leftColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColorPage", ty:
// "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "bottomColorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::MeshGenerator_BorderParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor, ::UnityEngine::Color bottomColor,
    float_t leftWidth, float_t topWidth, float_t rightWidth, float_t bottomWidth, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius,
    ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::UIElements::ColorPage leftColorPage, ::UnityEngine::UIElements::ColorPage topColorPage, ::UnityEngine::UIElements::ColorPage rightColorPage,
    ::UnityEngine::UIElements::ColorPage bottomColorPage) noexcept {
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
  this->leftColorPage = leftColorPage;
  this->topColorPage = topColorPage;
  this->rightColorPage = rightColorPage;
  this->bottomColorPage = bottomColorPage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::MeshGenerator_BorderParams() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.AdjustUVsForScaleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::ByRef<::UnityEngine::Rect>, ::ByRef<::UnityEngine::Rect>)>(
        &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustUVsForScaleMode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6b17d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "AdjustUVsForScaleMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.AdjustSpriteUVsForScaleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::ByRef<::UnityEngine::Rect>, ::ByRef<::UnityEngine::Rect>)>(
        &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustSpriteUVsForScaleMode)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6b17eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "AdjustSpriteUVsForScaleMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.RectIntersection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::RectIntersection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b17350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "RectIntersection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ComputeGeomRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeGeomRect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b181b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ComputeGeomRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ComputeUVRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeUVRect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b18268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ComputeUVRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ApplyPackingRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::SpritePackingRotation)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ApplyPackingRotation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b1831c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ApplyPackingRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpritePackingRotation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.MakeTextured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::UnityEngine::Color)>(&::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeTextured)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6b1836c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "MakeTextured", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.MakeSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::UnityEngine::Color, bool, ::ByRef<::UnityEngine::Vector4>, bool)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeSprite)> {
  constexpr static std::size_t size = 0x944;
  constexpr static std::size_t addrs = 0x6b18468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "MakeSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.MakeVectorTextured
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VectorImage*, ::UnityEngine::ScaleMode, ::UnityEngine::Color)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeVectorTextured)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b18dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "MakeVectorTextured", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.HasRadius
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::*)(float_t)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasRadius)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6b18e38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "HasRadius",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.HasSlices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::*)(float_t)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasSlices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b17304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "HasSlices",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ToNativeParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams (
    ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::*)()>(&::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ToNativeParams)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6b1590c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ToNativeParams",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture* texture,
                                                                                               ::UnityEngine::ScaleMode scaleMode, ::ByRef<::UnityEngine::Rect> rectOut,
                                                                                               ::ByRef<::UnityEngine::Rect> uvOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "AdjustUVsForScaleMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, rectOut, uvOut);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustSpriteUVsForScaleMode(::UnityEngine::Rect containerRect, ::UnityEngine::Rect srcRect, ::UnityEngine::Rect spriteGeomRect,
                                                                                                     ::UnityEngine::Sprite* sprite, ::UnityEngine::ScaleMode scaleMode,
                                                                                                     ::ByRef<::UnityEngine::Rect> rectOut, ::ByRef<::UnityEngine::Rect> uvOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "AdjustSpriteUVsForScaleMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, containerRect, srcRect, spriteGeomRect, sprite, scaleMode, rectOut, uvOut);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::RectIntersection(::UnityEngine::Rect a, ::UnityEngine::Rect b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "RectIntersection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeGeomRect(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ComputeGeomRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeUVRect(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ComputeUVRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ApplyPackingRotation(::UnityEngine::Rect uv, ::UnityEngine::SpritePackingRotation rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ApplyPackingRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SpritePackingRotation>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(nullptr, ___internal_method, uv, rotation);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv,
                                                                                                                                               ::UnityEngine::Texture* texture,
                                                                                                                                               ::UnityEngine::ScaleMode scaleMode,
                                                                                                                                               ::UnityEngine::Color playModeTintColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "MakeTextured", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams, false>(nullptr, ___internal_method, rect, uv, texture, scaleMode, playModeTintColor);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams
UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeSprite(::UnityEngine::Rect containerRect, ::UnityEngine::Rect subRect, ::UnityEngine::Sprite* sprite,
                                                                        ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color playModeTintColor, bool hasRadius,
                                                                        ::ByRef<::UnityEngine::Vector4> slices, bool useForRepeat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "MakeSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams, false>(nullptr, ___internal_method, containerRect, subRect, sprite, scaleMode,
                                                                                                                   playModeTintColor, hasRadius, slices, useForRepeat);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams
UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeVectorTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::UIElements::VectorImage* vectorImage,
                                                                                ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color playModeTintColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "MakeVectorTextured", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams, false>(nullptr, ___internal_method, rect, uv, vectorImage, scaleMode, playModeTintColor);
}
inline bool UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasRadius(float_t epsilon) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "HasRadius",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, epsilon);
}
inline bool UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasSlices(float_t epsilon) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "HasSlices",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, epsilon);
}
inline ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ToNativeParams() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>::get(), "ToNativeParams",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") },
// CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeatInstanceList", ty:
// "::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::MeshGenerator_BackgroundRepeatInstance>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "backgroundRepeatInstanceListStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeatInstanceListEndIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "backgroundPositionX", ty: "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundPositionY", ty:
// "::UnityEngine::UIElements::BackgroundPosition", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeat", ty: "::UnityEngine::UIElements::BackgroundRepeat", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "backgroundSize", ty: "::UnityEngine::UIElements::BackgroundSize", modifiers: "", def_value: Some("{}") }, CppParam { name: "texture", ty:
// "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: Some("{}") }, CppParam { name: "sprite", ty: "::UnityW<::UnityEngine::Sprite>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "vectorImage", ty: "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "playmodeTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightSlice", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sliceScale", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "rectInset", ty: "::UnityEngine::Vector4",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::ColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "meshFlags", ty:
// "::UnityEngine::UIElements::MeshGenerationContext_MeshFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MeshGenerator_RectangleParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Color color, ::UnityEngine::Rect subRect, ::UnityEngine::Rect backgroundRepeatRect,
    ::UnityEngine::UIElements::UIR::NativePagedList_1<::UnityEngine::UIElements::UIR::MeshGenerator_BackgroundRepeatInstance>* backgroundRepeatInstanceList,
    int32_t backgroundRepeatInstanceListStartIndex, int32_t backgroundRepeatInstanceListEndIndex, ::UnityEngine::UIElements::BackgroundPosition backgroundPositionX,
    ::UnityEngine::UIElements::BackgroundPosition backgroundPositionY, ::UnityEngine::UIElements::BackgroundRepeat backgroundRepeat, ::UnityEngine::UIElements::BackgroundSize backgroundSize,
    ::UnityW<::UnityEngine::Texture> texture, ::UnityW<::UnityEngine::Sprite> sprite, ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage, ::UnityEngine::ScaleMode scaleMode,
    ::UnityEngine::Color playmodeTintColor, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius,
    ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Vector2 contentSize, ::UnityEngine::Vector2 textureSize, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice,
    float_t sliceScale, ::UnityEngine::Rect spriteGeomRect, ::UnityEngine::Vector4 rectInset, ::UnityEngine::UIElements::ColorPage colorPage,
    ::UnityEngine::UIElements::MeshGenerationContext_MeshFlags meshFlags) noexcept {
  this->rect = rect;
  this->uv = uv;
  this->color = color;
  this->subRect = subRect;
  this->backgroundRepeatRect = backgroundRepeatRect;
  this->backgroundRepeatInstanceList = backgroundRepeatInstanceList;
  this->backgroundRepeatInstanceListStartIndex = backgroundRepeatInstanceListStartIndex;
  this->backgroundRepeatInstanceListEndIndex = backgroundRepeatInstanceListEndIndex;
  this->backgroundPositionX = backgroundPositionX;
  this->backgroundPositionY = backgroundPositionY;
  this->backgroundRepeat = backgroundRepeat;
  this->backgroundSize = backgroundSize;
  this->texture = texture;
  this->sprite = sprite;
  this->vectorImage = vectorImage;
  this->scaleMode = scaleMode;
  this->playmodeTintColor = playmodeTintColor;
  this->topLeftRadius = topLeftRadius;
  this->topRightRadius = topRightRadius;
  this->bottomRightRadius = bottomRightRadius;
  this->bottomLeftRadius = bottomLeftRadius;
  this->contentSize = contentSize;
  this->textureSize = textureSize;
  this->leftSlice = leftSlice;
  this->topSlice = topSlice;
  this->rightSlice = rightSlice;
  this->bottomSlice = bottomSlice;
  this->sliceScale = sliceScale;
  this->spriteGeomRect = spriteGeomRect;
  this->rectInset = rectInset;
  this->colorPage = colorPage;
  this->meshFlags = meshFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MeshGenerator_RectangleParams() {}
// Ctor Parameters [CppParam { name: "isBorderJob", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "rectParams", ty:
// "::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams", modifiers: "", def_value: Some("{}") }, CppParam { name: "borderParams", ty:
// "::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams", modifiers: "", def_value: Some("{}") }, CppParam { name: "node", ty: "::UnityEngine::UIElements::UnsafeMeshGenerationNode", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJobParameters::MeshGenerator_TessellationJobParameters(bool isBorderJob,
                                                                                                                           ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams,
                                                                                                                           ::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams borderParams,
                                                                                                                           ::UnityEngine::UIElements::UnsafeMeshGenerationNode node) noexcept {
  this->isBorderJob = isBorderJob;
  this->rectParams = rectParams;
  this->borderParams = borderParams;
  this->node = node;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJobParameters::MeshGenerator_TessellationJobParameters() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::Execute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6b18eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "Execute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::ByRef<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawBorder)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6b1901c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawBorder", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawRectangle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, ::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawRectangle)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x6b199d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawRectangle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, ::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawSprite)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x6b1968c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawSprite", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawVectorImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, ::UnityEngine::UIElements::VectorImage*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawVectorImage)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x6b1928c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawVectorImage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::Execute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i);
}
template <typename T> inline T UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::ExtractHandle(::System::IntPtr handlePtr) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "ExtractHandle",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, handlePtr);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawBorder(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                    ::ByRef<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams> borderParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawBorder", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, borderParams);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawRectangle(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                       ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, ::UnityEngine::Texture* tex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawRectangle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, rectParams, tex);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawSprite(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                    ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, ::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawSprite", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, rectParams, sprite);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawVectorImage(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                         ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams,
                                                                                         ::UnityEngine::UIElements::VectorImage* vi) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>::get(), "DrawVectorImage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UnsafeMeshGenerationNode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VectorImage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, rectParams, vi);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "allocator", ty: "::UnityEngine::UIElements::TempMeshAllocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "jobParameters", ty:
// "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJobParameters>", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::MeshGenerator_TessellationJob(
    ::UnityEngine::UIElements::TempMeshAllocator allocator, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJobParameters> jobParameters) noexcept {
  this->allocator = allocator;
  this->jobParameters = jobParameters;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::MeshGenerator_TessellationJob() {}
