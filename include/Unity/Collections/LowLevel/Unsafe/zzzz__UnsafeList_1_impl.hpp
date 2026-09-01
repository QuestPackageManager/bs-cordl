#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeList_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::get_IsCreated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::get_IsEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::_ctor(T* ptr, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::UnsafeList_1_ReadOnly(T* Ptr, int32_t Length) noexcept {
  this->Ptr = Ptr;
  this->Length = Length;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>::UnsafeList_1_ReadOnly() {}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>::_ctor(T* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>::UnsafeList_1_ParallelReader(T* Ptr, int32_t Length) noexcept {
  this->Ptr = Ptr;
  this->Length = Length;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>::UnsafeList_1_ParallelReader() {}
template <typename T> inline void* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::get_Ptr() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>>(), { "get_Ptr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, listData);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::AddNoResize(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>>(), { "AddNoResize", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::AddRangeNoResize(void* ptr, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>>(),
                                                                                         { "AddRangeNoResize", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>>(),
                                                                                         { "AddRangeNoResize", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
// Ctor Parameters [CppParam { name: "ListData", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::UnsafeList_1_ParallelWriter(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* ListData) noexcept {
  this->ListData = ListData;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>::UnsafeList_1_ParallelWriter() {}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::UnsafeList_1_Enumerator(T* m_Ptr, int32_t m_Length, int32_t m_Index) noexcept {
  this->m_Ptr = m_Ptr;
  this->m_Length = m_Length;
  this->m_Index = m_Index;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>::UnsafeList_1_Enumerator() {}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline T Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::_ctor(T* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::_ctor(int32_t initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                         ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator, options);
}
template <typename T>
template <typename U>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Create(int32_t initialCapacity, ::by_ref<U> allocator,
                                                                                                                              ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                          { "Create", { ::i2c::class_of<U>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>(nullptr, ___internal_method, initialCapacity, allocator, options);
}
template <typename T>
template <typename U>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData, ::by_ref<U> allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                              { "Destroy", { ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>(), ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listData, allocator);
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Create(int32_t initialCapacity,
                                                                                                                              ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                                                              ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
          { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>(nullptr, ___internal_method, initialCapacity, allocator, options);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* listData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "Destroy", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listData);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> template <typename U> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Dispose(::by_ref<U> allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "Dispose", { ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Resize(int32_t length, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, options);
}
template <typename T> template <typename U> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::ResizeExact(::by_ref<U> allocator, int32_t newCapacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                           { "ResizeExact", { ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator, newCapacity);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::ResizeExact(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "ResizeExact", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> template <typename U> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::SetCapacity(::by_ref<U> allocator, int32_t capacity) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                           { "SetCapacity", { ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator, capacity);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::SetCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "TrimExcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddNoResize(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "AddNoResize", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddRangeNoResize(void* ptr, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "AddRangeNoResize", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "AddRangeNoResize", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::Add(::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "Add", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddRange(void* ptr, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "AddRange", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddRange(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "AddRange", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AddReplicate(::by_ref<T> value, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "AddReplicate", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::InsertRangeWithBeginEnd(int32_t begin, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "InsertRangeWithBeginEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::InsertRange(int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "InsertRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::RemoveAtSwapBack(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::RemoveRangeSwapBack(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "RemoveRangeSwapBack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::RemoveRange(int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "RemoveRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AsParallelReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "AsParallelReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::AsParallelWriter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "AsParallelWriter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelWriter<T>>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CopyFrom(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "CopyFrom", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T> Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CheckNull(void* listData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "CheckNull", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listData);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CheckIndexCount(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "CheckIndexCount", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CheckBeginEndNoLength(int32_t begin, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "CheckBeginEndNoLength", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CheckBeginEnd(int32_t begin, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "CheckBeginEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CheckNoResizeHasEnoughCapacity(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), { "CheckNoResizeHasEnoughCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::CheckNoResizeHasEnoughCapacity(int32_t length, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(),
                                                                                         { "CheckNoResizeHasEnoughCapacity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, index);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::Unity::Collections::INativeList_1<T>*() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
template <typename T> constexpr ::Unity::Collections::INativeList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___Unity__Collections__INativeList_1_T_() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___Unity__Collections__IIndexable_1_T_() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::UnsafeList_1(T* Ptr, int32_t m_length, int32_t m_capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator,
                                                                                int32_t padding) noexcept {
  this->Ptr = Ptr;
  this->m_length = m_length;
  this->m_capacity = m_capacity;
  this->Allocator = Allocator;
  this->padding = padding;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>::UnsafeList_1() {}
