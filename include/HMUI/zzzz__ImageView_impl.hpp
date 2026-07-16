#pragma once
// IWYU pragma private; include "HMUI/ImageView.hpp"
#include "HMUI/zzzz__ImageViewBase_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__IComponentRefresher_def.hpp"
#include "HMUI/zzzz__CurvedCanvasSettingsHelper_def.hpp"
#include "HMUI/zzzz__ImageView_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ImageView_GradientDirection::ImageView_GradientDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ImageView_GradientDirection::ImageView_GradientDirection() {}
constexpr ::HMUI::ImageView_GradientDirection HMUI::ImageView_GradientDirection::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ImageView_GradientDirection HMUI::ImageView_GradientDirection::Vertical{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::ImageView.get_useScriptableObjectColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ImageView::*)()>(&::HMUI::ImageView::get_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f8084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "get_useScriptableObjectColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.set_useScriptableObjectColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(bool)>(&::HMUI::ImageView::set_useScriptableObjectColors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f808c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "set_useScriptableObjectColors", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HMUI::ImageView::*)()>(&::HMUI::ImageView::get_color)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32f8094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::Color)>(&::HMUI::ImageView::set_color)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f8124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.get_skew
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ImageView::*)()>(&::HMUI::ImageView::get_skew)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f812c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "get_skew", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.get_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ImageView::*)()>(&::HMUI::ImageView::get_gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f8134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 89 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.set_gradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(bool)>(&::HMUI::ImageView::set_gradient)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32f813c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 90 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.get_color0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HMUI::ImageView::*)()>(&::HMUI::ImageView::get_color0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32f8158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 91 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.set_color0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::Color)>(&::HMUI::ImageView::set_color0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32f81ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 92 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.get_color1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::HMUI::ImageView::*)()>(&::HMUI::ImageView::get_color1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32f820c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 93 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.set_color1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::Color)>(&::HMUI::ImageView::set_color1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x32f82a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 94 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)()>(&::HMUI::ImageView::OnEnable)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x32f82c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::UI::VertexHelper*)>(&::HMUI::ImageView::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x32f82fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ::i2c::class_of<::HMUI::ImageView*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.__Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)()>(&::HMUI::ImageView::__Refresh)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32faccc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "__Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GenerateSimpleSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::UI::VertexHelper*, bool, float_t)>(&::HMUI::ImageView::GenerateSimpleSprite)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0x32f8470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                { "GenerateSimpleSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GenerateSlicedSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::UI::VertexHelper*, float_t)>(&::HMUI::ImageView::GenerateSlicedSprite)> {
  constexpr static std::size_t size = 0xe8c;
  constexpr static std::size_t addrs = 0x32f8b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GenerateSlicedSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GenerateTiledSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::UI::VertexHelper*, float_t)>(&::HMUI::ImageView::GenerateTiledSprite)> {
  constexpr static std::size_t size = 0x928;
  constexpr static std::size_t addrs = 0x32f99ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GenerateTiledSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.AddQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Color32, ::ArrayW<::UnityEngine::Vector3>)>(
    &::HMUI::ImageView::AddQuad)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x32fbee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "AddQuad",
                                                                                         {},
                                                                                         { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                           ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.AddQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2,
                                                                ::UnityEngine::Vector2, float_t, float_t)>(&::HMUI::ImageView::AddQuad)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x32fbc44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "AddQuad",
                                                                     {},
                                                                     { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                       ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                       ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.AddQuad
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Vector2,
                                                                ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t, float_t)>(
    &::HMUI::ImageView::AddQuad)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x32fb940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                            { "AddQuad",
                              {},
                              { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.AddQuadWithHorizontalGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Color32,
                                                                ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t, float_t)>(
    &::HMUI::ImageView::AddQuadWithHorizontalGradient)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x32fb20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                             { "AddQuadWithHorizontalGradient",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.AddQuadWithVerticalGradient
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32, ::UnityEngine::Color32,
                                                                ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t, float_t)>(
    &::HMUI::ImageView::AddQuadWithVerticalGradient)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x32fb638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                             { "AddQuadWithVerticalGradient",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                 ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GetAdjustedBorders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Vector4, ::UnityEngine::Rect)>(&::HMUI::ImageView::GetAdjustedBorders)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32fb18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GetAdjustedBorders", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GenerateFilledSprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)(::UnityEngine::UI::VertexHelper*, bool, float_t)>(&::HMUI::ImageView::GenerateFilledSprite)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x32fa314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                { "GenerateFilledSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.RadialCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, float_t, bool, int32_t)>(&::HMUI::ImageView::RadialCut)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x32fbff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "RadialCut",
                                                                                         {},
                                                                                         { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                           ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.RadialCut
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3>, float_t, float_t, bool, int32_t)>(&::HMUI::ImageView::RadialCut)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x32fc128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::ImageView*>(),
            { "RadialCut", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GetNumberOfElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, float_t)>(&::HMUI::ImageView::GetNumberOfElements)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x32fb0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GetNumberOfElements", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView.GetDrawingDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::HMUI::ImageView::*)(bool)>(&::HMUI::ImageView::GetDrawingDimensions)> {
  constexpr static std::size_t size = 0x414;
  constexpr static std::size_t addrs = 0x32facdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GetDrawingDimensions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ImageView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ImageView::*)()>(&::HMUI::ImageView::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32fc518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::ImageView::__cordl_internal_get__useScriptableObjectColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColors;
}
constexpr bool const& HMUI::ImageView::__cordl_internal_get__useScriptableObjectColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useScriptableObjectColors;
}
constexpr void HMUI::ImageView::__cordl_internal_set__useScriptableObjectColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useScriptableObjectColors = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& HMUI::ImageView::__cordl_internal_get__colorSo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSo;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& HMUI::ImageView::__cordl_internal_get__colorSo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSo;
}
constexpr void HMUI::ImageView::__cordl_internal_set__colorSo(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSo = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& HMUI::ImageView::__cordl_internal_get__color0So() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0So;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& HMUI::ImageView::__cordl_internal_get__color0So() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0So;
}
constexpr void HMUI::ImageView::__cordl_internal_set__color0So(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color0So = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& HMUI::ImageView::__cordl_internal_get__color1So() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1So;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& HMUI::ImageView::__cordl_internal_get__color1So() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1So;
}
constexpr void HMUI::ImageView::__cordl_internal_set__color1So(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color1So = value;
}
constexpr float_t& HMUI::ImageView::__cordl_internal_get__skew() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skew;
}
constexpr float_t const& HMUI::ImageView::__cordl_internal_get__skew() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skew;
}
constexpr void HMUI::ImageView::__cordl_internal_set__skew(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____skew = value;
}
constexpr bool& HMUI::ImageView::__cordl_internal_get__gradient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr bool const& HMUI::ImageView::__cordl_internal_get__gradient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradient;
}
constexpr void HMUI::ImageView::__cordl_internal_set__gradient(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradient = value;
}
constexpr ::UnityEngine::Color& HMUI::ImageView::__cordl_internal_get__color0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr ::UnityEngine::Color const& HMUI::ImageView::__cordl_internal_get__color0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color0;
}
constexpr void HMUI::ImageView::__cordl_internal_set__color0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color0 = value;
}
constexpr ::UnityEngine::Color& HMUI::ImageView::__cordl_internal_get__color1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr ::UnityEngine::Color const& HMUI::ImageView::__cordl_internal_get__color1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color1;
}
constexpr void HMUI::ImageView::__cordl_internal_set__color1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color1 = value;
}
constexpr ::HMUI::ImageView_GradientDirection& HMUI::ImageView::__cordl_internal_get__gradientDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradientDirection;
}
constexpr ::HMUI::ImageView_GradientDirection const& HMUI::ImageView::__cordl_internal_get__gradientDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gradientDirection;
}
constexpr void HMUI::ImageView::__cordl_internal_set__gradientDirection(::HMUI::ImageView_GradientDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gradientDirection = value;
}
constexpr bool& HMUI::ImageView::__cordl_internal_get__flipGradientColors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipGradientColors;
}
constexpr bool const& HMUI::ImageView::__cordl_internal_get__flipGradientColors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipGradientColors;
}
constexpr void HMUI::ImageView::__cordl_internal_set__flipGradientColors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipGradientColors = value;
}
constexpr ::HMUI::CurvedCanvasSettingsHelper*& HMUI::ImageView::__cordl_internal_get__curvedCanvasSettingsHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr ::HMUI::CurvedCanvasSettingsHelper* const& HMUI::ImageView::__cordl_internal_get__curvedCanvasSettingsHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvasSettingsHelper;
}
constexpr void HMUI::ImageView::__cordl_internal_set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curvedCanvasSettingsHelper = value;
}
inline void HMUI::ImageView::setStaticF_kVec2Zero(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "kVec2Zero", ::HMUI::ImageView*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 HMUI::ImageView::getStaticF_kVec2Zero() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "kVec2Zero", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_kVec3Zero(::UnityEngine::Vector3 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector3, "kVec3Zero", ::HMUI::ImageView*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 HMUI::ImageView::getStaticF_kVec3Zero() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "kVec3Zero", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_kVec4Zero(::UnityEngine::Vector4 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector4, "kVec4Zero", ::HMUI::ImageView*>(std::forward<::UnityEngine::Vector4>(value));
}
inline ::UnityEngine::Vector4 HMUI::ImageView::getStaticF_kVec4Zero() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector4, "kVec4Zero", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_VertScratch", ::HMUI::ImageView*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> HMUI::ImageView::getStaticF_s_VertScratch() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_VertScratch", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_UVScratch", ::HMUI::ImageView*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> HMUI::ImageView::getStaticF_s_UVScratch() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_UVScratch", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_s_UV1Scratch(::ArrayW<::UnityEngine::Vector2> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2>, "s_UV1Scratch", ::HMUI::ImageView*>(std::forward<::ArrayW<::UnityEngine::Vector2>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2> HMUI::ImageView::getStaticF_s_UV1Scratch() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2>, "s_UV1Scratch", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_s_ColorScratch(::ArrayW<::UnityEngine::Color> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color>, "s_ColorScratch", ::HMUI::ImageView*>(std::forward<::ArrayW<::UnityEngine::Color>>(value));
}
inline ::ArrayW<::UnityEngine::Color> HMUI::ImageView::getStaticF_s_ColorScratch() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color>, "s_ColorScratch", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Xy", ::HMUI::ImageView*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> HMUI::ImageView::getStaticF_s_Xy() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Xy", ::HMUI::ImageView*>();
}
inline void HMUI::ImageView::setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Uv", ::HMUI::ImageView*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> HMUI::ImageView::getStaticF_s_Uv() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Uv", ::HMUI::ImageView*>();
}
inline bool HMUI::ImageView::get_useScriptableObjectColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "get_useScriptableObjectColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ImageView::set_useScriptableObjectColors(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "set_useScriptableObjectColors", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::ImageView::get_color() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HMUI::ImageView::set_color(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t HMUI::ImageView::get_skew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "get_skew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool HMUI::ImageView::get_gradient() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 89 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ImageView::set_gradient(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 90 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::ImageView::get_color0() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 91 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HMUI::ImageView::set_color0(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 92 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color HMUI::ImageView::get_color1() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 93 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void HMUI::ImageView::set_color1(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 94 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ImageView::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ImageView::OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ImageView*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill);
}
inline void HMUI::ImageView::__Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "__Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ImageView::GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float_t curvedUIRadius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                           { "GenerateSimpleSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vh, lPreserveAspect, curvedUIRadius);
}
inline void HMUI::ImageView::GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill, float_t curvedUIRadius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GenerateSlicedSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill, curvedUIRadius);
}
inline void HMUI::ImageView::GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill, float_t curvedUIRadius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GenerateTiledSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill, curvedUIRadius);
}
inline void HMUI::ImageView::AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3> quadPositions, ::UnityEngine::Color32 color,
                                     ::ArrayW<::UnityEngine::Vector3> quadUVs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "AddQuad",
                                                                                       {},
                                                                                       { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                         ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, quadPositions, color, quadUVs);
}
inline void HMUI::ImageView::AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color,
                                     ::UnityEngine::Vector2 uvMin, ::UnityEngine::Vector2 uvMax, float_t elementWidthScale, float_t curvedUIRadius) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "AddQuad",
                                                                   {},
                                                                   { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                     ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                     ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color, uvMin, uvMax, elementWidthScale, curvedUIRadius);
}
inline void HMUI::ImageView::AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color,
                                     ::UnityEngine::Vector2 uv0Min, ::UnityEngine::Vector2 uv0Max, ::UnityEngine::Vector2 uv1Min, ::UnityEngine::Vector2 uv1Max, float_t elementWidthScale,
                                     float_t curvedUIRadius, float_t skewFactor, float_t skewOffset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                          { "AddQuad",
                            {},
                            { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                              ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                              ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius, skewFactor,
                                                   skewOffset);
}
inline void HMUI::ImageView::AddQuadWithHorizontalGradient(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color0,
                                                           ::UnityEngine::Color32 color1, ::UnityEngine::Vector2 uv0Min, ::UnityEngine::Vector2 uv0Max, ::UnityEngine::Vector2 uv1Min,
                                                           ::UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                           { "AddQuadWithHorizontalGradient",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius,
                                                   skewFactor, skewOffset);
}
inline void HMUI::ImageView::AddQuadWithVerticalGradient(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color0,
                                                         ::UnityEngine::Color32 color1, ::UnityEngine::Vector2 uv0Min, ::UnityEngine::Vector2 uv0Max, ::UnityEngine::Vector2 uv1Min,
                                                         ::UnityEngine::Vector2 uv1Max, float_t elementWidthScale, float_t curvedUIRadius, float_t skewFactor, float_t skewOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                           { "AddQuadWithVerticalGradient",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Color32>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color0, color1, uv0Min, uv0Max, uv1Min, uv1Max, elementWidthScale, curvedUIRadius,
                                                   skewFactor, skewOffset);
}
inline ::UnityEngine::Vector4 HMUI::ImageView::GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GetAdjustedBorders", {}, { ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, border, rect);
}
inline void HMUI::ImageView::GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect, float_t curvedUIRadius) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(),
                                                           { "GenerateFilledSprite", {}, { ::i2c::type_of<::UnityEngine::UI::VertexHelper*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill, preserveAspect, curvedUIRadius);
}
inline bool HMUI::ImageView::RadialCut(::ArrayW<::UnityEngine::Vector3> xy, ::ArrayW<::UnityEngine::Vector3> uv, float_t fill, bool invert, int32_t corner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "RadialCut",
                                                                                       {},
                                                                                       { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xy, uv, fill, invert, corner);
}
inline void HMUI::ImageView::RadialCut(::ArrayW<::UnityEngine::Vector3> xy, float_t cos, float_t sin, bool invert, int32_t corner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::ImageView*>(),
          { "RadialCut", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, xy, cos, sin, invert, corner);
}
inline int32_t HMUI::ImageView::GetNumberOfElements(float_t curvedUIRadius, float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GetNumberOfElements", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, curvedUIRadius, width);
}
inline ::UnityEngine::Vector4 HMUI::ImageView::GetDrawingDimensions(bool shouldPreserveAspect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { "GetDrawingDimensions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, shouldPreserveAspect);
}
inline void HMUI::ImageView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ImageView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ImageView* HMUI::ImageView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ImageView*>());
}
/// @brief Convert operator to "::GlobalNamespace::IComponentRefresher"
constexpr HMUI::ImageView::operator ::GlobalNamespace::IComponentRefresher*() noexcept {
  return static_cast<::GlobalNamespace::IComponentRefresher*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IComponentRefresher"
constexpr ::GlobalNamespace::IComponentRefresher* HMUI::ImageView::i___GlobalNamespace__IComponentRefresher() noexcept {
  return static_cast<::GlobalNamespace::IComponentRefresher*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::ImageView::ImageView() {}
