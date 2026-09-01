#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IValueField_1.hpp"
#include "UnityEngine/UIElements/zzzz__IValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DeltaSpeed_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
template <typename T> inline T UnityEngine::UIElements::IValueField_1<T>::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IValueField_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::IValueField_1<T>::set_value(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IValueField_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::IValueField_1<T>::ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, T startValue) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IValueField_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, speed, startValue);
}
template <typename T> inline void UnityEngine::UIElements::IValueField_1<T>::StartDragging() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IValueField_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::IValueField_1<T>::StopDragging() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IValueField_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
