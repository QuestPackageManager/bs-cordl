#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\CustomStyleProperty_1.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline ::StringW UnityEngine::UIElements::CustomStyleProperty_1<T>::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::CustomStyleProperty_1<T>::set_name(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::CustomStyleProperty_1<T>::_ctor(::StringW propertyName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, propertyName);
}
template <typename T> inline bool UnityEngine::UIElements::CustomStyleProperty_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline bool UnityEngine::UIElements::CustomStyleProperty_1<T>::Equals(::UnityEngine::UIElements::CustomStyleProperty_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline int32_t UnityEngine::UIElements::CustomStyleProperty_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CustomStyleProperty_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>"
template <typename T> constexpr UnityEngine::UIElements::CustomStyleProperty_1<T>::operator ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*
UnityEngine::UIElements::CustomStyleProperty_1<T>::i___System__IEquatable_1___UnityEngine__UIElements__CustomStyleProperty_1_T__() {
  return static_cast<::System::IEquatable_1<::UnityEngine::UIElements::CustomStyleProperty_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::CustomStyleProperty_1<T>::CustomStyleProperty_1(::StringW _name_k__BackingField) noexcept {
  this->_name_k__BackingField = _name_k__BackingField;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::CustomStyleProperty_1<T>::CustomStyleProperty_1() {}
