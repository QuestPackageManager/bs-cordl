#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList32Bytes_1.hpp"
#include "Unity/Collections/zzzz__FixedBytes32Align8_impl.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__FixedList128Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList512Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList64Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
#include "Unity/Collections/zzzz__INativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
template <typename T> inline uint16_t Unity::Collections::FixedList32Bytes_1<T>::get_length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::set_length(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "set_length", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline uint8_t* Unity::Collections::FixedList32Bytes_1<T>::get_buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_buffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "set_Length",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList32Bytes_1<T>::get_Elements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_Elements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_IsEmpty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::get_LengthInBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(),
                                                                             "get_LengthInBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline uint8_t* Unity::Collections::FixedList32Bytes_1<T>::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_Buffer",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_Capacity",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "set_Capacity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline T Unity::Collections::FixedList32Bytes_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline ::ByRef<T> Unity::Collections::FixedList32Bytes_1<T>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "ElementAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method, index);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::Add(::ByRef<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::AddRange(void* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "AddRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr, length);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::AddNoResize(::ByRef<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "AddNoResize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::AddRangeNoResize(void* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "AddRangeNoResize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr, length);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::AddReplicate(::ByRef<T> value, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "AddReplicate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, count);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::InsertRangeWithBeginEnd(int32_t begin, int32_t end) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "InsertRangeWithBeginEnd", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, begin, end);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::InsertRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "InsertRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::Insert(int32_t index, ::ByRef<T> item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Insert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::RemoveAtSwapBack(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "RemoveAtSwapBack",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::RemoveRangeSwapBack(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "RemoveRangeSwapBack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "RemoveAt",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::RemoveRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "RemoveRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, count);
}
template <typename T> inline ::ArrayW<T, ::Array<T>*> Unity::Collections::FixedList32Bytes_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "ToArray",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::FixedList32Bytes_1<T>::ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "ToNativeArray", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, allocator);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Equality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Inequality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::CompareTo(::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList32Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::Equals(::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList32Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Equality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList64Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Inequality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList64Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::CompareTo(::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList64Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::Equals(::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList64Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::_ctor(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList64Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::Initialize(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList64Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList32Bytes_1<T>
Unity::Collections::FixedList32Bytes_1<T>::op_Implicit___Unity__Collections__FixedList32Bytes_1_T_(::ByRef<::Unity::Collections::FixedList64Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList64Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList32Bytes_1<T>, false>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Equality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList128Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Inequality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList128Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::CompareTo(::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList128Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::Equals(::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList128Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::_ctor(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList128Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::Initialize(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList128Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList32Bytes_1<T>
Unity::Collections::FixedList32Bytes_1<T>::op_Implicit___Unity__Collections__FixedList32Bytes_1_T_(::ByRef<::Unity::Collections::FixedList128Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList128Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList32Bytes_1<T>, false>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Equality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList512Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Inequality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList512Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::CompareTo(::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList512Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::Equals(::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList512Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::_ctor(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList512Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::Initialize(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList512Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList32Bytes_1<T>
Unity::Collections::FixedList32Bytes_1<T>::op_Implicit___Unity__Collections__FixedList32Bytes_1_T_(::ByRef<::Unity::Collections::FixedList512Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList512Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList32Bytes_1<T>, false>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Equality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList32Bytes_1<T>::op_Inequality(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> a, ::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::CompareTo(::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "CompareTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList4096Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::Equals(::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::FixedList4096Bytes_1<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1<T>::_ctor(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList32Bytes_1<T>::Initialize(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList32Bytes_1<T>
Unity::Collections::FixedList32Bytes_1<T>::op_Implicit___Unity__Collections__FixedList32Bytes_1_T_(::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList4096Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList32Bytes_1<T>, false>(nullptr, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
template <typename T> inline ::Unity::Collections::FixedList32Bytes_1_Enumerator<T> Unity::Collections::FixedList32Bytes_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::FixedList32Bytes_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::FixedList32Bytes_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1<T>>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::Unity::Collections::INativeList_1<T>*() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
template <typename T> constexpr ::Unity::Collections::INativeList_1<T>* Unity::Collections::FixedList32Bytes_1<T>::i___Unity__Collections__INativeList_1_T_() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::FixedList32Bytes_1<T>::i___Unity__Collections__IIndexable_1_T_() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList32Bytes_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::FixedList32Bytes_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList32Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList32Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList64Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList64Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList128Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList128Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList512Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList512Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>* Unity::Collections::FixedList32Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList4096Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*
Unity::Collections::FixedList32Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList4096Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "data", ty: "::Unity::Collections::FixedBytes32Align8", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::FixedList32Bytes_1<T>::FixedList32Bytes_1(::Unity::Collections::FixedBytes32Align8 data) noexcept {
  this->data = data;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::FixedList32Bytes_1<T>::FixedList32Bytes_1() {}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1_Enumerator<T>::_ctor(::ByRef<::Unity::Collections::FixedList32Bytes_1<T>> list) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::FixedList32Bytes_1<T>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::FixedList32Bytes_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList32Bytes_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T Unity::Collections::FixedList32Bytes_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>>::get(),
                                                                             "get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Collections::FixedList32Bytes_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::FixedList32Bytes_1_Enumerator<T>>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::FixedList32Bytes_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Collections::FixedList32Bytes_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::FixedList32Bytes_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::FixedList32Bytes_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_List", ty: "::Unity::Collections::FixedList32Bytes_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::FixedList32Bytes_1_Enumerator<T>::FixedList32Bytes_1_Enumerator(::Unity::Collections::FixedList32Bytes_1<T> m_List, int32_t m_Index) noexcept {
  this->m_List = m_List;
  this->m_Index = m_Index;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::FixedList32Bytes_1_Enumerator<T>::FixedList32Bytes_1_Enumerator() {}
