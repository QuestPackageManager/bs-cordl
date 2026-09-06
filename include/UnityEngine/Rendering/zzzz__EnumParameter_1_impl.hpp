#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/EnumParameter_1.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__EnumParameter_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::EnumParameter_1<T>::_ctor(T value, bool overrideState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::EnumParameter_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, overrideState);
}
template <typename T> inline ::UnityEngine::Rendering::EnumParameter_1<T>* UnityEngine::Rendering::EnumParameter_1<T>::New_ctor(T value, bool overrideState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::EnumParameter_1<T>*>(value, overrideState));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::EnumParameter_1<T>::EnumParameter_1() {}
