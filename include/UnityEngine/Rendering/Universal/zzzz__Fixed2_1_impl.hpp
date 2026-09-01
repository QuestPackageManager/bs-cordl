#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\Fixed2_1.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Fixed2_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::Universal::Fixed2_1<T>::_ctor(T item1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Fixed2_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item1);
}
template <typename T> inline void UnityEngine::Rendering::Universal::Fixed2_1<T>::_ctor(T item1, T item2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Fixed2_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item1, item2);
}
template <typename T> inline T UnityEngine::Rendering::Universal::Fixed2_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Fixed2_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::Rendering::Universal::Fixed2_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Fixed2_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline void UnityEngine::Rendering::Universal::Fixed2_1<T>::CheckRange(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Fixed2_1<T>>(), { "CheckRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index);
}
// Ctor Parameters [CppParam { name: "item1", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "item2", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Rendering::Universal::Fixed2_1<T>::Fixed2_1(T item1, T item2) noexcept {
  this->item1 = item1;
  this->item2 = item2;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::Fixed2_1<T>::Fixed2_1() {}
