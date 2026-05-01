#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::_ctor(T value, ::UnityEngine::Rendering::ObjectPool_1<T>* pool) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObjectPool_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, pool);
}
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::Rendering::ObjectPool_1_PooledObject<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
  ::cordl_internals::setInstanceField(this, &this->___m_Stack, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_ActionOnGet, value);
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
  ::cordl_internals::setInstanceField(this, &this->___m_ActionOnRelease, value);
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(), "get_countAll",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1<T>::set_countAll(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(), "set_countAll",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObjectPool_1<T>::get_countActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(),
                                                                             "get_countActive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObjectPool_1<T>::get_countInactive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(),
                                                                             "get_countInactive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T>
inline void UnityEngine::Rendering::ObjectPool_1<T>::_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet, ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease, bool collectionCheck) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionOnGet, actionOnRelease, collectionCheck);
}
template <typename T> inline T UnityEngine::Rendering::ObjectPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(), "Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::ObjectPool_1_PooledObject<T> UnityEngine::Rendering::ObjectPool_1<T>::Get(::ByRef<T> v) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObjectPool_1_PooledObject<T>, false>(this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::Rendering::ObjectPool_1<T>::Release(T element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ObjectPool_1<T>*>::get(), "Release",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template <typename T>
inline ::UnityEngine::Rendering::ObjectPool_1<T>* UnityEngine::Rendering::ObjectPool_1<T>::New_ctor(::UnityEngine::Events::UnityAction_1<T>* actionOnGet,
                                                                                                    ::UnityEngine::Events::UnityAction_1<T>* actionOnRelease, bool collectionCheck) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::ObjectPool_1<T>*>(actionOnGet, actionOnRelease, collectionCheck));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ObjectPool_1<T>::ObjectPool_1() {}
