#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DebugDisplaySettingsPanel_1.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_1_def.hpp"
template <typename T> constexpr T& UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::__cordl_internal_get_m_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename T> constexpr T const& UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::__cordl_internal_get_m_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Data;
}
template <typename T> constexpr void UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::__cordl_internal_set_m_Data(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Data = value;
}
template <typename T> inline T UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::set_data(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>*>(), { "set_data", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::_ctor(T data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template <typename T> inline ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>* UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::New_ctor(T data) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>*>(data));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DebugDisplaySettingsPanel_1<T>::DebugDisplaySettingsPanel_1() {}
