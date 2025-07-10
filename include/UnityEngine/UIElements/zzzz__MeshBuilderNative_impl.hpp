#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MeshBuilderNative.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshWriteDataInterface_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "isValid", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pageAndID", ty: "::UnityEngine::Color32", modifiers: "", def_value: Some("{}")
// }]
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage::MeshBuilderNative_NativeColorPage(int32_t isValid, ::UnityEngine::Color32 pageAndID) noexcept {
  this->isValid = isValid;
  this->pageAndID = pageAndID;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage::MeshBuilderNative_NativeColorPage() {}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "topColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColor", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bottomColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftWidth", ty: "float_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "topWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bottomWidth", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") },
// CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftColorPage", ty:
// "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "topColorPage", ty:
// "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightColorPage", ty:
// "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomColorPage", ty:
// "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams::MeshBuilderNative_NativeBorderParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Color leftColor, ::UnityEngine::Color topColor, ::UnityEngine::Color rightColor, ::UnityEngine::Color bottomColor, float_t leftWidth, float_t topWidth,
    float_t rightWidth, float_t bottomWidth, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius,
    ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage leftColorPage, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage topColorPage,
    ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage rightColorPage, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage bottomColorPage) noexcept {
  this->rect = rect;
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
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams::MeshBuilderNative_NativeBorderParams() {}
// Ctor Parameters [CppParam { name: "rect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "subRect", ty: "::UnityEngine::Rect", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "uvRegion", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomLeftRadius", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureSize", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "texturePixelsPerPoint", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftSlice", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "rectInset", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams::MeshBuilderNative_NativeRectParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Rect subRect, ::UnityEngine::Rect uv, ::UnityEngine::Rect uvRegion, ::UnityEngine::Color color, ::UnityEngine::ScaleMode scaleMode,
    ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius, ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Vector2 contentSize,
    ::UnityEngine::Vector2 textureSize, float_t texturePixelsPerPoint, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice, float_t sliceScale,
    ::UnityEngine::Vector4 rectInset, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage) noexcept {
  this->rect = rect;
  this->subRect = subRect;
  this->uv = uv;
  this->uvRegion = uvRegion;
  this->color = color;
  this->scaleMode = scaleMode;
  this->topLeftRadius = topLeftRadius;
  this->topRightRadius = topRightRadius;
  this->bottomRightRadius = bottomRightRadius;
  this->bottomLeftRadius = bottomLeftRadius;
  this->contentSize = contentSize;
  this->textureSize = textureSize;
  this->texturePixelsPerPoint = texturePixelsPerPoint;
  this->leftSlice = leftSlice;
  this->topSlice = topSlice;
  this->rightSlice = rightSlice;
  this->bottomSlice = bottomSlice;
  this->sliceScale = sliceScale;
  this->rectInset = rectInset;
  this->colorPage = colorPage;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams::MeshBuilderNative_NativeRectParams() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, float_t)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeBorder)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4a422c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeBorder", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeSolidRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, float_t)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4a42390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeSolidRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeTexturedRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, float_t)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4a4245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeTexturedRect", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphicsStretchBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Rect,
    ::UnityEngine::ScaleMode, ::UnityEngine::Color, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage, int32_t, ::ByRef<int32_t>, ::ByRef<int32_t>)>(
    &::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4a42528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphicsStretchBackground", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphics9SliceBackground
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Vector4,
    ::UnityEngine::Color, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage, int32_t)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4a426cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphics9SliceBackground", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeBorder_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>, float_t, ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
        &::UnityEngine::UIElements::MeshBuilderNative::MakeBorder_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a4233c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeBorder_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeSolidRect_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, float_t, ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
        &::UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a42408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeSolidRect_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeTexturedRect_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, float_t, ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
        &::UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4a424d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeTexturedRect_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphicsStretchBackground_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, float_t, float_t, ::ByRef<::UnityEngine::Rect>,
    ::ByRef<::UnityEngine::Rect>, ::UnityEngine::ScaleMode, ::ByRef<::UnityEngine::Color>, ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>, int32_t, ::ByRef<int32_t>,
    ::ByRef<int32_t>, ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground_Injected)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4a42608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphicsStretchBackground_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 13>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphics9SliceBackground_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>, ::ArrayW<uint16_t, ::Array<uint16_t>*>, float_t, float_t,
                         ::ByRef<::UnityEngine::Rect>, ::ByRef<::UnityEngine::Vector4>, ::ByRef<::UnityEngine::Color>, ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>, int32_t,
                         ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4a42784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphics9SliceBackground_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeBorder(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams borderParams,
                                                                                                                float_t posZ) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeBorder", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface, false>(nullptr, ___internal_method, borderParams, posZ);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams,
                                                                                                                   float_t posZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeSolidRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface, false>(nullptr, ___internal_method, rectParams, posZ);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams,
                                                                                                                      float_t posZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeTexturedRect", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface, false>(nullptr, ___internal_method, rectParams, posZ);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight,
    ::UnityEngine::Rect targetRect, ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color tint, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage,
    int32_t settingIndexOffset, ::ByRef<int32_t> finalVertexCount, ::ByRef<int32_t> finalIndexCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphicsStretchBackground", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface, false>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV,
                                                                                                       scaleMode, tint, colorPage, settingIndexOffset, finalVertexCount, finalIndexCount);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight,
    ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB, ::UnityEngine::Color tint, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage, int32_t settingIndexOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphics9SliceBackground", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface, false>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB,
                                                                                                       tint, colorPage, settingIndexOffset);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeBorder_Injected(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams> borderParams, float_t posZ,
                                                                            ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeBorder_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, borderParams, posZ, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect_Injected(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, float_t posZ,
                                                                               ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeSolidRect_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect_Injected(::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, float_t posZ,
                                                                                  ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeTexturedRect_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, rectParams, posZ, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground_Injected(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight,
    ::ByRef<::UnityEngine::Rect> targetRect, ::ByRef<::UnityEngine::Rect> sourceUV, ::UnityEngine::ScaleMode scaleMode, ::ByRef<::UnityEngine::Color> tint,
    ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage> colorPage, int32_t settingIndexOffset, ::ByRef<int32_t> finalVertexCount, ::ByRef<int32_t> finalIndexCount,
    ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphicsStretchBackground_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 13>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScaleMode>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV, scaleMode, tint, colorPage,
                                                          settingIndexOffset, finalVertexCount, finalIndexCount, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground_Injected(
    ::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*> svgVertices, ::ArrayW<uint16_t, ::Array<uint16_t>*> svgIndices, float_t svgWidth, float_t svgHeight,
    ::ByRef<::UnityEngine::Rect> targetRect, ::ByRef<::UnityEngine::Vector4> sliceLTRB, ::ByRef<::UnityEngine::Color> tint,
    ::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage> colorPage, int32_t settingIndexOffset, ::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::MeshBuilderNative*>::get(), "MakeVectorGraphics9SliceBackground_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::UIElements::Vertex, ::Array<::UnityEngine::UIElements::Vertex>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint16_t, ::Array<uint16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector4>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Color>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::UIElements::MeshWriteDataInterface>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB, tint, colorPage, settingIndexOffset, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshBuilderNative::MeshBuilderNative() {}
