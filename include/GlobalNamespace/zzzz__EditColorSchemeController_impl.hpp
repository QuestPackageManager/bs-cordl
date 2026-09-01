#pragma once
// IWYU pragma private; include "GlobalNamespace\EditColorSchemeController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EditColorSchemeController_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeColorsToggleGroup_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__HSVPanelController_def.hpp"
#include "GlobalNamespace/zzzz__PreviousColorPanelController_def.hpp"
#include "GlobalNamespace/zzzz__RGBPanelController_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::System::Action*)>(&::GlobalNamespace::EditColorSchemeController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5920ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::System::Action*)>(
    &::GlobalNamespace::EditColorSchemeController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5921494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.add_didChangeColorSchemeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::System::Action_1<::GlobalNamespace::ColorScheme*>*)>(
    &::GlobalNamespace::EditColorSchemeController::add_didChangeColorSchemeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x592109c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                             { "add_didChangeColorSchemeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ColorScheme*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.remove_didChangeColorSchemeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::System::Action_1<::GlobalNamespace::ColorScheme*>*)>(
    &::GlobalNamespace::EditColorSchemeController::remove_didChangeColorSchemeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5921540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                             { "remove_didChangeColorSchemeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ColorScheme*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.SetColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::EditColorSchemeController::SetColorScheme)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5921dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "SetColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)()>(&::GlobalNamespace::EditColorSchemeController::Start)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5921e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)()>(&::GlobalNamespace::EditColorSchemeController::OnDestroy)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x59221fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.HandleColorSchemeColorsToggleGroupSelectedColorDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditColorSchemeController::HandleColorSchemeColorsToggleGroupSelectedColorDidChange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5922484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                             { "HandleColorSchemeColorsToggleGroupSelectedColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.HandleRGBPanelControllerColorDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType)>(
    &::GlobalNamespace::EditColorSchemeController::HandleRGBPanelControllerColorDidChange)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x592251c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                         { "HandleRGBPanelControllerColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.HandleHSVPanelControllerColorDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType)>(
    &::GlobalNamespace::EditColorSchemeController::HandleHSVPanelControllerColorDidChange)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x59225f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                         { "HandleHSVPanelControllerColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController.HandlePreviousColorPanelControllerColorWasSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::EditColorSchemeController::HandlePreviousColorPanelControllerColorWasSelected)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x59226d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                                                           { "HandlePreviousColorPanelControllerColorWasSelected", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)()>(&::GlobalNamespace::EditColorSchemeController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x592279c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EditColorSchemeController._Start_b__13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EditColorSchemeController::*)()>(&::GlobalNamespace::EditColorSchemeController::_Start_b__13_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59227a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "<Start>b__13_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup>& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__colorSchemeColorsToggleGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeColorsToggleGroup;
}
constexpr ::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup> const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__colorSchemeColorsToggleGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeColorsToggleGroup;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set__colorSchemeColorsToggleGroup(::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemeColorsToggleGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::RGBPanelController>& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__rgbPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rgbPanelController;
}
constexpr ::UnityW<::GlobalNamespace::RGBPanelController> const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__rgbPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rgbPanelController;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set__rgbPanelController(::UnityW<::GlobalNamespace::RGBPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rgbPanelController = value;
}
constexpr ::UnityW<::GlobalNamespace::HSVPanelController>& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__hsvPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hsvPanelController;
}
constexpr ::UnityW<::GlobalNamespace::HSVPanelController> const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__hsvPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hsvPanelController;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set__hsvPanelController(::UnityW<::GlobalNamespace::HSVPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hsvPanelController = value;
}
constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController>& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__previousColorPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousColorPanelController;
}
constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController> const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__previousColorPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousColorPanelController;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set__previousColorPanelController(::UnityW<::GlobalNamespace::PreviousColorPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousColorPanelController = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__closeButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__closeButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____closeButton;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____closeButton = value;
}
constexpr ::System::Action*& GlobalNamespace::EditColorSchemeController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action* const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set_didFinishEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::System::Action_1<::GlobalNamespace::ColorScheme*>*& GlobalNamespace::EditColorSchemeController::__cordl_internal_get_didChangeColorSchemeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeColorSchemeEvent;
}
constexpr ::System::Action_1<::GlobalNamespace::ColorScheme*>* const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get_didChangeColorSchemeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeColorSchemeEvent;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeColorSchemeEvent = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::EditColorSchemeController::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::EditColorSchemeController::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline void GlobalNamespace::EditColorSchemeController::add_didFinishEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditColorSchemeController::remove_didFinishEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditColorSchemeController::add_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                           { "add_didChangeColorSchemeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ColorScheme*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditColorSchemeController::remove_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                           { "remove_didChangeColorSchemeEvent", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::ColorScheme*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::EditColorSchemeController::SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "SetColorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorScheme);
}
inline void GlobalNamespace::EditColorSchemeController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EditColorSchemeController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EditColorSchemeController::HandleColorSchemeColorsToggleGroupSelectedColorDidChange(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                           { "HandleColorSchemeColorsToggleGroupSelectedColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::EditColorSchemeController::HandleRGBPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                       { "HandleRGBPanelControllerColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, colorChangeUIEventType);
}
inline void GlobalNamespace::EditColorSchemeController::HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                       { "HandleHSVPanelControllerColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, colorChangeUIEventType);
}
inline void GlobalNamespace::EditColorSchemeController::HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(),
                                                                                         { "HandlePreviousColorPanelControllerColorWasSelected", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::EditColorSchemeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::EditColorSchemeController::_Start_b__13_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EditColorSchemeController*>(), { "<Start>b__13_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EditColorSchemeController* GlobalNamespace::EditColorSchemeController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EditColorSchemeController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EditColorSchemeController::EditColorSchemeController() {}
