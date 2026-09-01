#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::_ctor(T value, ::UnityEngine::Rendering::ObjectPool_1<T>* pool) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::UnityEngine::Rendering::ObjectPool_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, pool);
}
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ToReturn", ty: "T", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Pool", ty: "::UnityEngine::Rendering::ObjectPool_1<T>*", modifiers: "",
// def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::ObjectPool_1_PooledObject(T m_ToReturn, ::UnityEngine::Rendering::ObjectPool_1<T>* m_Pool) noexcept {
  this->m_ToReturn = m_ToReturn;
  this->m_Pool = m_Pool;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::ObjectPool_1_PooledObject() {}
template <typename T> constexpr ::System::Collections::Generic::Stack_1<T>*& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_Stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
template <typename T> constexpr ::System::Collections::Generic::Stack_1<T>* const& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_Stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
template <typename T> constexpr void UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Stack = value;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>*& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>* const& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnGet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr void UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnGet = value;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>*& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr ::UnityEngine::Events::UnityAction_1<T>* const& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_ActionOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr void UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ActionOnRelease = value;
}
template <typename T> constexpr bool& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_CollectionCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr bool const& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get_m_CollectionCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr void UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_set_m_CollectionCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollectionCheck = value;
}
template <typename T> constexpr int32_t& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get__countAll_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countAll_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_get__countAll_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____countAll_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Rendering::ObjectPool_1<T>::__cordl_internal_set__countAll_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____countAll_k__BackingField = value;
}
template <typename T> inline int32_t UnityEngine::Rendering::ObjectPool_1<T>::get_countAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "get_countAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1<T>::set_countAll(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "set_countAll", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObjectPool_1<T>::get_countActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "get_countActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObjectPool_1<T>::get_countInactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "get_countInactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::Rendering::ObjectPool_1<T>::_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease, bool collectionCheck) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Events::UnityAction_1<T>*>(), ::i2c::type_of<::UnityEngine::Events::UnityAction_1<T>*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actionOnGet, actionOnRelease, collectionCheck);
}
template <typename T> inline T UnityEngine::Rendering::ObjectPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "Get", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> UnityEngine::Rendering::ObjectPool_1<T>::Get(::by_ref<T> v) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "Get", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>(this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1<T>::Release(T element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObjectPool_1<T>*>(), { "Release", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
template <typename T>
inline ::UnityEngine::Rendering::ObjectPool_1<T>* UnityEngine::Rendering::ObjectPool_1<T>::New_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet,
                                                                                                    ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease, bool collectionCheck) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObjectPool_1<T>*>(actionOnGet, actionOnRelease, collectionCheck));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ObjectPool_1<T>::ObjectPool_1() {}
