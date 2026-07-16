#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditingManipulator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditingManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IVisualElementScheduledItem_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.get_editingEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::TextEditorEventHandler* (::UnityEngine::UIElements::TextEditingManipulator::*)()>(
    &::UnityEngine::UIElements::TextEditingManipulator::get_editingEventHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6ca08c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "get_editingEventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.set_editingEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)(::UnityEngine::UIElements::TextEditorEventHandler*)>(
    &::UnityEngine::UIElements::TextEditingManipulator::set_editingEventHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ca08d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(),
                                                             { "set_editingEventHandler", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextEditorEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.get_touchScreenTextFieldChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::TextEditingManipulator::*)()>(
    &::UnityEngine::UIElements::TextEditingManipulator::get_touchScreenTextFieldChanged)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6ca0930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "get_touchScreenTextFieldChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)(::UnityEngine::UIElements::TextElement*)>(
    &::UnityEngine::UIElements::TextEditingManipulator::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6ca09d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)()>(&::UnityEngine::UIElements::TextEditingManipulator::Reset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6ca0bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.InitTextEditorEventHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)()>(&::UnityEngine::UIElements::TextEditingManipulator::InitTextEditorEventHandler)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6ca0af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "InitTextEditorEventHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TextEditingManipulator::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x6ca0bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(),
                                                                                           { "HandleEventBubbleUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.OnFocusInEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)()>(&::UnityEngine::UIElements::TextEditingManipulator::OnFocusInEvent)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6ca0e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "OnFocusInEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator.OnFocusOutEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)()>(&::UnityEngine::UIElements::TextEditingManipulator::OnFocusOutEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6ca1148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "OnFocusOutEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditingManipulator._OnFocusInEvent_b__14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditingManipulator::*)()>(&::UnityEngine::UIElements::TextEditingManipulator::_OnFocusInEvent_b__14_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ca1200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "<OnFocusInEvent>b__14_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_TextElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_TextElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextElement;
}
constexpr void UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextElement = value;
}
constexpr ::UnityEngine::UIElements::TextEditorEventHandler*& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_EditingEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditingEventHandler;
}
constexpr ::UnityEngine::UIElements::TextEditorEventHandler* const& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_EditingEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EditingEventHandler;
}
constexpr void UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_set_m_EditingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EditingEventHandler = value;
}
constexpr ::UnityEngine::TextEditingUtilities*& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_editingUtilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editingUtilities;
}
constexpr ::UnityEngine::TextEditingUtilities* const& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_editingUtilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editingUtilities;
}
constexpr void UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_set_editingUtilities(::UnityEngine::TextEditingUtilities* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editingUtilities = value;
}
constexpr bool& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_TouchScreenTextFieldInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchScreenTextFieldInitialized;
}
constexpr bool const& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_TouchScreenTextFieldInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TouchScreenTextFieldInitialized;
}
constexpr void UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_set_m_TouchScreenTextFieldInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TouchScreenTextFieldInitialized = value;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_HardwareKeyboardPoller() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HardwareKeyboardPoller;
}
constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_get_m_HardwareKeyboardPoller() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HardwareKeyboardPoller;
}
constexpr void UnityEngine::UIElements::TextEditingManipulator::__cordl_internal_set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HardwareKeyboardPoller = value;
}
inline ::UnityEngine::UIElements::TextEditorEventHandler* UnityEngine::UIElements::TextEditingManipulator::get_editingEventHandler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "get_editingEventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextEditorEventHandler*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEditingManipulator::set_editingEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(),
                                                                                         { "set_editingEventHandler", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextEditorEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::TextEditingManipulator::get_touchScreenTextFieldChanged() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "get_touchScreenTextFieldChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEditingManipulator::_ctor(::UnityEngine::UIElements::TextElement* textElement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textElement);
}
inline void UnityEngine::UIElements::TextEditingManipulator::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEditingManipulator::InitTextEditorEventHandler() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "InitTextEditorEventHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEditingManipulator::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(),
                                                                                         { "HandleEventBubbleUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::TextEditingManipulator::OnFocusInEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "OnFocusInEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEditingManipulator::OnFocusOutEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "OnFocusOutEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::TextEditingManipulator::_OnFocusInEvent_b__14_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditingManipulator*>(), { "<OnFocusInEvent>b__14_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::TextEditingManipulator* UnityEngine::UIElements::TextEditingManipulator::New_ctor(::UnityEngine::UIElements::TextElement* textElement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextEditingManipulator*>(textElement));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextEditingManipulator::TextEditingManipulator() {}
