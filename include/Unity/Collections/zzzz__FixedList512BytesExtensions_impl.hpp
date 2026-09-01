#pragma once
// IWYU pragma private; include "Unity\Collections\FixedList512BytesExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedList512BytesExtensions_def.hpp"
#include "Unity/Collections/zzzz__FixedList512Bytes_1_def.hpp"
template <typename T, typename U> inline int32_t Unity::Collections::FixedList512BytesExtensions::IndexOf(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList512BytesExtensions*>(),
                          { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList512BytesExtensions::Contains(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList512BytesExtensions*>(),
                          { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList512BytesExtensions::Remove(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList512BytesExtensions*>(),
                          { "Remove", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList512BytesExtensions::RemoveSwapBack(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList512BytesExtensions*>(),
                          { "RemoveSwapBack", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedList512BytesExtensions::FixedList512BytesExtensions() {}
