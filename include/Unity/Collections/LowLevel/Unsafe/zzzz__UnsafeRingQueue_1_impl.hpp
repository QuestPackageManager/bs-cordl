#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeRingQueue_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeRingQueue_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::_ctor(T* ptr, int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { ".ctor", {}, { ::i2c::type_of<T*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, capacity);
}
template <typename T>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::_ctor(int32_t capacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                              ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(),
          { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity, allocator, options);
}
template <typename T>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*
Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Alloc(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(),
                                                                                         { "Alloc", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*>(nullptr, ___internal_method, allocator);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Free(::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(),
                                                                                         { "Free", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::get_IsCreated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::TryEnqueueInternal(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "TryEnqueueInternal", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::TryEnqueue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "TryEnqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::ThrowQueueFull() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "ThrowQueueFull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Enqueue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "Enqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::TryDequeueInternal(::by_ref<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "TryDequeueInternal", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename T> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::TryDequeue(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "TryDequeue", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::ThrowQueueEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "ThrowQueueEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "T*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Filled", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_Write", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Read", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::UnsafeRingQueue_1(T* Ptr, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator, int32_t m_Capacity,
                                                                                          int32_t m_Filled, int32_t m_Write, int32_t m_Read) noexcept {
  this->Ptr = Ptr;
  this->Allocator = Allocator;
  this->m_Capacity = m_Capacity;
  this->m_Filled = m_Filled;
  this->m_Write = m_Write;
  this->m_Read = m_Read;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeRingQueue_1<T>::UnsafeRingQueue_1() {}
