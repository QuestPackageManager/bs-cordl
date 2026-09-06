#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ListChangedEventArgs_1.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ListChangedEventArgs_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr int32_t const& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___index;
}
template <typename T> constexpr void UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___index = value;
}
template <typename T> constexpr T& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr T const& UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr void UnityEngine::Rendering::ListChangedEventArgs_1<T>::__cordl_internal_set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___item = value;
}
template <typename T> inline void UnityEngine::Rendering::ListChangedEventArgs_1<T>::_ctor(int32_t index, T item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ListChangedEventArgs_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename T> inline ::UnityEngine::Rendering::ListChangedEventArgs_1<T>* UnityEngine::Rendering::ListChangedEventArgs_1<T>::New_ctor(int32_t index, T item) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ListChangedEventArgs_1<T>*>(index, item));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ListChangedEventArgs_1<T>::ListChangedEventArgs_1() {}
