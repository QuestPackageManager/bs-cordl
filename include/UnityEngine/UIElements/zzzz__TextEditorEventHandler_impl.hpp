#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextEditorEventHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TextEditorEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__TextEditingUtilities_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditorEventHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditorEventHandler::*)(::UnityEngine::UIElements::TextElement*, ::UnityEngine::TextEditingUtilities*)>(
    &::UnityEngine::UIElements::TextEditorEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d46b8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditorEventHandler.RegisterCallbacksOnTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditorEventHandler::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextEditorEventHandler::RegisterCallbacksOnTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d47f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditorEventHandler.UnregisterCallbacksFromTarget
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditorEventHandler::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::TextEditorEventHandler::UnregisterCallbacksFromTarget)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d47f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TextEditorEventHandler.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::TextEditorEventHandler::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::TextEditorEventHandler::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d46e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), { ::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::TextElement*& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_textElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElement;
}
constexpr ::UnityEngine::UIElements::TextElement* const& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_textElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textElement;
}
constexpr void UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_set_textElement(::UnityEngine::UIElements::TextElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textElement = value;
}
constexpr ::UnityEngine::TextEditingUtilities*& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_editingUtilities() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editingUtilities;
}
constexpr ::UnityEngine::TextEditingUtilities* const& UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_get_editingUtilities() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___editingUtilities;
}
constexpr void UnityEngine::UIElements::TextEditorEventHandler::__cordl_internal_set_editingUtilities(::UnityEngine::TextEditingUtilities* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___editingUtilities = value;
}
inline void UnityEngine::UIElements::TextEditorEventHandler::_ctor(::UnityEngine::UIElements::TextElement* textElement, ::UnityEngine::TextEditingUtilities* editingUtilities) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::TextElement*>(), ::i2c::type_of<::UnityEngine::TextEditingUtilities*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textElement, editingUtilities);
}
inline void UnityEngine::UIElements::TextEditorEventHandler::RegisterCallbacksOnTarget(::UnityEngine::UIElements::VisualElement* target) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::TextEditorEventHandler::UnregisterCallbacksFromTarget(::UnityEngine::UIElements::VisualElement* target) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::TextEditorEventHandler::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TextEditorEventHandler*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline ::UnityEngine::UIElements::TextEditorEventHandler* UnityEngine::UIElements::TextEditorEventHandler::New_ctor(::UnityEngine::UIElements::TextElement* textElement,
                                                                                                                    ::UnityEngine::TextEditingUtilities* editingUtilities) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TextEditorEventHandler*>(textElement, editingUtilities));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TextEditorEventHandler::TextEditorEventHandler() {}
