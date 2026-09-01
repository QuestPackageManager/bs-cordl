#pragma once
// IWYU pragma private; include "Unity\Collections\NativeListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeListExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
template <typename T, typename U> inline bool Unity::Collections::NativeListExtensions::Contains(::Unity::Collections::NativeList_1<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                                              { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::NativeListExtensions::IndexOf(::Unity::Collections::NativeList_1<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                                              { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T> inline bool Unity::Collections::NativeListExtensions::ArraysEqual(::Unity::Collections::NativeArray_1<T> container, ::by_ref<::Unity::Collections::NativeList_1<T>> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                       { "ArraysEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, other);
}
template <typename T> inline bool Unity::Collections::NativeListExtensions::ArraysEqual(::Unity::Collections::NativeList_1<T> container, ::by_ref<::Unity::Collections::NativeArray_1<T>> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                       { "ArraysEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, other);
}
template <typename T> inline bool Unity::Collections::NativeListExtensions::ArraysEqual(::Unity::Collections::NativeList_1<T> container, ::by_ref<::Unity::Collections::NativeList_1<T>> other) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                       { "ArraysEqual", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, other);
}
template <typename T>
inline bool Unity::Collections::NativeListExtensions::ArraysEqual(::Unity::Collections::NativeList_1<T> container, ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeListExtensions*>(),
                                              { "ArraysEqual",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, other);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeListExtensions::NativeListExtensions() {}
