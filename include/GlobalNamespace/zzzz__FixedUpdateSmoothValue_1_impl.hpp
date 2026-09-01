#pragma once
// IWYU pragma private; include "GlobalNamespace\FixedUpdateSmoothValue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
template <typename T> constexpr T& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__currentSmoothedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSmoothedValue;
}
template <typename T> constexpr T const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__currentSmoothedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentSmoothedValue;
}
template <typename T> constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_set__currentSmoothedValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentSmoothedValue = value;
}
template <typename T> constexpr T& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__prevSmoothedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSmoothedValue;
}
template <typename T> constexpr T const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__prevSmoothedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevSmoothedValue;
}
template <typename T> constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_set__prevSmoothedValue(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevSmoothedValue = value;
}
template <typename T> constexpr float_t& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
template <typename T> constexpr float_t const& GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
template <typename T> constexpr void GlobalNamespace::FixedUpdateSmoothValue_1<T>::__cordl_internal_set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
template <typename T> inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::_ctor(float_t smooth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smooth);
}
template <typename T> inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::SetStartValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(), { "SetStartValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::FixedUpdateSmoothValue_1<T>::FixedUpdate(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(), { "FixedUpdate", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T GlobalNamespace::FixedUpdateSmoothValue_1<T>::GetValue(float_t interpolationFactor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(), { "GetValue", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, interpolationFactor);
}
template <typename T> inline T GlobalNamespace::FixedUpdateSmoothValue_1<T>::Interpolate(T value0, T value1, float_t t) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, value0, value1, t);
}
template <typename T> inline ::GlobalNamespace::FixedUpdateSmoothValue_1<T>* GlobalNamespace::FixedUpdateSmoothValue_1<T>::New_ctor(float_t smooth) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FixedUpdateSmoothValue_1<T>*>(smooth));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::FixedUpdateSmoothValue_1<T>::FixedUpdateSmoothValue_1() {}
