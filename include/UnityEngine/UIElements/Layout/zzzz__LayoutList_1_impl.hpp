#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Layout\LayoutList_1.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutList_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutList_1_def.hpp"
// Ctor Parameters [CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Values", ty: "T*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>::LayoutList_1_Data(int32_t Capacity, int32_t Count, T* Values) noexcept {
  this->Capacity = Capacity;
  this->Count = Count;
  this->Values = Values;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>::LayoutList_1_Data() {}
template <typename T> inline int32_t UnityEngine::UIElements::Layout::LayoutList_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UIElements::Layout::LayoutList_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline ::by_ref<T> UnityEngine::UIElements::Layout::LayoutList_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::_ctor(int32_t initialCapacity, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::Insert(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::IncreaseCapacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "IncreaseCapacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::EnsureCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> inline void UnityEngine::UIElements::Layout::LayoutList_1<T>::ResizeCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(), { "ResizeCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T>
inline void* UnityEngine::UIElements::Layout::LayoutList_1<T>::ResizeArray(void* fromPtr, int64_t fromCount, int64_t toCount, int64_t size, int32_t align, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutList_1<T>>(),
                                                                                         { "ResizeArray",
                                                                                           {},
                                                                                           { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, fromPtr, fromCount, toCount, size, align, allocator);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr UnityEngine::UIElements::Layout::LayoutList_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* UnityEngine::UIElements::Layout::LayoutList_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Data", ty:
// "::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::UIElements::Layout::LayoutList_1<T>::LayoutList_1(::Unity::Collections::Allocator m_Allocator, ::UnityEngine::UIElements::Layout::LayoutList_1_Data<T>* m_Data) noexcept {
  this->m_Allocator = m_Allocator;
  this->m_Data = m_Data;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UIElements::Layout::LayoutList_1<T>::LayoutList_1() {}
