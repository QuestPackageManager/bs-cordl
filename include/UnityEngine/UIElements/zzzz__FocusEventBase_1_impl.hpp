#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\FocusEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusController_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__relatedTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::Focusable* const& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__relatedTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_set__relatedTarget_k__BackingField(::UnityEngine::UIElements::Focusable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relatedTarget_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::FocusChangeDirection*& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__direction_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::FocusChangeDirection* const& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__direction_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____direction_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_set__direction_k__BackingField(::UnityEngine::UIElements::FocusChangeDirection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____direction_k__BackingField = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::FocusController*& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__focusController_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusController_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::FocusController* const& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__focusController_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusController_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_set__focusController_k__BackingField(::UnityEngine::UIElements::FocusController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____focusController_k__BackingField = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__IsFocusDelegated_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsFocusDelegated_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_get__IsFocusDelegated_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsFocusDelegated_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::FocusEventBase_1<T>::__cordl_internal_set__IsFocusDelegated_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsFocusDelegated_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::UIElements::Focusable* UnityEngine::UIElements::FocusEventBase_1<T>::get_relatedTarget() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "get_relatedTarget", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Focusable*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_relatedTarget(::UnityEngine::UIElements::Focusable* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "set_relatedTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::Focusable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::FocusChangeDirection* UnityEngine::UIElements::FocusEventBase_1<T>::get_direction() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "get_direction", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusChangeDirection*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_direction(::UnityEngine::UIElements::FocusChangeDirection* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(),
                                                                                         { "set_direction", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::UIElements::FocusController* UnityEngine::UIElements::FocusEventBase_1<T>::get_focusController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "get_focusController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::FocusController*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_focusController(::UnityEngine::UIElements::FocusController* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(),
                                                                                         { "set_focusController", {}, { ::i2c::type_of<::UnityEngine::UIElements::FocusController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::UIElements::FocusEventBase_1<T>::get_IsFocusDelegated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "get_IsFocusDelegated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::set_IsFocusDelegated(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "set_IsFocusDelegated", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline T UnityEngine::UIElements::FocusEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::Focusable* relatedTarget,
                                                                 ::UnityEngine::UIElements::FocusChangeDirection* direction, ::UnityEngine::UIElements::FocusController* focusController,
                                                                 bool bIsFocusDelegated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(),
                          { "GetPooled",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<::UnityEngine::UIElements::Focusable*>(),
                              ::i2c::type_of<::UnityEngine::UIElements::FocusChangeDirection*>(), ::i2c::type_of<::UnityEngine::UIElements::FocusController*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, relatedTarget, direction, focusController, bIsFocusDelegated);
}
template <typename T> inline void UnityEngine::UIElements::FocusEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::FocusEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::FocusEventBase_1<T>* UnityEngine::UIElements::FocusEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::FocusEventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::FocusEventBase_1<T>::FocusEventBase_1() {}
