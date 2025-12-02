#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/TempAllocator_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempAllocator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TempAllocator_1_def.hpp"
// Ctor Parameters [CppParam { name: "array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "used", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>::TempAllocator_1_Page(::Unity::Collections::NativeArray_1<T> array, int32_t used) noexcept {
  this->array = array;
  this->used = used;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>::TempAllocator_1_Page() {}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_ExcessMinCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExcessMinCapacity;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_ExcessMinCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExcessMinCapacity;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_set_m_ExcessMinCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExcessMinCapacity = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_ExcessMaxCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExcessMaxCapacity;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_ExcessMaxCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExcessMaxCapacity;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_set_m_ExcessMaxCapacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExcessMaxCapacity = value;
}
template <typename T> constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_Pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T> constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T> const& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_Pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pool;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_set_m_Pool(::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pool = value;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>*& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_Excess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Excess;
}
template <typename T>
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>* const&
UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_Excess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Excess;
}
template <typename T>
constexpr void UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_set_m_Excess(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::TempAllocator_1_Page<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Excess, value);
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_NextExcessSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextExcessSize;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get_m_NextExcessSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NextExcessSize;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_set_m_NextExcessSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NextExcessSize = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::TempAllocator_1<T>::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::UIR::TempAllocator_1<T>::_ctor(int32_t poolCapacity, int32_t excessMinCapacity, int32_t excessMaxCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, poolCapacity, excessMinCapacity, excessMaxCapacity);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::TempAllocator_1<T>::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(),
                                                                             "get_disposed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::TempAllocator_1<T>::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(), "set_disposed",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::UIR::TempAllocator_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::TempAllocator_1<T>::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::TempAllocator_1<T>::Alloc(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(), "Alloc",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(this, ___internal_method, count);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::TempAllocator_1<T>::DoAlloc(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(), "DoAlloc",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>, false>(this, ___internal_method, count);
}
template <typename T> inline void UnityEngine::UIElements::UIR::TempAllocator_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::TempAllocator_1<T>::ReleaseExcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>::get(),
                                                                             "ReleaseExcess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline ::UnityEngine::UIElements::UIR::TempAllocator_1<T>* UnityEngine::UIElements::UIR::TempAllocator_1<T>::New_ctor(int32_t poolCapacity, int32_t excessMinCapacity, int32_t excessMaxCapacity) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UIR::TempAllocator_1<T>*>(poolCapacity, excessMinCapacity, excessMaxCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UIR::TempAllocator_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::TempAllocator_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<T>::TempAllocator_1() {}
