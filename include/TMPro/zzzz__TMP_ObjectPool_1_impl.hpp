#pragma once
// IWYU pragma private; include "TMPro/TMP_ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__TMP_ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::Stack_1<T>*& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_Stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
template <typename T> constexpr ::System::Collections::Generic::Stack_1<T>* const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_Stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
template <typename T> constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stack = value;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>*& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>* const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnGet = value;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>*& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>* const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnRelease = value;
}
template <typename T> constexpr int32_t& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get__countAll_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countAll_k__BackingField;
}
template <typename T> constexpr int32_t const& TMPro::TMP_ObjectPool_1<T>::__cordl_internal_get__countAll_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countAll_k__BackingField;
}
template <typename T> constexpr void TMPro::TMP_ObjectPool_1<T>::__cordl_internal_set__countAll_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countAll_k__BackingField = value;
}
template <typename T> inline int32_t TMPro::TMP_ObjectPool_1<T>::get_countAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(), { "get_countAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_ObjectPool_1<T>::set_countAll(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(), { "set_countAll", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t TMPro::TMP_ObjectPool_1<T>::get_countActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(), { "get_countActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t TMPro::TMP_ObjectPool_1<T>::get_countInactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(), { "get_countInactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_ObjectPool_1<T>::_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<T>*>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionOnGet, actionOnRelease);
}
template <typename T> inline T TMPro::TMP_ObjectPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void TMPro::TMP_ObjectPool_1<T>::Release(T element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TMP_ObjectPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
template <typename T>
inline ::TMPro::TMP_ObjectPool_1<T>* TMPro::TMP_ObjectPool_1<T>::New_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TMP_ObjectPool_1<T>*>(actionOnGet, actionOnRelease));
}
// Ctor Parameters []
template <typename T> constexpr ::TMPro::TMP_ObjectPool_1<T>::TMP_ObjectPool_1() {}
