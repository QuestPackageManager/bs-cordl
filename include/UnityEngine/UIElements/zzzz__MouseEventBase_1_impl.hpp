#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEventInternal_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMouseEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerOrMouseEvent_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template <typename T> constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__mousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__mousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mousePosition_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__mousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mousePosition_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__localMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMousePosition_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__localMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localMousePosition_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__localMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localMousePosition_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__mouseDelta_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseDelta_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__mouseDelta_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mouseDelta_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__mouseDelta_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mouseDelta_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__clickCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__clickCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clickCount_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__clickCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clickCount_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__button_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__button_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__button_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__pressedButtons_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__pressedButtons_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedButtons_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__pressedButtons_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedButtons_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_UIElements_IMouseEventInternal_triggeredByOS_k__BackingField = value;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IPointerEvent*&
UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;
}
template <typename T>
constexpr ::UnityEngine::UIElements::IPointerEvent* const&
UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_get__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField;
}
template <typename T>
constexpr void
UnityEngine::UIElements::MouseEventBase_1<T>::__cordl_internal_set__UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField(::UnityEngine::UIElements::IPointerEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UnityEngine_UIElements_IMouseEventInternal_sourcePointerEvent_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::EventModifiers UnityEngine::UIElements::MouseEventBase_1<T>::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_modifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::MouseEventBase_1<T>::get_mousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_mousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_mousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_mousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::MouseEventBase_1<T>::get_localMousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_localMousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_localMousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_localMousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::MouseEventBase_1<T>::get_mouseDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_mouseDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_mouseDelta(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_mouseDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::get_clickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_clickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_clickCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_clickCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_button(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_button", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::get_pressedButtons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "get_pressedButtons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_pressedButtons(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "set_pressedButtons", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_get_triggeredByOS() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "UnityEngine.UIElements.IMouseEventInternal.get_triggeredByOS", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_set_triggeredByOS(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(),
                                                                                         { "UnityEngine.UIElements.IMouseEventInternal.set_triggeredByOS", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::IPointerEvent* UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "UnityEngine.UIElements.IMouseEventInternal.get_sourcePointerEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPointerEvent*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IMouseEventInternal_set_sourcePointerEvent(::UnityEngine::UIElements::IPointerEvent* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(),
                                              { "UnityEngine.UIElements.IMouseEventInternal.set_sourcePointerEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IPointerOrMouseEvent_get_pointerId() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "UnityEngine.UIElements.IPointerOrMouseEvent.get_pointerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Vector3 UnityEngine::UIElements::MouseEventBase_1<T>::UnityEngine_UIElements_IPointerOrMouseEvent_get_position() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "UnityEngine.UIElements.IPointerOrMouseEvent.get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::IEventHandler* UnityEngine::UIElements::MouseEventBase_1<T>::get_currentTarget() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IEventHandler*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::set_currentTarget(::UnityEngine::UIElements::IEventHandler* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::PreDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::PostDispatch(::UnityEngine::UIElements::IPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, systemEvent);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IMouseEvent* triggerEvent, ::UnityEngine::Vector2 mousePosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(),
                                                           { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IMouseEvent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, triggerEvent, mousePosition);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IMouseEvent* triggerEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IMouseEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, triggerEvent);
}
template <typename T> inline T UnityEngine::UIElements::MouseEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IPointerEvent* pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IPointerEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, pointerEvent);
}
template <typename T> inline void UnityEngine::UIElements::MouseEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::MouseEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::MouseEventBase_1<T>* UnityEngine::UIElements::MouseEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::MouseEventBase_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IMouseEvent"
template <typename T> constexpr UnityEngine::UIElements::MouseEventBase_1<T>::operator ::UnityEngine::UIElements::IMouseEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IMouseEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IMouseEvent"
template <typename T> constexpr ::UnityEngine::UIElements::IMouseEvent* UnityEngine::UIElements::MouseEventBase_1<T>::i___UnityEngine__UIElements__IMouseEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::IMouseEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IMouseEventInternal"
template <typename T> constexpr UnityEngine::UIElements::MouseEventBase_1<T>::operator ::UnityEngine::UIElements::IMouseEventInternal*() noexcept {
  return static_cast<::UnityEngine::UIElements::IMouseEventInternal*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IMouseEventInternal"
template <typename T> constexpr ::UnityEngine::UIElements::IMouseEventInternal* UnityEngine::UIElements::MouseEventBase_1<T>::i___UnityEngine__UIElements__IMouseEventInternal() noexcept {
  return static_cast<::UnityEngine::UIElements::IMouseEventInternal*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IPointerOrMouseEvent"
template <typename T> constexpr UnityEngine::UIElements::MouseEventBase_1<T>::operator ::UnityEngine::UIElements::IPointerOrMouseEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerOrMouseEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IPointerOrMouseEvent"
template <typename T> constexpr ::UnityEngine::UIElements::IPointerOrMouseEvent* UnityEngine::UIElements::MouseEventBase_1<T>::i___UnityEngine__UIElements__IPointerOrMouseEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::IPointerOrMouseEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::MouseEventBase_1<T>::MouseEventBase_1() {}
