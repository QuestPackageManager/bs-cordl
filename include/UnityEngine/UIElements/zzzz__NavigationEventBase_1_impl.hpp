#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\NavigationEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationDeviceType_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__INavigationEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationDeviceType_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
template <typename T> constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::NavigationEventBase_1<T>::__cordl_internal_get__modifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::NavigationEventBase_1<T>::__cordl_internal_get__modifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modifiers_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::NavigationEventBase_1<T>::__cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modifiers_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::NavigationDeviceType& UnityEngine::UIElements::NavigationEventBase_1<T>::__cordl_internal_get__deviceType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceType_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::NavigationDeviceType const& UnityEngine::UIElements::NavigationEventBase_1<T>::__cordl_internal_get__deviceType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deviceType_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::NavigationEventBase_1<T>::__cordl_internal_set__deviceType_k__BackingField(::UnityEngine::UIElements::NavigationDeviceType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deviceType_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::EventModifiers UnityEngine::UIElements::NavigationEventBase_1<T>::get_modifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "get_modifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::set_modifiers(::UnityEngine::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "set_modifiers", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::NavigationEventBase_1<T>::get_shiftKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "get_shiftKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::NavigationEventBase_1<T>::get_altKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "get_altKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::NavigationDeviceType UnityEngine::UIElements::NavigationEventBase_1<T>::get_deviceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "get_deviceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::NavigationDeviceType>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::set_deviceType(::UnityEngine::UIElements::NavigationDeviceType value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(),
                                                                                         { "set_deviceType", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationDeviceType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::NavigationEventBase_1<T>::GetPooled(::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, modifiers);
}
template <typename T> inline T UnityEngine::UIElements::NavigationEventBase_1<T>::GetPooled(::UnityEngine::UIElements::NavigationDeviceType deviceType, ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(),
                                              { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::NavigationDeviceType>(), ::i2c::type_of<::UnityEngine::EventModifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, deviceType, modifiers);
}
template <typename T> inline void UnityEngine::UIElements::NavigationEventBase_1<T>::Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::NavigationEventBase_1<T>*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, panel);
}
template <typename T> inline ::UnityEngine::UIElements::NavigationEventBase_1<T>* UnityEngine::UIElements::NavigationEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::NavigationEventBase_1<T>*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::INavigationEvent"
template <typename T> constexpr UnityEngine::UIElements::NavigationEventBase_1<T>::operator ::UnityEngine::UIElements::INavigationEvent*() noexcept {
  return static_cast<::UnityEngine::UIElements::INavigationEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::INavigationEvent"
template <typename T> constexpr ::UnityEngine::UIElements::INavigationEvent* UnityEngine::UIElements::NavigationEventBase_1<T>::i___UnityEngine__UIElements__INavigationEvent() noexcept {
  return static_cast<::UnityEngine::UIElements::INavigationEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::NavigationEventBase_1<T>::NavigationEventBase_1() {}
