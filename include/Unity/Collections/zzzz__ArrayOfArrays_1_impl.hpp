#pragma once
// IWYU pragma private; include "Unity\Collections\ArrayOfArrays_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__ArrayOfArrays_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_BlockSizeInElements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "get_BlockSizeInElements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_BlockSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "get_BlockSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_BlockMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "get_BlockMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T>
inline void Unity::Collections::ArrayOfArrays_1<T>::_ctor(int32_t capacityInElements, ::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocatorHandle, int32_t log2BlockSizeInElements) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(),
                                              { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacityInElements, backingAllocatorHandle, log2BlockSizeInElements);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::LockfreeAdd(T t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "LockfreeAdd", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, t);
}
template <typename T> inline ::by_ref<T> Unity::Collections::ArrayOfArrays_1<T>::get_Item(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, elementIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::Rewind() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "Rewind", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::CheckElementIndex(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "CheckElementIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elementIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::CheckBlockIndex(int32_t blockIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "CheckBlockIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, blockIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::CheckBlockIsNotNull(int32_t blockIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "CheckBlockIsNotNull", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, blockIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::RemoveAtSwapBack(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, elementIndex);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::BlockIndexOfElement(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "BlockIndexOfElement", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, elementIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ArrayOfArrays_1<T>>(), { "TrimExcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::ArrayOfArrays_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::ArrayOfArrays_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_backingAllocatorHandle", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_lengthInElements", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_capacityInElements", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_log2BlockSizeInElements", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_blocks", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_block",
// ty: "::System::IntPtr*", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::ArrayOfArrays_1<T>::ArrayOfArrays_1(::Unity::Collections::AllocatorManager_AllocatorHandle m_backingAllocatorHandle, int32_t m_lengthInElements,
                                                                    int32_t m_capacityInElements, int32_t m_log2BlockSizeInElements, int32_t m_blocks, ::System::IntPtr* m_block) noexcept {
  this->m_backingAllocatorHandle = m_backingAllocatorHandle;
  this->m_lengthInElements = m_lengthInElements;
  this->m_capacityInElements = m_capacityInElements;
  this->m_log2BlockSizeInElements = m_log2BlockSizeInElements;
  this->m_blocks = m_blocks;
  this->m_block = m_block;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::ArrayOfArrays_1<T>::ArrayOfArrays_1() {}
