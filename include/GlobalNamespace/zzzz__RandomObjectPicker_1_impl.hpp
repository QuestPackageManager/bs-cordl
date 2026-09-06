#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomObjectPicker_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RandomObjectPicker_1_def.hpp"
template <typename T> constexpr ::ArrayW<T>& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__objects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
template <typename T> constexpr ::ArrayW<T> const& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__objects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objects;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_set__objects(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____objects = value;
}
template <typename T> constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__lastPickTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPickTime;
}
template <typename T> constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__lastPickTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastPickTime;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_set__lastPickTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastPickTime = value;
}
template <typename T> constexpr float_t& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__minimumPickInterval() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumPickInterval;
}
template <typename T> constexpr float_t const& GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_get__minimumPickInterval() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minimumPickInterval;
}
template <typename T> constexpr void GlobalNamespace::RandomObjectPicker_1<T>::__cordl_internal_set__minimumPickInterval(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minimumPickInterval = value;
}
template <typename T> inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(T obj, float_t minimumPickInterval) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomObjectPicker_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, minimumPickInterval);
}
template <typename T> inline void GlobalNamespace::RandomObjectPicker_1<T>::_ctor(::ArrayW<T> objects, float_t minimumPickInterval) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomObjectPicker_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, objects, minimumPickInterval);
}
template <typename T> inline T GlobalNamespace::RandomObjectPicker_1<T>::PickRandomObject() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomObjectPicker_1<T>*>(), { "PickRandomObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(T obj, float_t minimumPickInterval) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomObjectPicker_1<T>*>(obj, minimumPickInterval));
}
template <typename T> inline ::GlobalNamespace::RandomObjectPicker_1<T>* GlobalNamespace::RandomObjectPicker_1<T>::New_ctor(::ArrayW<T> objects, float_t minimumPickInterval) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomObjectPicker_1<T>*>(objects, minimumPickInterval));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::RandomObjectPicker_1<T>::RandomObjectPicker_1() {}
