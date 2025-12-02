#pragma once
// IWYU pragma private; include "Unity/Collections/ArrayOfArrays_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__ArrayOfArrays_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_BlockSizeInElements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(),
                                                                             "get_BlockSizeInElements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_BlockSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(),
                                                                             "get_BlockSizeInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_BlockMask() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "get_BlockMask",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T>
inline void Unity::Collections::ArrayOfArrays_1<T>::_ctor(int32_t capacityInElements, ::Unity::Collections::AllocatorManager_AllocatorHandle backingAllocatorHandle, int32_t log2BlockSizeInElements) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacityInElements, backingAllocatorHandle, log2BlockSizeInElements);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::LockfreeAdd(T t) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "LockfreeAdd",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
template <typename T> inline ::ByRef<T> Unity::Collections::ArrayOfArrays_1<T>::get_Item(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, elementIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::Rewind() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "Rewind",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::CheckElementIndex(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "CheckElementIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::CheckBlockIndex(int32_t blockIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "CheckBlockIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::CheckBlockIsNotNull(int32_t blockIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "CheckBlockIsNotNull",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::RemoveAtSwapBack(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "RemoveAtSwapBack",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elementIndex);
}
template <typename T> inline int32_t Unity::Collections::ArrayOfArrays_1<T>::BlockIndexOfElement(int32_t elementIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "BlockIndexOfElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, elementIndex);
}
template <typename T> inline void Unity::Collections::ArrayOfArrays_1<T>::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::ArrayOfArrays_1<T>>::get(), "TrimExcess",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::ArrayOfArrays_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::ArrayOfArrays_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
