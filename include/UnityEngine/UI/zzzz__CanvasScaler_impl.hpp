#pragma once
// IWYU pragma private; include "UnityEngine\UI\CanvasScaler.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode::CanvasScaler_ScaleMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode::CanvasScaler_ScaleMode() {}
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode UnityEngine::UI::CanvasScaler_ScaleMode::ConstantPixelSize{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode UnityEngine::UI::CanvasScaler_ScaleMode::ScaleWithScreenSize{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode UnityEngine::UI::CanvasScaler_ScaleMode::ConstantPhysicalSize{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode::CanvasScaler_ScreenMatchMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode::CanvasScaler_ScreenMatchMode() {}
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode UnityEngine::UI::CanvasScaler_ScreenMatchMode::MatchWidthOrHeight{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode UnityEngine::UI::CanvasScaler_ScreenMatchMode::Expand{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode UnityEngine::UI::CanvasScaler_ScreenMatchMode::Shrink{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::CanvasScaler_Unit::CanvasScaler_Unit(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasScaler_Unit::CanvasScaler_Unit() {}
constexpr ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler_Unit::Centimeters{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler_Unit::Millimeters{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler_Unit::Inches{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler_Unit::Points{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler_Unit::Picas{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_uiScaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::CanvasScaler_ScaleMode (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_uiScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8ad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_uiScaleMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_uiScaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::UI::CanvasScaler_ScaleMode)>(&::UnityEngine::UI::CanvasScaler::set_uiScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_uiScaleMode", {}, { ::i2c::type_of<::UnityEngine::UI::CanvasScaler_ScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_referencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_referencePixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_referencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_referencePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_scaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_scaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_scaleFactor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_scaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_scaleFactor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6df8b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_scaleFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_referenceResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_referenceResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_referenceResolution", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_referenceResolution
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::CanvasScaler::set_referenceResolution)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6df8b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_referenceResolution", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_screenMatchMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::CanvasScaler_ScreenMatchMode (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_screenMatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_screenMatchMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_screenMatchMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::UI::CanvasScaler_ScreenMatchMode)>(
    &::UnityEngine::UI::CanvasScaler::set_screenMatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_screenMatchMode", {}, { ::i2c::type_of<::UnityEngine::UI::CanvasScaler_ScreenMatchMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_matchWidthOrHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_matchWidthOrHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_matchWidthOrHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_matchWidthOrHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_matchWidthOrHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_matchWidthOrHeight", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_physicalUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UI::CanvasScaler_Unit (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_physicalUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_physicalUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_physicalUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::UI::CanvasScaler_Unit)>(&::UnityEngine::UI::CanvasScaler::set_physicalUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_physicalUnit", {}, { ::i2c::type_of<::UnityEngine::UI::CanvasScaler_Unit>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_fallbackScreenDPI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_fallbackScreenDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_fallbackScreenDPI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_fallbackScreenDPI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_fallbackScreenDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_fallbackScreenDPI", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_defaultSpriteDPI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_defaultSpriteDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_defaultSpriteDPI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_defaultSpriteDPI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_defaultSpriteDPI)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6df8bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_defaultSpriteDPI", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_dynamicPixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_dynamicPixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_dynamicPixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_dynamicPixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_dynamicPixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6df8bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_dynamicPixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6df8bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::OnEnable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6df8c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.Canvas_preWillRenderCanvases
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::Canvas_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6df8d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "Canvas_preWillRenderCanvases", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::OnDisable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6df8d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::Handle)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6df8e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleWorldCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleWorldCanvas)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6df8f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleConstantPixelSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleConstantPixelSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6df8f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleScaleWithScreenSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleScaleWithScreenSize)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6df8f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleConstantPhysicalSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleConstantPhysicalSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6df91ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.SetScaleFactor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::SetScaleFactor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6df8dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "SetScaleFactor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.SetReferencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::SetReferencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6df8e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "SetReferencePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_UiScaleMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UiScaleMode;
}
constexpr ::UnityEngine::UI::CanvasScaler_ScaleMode const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_UiScaleMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UiScaleMode;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_UiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UiScaleMode = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ReferencePixelsPerUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferencePixelsPerUnit;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ReferencePixelsPerUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferencePixelsPerUnit;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_ReferencePixelsPerUnit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReferencePixelsPerUnit = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ScaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleFactor;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ScaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleFactor;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_ScaleFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaleFactor = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ReferenceResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceResolution;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ReferenceResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReferenceResolution;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_ReferenceResolution(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReferenceResolution = value;
}
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ScreenMatchMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenMatchMode;
}
constexpr ::UnityEngine::UI::CanvasScaler_ScreenMatchMode const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_ScreenMatchMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenMatchMode;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_ScreenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScreenMatchMode = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_MatchWidthOrHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchWidthOrHeight;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_MatchWidthOrHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MatchWidthOrHeight;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_MatchWidthOrHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MatchWidthOrHeight = value;
}
constexpr ::UnityEngine::UI::CanvasScaler_Unit& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PhysicalUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalUnit;
}
constexpr ::UnityEngine::UI::CanvasScaler_Unit const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PhysicalUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PhysicalUnit;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_PhysicalUnit(::UnityEngine::UI::CanvasScaler_Unit value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PhysicalUnit = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_FallbackScreenDPI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackScreenDPI;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_FallbackScreenDPI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FallbackScreenDPI;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_FallbackScreenDPI(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FallbackScreenDPI = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_DefaultSpriteDPI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteDPI;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_DefaultSpriteDPI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultSpriteDPI;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_DefaultSpriteDPI(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DefaultSpriteDPI = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_DynamicPixelsPerUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DynamicPixelsPerUnit;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_DynamicPixelsPerUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DynamicPixelsPerUnit;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_DynamicPixelsPerUnit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DynamicPixelsPerUnit = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Canvas = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PrevScaleFactor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevScaleFactor;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PrevScaleFactor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevScaleFactor;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_PrevScaleFactor(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevScaleFactor = value;
}
constexpr float_t& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PrevReferencePixelsPerUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevReferencePixelsPerUnit;
}
constexpr float_t const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PrevReferencePixelsPerUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PrevReferencePixelsPerUnit;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_PrevReferencePixelsPerUnit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PrevReferencePixelsPerUnit = value;
}
constexpr bool& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PresetInfoIsWorld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PresetInfoIsWorld;
}
constexpr bool const& UnityEngine::UI::CanvasScaler::__cordl_internal_get_m_PresetInfoIsWorld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PresetInfoIsWorld;
}
constexpr void UnityEngine::UI::CanvasScaler::__cordl_internal_set_m_PresetInfoIsWorld(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PresetInfoIsWorld = value;
}
inline ::UnityEngine::UI::CanvasScaler_ScaleMode UnityEngine::UI::CanvasScaler::get_uiScaleMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_uiScaleMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasScaler_ScaleMode>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_uiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_uiScaleMode", {}, { ::i2c::type_of<::UnityEngine::UI::CanvasScaler_ScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_referencePixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_referencePixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_referencePixelsPerUnit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_referencePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_scaleFactor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_scaleFactor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_scaleFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_scaleFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::CanvasScaler::get_referenceResolution() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_referenceResolution", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_referenceResolution(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_referenceResolution", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::CanvasScaler_ScreenMatchMode UnityEngine::UI::CanvasScaler::get_screenMatchMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_screenMatchMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasScaler_ScreenMatchMode>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_screenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_screenMatchMode", {}, { ::i2c::type_of<::UnityEngine::UI::CanvasScaler_ScreenMatchMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_matchWidthOrHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_matchWidthOrHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_matchWidthOrHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_matchWidthOrHeight", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler::get_physicalUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_physicalUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasScaler_Unit>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_physicalUnit(::UnityEngine::UI::CanvasScaler_Unit value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_physicalUnit", {}, { ::i2c::type_of<::UnityEngine::UI::CanvasScaler_Unit>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_fallbackScreenDPI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_fallbackScreenDPI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_fallbackScreenDPI(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_fallbackScreenDPI", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_defaultSpriteDPI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_defaultSpriteDPI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_defaultSpriteDPI(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_defaultSpriteDPI", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_dynamicPixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "get_dynamicPixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_dynamicPixelsPerUnit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "set_dynamicPixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UI::CanvasScaler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::Canvas_preWillRenderCanvases() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "Canvas_preWillRenderCanvases", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::Handle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleWorldCanvas() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleConstantPixelSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleScaleWithScreenSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleConstantPhysicalSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::SetScaleFactor(float_t scaleFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "SetScaleFactor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaleFactor);
}
inline void UnityEngine::UI::CanvasScaler::SetReferencePixelsPerUnit(float_t referencePixelsPerUnit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::CanvasScaler*>(), { "SetReferencePixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, referencePixelsPerUnit);
}
inline ::UnityEngine::UI::CanvasScaler* UnityEngine::UI::CanvasScaler::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::CanvasScaler*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasScaler::CanvasScaler() {}
