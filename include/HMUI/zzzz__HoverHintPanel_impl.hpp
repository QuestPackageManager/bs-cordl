#pragma once
// IWYU pragma private; include "HMUI/HoverHintPanel.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "HMUI/zzzz__HoverHintPanel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::HMUI::HoverHintPanel.get_isShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::HoverHintPanel::*)()>(&::HMUI::HoverHintPanel::get_isShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "get_isShown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.set_isShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(bool)>(&::HMUI::HoverHintPanel::set_isShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "set_isShown", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.get_isPointerOver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::HoverHintPanel::*)()>(&::HMUI::HoverHintPanel::get_isPointerOver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "get_isPointerOver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.set_isPointerOver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(bool)>(&::HMUI::HoverHintPanel::set_isPointerOver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cc9a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "set_isPointerOver", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.add_pointerDidEnterEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::System::Action*)>(&::HMUI::HoverHintPanel::add_pointerDidEnterEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc8bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "add_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.remove_pointerDidEnterEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::System::Action*)>(&::HMUI::HoverHintPanel::remove_pointerDidEnterEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc8ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "remove_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.add_pointerDidExitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::System::Action*)>(&::HMUI::HoverHintPanel::add_pointerDidExitEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc8c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "add_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.remove_pointerDidExitEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::System::Action*)>(&::HMUI::HoverHintPanel::remove_pointerDidExitEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc8f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "remove_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)()>(&::HMUI::HoverHintPanel::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5cc9a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::StringW, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Rect)>(
    &::HMUI::HoverHintPanel::Show)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5cc94d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::HoverHintPanel*>(),
            { "Show", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)()>(&::HMUI::HoverHintPanel::Hide)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cc8b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.OnPointerEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::HoverHintPanel::OnPointerEnter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cc9c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.OnPointerExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::HoverHintPanel::OnPointerExit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cc9c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel.CalculatePanelPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::HMUI::HoverHintPanel::*)(::UnityEngine::Vector2, ::UnityEngine::Rect, ::UnityEngine::Vector2)>(
    &::HMUI::HoverHintPanel::CalculatePanelPosition)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5cc9ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(),
                            { "CalculatePanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::HoverHintPanel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::HoverHintPanel::*)()>(&::HMUI::HoverHintPanel::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cc9c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::HoverHintPanel::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::HoverHintPanel::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityEngine::Vector2& HMUI::HoverHintPanel::__cordl_internal_get__padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr ::UnityEngine::Vector2 const& HMUI::HoverHintPanel::__cordl_internal_get__padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__padding(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____padding = value;
}
constexpr ::UnityEngine::Vector2& HMUI::HoverHintPanel::__cordl_internal_get__containerPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerPadding;
}
constexpr ::UnityEngine::Vector2 const& HMUI::HoverHintPanel::__cordl_internal_get__containerPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containerPadding;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__containerPadding(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____containerPadding = value;
}
constexpr float_t& HMUI::HoverHintPanel::__cordl_internal_get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr float_t const& HMUI::HoverHintPanel::__cordl_internal_get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separator;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__separator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separator = value;
}
constexpr float_t& HMUI::HoverHintPanel::__cordl_internal_get__zOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr float_t const& HMUI::HoverHintPanel::__cordl_internal_get__zOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____zOffset;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__zOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____zOffset = value;
}
constexpr bool& HMUI::HoverHintPanel::__cordl_internal_get__isShown_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isShown_k__BackingField;
}
constexpr bool const& HMUI::HoverHintPanel::__cordl_internal_get__isShown_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isShown_k__BackingField;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__isShown_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isShown_k__BackingField = value;
}
constexpr bool& HMUI::HoverHintPanel::__cordl_internal_get__isPointerOver_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPointerOver_k__BackingField;
}
constexpr bool const& HMUI::HoverHintPanel::__cordl_internal_get__isPointerOver_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isPointerOver_k__BackingField;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set__isPointerOver_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isPointerOver_k__BackingField = value;
}
constexpr ::System::Action*& HMUI::HoverHintPanel::__cordl_internal_get_pointerDidEnterEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidEnterEvent;
}
constexpr ::System::Action* const& HMUI::HoverHintPanel::__cordl_internal_get_pointerDidEnterEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidEnterEvent;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set_pointerDidEnterEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointerDidEnterEvent = value;
}
constexpr ::System::Action*& HMUI::HoverHintPanel::__cordl_internal_get_pointerDidExitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidExitEvent;
}
constexpr ::System::Action* const& HMUI::HoverHintPanel::__cordl_internal_get_pointerDidExitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointerDidExitEvent;
}
constexpr void HMUI::HoverHintPanel::__cordl_internal_set_pointerDidExitEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pointerDidExitEvent = value;
}
inline bool HMUI::HoverHintPanel::get_isShown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "get_isShown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::HoverHintPanel::set_isShown(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "set_isShown", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::HoverHintPanel::get_isPointerOver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "get_isPointerOver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::HoverHintPanel::set_isPointerOver(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "set_isPointerOver", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::HoverHintPanel::add_pointerDidEnterEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "add_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::HoverHintPanel::remove_pointerDidEnterEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "remove_pointerDidEnterEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::HoverHintPanel::add_pointerDidExitEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "add_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::HoverHintPanel::remove_pointerDidExitEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "remove_pointerDidExitEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::HoverHintPanel::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::HoverHintPanel::Show(::StringW text, ::UnityEngine::Transform* parent, ::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::HMUI::HoverHintPanel*>(),
                       { "Show", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, parent, containerSize, spawnRect);
}
inline void HMUI::HoverHintPanel::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::HoverHintPanel::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "OnPointerEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::HoverHintPanel::OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { "OnPointerExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline ::UnityEngine::Vector2 HMUI::HoverHintPanel::CalculatePanelPosition(::UnityEngine::Vector2 containerSize, ::UnityEngine::Rect spawnRect, ::UnityEngine::Vector2 panelSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(),
                          { "CalculatePanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, containerSize, spawnRect, panelSize);
}
inline void HMUI::HoverHintPanel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::HoverHintPanel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::HoverHintPanel* HMUI::HoverHintPanel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::HoverHintPanel*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr HMUI::HoverHintPanel::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* HMUI::HoverHintPanel::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr HMUI::HoverHintPanel::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* HMUI::HoverHintPanel::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr HMUI::HoverHintPanel::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* HMUI::HoverHintPanel::i___UnityEngine__EventSystems__IPointerExitHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::HoverHintPanel::HoverHintPanel() {}
