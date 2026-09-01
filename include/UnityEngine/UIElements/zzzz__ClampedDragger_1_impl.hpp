#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ClampedDragger_1.hpp"
#include "UnityEngine/UIElements/zzzz__Clickable_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>::ClampedDragger_1_DragDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>::ClampedDragger_1_DragDirection() {}
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>::None{ static_cast<int32_t>(0x0) };
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>::LowToHigh{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>::HighToLow{ static_cast<int32_t>(0x2) };
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>::Free{ static_cast<int32_t>(0x4) };
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get_dragging() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragging;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get_dragging() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dragging;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_set_dragging(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dragging = value;
}
template <typename T> constexpr ::System::Action*& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get_draggingEnded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___draggingEnded;
}
template <typename T> constexpr ::System::Action* const& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get_draggingEnded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___draggingEnded;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_set_draggingEnded(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___draggingEnded = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get__dragDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragDirection_k__BackingField;
}
template <typename T>
constexpr ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> const& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get__dragDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dragDirection_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_set__dragDirection_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dragDirection_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::BaseSlider_1<T>*& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get__slider_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::BaseSlider_1<T>* const& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get__slider_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____slider_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_set__slider_k__BackingField(::UnityEngine::UIElements::BaseSlider_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____slider_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get__startMousePosition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startMousePosition_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_get__startMousePosition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startMousePosition_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__cordl_internal_set__startMousePosition_k__BackingField(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startMousePosition_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::add_dragging(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "add_dragging", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::remove_dragging(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "remove_dragging", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::add_draggingEnded(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "add_draggingEnded", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::remove_draggingEnded(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "remove_draggingEnded", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> UnityEngine::UIElements::ClampedDragger_1<T>::get_dragDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "get_dragDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_dragDirection(::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(),
                                                           { "set_dragDirection", {}, { ::i2c::type_of<::UnityEngine::UIElements::ClampedDragger_1_DragDirection<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_slider(::UnityEngine::UIElements::BaseSlider_1<T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "set_slider", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseSlider_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<T>::get_startMousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "get_startMousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_startMousePosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "set_startMousePosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<T>::get_delta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), { "get_delta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::_ctor(::UnityEngine::UIElements::BaseSlider_1<T>* slider, ::System::Action* clickHandler, ::System::Action* dragHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseSlider_1<T>*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, clickHandler, dragHandler);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition, int32_t pointerId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition, pointerId);
}
template <typename T> inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessMoveEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::Vector2 localPosition) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ClampedDragger_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, localPosition);
}
template <typename T>
inline ::UnityEngine::UIElements::ClampedDragger_1<T>* UnityEngine::UIElements::ClampedDragger_1<T>::New_ctor(::UnityEngine::UIElements::BaseSlider_1<T>* slider, ::System::Action* clickHandler,
                                                                                                              ::System::Action* dragHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ClampedDragger_1<T>*>(slider, clickHandler, dragHandler));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ClampedDragger_1<T>::ClampedDragger_1() {}
