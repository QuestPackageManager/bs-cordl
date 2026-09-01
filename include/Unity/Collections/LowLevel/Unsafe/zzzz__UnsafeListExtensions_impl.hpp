#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeListExtensions_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeList_1_def.hpp"
template <typename T, typename U> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
                          { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
                          { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
                          { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T> list, U value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
                       { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ReadOnly<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::IndexOf(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
          { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::Contains(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
          { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1_ParallelReader<T>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::ArraysEqual(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T> container,
                                                                                    ::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>> other) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions*>(),
                          { "ArraysEqual",
                            { ::i2c::class_of<T>() },
                            { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>(), ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, container, other);
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeListExtensions::UnsafeListExtensions() {}
