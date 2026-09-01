#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Generic\Panel.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__InteractableController_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Panel_def.hpp"
#include "GlobalNamespace/zzzz__OVRHapticsClip_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Background_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Interface_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__PanelRaycaster_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a5ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.get_HapticsClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRHapticsClip* (*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_HapticsClip)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5a5ccfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_HapticsClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.get_PixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_PixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5ce54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_PixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.set_PixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)(float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::set_PixelsPerUnit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a5ce5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "set_PixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.get_SphericalCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_SphericalCoordinates)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a5ce64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_SphericalCoordinates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.set_SphericalCoordinates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)(::UnityEngine::Vector3)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::set_SphericalCoordinates)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a5ce70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                           { "set_SphericalCoordinates", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.get_Interface
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_Interface)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a5d03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_Interface", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.set_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::set_BackgroundStyle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a5d0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                             { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::Setup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5a5cb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.SetExpectedPixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)(float_t, float_t, float_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::SetExpectedPixelsPerUnit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a5d124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                             { "SetExpectedPixelsPerUnit", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.SetPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)(::UnityEngine::Vector3)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::SetPosition)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5a5cf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "SetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.SphericalToCartesian
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(float_t, float_t, float_t)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::SphericalToCartesian)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a5ceec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                             { "SphericalToCartesian", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.OnTransparencyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnTransparencyChanged)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a5d1b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.OnHoverChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnHoverChanged)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5a5d22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.RefreshCanvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::RefreshCanvas)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a5d350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "RefreshCanvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.RefreshRaycaster
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::RefreshRaycaster)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a5d434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "RefreshRaycaster", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::LateUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a5d528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnEnable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a5d540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnDisable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a5d59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a5cc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Canvas>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvas;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvas = value;
}
constexpr ::UnityW<::UnityEngine::UI::CanvasScaler>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__canvasScaler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasScaler;
}
constexpr ::UnityW<::UnityEngine::UI::CanvasScaler> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__canvasScaler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canvasScaler;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set__canvasScaler(::UnityW<::UnityEngine::UI::CanvasScaler> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canvasScaler = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__ovrRaycaster() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ovrRaycaster;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__ovrRaycaster() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ovrRaycaster;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set__ovrRaycaster(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::PanelRaycaster> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ovrRaycaster = value;
}
constexpr float_t& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__PixelsPerUnit_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PixelsPerUnit_k__BackingField;
}
constexpr float_t const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__PixelsPerUnit_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PixelsPerUnit_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set__PixelsPerUnit_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____PixelsPerUnit_k__BackingField = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get_Background() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Background;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get_Background() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Background;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set_Background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Background = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__backgroundStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundStyle;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__backgroundStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backgroundStyle;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set__backgroundStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____backgroundStyle = value;
}
constexpr ::UnityEngine::Vector3& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__sphericalCoordinates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sphericalCoordinates;
}
constexpr ::UnityEngine::Vector3 const& Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_get__sphericalCoordinates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sphericalCoordinates;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::__cordl_internal_set__sphericalCoordinates(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sphericalCoordinates = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::setStaticF__hapticsClip(::GlobalNamespace::OVRHapticsClip* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRHapticsClip*, "_hapticsClip", ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(
      std::forward<::GlobalNamespace::OVRHapticsClip*>(value));
}
inline ::GlobalNamespace::OVRHapticsClip* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::getStaticF__hapticsClip() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRHapticsClip*, "_hapticsClip", ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>();
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRHapticsClip* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_HapticsClip() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_HapticsClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRHapticsClip*>(nullptr, ___internal_method);
}
inline float_t Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_PixelsPerUnit() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_PixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::set_PixelsPerUnit(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "set_PixelsPerUnit", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_SphericalCoordinates() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_SphericalCoordinates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::set_SphericalCoordinates(::UnityEngine::Vector3 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                                                         { "set_SphericalCoordinates", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface> Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::get_Interface() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "get_Interface", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                           { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::SetExpectedPixelsPerUnit(float_t pixelsPerUnit, float_t dynamicPixelsPerUnit, float_t referencePixelsPerUnit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                           { "SetExpectedPixelsPerUnit", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pixelsPerUnit, dynamicPixelsPerUnit, referencePixelsPerUnit);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::SetPosition(::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "SetPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline ::UnityEngine::Vector3 Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::SphericalToCartesian(float_t radius, float_t theta, float_t phi) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(),
                                                           { "SphericalToCartesian", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, radius, theta, phi);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnTransparencyChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnHoverChanged() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::RefreshCanvas() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "RefreshCanvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::RefreshRaycaster() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "RefreshRaycaster", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel* Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Panel::Panel() {}
