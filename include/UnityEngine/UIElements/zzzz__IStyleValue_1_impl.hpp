#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IStyleValue_1.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleValue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StyleKeyword_def.hpp"
template <typename T> inline T UnityEngine::UIElements::IStyleValue_1<T>::get_value() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IStyleValue_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::IStyleValue_1<T>::set_value(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IStyleValue_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::StyleKeyword UnityEngine::UIElements::IStyleValue_1<T>::get_keyword() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IStyleValue_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StyleKeyword>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::IStyleValue_1<T>::set_keyword(::UnityEngine::UIElements::StyleKeyword value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IStyleValue_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
