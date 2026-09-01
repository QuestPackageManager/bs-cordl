#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\LinkedPoolItem_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__cordl_internal_get_poolNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolNext;
}
template <typename T> constexpr T const& UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__cordl_internal_get_poolNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___poolNext;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::__cordl_internal_set_poolNext(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___poolNext = value;
}
template <typename T> inline void UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>* UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::LinkedPoolItem_1<T>::LinkedPoolItem_1() {}
