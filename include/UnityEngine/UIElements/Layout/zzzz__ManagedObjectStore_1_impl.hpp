#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/ManagedObjectStore_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ManagedObjectStore_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Length;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Length;
}
template <typename T> constexpr void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_set_m_Length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Length = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>*& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Chunks;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>* const& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Chunks;
}
template <typename T> constexpr void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_set_m_Chunks(::System::Collections::Generic::List_1<::ArrayW<T, ::Array<T>*>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Chunks, value);
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<int32_t>*& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Free;
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Free;
}
template <typename T> constexpr void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_set_m_Free(::System::Collections::Generic::Queue_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Free, value);
}
template <typename T> inline void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::GetValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>::get(), "GetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::UpdateValue(::ByRef<int32_t> index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>::get(), "UpdateValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>* UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::ManagedObjectStore_1() {}
