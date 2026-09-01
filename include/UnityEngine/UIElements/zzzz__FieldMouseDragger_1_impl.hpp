#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\FieldMouseDragger_1.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldMouseDragger_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FieldMouseDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::IValueField_1<T>*& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DrivenField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrivenField;
}
template <typename T> constexpr ::UnityEngine::UIElements::IValueField_1<T>* const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DrivenField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrivenField;
}
template <typename T> constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set_m_DrivenField(::UnityEngine::UIElements::IValueField_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrivenField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragElement;
}
template <typename T> constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragElement;
}
template <typename T> constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set_m_DragElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragElement = value;
}
template <typename T> constexpr ::UnityEngine::Rect& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragHotZone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHotZone;
}
template <typename T> constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get_m_DragHotZone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DragHotZone;
}
template <typename T> constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set_m_DragHotZone(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DragHotZone = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__dragging_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragging_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__dragging_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragging_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set__dragging_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dragging_k__BackingField = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__startValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_get__startValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FieldMouseDragger_1<T>::__cordl_internal_set__startValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startValue_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::_ctor(::UnityEngine::UIElements::IValueField_1<T>* drivenField) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::IValueField_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drivenField);
}
template <typename T> inline bool UnityEngine::UIElements::FieldMouseDragger_1<T>::get_dragging() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(), { "get_dragging", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::set_dragging(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(), { "set_dragging", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::FieldMouseDragger_1<T>::get_startValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(), { "get_startValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::set_startValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(), { "set_startValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement, ::UnityEngine::Rect hotZone) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                           { "SetDragZone", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dragElement, hotZone);
}
template <typename T> inline bool UnityEngine::UIElements::FieldMouseDragger_1<T>::CanStartDrag(int32_t button, ::UnityEngine::Vector2 localPosition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                                                         { "CanStartDrag", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, button, localPosition);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                                                         { "UpdateValueOnPointerDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                                                         { "ProcessDownEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                                                         { "UpdateValueOnPointerMove", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerMoveEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::ProcessMoveEvent(bool shiftKey, bool altKey, ::UnityEngine::Vector2 deltaPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                           { "ProcessMoveEvent", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shiftKey, altKey, deltaPosition);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                                                         { "UpdateValueOnPointerUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::PointerUpEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                           { "ProcessUpEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, pointerId);
}
template <typename T> inline void UnityEngine::UIElements::FieldMouseDragger_1<T>::UpdateValueOnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(),
                                                                                         { "UpdateValueOnKeyDown", {}, { ::i2c::type_of<::UnityEngine::UIElements::KeyDownEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename T> inline ::UnityEngine::UIElements::FieldMouseDragger_1<T>* UnityEngine::UIElements::FieldMouseDragger_1<T>::New_ctor(::UnityEngine::UIElements::IValueField_1<T>* drivenField) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FieldMouseDragger_1<T>*>(drivenField));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::FieldMouseDragger_1<T>::FieldMouseDragger_1() {}
