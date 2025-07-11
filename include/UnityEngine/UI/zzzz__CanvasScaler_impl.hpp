#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasScaler.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::CanvasScaler_ScaleMode (::UnityEngine::UI::CanvasScaler::*)()>(
    &::UnityEngine::UI::CanvasScaler::get_uiScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab80f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_uiScaleMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_uiScaleMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::UI::CanvasScaler_ScaleMode)>(
    &::UnityEngine::UI::CanvasScaler::set_uiScaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab80f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_uiScaleMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasScaler_ScaleMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_referencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                               "get_referencePixelsPerUnit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_referencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_referencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_referencePixelsPerUnit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_scaleFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_scaleFactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_scaleFactor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_scaleFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_scaleFactor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4ab8118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_scaleFactor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_referenceResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::CanvasScaler::*)()>(
    &::UnityEngine::UI::CanvasScaler::get_referenceResolution)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab812c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                               "get_referenceResolution", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_referenceResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UI::CanvasScaler::set_referenceResolution)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4ab8134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_referenceResolution", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_screenMatchMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::CanvasScaler_ScreenMatchMode (::UnityEngine::UI::CanvasScaler::*)()>(
    &::UnityEngine::UI::CanvasScaler::get_screenMatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab8198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_screenMatchMode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_screenMatchMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::UI::CanvasScaler_ScreenMatchMode)>(
    &::UnityEngine::UI::CanvasScaler::set_screenMatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_screenMatchMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasScaler_ScreenMatchMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_matchWidthOrHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_matchWidthOrHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                               "get_matchWidthOrHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_matchWidthOrHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_matchWidthOrHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_matchWidthOrHeight", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_physicalUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::CanvasScaler_Unit (::UnityEngine::UI::CanvasScaler::*)()>(
    &::UnityEngine::UI::CanvasScaler::get_physicalUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_physicalUnit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_physicalUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(::UnityEngine::UI::CanvasScaler_Unit)>(
    &::UnityEngine::UI::CanvasScaler::set_physicalUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_physicalUnit", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasScaler_Unit>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_fallbackScreenDPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_fallbackScreenDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_fallbackScreenDPI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_fallbackScreenDPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_fallbackScreenDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_fallbackScreenDPI", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_defaultSpriteDPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_defaultSpriteDPI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_defaultSpriteDPI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_defaultSpriteDPI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_defaultSpriteDPI)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4ab81e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_defaultSpriteDPI", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.get_dynamicPixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::get_dynamicPixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                               "get_dynamicPixelsPerUnit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.set_dynamicPixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::set_dynamicPixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4ab81f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_dynamicPixelsPerUnit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4ab8200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4ab8248;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.Canvas_preWillRenderCanvases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::Canvas_preWillRenderCanvases)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4ab830c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                               "Canvas_preWillRenderCanvases", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4ab831c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::Handle)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4ab8444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleWorldCanvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleWorldCanvas)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4ab8540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleConstantPixelSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleConstantPixelSize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4ab8560;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleScaleWithScreenSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleScaleWithScreenSize)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x4ab8580;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.HandleConstantPhysicalSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)()>(&::UnityEngine::UI::CanvasScaler::HandleConstantPhysicalSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4ab87b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.SetScaleFactor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::SetScaleFactor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4ab83c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "SetScaleFactor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::CanvasScaler.SetReferencePixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::CanvasScaler::*)(float_t)>(&::UnityEngine::UI::CanvasScaler::SetReferencePixelsPerUnit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4ab8404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "SetReferencePixelsPerUnit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_uiScaleMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasScaler_ScaleMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_uiScaleMode(::UnityEngine::UI::CanvasScaler_ScaleMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_uiScaleMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasScaler_ScaleMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_referencePixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                             "get_referencePixelsPerUnit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_referencePixelsPerUnit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_referencePixelsPerUnit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_scaleFactor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_scaleFactor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_scaleFactor(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_scaleFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::CanvasScaler::get_referenceResolution() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_referenceResolution",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_referenceResolution(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_referenceResolution", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::CanvasScaler_ScreenMatchMode UnityEngine::UI::CanvasScaler::get_screenMatchMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_screenMatchMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasScaler_ScreenMatchMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_screenMatchMode(::UnityEngine::UI::CanvasScaler_ScreenMatchMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_screenMatchMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasScaler_ScreenMatchMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_matchWidthOrHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_matchWidthOrHeight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_matchWidthOrHeight(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_matchWidthOrHeight",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::CanvasScaler_Unit UnityEngine::UI::CanvasScaler::get_physicalUnit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_physicalUnit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::CanvasScaler_Unit, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_physicalUnit(::UnityEngine::UI::CanvasScaler_Unit value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_physicalUnit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasScaler_Unit>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_fallbackScreenDPI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_fallbackScreenDPI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_fallbackScreenDPI(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_fallbackScreenDPI",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_defaultSpriteDPI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "get_defaultSpriteDPI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_defaultSpriteDPI(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_defaultSpriteDPI",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::CanvasScaler::get_dynamicPixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                             "get_dynamicPixelsPerUnit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::set_dynamicPixelsPerUnit(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "set_dynamicPixelsPerUnit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::CanvasScaler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::Canvas_preWillRenderCanvases() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(),
                                                                             "Canvas_preWillRenderCanvases", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::Handle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleWorldCanvas() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleConstantPixelSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleScaleWithScreenSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::HandleConstantPhysicalSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::CanvasScaler::SetScaleFactor(float_t scaleFactor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "SetScaleFactor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scaleFactor);
}
inline void UnityEngine::UI::CanvasScaler::SetReferencePixelsPerUnit(float_t referencePixelsPerUnit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::CanvasScaler*>::get(), "SetReferencePixelsPerUnit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, referencePixelsPerUnit);
}
inline ::UnityEngine::UI::CanvasScaler* UnityEngine::UI::CanvasScaler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::CanvasScaler*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::CanvasScaler::CanvasScaler() {}
