#pragma once
// IWYU pragma private; include "Unity\Collections\NativeArrayExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__SharedStatic_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArrayExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashSet_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T> inline void Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>::setStaticF_s_staticSafetyId(::Unity::Burst::SharedStatic_1<int32_t> value) {
  ::cordl_internals::setStaticField<::Unity::Burst::SharedStatic_1<int32_t>, "s_staticSafetyId", ::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>>(
      std::forward<::Unity::Burst::SharedStatic_1<int32_t>>(value));
}
template <typename T> inline ::Unity::Burst::SharedStatic_1<int32_t> Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>::getStaticF_s_staticSafetyId() {
  return ::cordl_internals::getStaticField<::Unity::Burst::SharedStatic_1<int32_t>, "s_staticSafetyId", ::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>>();
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Collections::NativeArrayExtensions_NativeArrayStaticId_1<T>::NativeArrayExtensions_NativeArrayStaticId_1() {}
template <typename T, typename U> inline bool Unity::Collections::NativeArrayExtensions::Contains(::Unity::Collections::NativeArray_1<T> array, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                              { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeArrayExtensions::IndexOf(::Unity::Collections::NativeArray_1<T> array, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                              { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T, typename U> inline bool Unity::Collections::NativeArrayExtensions::Contains(::Unity::Collections::NativeArray_1_ReadOnly<T> array, U value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                       { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeArrayExtensions::IndexOf(::Unity::Collections::NativeArray_1_ReadOnly<T> array, U value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                       { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1_ReadOnly<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
template <typename T, typename U> inline bool Unity::Collections::NativeArrayExtensions::Contains(void* ptr, int32_t length, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                              { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ptr, length, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeArrayExtensions::IndexOf(void* ptr, int32_t length, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                              { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length, value);
}
template <typename T> inline void Unity::Collections::NativeArrayExtensions::CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> container, ::Unity::Collections::NativeList_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                          { "CopyFrom", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::NativeArrayExtensions::CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> container, ::by_ref<::Unity::Collections::NativeHashSet_1<T>> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
          { "CopyFrom", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashSet_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline void Unity::Collections::NativeArrayExtensions::CopyFrom(::by_ref<::Unity::Collections::NativeArray_1<T>> container,
                                                                ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                          { "CopyFrom",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeHashSet_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, other);
}
template <typename T, typename U> inline ::Unity::Collections::NativeArray_1<U> Unity::Collections::NativeArrayExtensions::Reinterpret(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                                           { "Reinterpret", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<U>>(nullptr, ___internal_method, array);
}
template <typename T> inline bool Unity::Collections::NativeArrayExtensions::ArraysEqual(::Unity::Collections::NativeArray_1<T> container, ::Unity::Collections::NativeArray_1<T> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                          { "ArraysEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, other);
}
template <typename T, typename U> inline void Unity::Collections::NativeArrayExtensions::CheckReinterpretSize(::by_ref<::Unity::Collections::NativeArray_1<T>> array) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                              { "CheckReinterpretSize", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
template <typename T>
inline void Unity::Collections::NativeArrayExtensions::Initialize(::by_ref<::Unity::Collections::NativeArray_1<T>> array, int32_t length,
                                                                  ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                              { "Initialize",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length, allocator, options);
}
template <typename T, typename U>
inline void Unity::Collections::NativeArrayExtensions::Initialize(::by_ref<::Unity::Collections::NativeArray_1<T>> array, int32_t length, ::by_ref<U> allocator,
                                                                  ::Unity::Collections::NativeArrayOptions options) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                                                                              { "Initialize",
                                                                                                { ::i2c::class_of<T>(), ::i2c::class_of<U>() },
                                                                                                { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>(), ::i2c::type_of<int32_t>(),
                                                                                                  ::i2c::type_of<::by_ref<U>>(), ::i2c::type_of<::Unity::Collections::NativeArrayOptions>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, length, allocator, options);
}
template <typename T> inline void Unity::Collections::NativeArrayExtensions::DisposeCheckAllocator(::by_ref<::Unity::Collections::NativeArray_1<T>> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeArrayExtensions*>(),
                                                           { "DisposeCheckAllocator", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeArrayExtensions::NativeArrayExtensions() {}
