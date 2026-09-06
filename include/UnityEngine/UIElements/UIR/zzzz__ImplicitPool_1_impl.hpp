#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/ImplicitPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ImplicitPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_StartCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartCapacity;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_StartCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartCapacity;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_set_m_StartCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_StartCapacity = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_MaxCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxCapacity;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_MaxCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxCapacity;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_set_m_MaxCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxCapacity = value;
}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_CreateAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateAction;
}
template <typename T> constexpr ::System::Func_1<T>* const& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_CreateAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateAction;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_set_m_CreateAction(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateAction = value;
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_ResetAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetAction;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_ResetAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResetAction;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_set_m_ResetAction(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ResetAction = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_UsedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_get_m_UsedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UsedCount;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::__cordl_internal_set_m_UsedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UsedCount = value;
}
template <typename T>
inline void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::_ctor(::System::Func_1<T>* createAction, ::System::Action_1<T>* resetAction, int32_t startCapacity, int32_t maxCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ImplicitPool_1<T>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createAction, resetAction, startCapacity, maxCapacity);
}
template <typename T> inline T UnityEngine::UIElements::UIR::ImplicitPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ImplicitPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::ImplicitPool_1<T>::ReturnAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::ImplicitPool_1<T>*>(), { "ReturnAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::UIR::ImplicitPool_1<T>* UnityEngine::UIElements::UIR::ImplicitPool_1<T>::New_ctor(::System::Func_1<T>* createAction, ::System::Action_1<T>* resetAction,
                                                                                                                    int32_t startCapacity, int32_t maxCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::ImplicitPool_1<T>*>(createAction, resetAction, startCapacity, maxCapacity));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::ImplicitPool_1<T>::ImplicitPool_1() {}
