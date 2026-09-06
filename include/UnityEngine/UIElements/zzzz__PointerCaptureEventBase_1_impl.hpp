#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureEventBase_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventHandler_def.hpp"
template <typename T> constexpr ::UnityEngine::UIElements::IEventHandler*& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__cordl_internal_get__relatedTarget_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::UIElements::IEventHandler* const& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__cordl_internal_get__relatedTarget_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relatedTarget_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__cordl_internal_set__relatedTarget_k__BackingField(::UnityEngine::UIElements::IEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relatedTarget_k__BackingField = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__cordl_internal_get__pointerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__cordl_internal_get__pointerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerId_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::__cordl_internal_set__pointerId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointerId_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::set_relatedTarget(::UnityEngine::UIElements::IEventHandler* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(),
                                                                                         { "set_relatedTarget", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::UIElements::PointerCaptureEventBase_1<T>::get_pointerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(), { "get_pointerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::set_pointerId(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(), { "set_pointerId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::LocalInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(), { "LocalInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline T UnityEngine::UIElements::PointerCaptureEventBase_1<T>::GetPooled(::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::IEventHandler* relatedTarget,
                                                                          int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(),
                       { "GetPooled", {}, { ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<::UnityEngine::UIElements::IEventHandler*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, target, relatedTarget, pointerId);
}
template <typename T> inline void UnityEngine::UIElements::PointerCaptureEventBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UIElements::PointerCaptureEventBase_1<T>* UnityEngine::UIElements::PointerCaptureEventBase_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::PointerCaptureEventBase_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::PointerCaptureEventBase_1<T>::PointerCaptureEventBase_1() {}
