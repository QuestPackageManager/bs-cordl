#pragma once
// IWYU pragma private; include "GlobalNamespace/SelectableStateController_1.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::SelectableStateController_1<T>::__cordl_internal_get__component() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr T const& GlobalNamespace::SelectableStateController_1<T>::__cordl_internal_get__component() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____component;
}
template <typename T> constexpr void GlobalNamespace::SelectableStateController_1<T>::__cordl_internal_set__component(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____component = value;
}
template <typename T> inline void GlobalNamespace::SelectableStateController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableStateController_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SelectableStateController_1<T>* GlobalNamespace::SelectableStateController_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectableStateController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SelectableStateController_1<T>::SelectableStateController_1() {}
