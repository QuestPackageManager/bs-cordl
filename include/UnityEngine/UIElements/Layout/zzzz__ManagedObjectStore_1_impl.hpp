#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\ManagedObjectStore_1.hpp"
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
template <typename T> constexpr ::System::Collections::Generic::List_1<::ArrayW<T>>*& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Chunks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Chunks;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<::ArrayW<T>>* const& UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_get_m_Chunks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Chunks;
}
template <typename T> constexpr void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::__cordl_internal_set_m_Chunks(::System::Collections::Generic::List_1<::ArrayW<T>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Chunks = value;
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
  this->___m_Free = value;
}
template <typename T> inline void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::GetValue(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>(), { "GetValue", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::UpdateValue(::by_ref<int32_t> index, T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>(),
                                                                                         { "UpdateValue", {}, { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>* UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::ManagedObjectStore_1<T>::ManagedObjectStore_1() {}
