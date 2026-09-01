#pragma once
// IWYU pragma private; include "Unity\Collections\FixedList4096Bytes_1.hpp"
#include "Unity/Collections/zzzz__FixedBytes4096Align8_impl.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
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
template <typename T> inline uint16_t Unity::Collections::FixedList4096Bytes_1<T>::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::set_length(uint16_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "set_length", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline uint8_t* Unity::Collections::FixedList4096Bytes_1<T>::get_buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::set_Length(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "set_Length", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::get_Elements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_Elements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::get_LengthInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_LengthInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline uint8_t* Unity::Collections::FixedList4096Bytes_1<T>::get_Buffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_Buffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline T Unity::Collections::FixedList4096Bytes_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::FixedList4096Bytes_1<T>::ElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "ElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::Add(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Add", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::AddRange(void* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "AddRange", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::AddNoResize(::by_ref<T> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "AddNoResize", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::AddRangeNoResize(void* ptr, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "AddRangeNoResize", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::AddReplicate(::by_ref<T> value, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "AddReplicate", {}, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value, count);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::InsertRangeWithBeginEnd(int32_t begin, int32_t end) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "InsertRangeWithBeginEnd", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, begin, end);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::InsertRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "InsertRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::Insert(int32_t index, ::by_ref<T> item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, item);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::RemoveAtSwapBack(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "RemoveAtSwapBack", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::RemoveRangeSwapBack(int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "RemoveRangeSwapBack", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::RemoveRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "RemoveRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, count);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::FixedList4096Bytes_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::FixedList4096Bytes_1<T>::ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "ToNativeArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Equality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                       { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Inequality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList32Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedList32Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::_ctor(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::Initialize(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList4096Bytes_1<T>
Unity::Collections::FixedList4096Bytes_1<T>::op_Implicit___Unity__Collections__FixedList4096Bytes_1_T_(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList4096Bytes_1<T>>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Equality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                       { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Inequality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList64Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedList64Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::_ctor(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::Initialize(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList4096Bytes_1<T>
Unity::Collections::FixedList4096Bytes_1<T>::op_Implicit___Unity__Collections__FixedList4096Bytes_1_T_(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList4096Bytes_1<T>>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Equality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Inequality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList128Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedList128Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::_ctor(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::Initialize(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList4096Bytes_1<T>
Unity::Collections::FixedList4096Bytes_1<T>::op_Implicit___Unity__Collections__FixedList4096Bytes_1_T_(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList4096Bytes_1<T>>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Equality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Inequality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList512Bytes_1<T> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedList512Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1<T>::_ctor(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::Initialize(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "Initialize", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T>
inline ::Unity::Collections::FixedList4096Bytes_1<T>
Unity::Collections::FixedList4096Bytes_1<T>::op_Implicit___Unity__Collections__FixedList4096Bytes_1_T_(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList4096Bytes_1<T>>(nullptr, ___internal_method, other);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Equality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Equality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T>
inline bool Unity::Collections::FixedList4096Bytes_1<T>::op_Inequality(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> a, ::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(),
          { "op_Inequality", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
template <typename T> inline int32_t Unity::Collections::FixedList4096Bytes_1<T>::CompareTo(::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "CompareTo", {}, { ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::Unity::Collections::FixedList4096Bytes_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::FixedList4096Bytes_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline ::Unity::Collections::FixedList4096Bytes_1_Enumerator<T> Unity::Collections::FixedList4096Bytes_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::FixedList4096Bytes_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeList_1<T>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::Unity::Collections::INativeList_1<T>*() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeList_1<T>"
template <typename T> constexpr ::Unity::Collections::INativeList_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::i___Unity__Collections__INativeList_1_T_() {
  return static_cast<::Unity::Collections::INativeList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::Unity::Collections::IIndexable_1<T>*() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template <typename T> constexpr ::Unity::Collections::IIndexable_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::i___Unity__Collections__IIndexable_1_T_() {
  return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::FixedList4096Bytes_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList32Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList32Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList32Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList64Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList64Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList64Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList128Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*
Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList128Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList128Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>* Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList512Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*
Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList512Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList512Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*
Unity::Collections::FixedList4096Bytes_1<T>::i___System__IEquatable_1___Unity__Collections__FixedList4096Bytes_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1<T>::operator ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>"
template <typename T>
constexpr ::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*
Unity::Collections::FixedList4096Bytes_1<T>::i___System__IComparable_1___Unity__Collections__FixedList4096Bytes_1_T__() {
  return static_cast<::System::IComparable_1<::Unity::Collections::FixedList4096Bytes_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "data", ty: "::Unity::Collections::FixedBytes4096Align8", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::FixedList4096Bytes_1<T>::FixedList4096Bytes_1(::Unity::Collections::FixedBytes4096Align8 data) noexcept {
  this->data = data;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::FixedList4096Bytes_1<T>::FixedList4096Bytes_1() {}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::_ctor(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_List", ty: "::Unity::Collections::FixedList4096Bytes_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::FixedList4096Bytes_1_Enumerator(::Unity::Collections::FixedList4096Bytes_1<T> m_List, int32_t m_Index) noexcept {
  this->m_List = m_List;
  this->m_Index = m_Index;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::FixedList4096Bytes_1_Enumerator<T>::FixedList4096Bytes_1_Enumerator() {}
