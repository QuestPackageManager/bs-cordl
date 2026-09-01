#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionToggle.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__MissionToggle_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "HMUI/zzzz__Interactable_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.add_selectionDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*)>(
    &::GlobalNamespace::MissionToggle::add_selectionDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593d650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(),
                                                             { "add_selectionDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.remove_selectionDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*)>(
    &::GlobalNamespace::MissionToggle::remove_selectionDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x593d84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(),
                                                             { "remove_selectionDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.set_missionCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(bool)>(&::GlobalNamespace::MissionToggle::set_missionCleared)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593dd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "set_missionCleared", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.get_selected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::get_selected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593dda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "get_selected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.set_selected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(bool)>(&::GlobalNamespace::MissionToggle::set_selected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x593d584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "set_selected", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.get_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593dda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "get_interactable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.set_interactable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(bool)>(&::GlobalNamespace::MissionToggle::set_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593d710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.get_highlighted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::get_highlighted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x593e05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "get_highlighted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593e064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.ChangeSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(bool, bool, bool)>(&::GlobalNamespace::MissionToggle::ChangeSelection)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x593d980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "ChangeSelection", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.ChangeHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(bool, bool)>(&::GlobalNamespace::MissionToggle::ChangeHighlight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x593e068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "ChangeHighlight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::StringW)>(&::GlobalNamespace::MissionToggle::SetText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x593d90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "SetText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.InternalToggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::InternalToggle)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x593e088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "InternalToggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.RefreshUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::RefreshUI)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x593ddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "RefreshUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.OnPointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::MissionToggle::OnPointerClick)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x593e0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.OnSubmit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::GlobalNamespace::MissionToggle::OnSubmit)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x593e170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::MissionToggle::OnPointerEnter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x593e20c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle.OnPointerExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::MissionToggle::OnPointerExit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x593e22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionToggle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionToggle::*)()>(&::GlobalNamespace::MissionToggle::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x593e248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Signal>& GlobalNamespace::MissionToggle::__cordl_internal_get__missionToggleWasPressedSignal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionToggleWasPressedSignal;
}
constexpr ::UnityW<::GlobalNamespace::Signal> const& GlobalNamespace::MissionToggle::__cordl_internal_get__missionToggleWasPressedSignal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionToggleWasPressedSignal;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__missionToggleWasPressedSignal(::UnityW<::GlobalNamespace::Signal> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionToggleWasPressedSignal = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::MissionToggle::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::MissionToggle::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MissionToggle::__cordl_internal_get__lockedImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockedImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MissionToggle::__cordl_internal_get__lockedImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lockedImage;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__lockedImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lockedImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MissionToggle::__cordl_internal_get__clearedImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MissionToggle::__cordl_internal_get__clearedImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedImage;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__clearedImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearedImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MissionToggle::__cordl_internal_get__bgImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MissionToggle::__cordl_internal_get__bgImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bgImage;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__bgImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bgImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::MissionToggle::__cordl_internal_get__strokeImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strokeImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::MissionToggle::__cordl_internal_get__strokeImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____strokeImage;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__strokeImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____strokeImage = value;
}
constexpr ::UnityW<::HMUI::Interactable>& GlobalNamespace::MissionToggle::__cordl_internal_get__vrInteractable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrInteractable;
}
constexpr ::UnityW<::HMUI::Interactable> const& GlobalNamespace::MissionToggle::__cordl_internal_get__vrInteractable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrInteractable;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__vrInteractable(::UnityW<::HMUI::Interactable> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrInteractable = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionToggle::__cordl_internal_get__disabledColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionToggle::__cordl_internal_get__disabledColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledColor;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__disabledColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionToggle::__cordl_internal_get__normalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionToggle::__cordl_internal_get__normalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalColor;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__normalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionToggle::__cordl_internal_get__invertColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionToggle::__cordl_internal_get__invertColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____invertColor;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__invertColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____invertColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MissionToggle::__cordl_internal_get__highlightColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MissionToggle::__cordl_internal_get__highlightColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightColor;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__highlightColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightColor = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*& GlobalNamespace::MissionToggle::__cordl_internal_get_selectionDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionDidChangeEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* const& GlobalNamespace::MissionToggle::__cordl_internal_get_selectionDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionDidChangeEvent;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionDidChangeEvent = value;
}
constexpr bool& GlobalNamespace::MissionToggle::__cordl_internal_get__selected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selected;
}
constexpr bool const& GlobalNamespace::MissionToggle::__cordl_internal_get__selected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selected;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__selected(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selected = value;
}
constexpr bool& GlobalNamespace::MissionToggle::__cordl_internal_get__highlighted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlighted;
}
constexpr bool const& GlobalNamespace::MissionToggle::__cordl_internal_get__highlighted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlighted;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__highlighted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlighted = value;
}
constexpr bool& GlobalNamespace::MissionToggle::__cordl_internal_get__interactable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable;
}
constexpr bool const& GlobalNamespace::MissionToggle::__cordl_internal_get__interactable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____interactable;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__interactable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____interactable = value;
}
constexpr bool& GlobalNamespace::MissionToggle::__cordl_internal_get__missionCleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionCleared;
}
constexpr bool const& GlobalNamespace::MissionToggle::__cordl_internal_get__missionCleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionCleared;
}
constexpr void GlobalNamespace::MissionToggle::__cordl_internal_set__missionCleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionCleared = value;
}
inline void GlobalNamespace::MissionToggle::add_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(),
                                                           { "add_selectionDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionToggle::remove_selectionDidChangeEvent(::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(),
                                                           { "remove_selectionDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::MissionToggle>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionToggle::set_missionCleared(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "set_missionCleared", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionToggle::get_selected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "get_selected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionToggle::set_selected(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "set_selected", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionToggle::get_interactable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "get_interactable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionToggle::set_interactable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "set_interactable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MissionToggle::get_highlighted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "get_highlighted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionToggle::Start() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionToggle::ChangeSelection(bool value, bool callSelectionDidChange, bool ignoreCurrentValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "ChangeSelection", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, callSelectionDidChange, ignoreCurrentValue);
}
inline void GlobalNamespace::MissionToggle::ChangeHighlight(bool value, bool ignoreCurrentValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "ChangeHighlight", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, ignoreCurrentValue);
}
inline void GlobalNamespace::MissionToggle::SetText(::StringW text) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "SetText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::MissionToggle::InternalToggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "InternalToggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionToggle::RefreshUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { "RefreshUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionToggle::OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MissionToggle::OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MissionToggle::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MissionToggle::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MissionToggle*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::MissionToggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionToggle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionToggle* GlobalNamespace::MissionToggle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionToggle*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr GlobalNamespace::MissionToggle::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr ::UnityEngine::EventSystems::IPointerClickHandler* GlobalNamespace::MissionToggle::i___UnityEngine__EventSystems__IPointerClickHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::MissionToggle::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::MissionToggle::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr GlobalNamespace::MissionToggle::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr ::UnityEngine::EventSystems::ISubmitHandler* GlobalNamespace::MissionToggle::i___UnityEngine__EventSystems__ISubmitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr GlobalNamespace::MissionToggle::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::MissionToggle::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr GlobalNamespace::MissionToggle::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* GlobalNamespace::MissionToggle::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionToggle::MissionToggle() {}
