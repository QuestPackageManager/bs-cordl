#pragma once
// IWYU pragma private; include "GlobalNamespace\HSVPanelController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HSVPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "GlobalNamespace/zzzz__ColorHueSlider_def.hpp"
#include "GlobalNamespace/zzzz__ColorSaturationValueSlider_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.add_colorDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*)>(
    &::GlobalNamespace::HSVPanelController::add_colorDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2cd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
                                                { "add_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.remove_colorDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*)>(
    &::GlobalNamespace::HSVPanelController::remove_colorDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5a2ce10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
                                                { "remove_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::HSVPanelController::*)()>(&::GlobalNamespace::HSVPanelController::get_color)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a2ced0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)(::UnityEngine::Color)>(&::GlobalNamespace::HSVPanelController::set_color)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a2cee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)()>(&::GlobalNamespace::HSVPanelController::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5a2cfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)()>(&::GlobalNamespace::HSVPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5a2d0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.HandleColorSaturationOrValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::HSVPanelController::*)(::GlobalNamespace::ColorSaturationValueSlider*, ::UnityEngine::Vector2, ::GlobalNamespace::ColorChangeUIEventType)>(
        &::GlobalNamespace::HSVPanelController::HandleColorSaturationOrValueDidChange)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5a2d228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "HandleColorSaturationOrValueDidChange",
                                                                                         {},
                                                                                         { ::i2c::type_of<::GlobalNamespace::ColorSaturationValueSlider*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                           ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.HandleColorHueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)(::GlobalNamespace::ColorHueSlider*, float_t, ::GlobalNamespace::ColorChangeUIEventType)>(
    &::GlobalNamespace::HSVPanelController::HandleColorHueDidChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a2d29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
            { "HandleColorHueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::ColorHueSlider*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.RefreshSlidersValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)()>(&::GlobalNamespace::HSVPanelController::RefreshSlidersValues)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a2cf60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "RefreshSlidersValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController.RefreshSlidersColors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)()>(&::GlobalNamespace::HSVPanelController::RefreshSlidersColors)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5a2cf34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "RefreshSlidersColors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HSVPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HSVPanelController::*)()>(&::GlobalNamespace::HSVPanelController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2d308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSaturationValueSlider>& GlobalNamespace::HSVPanelController::__cordl_internal_get__colorSaturationValueSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSaturationValueSlider;
}
constexpr ::UnityW<::GlobalNamespace::ColorSaturationValueSlider> const& GlobalNamespace::HSVPanelController::__cordl_internal_get__colorSaturationValueSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSaturationValueSlider;
}
constexpr void GlobalNamespace::HSVPanelController::__cordl_internal_set__colorSaturationValueSlider(::UnityW<::GlobalNamespace::ColorSaturationValueSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSaturationValueSlider = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorHueSlider>& GlobalNamespace::HSVPanelController::__cordl_internal_get__colorHueSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorHueSlider;
}
constexpr ::UnityW<::GlobalNamespace::ColorHueSlider> const& GlobalNamespace::HSVPanelController::__cordl_internal_get__colorHueSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorHueSlider;
}
constexpr void GlobalNamespace::HSVPanelController::__cordl_internal_set__colorHueSlider(::UnityW<::GlobalNamespace::ColorHueSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorHueSlider = value;
}
constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*& GlobalNamespace::HSVPanelController::__cordl_internal_get_colorDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorDidChangeEvent;
}
constexpr ::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* const& GlobalNamespace::HSVPanelController::__cordl_internal_get_colorDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorDidChangeEvent;
}
constexpr void GlobalNamespace::HSVPanelController::__cordl_internal_set_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorDidChangeEvent = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HSVPanelController::__cordl_internal_get__hsvColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hsvColor;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HSVPanelController::__cordl_internal_get__hsvColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hsvColor;
}
constexpr void GlobalNamespace::HSVPanelController::__cordl_internal_set__hsvColor(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hsvColor = value;
}
inline void GlobalNamespace::HSVPanelController::add_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
                                              { "add_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HSVPanelController::remove_colorDidChangeEvent(::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
                                              { "remove_colorDidChangeEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color GlobalNamespace::HSVPanelController::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::HSVPanelController::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HSVPanelController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HSVPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HSVPanelController::HandleColorSaturationOrValueDidChange(::GlobalNamespace::ColorSaturationValueSlider* slider, ::UnityEngine::Vector2 colorSaturationAndValue,
                                                                                       ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
                                                                                         { "HandleColorSaturationOrValueDidChange",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::ColorSaturationValueSlider*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, colorSaturationAndValue, colorChangeUIEventType);
}
inline void GlobalNamespace::HSVPanelController::HandleColorHueDidChange(::GlobalNamespace::ColorHueSlider* slider, float_t hue, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::HSVPanelController*>(),
          { "HandleColorHueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::ColorHueSlider*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, hue, colorChangeUIEventType);
}
inline void GlobalNamespace::HSVPanelController::RefreshSlidersValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "RefreshSlidersValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HSVPanelController::RefreshSlidersColors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { "RefreshSlidersColors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HSVPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HSVPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HSVPanelController* GlobalNamespace::HSVPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HSVPanelController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HSVPanelController::HSVPanelController() {}
