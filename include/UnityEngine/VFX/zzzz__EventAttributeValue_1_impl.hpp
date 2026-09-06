#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeValue_1.hpp"
#include "UnityEngine/VFX/zzzz__EventAttribute_impl.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
template <typename T> constexpr ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*& UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_get_m_HasFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFunc;
}
template <typename T> constexpr ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* const& UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_get_m_HasFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasFunc;
}
template <typename T> constexpr void UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_set_m_HasFunc(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasFunc = value;
}
template <typename T> constexpr ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>*& UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_get_m_ApplyFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyFunc;
}
template <typename T> constexpr ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* const& UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_get_m_ApplyFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ApplyFunc;
}
template <typename T> constexpr void UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_set_m_ApplyFunc(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ApplyFunc = value;
}
template <typename T> constexpr T& UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void UnityEngine::VFX::EventAttributeValue_1<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
template <typename T>
inline void UnityEngine::VFX::EventAttributeValue_1<T>::_ctor(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* hasFunc,
                                                              ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* applyFunc) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeValue_1<T>*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>*>(),
                                                                                             ::i2c::type_of<::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFunc, applyFunc);
}
template <typename T> inline bool UnityEngine::VFX::EventAttributeValue_1<T>::ApplyToVFX(::UnityEngine::VFX::VFXEventAttribute* eventAttribute) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::VFX::EventAttributeValue_1<T>*>(), { "ApplyToVFX", {}, { ::i2c::type_of<::UnityEngine::VFX::VFXEventAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventAttribute);
}
template <typename T>
inline ::UnityEngine::VFX::EventAttributeValue_1<T>* UnityEngine::VFX::EventAttributeValue_1<T>::New_ctor(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* hasFunc,
                                                                                                          ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, T>* applyFunc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::VFX::EventAttributeValue_1<T>*>(hasFunc, applyFunc));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::VFX::EventAttributeValue_1<T>::EventAttributeValue_1() {}
