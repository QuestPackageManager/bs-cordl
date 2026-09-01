#pragma once
// IWYU pragma private; include "Unity\Collections\UnsafeQueue_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockHeader_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueBlockPoolData_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueueData_def.hpp"
#include "Unity/Collections/zzzz__UnsafeQueue_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline void Unity::Collections::UnsafeQueue_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::UnsafeQueue_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Collections::UnsafeQueue_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::UnsafeQueue_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Collections::UnsafeQueue_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::UnsafeQueue_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_FirstBlock", ty: "::Unity::Collections::UnsafeQueueBlockHeader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Block", ty:
// "::Unity::Collections::UnsafeQueueBlockHeader*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value",
// ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::UnsafeQueue_1_Enumerator<T>::UnsafeQueue_1_Enumerator(::Unity::Collections::UnsafeQueueBlockHeader* m_FirstBlock, ::Unity::Collections::UnsafeQueueBlockHeader* m_Block,
                                                                                      int32_t m_Index, T value) noexcept {
  this->m_FirstBlock = m_FirstBlock;
  this->m_Block = m_Block;
  this->m_Index = m_Index;
  this->value = value;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::UnsafeQueue_1_Enumerator<T>::UnsafeQueue_1_Enumerator() {}
template <typename T> inline void Unity::Collections::UnsafeQueue_1_ReadOnly<T>::_ctor(::by_ref<::Unity::Collections::UnsafeQueue_1<T>> data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::UnsafeQueue_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1_ReadOnly<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1_ReadOnly<T>::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::UnsafeQueue_1_ReadOnly<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::UnsafeQueue_1_ReadOnly<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1_ReadOnly<T>::TryGetValue(int32_t index, ::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "TryGetValue", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, index, item);
}
template <typename T> inline ::Unity::Collections::UnsafeQueue_1_Enumerator<T> Unity::Collections::UnsafeQueue_1_ReadOnly<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueue_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::UnsafeQueue_1_ReadOnly<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::UnsafeQueue_1_ReadOnly<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1_ReadOnly<T>::ThrowIndexOutOfRangeException(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(), { "ThrowIndexOutOfRangeException", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1_ReadOnly<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::UnsafeQueue_1_ReadOnly<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1_ReadOnly<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::UnsafeQueue_1_ReadOnly<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::UnsafeQueue_1_ReadOnly<T>::UnsafeQueue_1_ReadOnly(::Unity::Collections::UnsafeQueueData* m_Buffer) noexcept {
  this->m_Buffer = m_Buffer;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::UnsafeQueue_1_ReadOnly<T>::UnsafeQueue_1_ReadOnly() {}
template <typename T> inline void Unity::Collections::UnsafeQueue_1_ParallelWriter<T>::Enqueue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>>(), { "Enqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1_ParallelWriter<T>::Enqueue(T value, int32_t threadIndexOverride) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>>(), { "Enqueue", {}, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, threadIndexOverride);
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_QueuePool", ty:
// "::Unity::Collections::UnsafeQueueBlockPoolData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>::UnsafeQueue_1_ParallelWriter(::Unity::Collections::UnsafeQueueData* m_Buffer,
                                                                                              ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool, int32_t m_ThreadIndex) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_QueuePool = m_QueuePool;
  this->m_ThreadIndex = m_ThreadIndex;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>::UnsafeQueue_1_ParallelWriter() {}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::_ctor(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
template <typename T> inline ::Unity::Collections::UnsafeQueue_1<T>* Unity::Collections::UnsafeQueue_1<T>::Alloc(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Alloc", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueue_1<T>*>(nullptr, ___internal_method, allocator);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::Free(::Unity::Collections::UnsafeQueue_1<T>* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Free", {}, { ::i2c::type_of<::Unity::Collections::UnsafeQueue_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1<T>::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::UnsafeQueue_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::UnsafeQueue_1<T>::get_PersistentMemoryBlockCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "get_PersistentMemoryBlockCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::set_PersistentMemoryBlockCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "set_PersistentMemoryBlockCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
template <typename T> inline int32_t Unity::Collections::UnsafeQueue_1<T>::get_MemoryBlockSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "get_MemoryBlockSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename T> inline T Unity::Collections::UnsafeQueue_1<T>::Peek() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Peek", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::Enqueue(T value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Enqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline T Unity::Collections::UnsafeQueue_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1<T>::TryDequeue(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "TryDequeue", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::UnsafeQueue_1<T>::ToArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "ToArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::UnsafeQueue_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Collections::UnsafeQueue_1<T>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename T> inline ::Unity::Collections::UnsafeQueue_1_ReadOnly<T> Unity::Collections::UnsafeQueue_1<T>::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueue_1_ReadOnly<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::UnsafeQueue_1_ParallelWriter<T> Unity::Collections::UnsafeQueue_1<T>::AsParallelWriter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "AsParallelWriter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::UnsafeQueue_1_ParallelWriter<T>>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::CheckNotEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "CheckNotEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::UnsafeQueue_1<T>::ThrowEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::UnsafeQueue_1<T>>(), { "ThrowEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1<T>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename T> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::UnsafeQueue_1<T>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::UnsafeQueue_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::UnsafeQueue_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::UnsafeQueueData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_QueuePool", ty:
// "::Unity::Collections::UnsafeQueueBlockPoolData*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle",
// modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::UnsafeQueue_1<T>::UnsafeQueue_1(::Unity::Collections::UnsafeQueueData* m_Buffer, ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool,
                                                                ::Unity::Collections::AllocatorManager_AllocatorHandle m_AllocatorLabel) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_QueuePool = m_QueuePool;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::UnsafeQueue_1<T>::UnsafeQueue_1() {}
