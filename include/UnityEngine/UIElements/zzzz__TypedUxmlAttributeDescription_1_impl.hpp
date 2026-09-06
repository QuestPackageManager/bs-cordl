#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TypedUxmlAttributeDescription_1.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlAttributeDescription_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename T> constexpr T& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__cordl_internal_get__defaultValue_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
template <typename T> constexpr T const& UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__cordl_internal_get__defaultValue_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultValue_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::__cordl_internal_set__defaultValue_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultValue_k__BackingField = value;
}
template <typename T>
inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, bag, cc);
}
template <typename T> inline T UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::get_defaultValue() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>(), { "get_defaultValue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::set_defaultValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>(), { "set_defaultValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>* UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::TypedUxmlAttributeDescription_1<T>::TypedUxmlAttributeDescription_1() {}
