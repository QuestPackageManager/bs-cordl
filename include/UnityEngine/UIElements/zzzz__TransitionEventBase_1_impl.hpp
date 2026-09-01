#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\TransitionEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyNameCollection_def.hpp"
#include "UnityEngine/UIElements/zzzz__StylePropertyName_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::StylePropertyNameCollection& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__stylePropertyNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylePropertyNames_k__BackingField;
}
template <typename T>
constexpr ::UnityEngine::UIElements::StylePropertyNameCollection const& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__stylePropertyNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stylePropertyNames_k__BackingField;
}
template <typename T>
constexpr void UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_set__stylePropertyNames_k__BackingField(::UnityEngine::UIElements::StylePropertyNameCollection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stylePropertyNames_k__BackingField = value;
}
template <typename T> constexpr double_t& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__elapsedTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_k__BackingField;
}
template <typename T> constexpr double_t const& UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_get__elapsedTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elapsedTime_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::TransitionEventBase_1<T>::__cordl_internal_set__elapsedTime_k__BackingField(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elapsedTime_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::UIElements::StylePropertyNameCollection UnityEngine::UIElements::TransitionEventBase_1<T>::get_stylePropertyNames() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionEventBase_1<T>*>(), { "get_stylePropertyNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::StylePropertyNameCollection>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::set_elapsedTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionEventBase_1<T>*>(), { "set_elapsedTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TransitionEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TransitionEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::TransitionEventBase_1<T>::GetPooled(::UnityEngine::UIElements::StylePropertyName stylePropertyName, double_t elapsedTime) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TransitionEventBase_1<T>*>(),
                                                           { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::StylePropertyName>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, stylePropertyName, elapsedTime);
}
template <typename T> inline ::UnityEngine::UIElements::TransitionEventBase_1<T>* UnityEngine::UIElements::TransitionEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TransitionEventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TransitionEventBase_1<T>::TransitionEventBase_1() {}
