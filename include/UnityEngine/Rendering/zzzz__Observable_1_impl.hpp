#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Observable_1.hpp"
#include "UnityEngine/Rendering/zzzz__Observable_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::add_onValueChanged(::System::Action_1<T>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Observable_1<T>>(), { "add_onValueChanged", {}, { ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::remove_onValueChanged(::System::Action_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Observable_1<T>>(), { "remove_onValueChanged", {}, { ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::Rendering::Observable_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Observable_1<T>>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::set_value(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Observable_1<T>>(), { "set_value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::Observable_1<T>::_ctor(T newValue) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Observable_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, newValue);
}
// Ctor Parameters [CppParam { name: "onValueChanged", ty: "::System::Action_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Value", ty: "T", modifiers: "", def_value: Some("{}")
// }]
template <typename T> constexpr ::UnityEngine::Rendering::Observable_1<T>::Observable_1(::System::Action_1<T>* onValueChanged, T m_Value) noexcept {
  this->onValueChanged = onValueChanged;
  this->m_Value = m_Value;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Observable_1<T>::Observable_1() {}
