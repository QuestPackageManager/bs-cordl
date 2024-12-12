#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/NativePagedList_1.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativePagedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_k_PoolCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_PoolCapacity;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_k_PoolCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___k_PoolCapacity;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_set_k_PoolCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___k_PoolCapacity = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>*& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_Pages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pages;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* const& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_Pages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pages;
}
template <typename T>
constexpr void UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_set_m_Pages(::System::Collections::Generic::List_1<::Unity::Collections::NativeArray_1<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Pages, value);
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_CurrentPage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPage;
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_CurrentPage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPage;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_set_m_CurrentPage(::Unity::Collections::NativeArray_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPage = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_CurrentPageCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPageCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_CurrentPageCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentPageCount;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_set_m_CurrentPageCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentPageCount = value;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>*& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_Enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* const& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get_m_Enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Enumerator;
}
template <typename T>
constexpr void UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_set_m_Enumerator(::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Enumerator, value);
}
template <typename T> constexpr bool& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativePagedList_1<T>::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativePagedList_1<T>::_ctor(int32_t poolCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poolCapacity);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativePagedList_1<T>::Add(::ByRef<T> data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename T> inline ::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>* UnityEngine::UIElements::UIR::NativePagedList_1<T>::GetPages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(),
                                                                             "GetPages", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Unity::Collections::NativeSlice_1<T>>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativePagedList_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::NativePagedList_1<T>::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativePagedList_1<T>::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativePagedList_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativePagedList_1<T>::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::NativePagedList_1<T>* UnityEngine::UIElements::UIR::NativePagedList_1<T>::New_ctor(int32_t poolCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::NativePagedList_1<T>*>(poolCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UIR::NativePagedList_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::NativePagedList_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::NativePagedList_1<T>::NativePagedList_1() {}
