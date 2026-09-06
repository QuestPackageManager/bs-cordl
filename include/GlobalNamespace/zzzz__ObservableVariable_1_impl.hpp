#pragma once
// IWYU pragma private; include "GlobalNamespace/ObservableVariable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ObservableVariable_1_def.hpp"
#include "GlobalNamespace/zzzz__IObservableChange_def.hpp"
#include "GlobalNamespace/zzzz__IValue_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template <typename T> constexpr ::System::Action*& GlobalNamespace::ObservableVariable_1<T>::__cordl_internal_get_didChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeEvent;
}
template <typename T> constexpr ::System::Action* const& GlobalNamespace::ObservableVariable_1<T>::__cordl_internal_get_didChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeEvent;
}
template <typename T> constexpr void GlobalNamespace::ObservableVariable_1<T>::__cordl_internal_set_didChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeEvent = value;
}
template <typename T> constexpr T& GlobalNamespace::ObservableVariable_1<T>::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr T const& GlobalNamespace::ObservableVariable_1<T>::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
template <typename T> constexpr void GlobalNamespace::ObservableVariable_1<T>::__cordl_internal_set__value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
template <typename T> inline void GlobalNamespace::ObservableVariable_1<T>::add_didChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObservableVariable_1<T>*>(), { "add_didChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ObservableVariable_1<T>::remove_didChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObservableVariable_1<T>*>(), { "remove_didChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::ObservableVariable_1<T>::set_value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObservableVariable_1<T>*>(), { "set_value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T GlobalNamespace::ObservableVariable_1<T>::get_value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObservableVariable_1<T>*>(), { "get_value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::ObservableVariable_1<T>::op_Implicit_T(::GlobalNamespace::ObservableVariable_1<T>* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObservableVariable_1<T>*>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::ObservableVariable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, obj);
}
template <typename T> inline void GlobalNamespace::ObservableVariable_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ObservableVariable_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::ObservableVariable_1<T>* GlobalNamespace::ObservableVariable_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ObservableVariable_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::IValue_1<T>"
template <typename T> constexpr GlobalNamespace::ObservableVariable_1<T>::operator ::GlobalNamespace::IValue_1<T>*() noexcept {
  return static_cast<::GlobalNamespace::IValue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IValue_1<T>"
template <typename T> constexpr ::GlobalNamespace::IValue_1<T>* GlobalNamespace::ObservableVariable_1<T>::i___GlobalNamespace__IValue_1_T_() noexcept {
  return static_cast<::GlobalNamespace::IValue_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IObservableChange"
template <typename T> constexpr GlobalNamespace::ObservableVariable_1<T>::operator ::GlobalNamespace::IObservableChange*() noexcept {
  return static_cast<::GlobalNamespace::IObservableChange*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IObservableChange"
template <typename T> constexpr ::GlobalNamespace::IObservableChange* GlobalNamespace::ObservableVariable_1<T>::i___GlobalNamespace__IObservableChange() noexcept {
  return static_cast<::GlobalNamespace::IObservableChange*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::ObservableVariable_1<T>::ObservableVariable_1() {}
