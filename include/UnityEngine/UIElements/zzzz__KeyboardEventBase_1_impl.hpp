#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\KeyboardEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IKeyboardEvent_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
template <typename T> constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
template <typename T> constexpr char16_t& UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_get__character_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____character_k__BackingField;
}
template <typename T> constexpr char16_t const& UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_get__character_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____character_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_set__character_k__BackingField(char16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____character_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::KeyCode& UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_get__keyCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::KeyCode const& UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_get__keyCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyCode_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::KeyboardEventBase_1<T>::__cordl_internal_set__keyCode_k__BackingField(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyCode_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::EventModifiers UnityEngine::UIElements::KeyboardEventBase_1<T>::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_modifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline char16_t UnityEngine::UIElements::KeyboardEventBase_1<T>::get_character() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_character", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<char16_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::set_character(char16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "set_character", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::KeyCode UnityEngine::UIElements::KeyboardEventBase_1<T>::get_keyCode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_keyCode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::KeyCode>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::set_keyCode(::UnityEngine::KeyCode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "set_keyCode", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_shiftKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_shiftKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_ctrlKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_ctrlKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_commandKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_commandKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_altKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_altKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_functionKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_functionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::KeyboardEventBase_1<T>::get_actionKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "get_actionKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::KeyboardEventBase_1<T>::GetPooled(char16_t c, ::UnityEngine::KeyCode keyCode, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(),
                                              { "GetPooled", {}, { ::i2c::type_of<char16_t>(), ::i2c::type_of<::UnityEngine::KeyCode>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, c, keyCode, modifiers);
}
template <typename T> inline T UnityEngine::UIElements::KeyboardEventBase_1<T>::GetPooled(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, systemEvent);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
template <typename T> inline void UnityEngine::UIElements::KeyboardEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::KeyboardEventBase_1<T>* UnityEngine::UIElements::KeyboardEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::KeyboardEventBase_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IKeyboardEvent"
template <typename T> constexpr UnityEngine::UIElements::KeyboardEventBase_1<T>::operator ::UnityEngine::UIElements::IKeyboardEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IKeyboardEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IKeyboardEvent"
template <typename T> constexpr ::UnityEngine::UIElements::IKeyboardEvent* UnityEngine::UIElements::KeyboardEventBase_1<T>::i___UnityEngine__UIElements__IKeyboardEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::IKeyboardEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::KeyboardEventBase_1<T>::KeyboardEventBase_1() {}
