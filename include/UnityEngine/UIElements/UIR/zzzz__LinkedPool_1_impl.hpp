#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/LinkedPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_CreateFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr ::System::Func_1<T>* const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_CreateFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_set_m_CreateFunc(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateFunc = value;
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_ResetAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetAction;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_ResetAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetAction;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_set_m_ResetAction(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResetAction = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_Limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Limit;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_Limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Limit;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_set_m_Limit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Limit = value;
}
template <typename T> constexpr T& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_PoolFirst() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoolFirst;
}
template <typename T> constexpr T const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get_m_PoolFirst() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PoolFirst;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_set_m_PoolFirst(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PoolFirst = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get__Count_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_get__Count_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Count_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::LinkedPool_1<T>::__cordl_internal_set__Count_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Count_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* resetAction, int32_t limit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createFunc, resetAction, limit);
}
template <typename T> inline int32_t UnityEngine::UIElements::UIR::LinkedPool_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::set_Count(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::UIR::LinkedPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::LinkedPool_1<T>::Return(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(), { "Return", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T>
inline ::UnityEngine::UIElements::UIR::LinkedPool_1<T>* UnityEngine::UIElements::UIR::LinkedPool_1<T>::New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* resetAction, int32_t limit) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::LinkedPool_1<T>*>(createFunc, resetAction, limit));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<T>::LinkedPool_1() {}
