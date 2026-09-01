#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\MeshBuilderNative.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MeshBuilderNative_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
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
// Some("{}") }, CppParam { name: "uv", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") },
// CppParam { name: "scaleMode", ty: "::UnityEngine::ScaleMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeatInstanceList", ty: "::System::IntPtr", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "backgroundRepeatInstanceListStartIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeatInstanceListEndIndex",
// ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "topLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "topRightRadius", ty:
// "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottomRightRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bottomLeftRadius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundRepeatRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") },
// CppParam { name: "texture", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "sprite", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "vectorImage", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteTexture", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "spriteVertices", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteUVs", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "spriteTriangles", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "spriteGeomRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: Some("{}") },
// CppParam { name: "contentSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "textureSize", ty: "::UnityEngine::Vector2", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "texturePixelsPerPoint", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "topSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "bottomSlice", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "sliceScale", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rectInset", ty:
// "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}") }, CppParam { name: "colorPage", ty: "::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "meshFlags", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams::MeshBuilderNative_NativeRectParams(
    ::UnityEngine::Rect rect, ::UnityEngine::Rect subRect, ::UnityEngine::Rect uv, ::UnityEngine::Color color, ::UnityEngine::ScaleMode scaleMode, ::System::IntPtr backgroundRepeatInstanceList,
    int32_t backgroundRepeatInstanceListStartIndex, int32_t backgroundRepeatInstanceListEndIndex, ::UnityEngine::Vector2 topLeftRadius, ::UnityEngine::Vector2 topRightRadius,
    ::UnityEngine::Vector2 bottomRightRadius, ::UnityEngine::Vector2 bottomLeftRadius, ::UnityEngine::Rect backgroundRepeatRect, ::System::IntPtr texture, ::System::IntPtr sprite,
    ::System::IntPtr vectorImage, ::System::IntPtr spriteTexture, ::System::IntPtr spriteVertices, ::System::IntPtr spriteUVs, ::System::IntPtr spriteTriangles, ::UnityEngine::Rect spriteGeomRect,
    ::UnityEngine::Vector2 contentSize, ::UnityEngine::Vector2 textureSize, float_t texturePixelsPerPoint, int32_t leftSlice, int32_t topSlice, int32_t rightSlice, int32_t bottomSlice,
    float_t sliceScale, ::UnityEngine::Vector4 rectInset, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage, int32_t meshFlags) noexcept {
  this->rect = rect;
  this->subRect = subRect;
  this->uv = uv;
  this->color = color;
  this->scaleMode = scaleMode;
  this->backgroundRepeatInstanceList = backgroundRepeatInstanceList;
  this->backgroundRepeatInstanceListStartIndex = backgroundRepeatInstanceListStartIndex;
  this->backgroundRepeatInstanceListEndIndex = backgroundRepeatInstanceListEndIndex;
  this->topLeftRadius = topLeftRadius;
  this->topRightRadius = topRightRadius;
  this->bottomRightRadius = bottomRightRadius;
  this->bottomLeftRadius = bottomLeftRadius;
  this->backgroundRepeatRect = backgroundRepeatRect;
  this->texture = texture;
  this->sprite = sprite;
  this->vectorImage = vectorImage;
  this->spriteTexture = spriteTexture;
  this->spriteVertices = spriteVertices;
  this->spriteUVs = spriteUVs;
  this->spriteTriangles = spriteTriangles;
  this->spriteGeomRect = spriteGeomRect;
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
  this->meshFlags = meshFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams::MeshBuilderNative_NativeRectParams() {}
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeBorder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams, float_t)>(
    &::UnityEngine::UIElements::MeshBuilderNative::MakeBorder)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6db6b58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                             { "MakeBorder", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeSolidRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, float_t)>(
    &::UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6db6c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                             { "MakeSolidRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeTexturedRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams, float_t)>(
    &::UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6db6cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                { "MakeTexturedRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphicsStretchBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex>, ::ArrayW<uint16_t>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::ScaleMode, ::UnityEngine::Color,
    ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6db6dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                { "MakeVectorGraphicsStretchBackground",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::ScaleMode>(),
                                                    ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphics9SliceBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshWriteDataInterface (*)(
    ::ArrayW<::UnityEngine::UIElements::Vertex>, ::ArrayW<uint16_t>, float_t, float_t, ::UnityEngine::Rect, ::UnityEngine::Vector4, ::UnityEngine::Color,
    ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6db7004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                             { "MakeVectorGraphics9SliceBackground",
                                                               {},
                                                               { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                                 ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeBorder_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>, float_t,
                                                                ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeBorder_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6db6bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                             { "MakeBorder_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeSolidRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, float_t,
                                                                ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(&::UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6db6c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                             { "MakeSolidRect_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeTexturedRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, float_t, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
        &::UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6db6d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                             { "MakeTexturedRect_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphicsStretchBackground_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, float_t,
                                                                ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::ScaleMode, ::by_ref<::UnityEngine::Color>,
                                                                ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
    &::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground_Injected)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6db6f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                { "MakeVectorGraphicsStretchBackground_Injected",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::MeshBuilderNative.MakeVectorGraphics9SliceBackground_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t, float_t,
                                                                ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Vector4>, ::by_ref<::UnityEngine::Color>,
                                                                ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>)>(
    &::UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6db719c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                         { "MakeVectorGraphics9SliceBackground_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>(),
                                             ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeBorder(::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams borderParams,
                                                                                                                float_t posZ) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                           { "MakeBorder", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, borderParams, posZ);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams,
                                                                                                                   float_t posZ) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                           { "MakeSolidRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, rectParams, posZ);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect(::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams rectParams,
                                                                                                                      float_t posZ) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                              { "MakeTexturedRect", {}, { ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, rectParams, posZ);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface
UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground(::ArrayW<::UnityEngine::UIElements::Vertex> svgVertices, ::ArrayW<uint16_t> svgIndices, float_t svgWidth,
                                                                                float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Rect sourceUV, ::UnityEngine::ScaleMode scaleMode,
                                                                                ::UnityEngine::Color tint, ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                              { "MakeVectorGraphicsStretchBackground",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::ScaleMode>(),
                                                  ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV,
                                                                                                scaleMode, tint, colorPage);
}
inline ::UnityEngine::UIElements::MeshWriteDataInterface
UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground(::ArrayW<::UnityEngine::UIElements::Vertex> svgVertices, ::ArrayW<uint16_t> svgIndices, float_t svgWidth,
                                                                               float_t svgHeight, ::UnityEngine::Rect targetRect, ::UnityEngine::Vector4 sliceLTRB, ::UnityEngine::Color tint,
                                                                               ::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage colorPage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                           { "MakeVectorGraphics9SliceBackground",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Vertex>>(), ::i2c::type_of<::ArrayW<uint16_t>>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector4>(),
                                                               ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshWriteDataInterface>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB, tint,
                                                                                                colorPage);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeBorder_Injected(::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams> borderParams, float_t posZ,
                                                                            ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                           { "MakeBorder_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, borderParams, posZ, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeSolidRect_Injected(::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, float_t posZ,
                                                                               ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                           { "MakeSolidRect_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectParams, posZ, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeTexturedRect_Injected(::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, float_t posZ,
                                                                                  ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                                           { "MakeTexturedRect_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectParams, posZ, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphicsStretchBackground_Injected(
    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> svgVertices, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> svgIndices, float_t svgWidth, float_t svgHeight,
    ::by_ref<::UnityEngine::Rect> targetRect, ::by_ref<::UnityEngine::Rect> sourceUV, ::UnityEngine::ScaleMode scaleMode, ::by_ref<::UnityEngine::Color> tint,
    ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage> colorPage, ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                              { "MakeVectorGraphicsStretchBackground_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sourceUV, scaleMode, tint, colorPage, ret);
}
inline void UnityEngine::UIElements::MeshBuilderNative::MakeVectorGraphics9SliceBackground_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> svgVertices,
                                                                                                    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> svgIndices, float_t svgWidth,
                                                                                                    float_t svgHeight, ::by_ref<::UnityEngine::Rect> targetRect,
                                                                                                    ::by_ref<::UnityEngine::Vector4> sliceLTRB, ::by_ref<::UnityEngine::Color> tint,
                                                                                                    ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage> colorPage,
                                                                                                    ::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MeshBuilderNative*>(),
                                       { "MakeVectorGraphics9SliceBackground_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeColorPage>>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshWriteDataInterface>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, svgVertices, svgIndices, svgWidth, svgHeight, targetRect, sliceLTRB, tint, colorPage, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::MeshBuilderNative::MeshBuilderNative() {}
