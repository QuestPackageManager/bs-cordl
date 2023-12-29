#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__ObjectPool_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::ProBuilder::ObjectPool_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr bool& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_IsDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDisposed;
}
template <typename T> constexpr bool const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_IsDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsDisposed;
}
template <typename T> constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_m_IsDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsDisposed = value;
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>*& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T> constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_m_Pool(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_desiredSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSize;
}
template <typename T> constexpr int32_t const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_desiredSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___desiredSize;
}
template <typename T> constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_desiredSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___desiredSize = value;
}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_constructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constructor;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_constructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___constructor;
}
template <typename T> constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_constructor(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___constructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_destructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destructor;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::ProBuilder::ObjectPool_1<T>::__get_destructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destructor;
}
template <typename T> constexpr void UnityEngine::ProBuilder::ObjectPool_1<T>::__set_destructor(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destructor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param lazyInitialization: bool (default: false)
template <typename T>
inline ::UnityEngine::ProBuilder::ObjectPool_1<T>* UnityEngine::ProBuilder::ObjectPool_1<T>::New_ctor(int32_t initialSize, int32_t desiredSize, ::System::Func_1<T>* constructor,
                                                                                                      ::System::Action_1<T>* destructor, bool lazyInitialization) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::ObjectPool_1<T>*>(initialSize, desiredSize, constructor, destructor, lazyInitialization));
}
/// @param lazyInitialization: bool (default: false)
template <typename T>
inline void UnityEngine::ProBuilder::ObjectPool_1<T>::_ctor(int32_t initialSize, int32_t desiredSize, ::System::Func_1<T>* constructor, ::System::Action_1<T>* destructor, bool lazyInitialization) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initialSize, desiredSize, constructor, destructor, lazyInitialization);
}
template <typename T> inline T UnityEngine::ProBuilder::ObjectPool_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(), "Dequeue",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Enqueue(T obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(), "Enqueue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj);
}
template <typename T> inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(), "Empty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(), "Dispose",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::ProBuilder::ObjectPool_1<T>::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::ObjectPool_1<T>*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::ProBuilder::ObjectPool_1<T>::ObjectPool_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
