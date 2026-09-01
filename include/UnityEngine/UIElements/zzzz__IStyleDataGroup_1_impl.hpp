#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IStyleDataGroup_1.hpp"
#include "UnityEngine/UIElements/zzzz__IStyleDataGroup_1_def.hpp"
template <typename T> inline T UnityEngine::UIElements::IStyleDataGroup_1<T>::Copy() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IStyleDataGroup_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::IStyleDataGroup_1<T>::CopyFrom(::by_ref<T> other) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IStyleDataGroup_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
