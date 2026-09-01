#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ChangeEvent_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1___c<T>::setStaticF___9(::UnityEngine::UIElements::ChangeEvent_1___c<T>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ChangeEvent_1___c<T>*, "<>9", ::UnityEngine::UIElements::ChangeEvent_1___c<T>*>(
      std::forward<::UnityEngine::UIElements::ChangeEvent_1___c<T>*>(value));
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1___c<T>* UnityEngine::UIElements::ChangeEvent_1___c<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ChangeEvent_1___c<T>*, "<>9", ::UnityEngine::UIElements::ChangeEvent_1___c<T>*>();
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1___c<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1___c<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1___c<T>::__cctor_b__0_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1___c<T>*>(), { "<.cctor>b__0_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ChangeEvent_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1___c<T>* UnityEngine::UIElements::ChangeEvent_1___c<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ChangeEvent_1___c<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ChangeEvent_1___c<T>::ChangeEvent_1___c() {}
template <typename T> constexpr T& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__previousValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__previousValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_set__previousValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousValue_k__BackingField = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__newValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_get__newValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::ChangeEvent_1<T>::__cordl_internal_set__newValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newValue_k__BackingField = value;
}
template <typename T> inline T UnityEngine::UIElements::ChangeEvent_1<T>::get_previousValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { "get_previousValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::set_previousValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { "set_previousValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::UIElements::ChangeEvent_1<T>::get_newValue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { "get_newValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::set_newValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { "set_newValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1<T>::GetPooled(T previousValue, T newValue) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<T>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ChangeEvent_1<T>*>(nullptr, ___internal_method, previousValue, newValue);
}
template <typename T> inline void UnityEngine::UIElements::ChangeEvent_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ChangeEvent_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::ChangeEvent_1<T>* UnityEngine::UIElements::ChangeEvent_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ChangeEvent_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::ChangeEvent_1<T>::ChangeEvent_1() {}
