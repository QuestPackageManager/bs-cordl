#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafePtrList_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafePtrList_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::get_IsCreated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::get_IsEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::_ctor(T* ptr, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>>(), { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::IndexOf(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>>(), { "IndexOf", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ptr);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::Contains(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>>(), { "Contains", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::UnsafePtrList_1_ReadOnly(T* Ptr, int32_t Length) noexcept {
  this->Ptr = Ptr;
  this->Length = Length;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>::UnsafePtrList_1_ReadOnly() {}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>::_ctor(T* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>::IndexOf(void* ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>>(), { "IndexOf", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ptr);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>::Contains(void* ptr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>>(), { "Contains", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ptr);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>::UnsafePtrList_1_ParallelReader(T* Ptr, int32_t Length) noexcept {
  this->Ptr = Ptr;
  this->Length = Length;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>::UnsafePtrList_1_ParallelReader() {}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>::_ctor(T* ptr, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>* listData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, listData);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>::AddNoResize(T* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>>(), { "AddNoResize", {}, { ::i2c::type_of<T*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>::AddRangeNoResize(T* ptr, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>>(),
                                                                                         { "AddRangeNoResize", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>::AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>>(),
                                                           { "AddRangeNoResize", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "ListData", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>::UnsafePtrList_1_ParallelWriter(
    T* Ptr, ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<::System::IntPtr>* ListData) noexcept {
  this->Ptr = Ptr;
  this->ListData = ListData;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>::UnsafePtrList_1_ParallelWriter() {}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline T* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::set_Item(int32_t index, T* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline ::by_ref<T*> Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T*>>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::_ctor(T* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::_ctor(int32_t initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                            ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator, options);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Create(T* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Create", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>*>(nullptr, ___internal_method, ptr, length);
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Create(int32_t initialCapacity,
                                                                                                                                    ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                                                                                    ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
          { "Create", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>*>(nullptr, ___internal_method, initialCapacity, allocator, options);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Destroy(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>* listData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "Destroy", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, listData);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Resize(int32_t length, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, options);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::SetCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "SetCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "TrimExcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::IndexOf(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "IndexOf", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, ptr);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Contains(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Contains", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, ptr);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AddNoResize(void* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "AddNoResize", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AddRangeNoResize(void* ptr, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "AddRangeNoResize", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AddRangeNoResize(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> list) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                           { "AddRangeNoResize", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Add(::by_ref<::System::IntPtr> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Add", {}, { ::i2c::type_of<::by_ref<::System::IntPtr>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::Add(void* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "Add", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AddRange(void* ptr, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "AddRange", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AddRange(::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "AddRange", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::InsertRangeWithBeginEnd(int32_t begin, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "InsertRangeWithBeginEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::RemoveAtSwapBack(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::RemoveRangeSwapBack(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "RemoveRangeSwapBack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::RemoveRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "RemoveRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T>
inline ::System::Collections::Generic::IEnumerator_1<::System::IntPtr>*
Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::System_Collections_Generic_IEnumerable_System_IntPtr__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(),
                                                                                         { "System.Collections.Generic.IEnumerable<System.IntPtr>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::IntPtr>*>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T> Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ReadOnly<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T> Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AsParallelReader() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "AsParallelReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelReader<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T> Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::AsParallelWriter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>>(), { "AsParallelWriter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1_ParallelWriter<T>>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::IntPtr>"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<::System::IntPtr>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::IntPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::IntPtr>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::IntPtr>*
Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::i___System__Collections__Generic__IEnumerable_1___System__IntPtr_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::IntPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "padding", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::UnsafePtrList_1(T* Ptr, int32_t m_length, int32_t m_capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator,
                                                                                      int32_t padding) noexcept {
  this->Ptr = Ptr;
  this->m_length = m_length;
  this->m_capacity = m_capacity;
  this->Allocator = Allocator;
  this->padding = padding;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafePtrList_1<T>::UnsafePtrList_1() {}
