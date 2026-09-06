#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerField_1.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerField_1_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_nextButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextButtonText;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_nextButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextButtonText;
}
template <typename T> constexpr void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_set_nextButtonText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextButtonText = value;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_previousButtonText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousButtonText;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_previousButtonText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousButtonText;
}
template <typename T> constexpr void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_set_previousButtonText(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousButtonText = value;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
template <typename T> constexpr void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nameLabel = value;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_valueLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLabel;
}
template <typename T> constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_valueLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valueLabel;
}
template <typename T> constexpr void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_set_valueLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___valueLabel = value;
}
template <typename T> constexpr T& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
template <typename T> constexpr T const& UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
template <typename T> constexpr void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::__cordl_internal_set_m_Field(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Field = value;
}
template <typename T> inline void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widget);
}
template <typename T> inline bool UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromNext, previous);
}
template <typename T> inline void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::OnDeselection() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::OnAction() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::UpdateValueLabel() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::SetLabelText(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), { "SetLabelText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
template <typename T> inline void UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>* UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerField_1<T>::DebugUIHandlerField_1() {}
