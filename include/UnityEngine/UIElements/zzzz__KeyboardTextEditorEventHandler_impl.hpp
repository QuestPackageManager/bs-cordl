#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyboardTextEditorEventHandler.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardTextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__ExecuteCommandEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__ValidateCommandEvent_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(
    ::UnityEngine::UIElements::TextElement*, ::UnityEngine::TextEditingUtilities*)>(&::UnityEngine::UIElements::KeyboardTextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6d46a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x6d46b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::FocusEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnFocus)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6d47b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                           { "OnFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnBlur
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::BlurEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnBlur)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6d47c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                           { "OnBlur", {}, { ::i2c::type_of<::UnityEngine::UIElements::BlurEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::KeyDownEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnKeyDown)> {
  constexpr static std::size_t size = 0x838;
  constexpr static std::size_t addrs = 0x6d46e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                           { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.UpdateLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(bool)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::UpdateLabel)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6d47c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(), { "UpdateLabel", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnValidateCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::ValidateCommandEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnValidateCommandEvent)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6d476d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                           { "OnValidateCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ValidateCommandEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::KeyboardTextEditorEventHandler.OnExecuteCommandEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::KeyboardTextEditorEventHandler::*)(::UnityEngine::UIElements::ExecuteCommandEvent*)>(
    &::UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnExecuteCommandEvent)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x6d478e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                           { "OnExecuteCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ExecuteCommandEvent*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_ImguiEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImguiEvent;
}
constexpr ::UnityEngine::Event* const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_ImguiEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImguiEvent;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_ImguiEvent(::UnityEngine::Event* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImguiEvent = value;
}
constexpr bool& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_Changed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changed;
}
constexpr bool const& UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_get_m_Changed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Changed;
}
constexpr void UnityEngine::UIElements::KeyboardTextEditorEventHandler::__cordl_internal_set_m_Changed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Changed = value;
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textElement, editingUtilities);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnFocus(::UnityEngine::UIElements::FocusEvent* _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                         { "OnFocus", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnBlur(::UnityEngine::UIElements::BlurEvent* _) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(), { "OnBlur", {}, { ::i2c::type_of<::UnityEngine::UIElements::BlurEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                         { "OnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::UpdateLabel(bool generatePreview) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(), { "UpdateLabel", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, generatePreview);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnValidateCommandEvent(::UnityEngine::UIElements::ValidateCommandEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                         { "OnValidateCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ValidateCommandEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnExecuteCommandEvent(::UnityEngine::UIElements::ExecuteCommandEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                                                         { "OnExecuteCommandEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::ExecuteCommandEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TEvent> inline void UnityEngine::UIElements::KeyboardTextEditorEventHandler::OnNavigationEvent(::UnityEngine::UIElements::NavigationEventBase_1<TEvent>* evt) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(),
                                                           { "OnNavigationEvent", { ::i2c::class_of<TEvent>() }, { ::i2c::type_of<::UnityEngine::UIElements::NavigationEventBase_1<TEvent>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEvent>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::KeyboardTextEditorEventHandler* UnityEngine::UIElements::KeyboardTextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextElement* textElement,
                                                                                                                                    ::UnityEngine::TextEditingUtilities* editingUtilities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyboardTextEditorEventHandler*>(textElement, editingUtilities));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::KeyboardTextEditorEventHandler::KeyboardTextEditorEventHandler() {}
