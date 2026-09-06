#pragma once
// IWYU pragma private; include "UnityEngine/Pool/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IPool_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_CreateFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr ::System::Func_1<T>* const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_CreateFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_CreateFunc(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CreateFunc = value;
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_ActionOnGet(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnGet = value;
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_ActionOnRelease(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnRelease = value;
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnDestroy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnDestroy;
}
template <typename T> constexpr ::System::Action_1<T>* const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnDestroy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnDestroy;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_ActionOnDestroy(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnDestroy = value;
}
template <typename T> constexpr int32_t& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr int32_t const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSize = value;
}
template <typename T> constexpr bool& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_CollectionCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr bool const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_CollectionCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_CollectionCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollectionCheck = value;
}
template <typename T> constexpr T& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_FreshlyReleased() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreshlyReleased;
}
template <typename T> constexpr T const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get_m_FreshlyReleased() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FreshlyReleased;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set_m_FreshlyReleased(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FreshlyReleased = value;
}
template <typename T> constexpr int32_t& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get__CountAll_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CountAll_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_get__CountAll_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CountAll_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__cordl_internal_set__CountAll_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CountAll_k__BackingField = value;
}
template <typename T> inline int32_t UnityEngine::Pool::ObjectPool_1<T>::get_CountAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "get_CountAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::set_CountAll(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "set_CountAll", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::Pool::ObjectPool_1<T>::get_CountInactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "get_CountInactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::Pool::ObjectPool_1<T>::_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease,
                                                      ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Func_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<::System::Action_1<T>*>(),
                                                               ::i2c::type_of<::System::Action_1<T>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize);
}
template <typename T> inline T UnityEngine::Pool::ObjectPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::PooledObject_1<T> UnityEngine::Pool::ObjectPool_1<T>::Get(::by_ref<T> v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "Get", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>>(this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::Release(T element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Pool::ObjectPool_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Pool::ObjectPool_1<T>::New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease,
                                                                                          ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Pool::ObjectPool_1<T>*>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Pool::ObjectPool_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::Pool::ObjectPool_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Pool::IPool"
template <typename T> constexpr UnityEngine::Pool::ObjectPool_1<T>::operator ::UnityEngine::Pool::IPool*() noexcept {
  return static_cast<::UnityEngine::Pool::IPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Pool::IPool"
template <typename T> constexpr ::UnityEngine::Pool::IPool* UnityEngine::Pool::ObjectPool_1<T>::i___UnityEngine__Pool__IPool() noexcept {
  return static_cast<::UnityEngine::Pool::IPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Pool::IObjectPool_1<T>"
template <typename T> constexpr UnityEngine::Pool::ObjectPool_1<T>::operator ::UnityEngine::Pool::IObjectPool_1<T>*() noexcept {
  return static_cast<::UnityEngine::Pool::IObjectPool_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Pool::IObjectPool_1<T>"
template <typename T> constexpr ::UnityEngine::Pool::IObjectPool_1<T>* UnityEngine::Pool::ObjectPool_1<T>::i___UnityEngine__Pool__IObjectPool_1_T_() noexcept {
  return static_cast<::UnityEngine::Pool::IObjectPool_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::ObjectPool_1<T>::ObjectPool_1() {}
