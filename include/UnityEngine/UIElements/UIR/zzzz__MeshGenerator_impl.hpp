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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams (::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::*)()>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::ToNativeParams)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6cdffa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>(), { "ToNativeParams", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams UnityEngine::UIElements::UIR::MeshGenerator_BorderParams::ToNativeParams() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>(), { "ToNativeParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshBuilderNative_NativeBorderParams>(*this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::by_ref<::UnityEngine::Rect>,
                                                                ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustUVsForScaleMode)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x6ce004c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                { "AdjustUVsForScaleMode",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                    ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.AdjustSpriteUVsForScaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode,
                                                                ::by_ref<::UnityEngine::Rect>, ::by_ref<::UnityEngine::Rect>)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustSpriteUVsForScaleMode)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6ce01e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                            { "AdjustSpriteUVsForScaleMode",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(),
                                ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.RectIntersection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::RectIntersection)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6cdf688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                             { "RectIntersection", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ComputeGeomRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(&::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeGeomRect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ce04ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "ComputeGeomRect", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ComputeUVRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Sprite*)>(&::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeUVRect)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6ce05a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "ComputeUVRect", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ApplyPackingRotation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::SpritePackingRotation)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ApplyPackingRotation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6ce0654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                             { "ApplyPackingRotation", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::SpritePackingRotation>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.MakeTextured
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::ScaleMode, ::UnityEngine::Color)>(&::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeTextured)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6ce06a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                             { "MakeTextured",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                                 ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.MakeSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::Sprite*, ::UnityEngine::ScaleMode, ::UnityEngine::Color, bool, ::by_ref<::UnityEngine::Vector4>, bool)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeSprite)> {
  constexpr static std::size_t size = 0x944;
  constexpr static std::size_t addrs = 0x6ce07a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                            { "MakeSprite",
                              {},
                              { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(),
                                ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.MakeVectorTextured
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams (*)(
    ::UnityEngine::Rect, ::UnityEngine::Rect, ::UnityEngine::UIElements::VectorImage*, ::UnityEngine::ScaleMode, ::UnityEngine::Color)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeVectorTextured)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6ce10e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                { "MakeVectorTextured",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>(),
                                                    ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.HasRadius
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::*)(float_t)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasRadius)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ce1170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "HasRadius", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.HasSlices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::*)(float_t)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasSlices)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6cdf63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "HasSlices", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams.ToNativeParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams (::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::*)()>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ToNativeParams)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6cddc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "ToNativeParams", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustUVsForScaleMode(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::Texture* texture,
                                                                                               ::UnityEngine::ScaleMode scaleMode, ::by_ref<::UnityEngine::Rect> rectOut,
                                                                                               ::by_ref<::UnityEngine::Rect> uvOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                              { "AdjustUVsForScaleMode",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                  ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, uv, texture, scaleMode, rectOut, uvOut);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::AdjustSpriteUVsForScaleMode(::UnityEngine::Rect containerRect, ::UnityEngine::Rect srcRect, ::UnityEngine::Rect spriteGeomRect,
                                                                                                     ::UnityEngine::Sprite* sprite, ::UnityEngine::ScaleMode scaleMode,
                                                                                                     ::by_ref<::UnityEngine::Rect> rectOut, ::by_ref<::UnityEngine::Rect> uvOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                          { "AdjustSpriteUVsForScaleMode",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(),
                              ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, containerRect, srcRect, spriteGeomRect, sprite, scaleMode, rectOut, uvOut);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::RectIntersection(::UnityEngine::Rect a, ::UnityEngine::Rect b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                           { "RectIntersection", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeGeomRect(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "ComputeGeomRect", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ComputeUVRect(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "ComputeUVRect", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, sprite);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ApplyPackingRotation(::UnityEngine::Rect uv, ::UnityEngine::SpritePackingRotation rotation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                           { "ApplyPackingRotation", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::SpritePackingRotation>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, uv, rotation);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv,
                                                                                                                                               ::UnityEngine::Texture* texture,
                                                                                                                                               ::UnityEngine::ScaleMode scaleMode,
                                                                                                                                               ::UnityEngine::Color playModeTintColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                           { "MakeTextured",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(),
                                                               ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(nullptr, ___internal_method, rect, uv, texture, scaleMode, playModeTintColor);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams
UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeSprite(::UnityEngine::Rect containerRect, ::UnityEngine::Rect subRect, ::UnityEngine::Sprite* sprite,
                                                                        ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color playModeTintColor, bool hasRadius,
                                                                        ::by_ref<::UnityEngine::Vector4> slices, bool useForRepeat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                          { "MakeSprite",
                            {},
                            { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::ScaleMode>(),
                              ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(nullptr, ___internal_method, containerRect, subRect, sprite, scaleMode, playModeTintColor,
                                                                                                            hasRadius, slices, useForRepeat);
}
inline ::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams
UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::MakeVectorTextured(::UnityEngine::Rect rect, ::UnityEngine::Rect uv, ::UnityEngine::UIElements::VectorImage* vectorImage,
                                                                                ::UnityEngine::ScaleMode scaleMode, ::UnityEngine::Color playModeTintColor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(),
                                                           { "MakeVectorTextured",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>(),
                                                               ::i2c::type_of<::UnityEngine::ScaleMode>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(nullptr, ___internal_method, rect, uv, vectorImage, scaleMode, playModeTintColor);
}
inline bool UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasRadius(float_t epsilon) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "HasRadius", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, epsilon);
}
inline bool UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::HasSlices(float_t epsilon) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "HasSlices", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, epsilon);
}
inline ::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams::ToNativeParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_RectangleParams>(), { "ToNativeParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>(*this, ___internal_method);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(int32_t)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::Execute)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x6ce11e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawBorder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(::UnityEngine::UIElements::UnsafeMeshGenerationNode,
                                                                                                                               ::by_ref<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawBorder)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6ce1354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
            { "DrawBorder", {}, { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, ::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawRectangle)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x6ce1d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                                { "DrawRectangle",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, ::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawSprite)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x6ce19c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                                { "DrawSprite",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                    ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob.DrawVectorImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::*)(
    ::UnityEngine::UIElements::UnsafeMeshGenerationNode, ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>, ::UnityEngine::UIElements::VectorImage*)>(
    &::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawVectorImage)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x6ce15c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                                                                           { "DrawVectorImage",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::Execute(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(), { "Execute", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, i);
}
template <typename T> inline T UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::ExtractHandle(::System::IntPtr handlePtr) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                                                                              { "ExtractHandle", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IntPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, handlePtr);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawBorder(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                    ::by_ref<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams> borderParams) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
          { "DrawBorder", {}, { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::UIR::MeshGenerator_BorderParams>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, borderParams);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawRectangle(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                       ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams,
                                                                                       ::UnityEngine::Texture* tex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                              { "DrawRectangle",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, rectParams, tex);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawSprite(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                    ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams, ::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                              { "DrawSprite",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                                  ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, rectParams, sprite);
}
inline void UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::DrawVectorImage(::UnityEngine::UIElements::UnsafeMeshGenerationNode node,
                                                                                         ::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams> rectParams,
                                                                                         ::UnityEngine::UIElements::VectorImage* vi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob>(),
                                       { "DrawVectorImage",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::UIElements::UnsafeMeshGenerationNode>(),
                                           ::i2c::type_of<::by_ref<::UnityEngine::UIElements::MeshBuilderNative_NativeRectParams>>(), ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, node, rectParams, vi);
}
/// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
constexpr UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::operator ::Unity::Jobs::IJobParallelFor*() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJobParallelFor"
constexpr ::Unity::Jobs::IJobParallelFor* UnityEngine::UIElements::UIR::MeshGenerator_TessellationJob::i___Unity__Jobs__IJobParallelFor() {
  return static_cast<::Unity::Jobs::IJobParallelFor*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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
