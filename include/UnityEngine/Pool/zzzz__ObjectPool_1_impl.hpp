#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Pool/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::Pool::ObjectPool_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Pool::IObjectPool_1<T>"
template <typename T> constexpr UnityEngine::Pool::ObjectPool_1<T>::operator ::UnityEngine::Pool::IObjectPool_1<T>*() noexcept {
  return static_cast<::UnityEngine::Pool::IObjectPool_1<T>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_List(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_List)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__get_m_CreateFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_CreateFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CreateFunc;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_CreateFunc(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CreateFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnGet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnGet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnGet;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_ActionOnGet(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionOnGet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnRelease() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnRelease() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnRelease;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_ActionOnRelease(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionOnRelease)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnDestroy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnDestroy;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_ActionOnDestroy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActionOnDestroy;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_ActionOnDestroy(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActionOnDestroy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::Pool::ObjectPool_1<T>::__get_m_MaxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr int32_t const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_MaxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxSize;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_MaxSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxSize = value;
}
template <typename T> constexpr bool& UnityEngine::Pool::ObjectPool_1<T>::__get_m_CollectionCheck() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr bool const& UnityEngine::Pool::ObjectPool_1<T>::__get_m_CollectionCheck() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CollectionCheck;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set_m_CollectionCheck(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CollectionCheck = value;
}
template <typename T> constexpr int32_t& UnityEngine::Pool::ObjectPool_1<T>::__get__CountAll_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CountAll_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::Pool::ObjectPool_1<T>::__get__CountAll_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CountAll_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Pool::ObjectPool_1<T>::__set__CountAll_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CountAll_k__BackingField = value;
}
template <typename T> inline int32_t UnityEngine::Pool::ObjectPool_1<T>::get_CountAll() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "get_CountAll",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::set_CountAll(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "set_CountAll", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::Pool::ObjectPool_1<T>::get_CountInactive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "get_CountInactive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @param actionOnGet: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnRelease: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnDestroy: ::System::Action_1<T>* (default: nullptr)
/// @param collectionCheck: bool (default: true)
/// @param defaultCapacity: int32_t (default: static_cast<int32_t>(0xa))
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x2710))
template <typename T>
inline ::UnityEngine::Pool::ObjectPool_1<T>* UnityEngine::Pool::ObjectPool_1<T>::New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease,
                                                                                          ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Pool::ObjectPool_1<T>*>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize));
}
/// @param actionOnGet: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnRelease: ::System::Action_1<T>* (default: nullptr)
/// @param actionOnDestroy: ::System::Action_1<T>* (default: nullptr)
/// @param collectionCheck: bool (default: true)
/// @param defaultCapacity: int32_t (default: static_cast<int32_t>(0xa))
/// @param maxSize: int32_t (default: static_cast<int32_t>(0x2710))
template <typename T>
inline void UnityEngine::Pool::ObjectPool_1<T>::_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease,
                                                      ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int32_t defaultCapacity, int32_t maxSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize);
}
template <typename T> inline T UnityEngine::Pool::ObjectPool_1<T>::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "Get",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Pool::PooledObject_1<T> UnityEngine::Pool::ObjectPool_1<T>::Get(ByRef<T> v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>, false>(this, ___internal_method, v);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::Release(T element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "Release", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "Clear",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Pool::ObjectPool_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::ObjectPool_1<T>*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Pool::ObjectPool_1<T>::ObjectPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
