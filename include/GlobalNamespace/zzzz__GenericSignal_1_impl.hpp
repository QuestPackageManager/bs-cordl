#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericSignal_1.hpp"
#include "GlobalNamespace/zzzz__Signal_impl.hpp"
#include "GlobalNamespace/zzzz__GenericSignal_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> constexpr ::System::Action_1<T>*& GlobalNamespace::GenericSignal_1<T>::__cordl_internal_get__floatEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatEvent;
}
template <typename T> constexpr ::System::Action_1<T>* const& GlobalNamespace::GenericSignal_1<T>::__cordl_internal_get__floatEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____floatEvent;
}
template <typename T> constexpr void GlobalNamespace::GenericSignal_1<T>::__cordl_internal_set__floatEvent(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____floatEvent = value;
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Raise() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GenericSignal_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Raise(T f) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericSignal_1<T>*>(), { "Raise", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Subscribe(::System::Action_1<T>* foo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericSignal_1<T>*>(), { "Subscribe", {}, { ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foo);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::Unsubscribe(::System::Action_1<T>* foo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericSignal_1<T>*>(), { "Unsubscribe", {}, { ::i2c::type_of<::System::Action_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, foo);
}
template <typename T> inline void GlobalNamespace::GenericSignal_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GenericSignal_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::GenericSignal_1<T>* GlobalNamespace::GenericSignal_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GenericSignal_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::GenericSignal_1<T>::GenericSignal_1() {}
