#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/EditAvatarColorViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarColorViewController_def.hpp"
#include "GlobalNamespace/zzzz__ColorChangeUIEventType_def.hpp"
#include "GlobalNamespace/zzzz__HSVPanelController_def.hpp"
#include "GlobalNamespace/zzzz__PreviousColorPanelController_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::get_color)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3272d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.add_didChangeColorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::System::Action_1<::UnityEngine::Color>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::add_didChangeColorEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3271a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "add_didChangeColorEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.remove_didChangeColorEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::System::Action_1<::UnityEngine::Color>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::remove_didChangeColorEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3272818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "remove_didChangeColorEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::System::Action_1<bool>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3271b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::System::Action_1<bool>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32728d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.SetColorCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::System::Action_1<::UnityEngine::Color>*)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::SetColorCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3278b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "SetColorCallback", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::SetColor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3272adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::Start)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x3278b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3278d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.HandleHSVPanelControllerColorDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(
    ::UnityEngine::Color, ::GlobalNamespace::ColorChangeUIEventType)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandleHSVPanelControllerColorDidChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3278f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                         { "HandleHSVPanelControllerColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.HandlePreviousColorPanelControllerColorWasSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandlePreviousColorPanelControllerColorWasSelected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x327904c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "HandlePreviousColorPanelControllerColorWasSelected", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.HandleCancelButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandleCancelButtonWasPressed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32790b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "HandleCancelButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.HandleApplyButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandleApplyButtonWasPressed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3279114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "HandleApplyButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController.ChangeColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)(::UnityEngine::Color)>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::ChangeColor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3278fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                           { "ChangeColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::*)()>(
    &::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3279134;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HSVPanelController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__hsvPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hsvPanelController;
}
constexpr ::UnityW<::GlobalNamespace::HSVPanelController> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__hsvPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hsvPanelController;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__hsvPanelController(::UnityW<::GlobalNamespace::HSVPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hsvPanelController = value;
}
constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController>& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__previousColorPanelController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousColorPanelController;
}
constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController> const&
BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__previousColorPanelController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousColorPanelController;
}
constexpr void
BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__previousColorPanelController(::UnityW<::GlobalNamespace::PreviousColorPanelController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousColorPanelController = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__cancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__cancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__applyButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__applyButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____applyButton;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____applyButton = value;
}
constexpr ::System::Action_1<::UnityEngine::Color>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get_didChangeColorEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeColorEvent;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get_didChangeColorEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeColorEvent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeColorEvent = value;
}
constexpr ::System::Action_1<bool>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_1<bool>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set_didFinishEvent(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::System::Action_1<::UnityEngine::Color>*& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__colorCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorCallback;
}
constexpr ::System::Action_1<::UnityEngine::Color>* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__colorCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorCallback;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__colorCallback(::System::Action_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorCallback = value;
}
constexpr ::UnityEngine::Color& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__initialColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialColor;
}
constexpr ::UnityEngine::Color const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__initialColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialColor;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__initialColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialColor = value;
}
constexpr bool& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__colorChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorChanged;
}
constexpr bool const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__colorChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorChanged;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__colorChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorChanged = value;
}
constexpr ::HMUI::ButtonBinder*& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
inline ::UnityEngine::Color BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::get_color() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::add_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "add_didChangeColorEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::remove_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "remove_didChangeColorEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::add_didFinishEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::remove_didFinishEvent(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::SetColorCallback(::System::Action_1<::UnityEngine::Color>* colorCallback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "SetColorCallback", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorCallback);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color,
                                                                                                                              ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                       { "HandleHSVPanelControllerColorDidChange", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::GlobalNamespace::ColorChangeUIEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, colorChangeUIEventType);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "HandlePreviousColorPanelControllerColorWasSelected", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandleCancelButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "HandleCancelButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::HandleApplyButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { "HandleApplyButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::ChangeColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(),
                                                                                         { "ChangeColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController::EditAvatarColorViewController() {}
