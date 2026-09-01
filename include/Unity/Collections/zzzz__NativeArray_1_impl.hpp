#pragma once
// IWYU pragma private; include "Unity\Collections\NativeArray_1.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline void Unity::Collections::NativeArray_1<T>::_ctor(int32_t length, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                       { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, length, allocator, options);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::_ctor(::ArrayW<T> array, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, allocator);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::_ctor(::Unity::Collections::NativeArray_1<T> array, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, allocator);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Allocate(int32_t length, ::Unity::Collections::Allocator allocator, ::by_ref<::Unity::Collections::NativeArray_1<T>> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                          { "Allocate", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, length, allocator, array);
}
template <typename T> inline int32_t Unity::Collections::NativeArray_1<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::NativeArray_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline bool Unity::Collections::NativeArray_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle Unity::Collections::NativeArray_1<T>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::CopyFrom(::ArrayW<T> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "CopyFrom", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::CopyFrom(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "CopyFrom", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::CopyTo(::ArrayW<T> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::NativeArray_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1_Enumerator<T> Unity::Collections::NativeArray_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::NativeArray_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::NativeArray_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::NativeArray_1<T>::Equals(::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "Equals", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
template <typename T> inline bool Unity::Collections::NativeArray_1<T>::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
template <typename T> inline int32_t Unity::Collections::NativeArray_1<T>::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::NativeArray_1<T>::op_Equality(::Unity::Collections::NativeArray_1<T> left, ::Unity::Collections::NativeArray_1<T> right) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1<T> src, ::Unity::Collections::NativeArray_1<T> dst) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                           { "Copy", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::ArrayW<T> src, ::Unity::Collections::NativeArray_1<T> dst) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1<T> src, ::ArrayW<T> dst) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                                                         { "Copy", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1<T> src, ::Unity::Collections::NativeArray_1<T> dst, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                          { "Copy", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, length);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1<T> src, ::ArrayW<T> dst, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                           { "Copy", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, length);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1_ReadOnly<T> src, ::ArrayW<T> dst, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                              { "Copy", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, dst, length);
}
template <typename T>
inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1<T> src, int32_t srcIndex, ::Unity::Collections::NativeArray_1<T> dst, int32_t dstIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                           { "Copy",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcIndex, dst, dstIndex, length);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::Copy(::Unity::Collections::NativeArray_1<T> src, int32_t srcIndex, ::ArrayW<T> dst, int32_t dstIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "Copy",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcIndex, dst, dstIndex, length);
}
template <typename T>
inline void Unity::Collections::NativeArray_1<T>::CopySafe(::Unity::Collections::NativeArray_1<T> src, int32_t srcIndex, ::Unity::Collections::NativeArray_1<T> dst, int32_t dstIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                           { "CopySafe",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcIndex, dst, dstIndex, length);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::CopySafe(::ArrayW<T> src, int32_t srcIndex, ::Unity::Collections::NativeArray_1<T> dst, int32_t dstIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(),
                                                           { "CopySafe",
                                                             {},
                                                             { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcIndex, dst, dstIndex, length);
}
template <typename T> inline void Unity::Collections::NativeArray_1<T>::CopySafe(::Unity::Collections::NativeArray_1<T> src, int32_t srcIndex, ::ArrayW<T> dst, int32_t dstIndex, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "CopySafe",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                             ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcIndex, dst, dstIndex, length);
}
template <typename T>
inline void Unity::Collections::NativeArray_1<T>::CopySafe(::Unity::Collections::NativeArray_1_ReadOnly<T> src, int32_t srcIndex, ::ArrayW<T> dst, int32_t dstIndex, int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "CopySafe",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<int32_t>(),
                                                                                                      ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcIndex, dst, dstIndex, length);
}
template <typename T> template <typename U> inline ::Unity::Collections::NativeArray_1<U> Unity::Collections::NativeArray_1<T>::InternalReinterpret(int32_t length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "InternalReinterpret", { ::i2c::class_of<U>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<U>>(*this, ___internal_method, length);
}
template <typename T> template <typename U> inline ::Unity::Collections::NativeArray_1<U> Unity::Collections::NativeArray_1<T>::Reinterpret() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "Reinterpret", { ::i2c::class_of<U>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<U>>(*this, ___internal_method);
}
template <typename T> template <typename U> inline ::Unity::Collections::NativeArray_1<U> Unity::Collections::NativeArray_1<T>::Reinterpret(int32_t expectedTypeSize) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "Reinterpret", { ::i2c::class_of<U>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<U>>(*this, ___internal_method, expectedTypeSize);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::NativeArray_1<T>::GetSubArray(int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "GetSubArray", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, start, length);
}
template <typename T> inline ::Unity::Collections::NativeArray_1_ReadOnly<T> Unity::Collections::NativeArray_1<T>::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1_ReadOnly<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Span_1<T> Unity::Collections::NativeArray_1<T>::AsSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "AsSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> Unity::Collections::NativeArray_1<T>::AsReadOnlySpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "AsReadOnlySpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Span_1<T> Unity::Collections::NativeArray_1<T>::op_Implicit___System__Span_1_T_(::by_ref<::Unity::Collections::NativeArray_1<T>> source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, source);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> Unity::Collections::NativeArray_1<T>::op_Implicit___System__ReadOnlySpan_1_T_(::by_ref<::Unity::Collections::NativeArray_1<T>> source) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, source);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::NativeArray_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::NativeArray_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::NativeArray_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::NativeArray_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::NativeArray_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::NativeArray_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>"
template <typename T> constexpr Unity::Collections::NativeArray_1<T>::operator ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>*() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>"
template <typename T>
constexpr ::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>* Unity::Collections::NativeArray_1<T>::i___System__IEquatable_1___Unity__Collections__NativeArray_1_T__() {
  return static_cast<::System::IEquatable_1<::Unity::Collections::NativeArray_1<T>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_AllocatorLabel", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>::NativeArray_1(void* m_Buffer, int32_t m_Length, ::Unity::Collections::Allocator m_AllocatorLabel) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_Length = m_Length;
  this->m_AllocatorLabel = m_AllocatorLabel;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeArray_1<T>::NativeArray_1() {}
template <typename T> inline void Unity::Collections::NativeArray_1_Enumerator<T>::_ctor(::by_ref<::Unity::Collections::NativeArray_1<T>> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_Enumerator<T>>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void Unity::Collections::NativeArray_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::NativeArray_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::NativeArray_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::NativeArray_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Collections::NativeArray_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Unity::Collections::NativeArray_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::NativeArray_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Collections::NativeArray_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Collections::NativeArray_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::NativeArray_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::NativeArray_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::NativeArray_1_Enumerator<T>::NativeArray_1_Enumerator(::Unity::Collections::NativeArray_1<T> m_Array, int32_t m_Index, T value) noexcept {
  this->m_Array = m_Array;
  this->m_Index = m_Index;
  this->value = value;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeArray_1_Enumerator<T>::NativeArray_1_Enumerator() {}
template <typename T> inline void Unity::Collections::NativeArray_1_ReadOnly<T>::_ctor(void* buffer, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { ".ctor", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, length);
}
template <typename T> inline int32_t Unity::Collections::NativeArray_1_ReadOnly<T>::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> Unity::Collections::NativeArray_1_ReadOnly<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::NativeArray_1_ReadOnly<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline ::by_ref<T> Unity::Collections::NativeArray_1_ReadOnly<T>::UnsafeElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "UnsafeElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
template <typename T> inline ::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T> Unity::Collections::NativeArray_1_ReadOnly<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::NativeArray_1_ReadOnly<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Collections::NativeArray_1_ReadOnly<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> Unity::Collections::NativeArray_1_ReadOnly<T>::AsReadOnlySpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), { "AsReadOnlySpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template <typename T>
inline ::System::ReadOnlySpan_1<T> Unity::Collections::NativeArray_1_ReadOnly<T>::op_Implicit___System__ReadOnlySpan_1_T_(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<T>> source) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, source);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Unity::Collections::NativeArray_1_ReadOnly<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Unity::Collections::NativeArray_1_ReadOnly<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Unity::Collections::NativeArray_1_ReadOnly<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Unity::Collections::NativeArray_1_ReadOnly<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::Unity::Collections::NativeArray_1_ReadOnly<T>::NativeArray_1_ReadOnly(void* m_Buffer, int32_t m_Length) noexcept {
  this->m_Buffer = m_Buffer;
  this->m_Length = m_Length;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeArray_1_ReadOnly<T>::NativeArray_1_ReadOnly() {}
template <typename T> inline void Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::_ctor(::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<T>> array) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1_ReadOnly<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
template <typename T> inline void Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline bool Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::i___System__Collections__Generic__IEnumerator_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Array", ty: "::Unity::Collections::NativeArray_1_ReadOnly<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "value", ty: "T", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::ReadOnly_NativeArray_1_Enumerator(::Unity::Collections::NativeArray_1_ReadOnly<T> m_Array, int32_t m_Index, T value) noexcept {
  this->m_Array = m_Array;
  this->m_Index = m_Index;
  this->value = value;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::ReadOnly_NativeArray_1_Enumerator<T>::ReadOnly_NativeArray_1_Enumerator() {}
