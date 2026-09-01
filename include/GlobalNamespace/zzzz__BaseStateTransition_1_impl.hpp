#pragma once
// IWYU pragma private; include "GlobalNamespace\BaseStateTransition_1.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_impl.hpp"
#include "GlobalNamespace/zzzz__BaseStateTransition_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::BaseStateTransition_1<T>::__cordl_internal_get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr T const& GlobalNamespace::BaseStateTransition_1<T>::__cordl_internal_get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr void GlobalNamespace::BaseStateTransition_1<T>::__cordl_internal_set__component(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____component = value;
}
template <typename T> inline void GlobalNamespace::BaseStateTransition_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BaseStateTransition_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::BaseStateTransition_1<T>* GlobalNamespace::BaseStateTransition_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BaseStateTransition_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BaseStateTransition_1<T>::BaseStateTransition_1() {}
