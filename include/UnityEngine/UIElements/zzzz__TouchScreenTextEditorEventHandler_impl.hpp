#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TouchScreenTextEditorEventHandler.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TouchScreenTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboard_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.get_Frame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::get_Frame)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x71c030c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "get_Frame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.set_Frame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::set_Frame)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x71c0358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "set_Frame", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.set_activeTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::TouchScreenKeyboard*)>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::set_activeTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x71c03a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                           { "set_activeTouchScreenKeyboard", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboard*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(
    ::UnityEngine::UIElements::TextElement*, ::UnityEngine::TextEditingUtilities*)>(&::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x71c03f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.PollTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x71c0408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "PollTouchScreenKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.DoPollTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x980;
  constexpr static std::size_t addrs = 0x71c0648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "DoPollTouchScreenKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.UpdateStringPositionFromKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::UpdateStringPositionFromKeyboard)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x71c10d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "UpdateStringPositionFromKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.CloseTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::CloseTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x71c0fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "CloseTouchScreenKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.OpenTouchScreenKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OpenTouchScreenKeyboard)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x71c1320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "OpenTouchScreenKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x71c1840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.OnPointerDownEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnPointerDownEvent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x71c1a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "OnPointerDownEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.OnPointerUpEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnPointerUpEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x71c1c2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                           { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.OnFocusInEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)()>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnFocusInEvent)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x71c1c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "OnFocusInEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler.OnFocusOutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::*)(::UnityEngine::UIElements::FocusOutEvent*)>(
    &::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnFocusOutEvent)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x71c1db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                           { "OnFocusOutEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusOutEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__cordl_internal_get_m_TouchKeyboardPoller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardPoller;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__cordl_internal_get_m_TouchKeyboardPoller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchKeyboardPoller;
}
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__cordl_internal_set_m_TouchKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchKeyboardPoller = value;
}
constexpr bool& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__cordl_internal_get_m_IsClicking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClicking;
}
constexpr bool const& UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__cordl_internal_get_m_IsClicking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsClicking;
}
constexpr void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::__cordl_internal_set_m_IsClicking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsClicking = value;
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::setStaticF__Frame_k__BackingField(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "<Frame>k__BackingField", ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(std::forward<int64_t>(value));
}
inline int64_t UnityEngine::UIElements::TouchScreenTextEditorEventHandler::getStaticF__Frame_k__BackingField() {
  return ::cordl_internals::getStaticField<int64_t, "<Frame>k__BackingField", ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>();
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::setStaticF__activeTouchScreenKeyboard_k__BackingField(::UnityEngine::TouchScreenKeyboard* value) {
  ::cordl_internals::setStaticField<::UnityEngine::TouchScreenKeyboard*, "<activeTouchScreenKeyboard>k__BackingField", ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(
      std::forward<::UnityEngine::TouchScreenKeyboard*>(value));
}
inline ::UnityEngine::TouchScreenKeyboard* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::getStaticF__activeTouchScreenKeyboard_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::TouchScreenKeyboard*, "<activeTouchScreenKeyboard>k__BackingField", ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>();
}
inline int64_t UnityEngine::UIElements::TouchScreenTextEditorEventHandler::get_Frame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "get_Frame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::set_Frame(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "set_Frame", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::set_activeTouchScreenKeyboard(::UnityEngine::TouchScreenKeyboard* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                         { "set_activeTouchScreenKeyboard", {}, { ::i2c::type_of<::UnityEngine::TouchScreenKeyboard*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textElement, editingUtilities);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::PollTouchScreenKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "PollTouchScreenKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::DoPollTouchScreenKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "DoPollTouchScreenKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::UpdateStringPositionFromKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "UpdateStringPositionFromKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::CloseTouchScreenKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "CloseTouchScreenKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OpenTouchScreenKeyboard() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "OpenTouchScreenKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnPointerDownEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "OnPointerDownEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                         { "OnPointerUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnFocusInEvent() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(), { "OnFocusInEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TouchScreenTextEditorEventHandler::OnFocusOutEvent(::UnityEngine::UIElements::FocusOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(),
                                                                                         { "OnFocusOutEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusOutEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler* UnityEngine::UIElements::TouchScreenTextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextElement* textElement,
                                                                                                                                          ::UnityEngine::TextEditingUtilities* editingUtilities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TouchScreenTextEditorEventHandler*>(textElement, editingUtilities));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TouchScreenTextEditorEventHandler::TouchScreenTextEditorEventHandler() {}
