#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableData_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_def.hpp"
template <typename T> constexpr bool& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__override() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____override;
}
template <typename T> constexpr bool const& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__override() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____override;
}
template <typename T> constexpr void StyledUITemplates::OverridableData_1<T>::__cordl_internal_set__override(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____override = value;
}
template <typename T> constexpr T& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr T const& StyledUITemplates::OverridableData_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void StyledUITemplates::OverridableData_1<T>::__cordl_internal_set__data(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
template <typename T> inline bool StyledUITemplates::OverridableData_1<T>::get_overrideEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableData_1<T>*>(), { "get_overrideEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void StyledUITemplates::OverridableData_1<T>::set_overrideEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableData_1<T>*>(), { "set_overrideEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T StyledUITemplates::OverridableData_1<T>::get_data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableData_1<T>*>(), { "get_data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void StyledUITemplates::OverridableData_1<T>::set_data(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableData_1<T>*>(), { "set_data", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void StyledUITemplates::OverridableData_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::StyledUITemplates::OverridableData_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::StyledUITemplates::OverridableData_1<T>* StyledUITemplates::OverridableData_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::StyledUITemplates::OverridableData_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::StyledUITemplates::OverridableData_1<T>::OverridableData_1() {}
