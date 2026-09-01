#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIR\NativeList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__NativeList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>& UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_get_m_NativeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeArray;
}
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T> const& UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_get_m_NativeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NativeArray;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_set_m_NativeArray(::Unity::Collections::NativeArray_1<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_NativeArray = value;
}
template <typename T> constexpr int32_t& UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
template <typename T> constexpr int32_t const& UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Count = value;
}
template <typename T> constexpr bool& UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_get__disposed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr bool const& UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_get__disposed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed_k__BackingField;
}
template <typename T> constexpr void UnityEngine::UIElements::UIR::NativeList_1<T>::__cordl_internal_set__disposed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed_k__BackingField = value;
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::_ctor(int32_t initialCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialCapacity);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::Expand(int32_t newLength) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "Expand", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLength);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::Add(::Unity::Collections::NativeSlice_1<T> src) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "Add", {}, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeSlice_1<T> UnityEngine::UIElements::UIR::NativeList_1<T>::GetSlice(int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "GetSlice", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeSlice_1<T>>(this, ___internal_method, start, length);
}
template <typename T> inline int32_t UnityEngine::UIElements::UIR::NativeList_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::UIR::NativeList_1<T>::get_disposed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "get_disposed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::set_disposed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "set_disposed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::UIR::NativeList_1<T>::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(), { "Dispose", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
template <typename T> inline ::UnityEngine::UIElements::UIR::NativeList_1<T>* UnityEngine::UIElements::UIR::NativeList_1<T>::New_ctor(int32_t initialCapacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIR::NativeList_1<T>*>(initialCapacity));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::UIR::NativeList_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::UIR::NativeList_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::UIR::NativeList_1<T>::NativeList_1() {}
