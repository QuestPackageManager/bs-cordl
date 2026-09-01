#pragma once
// IWYU pragma private; include "Unity\Collections\FixedList128BytesExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedList128BytesExtensions_def.hpp"
#include "Unity/Collections/zzzz__FixedList128Bytes_1_def.hpp"
template <typename T, typename U> inline int32_t Unity::Collections::FixedList128BytesExtensions::IndexOf(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList128BytesExtensions*>(),
                          { "IndexOf", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList128BytesExtensions::Contains(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList128BytesExtensions*>(),
                          { "Contains", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList128BytesExtensions::Remove(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList128BytesExtensions*>(),
                          { "Remove", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
template <typename T, typename U> inline bool Unity::Collections::FixedList128BytesExtensions::RemoveSwapBack(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list, U value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList128BytesExtensions*>(),
                          { "RemoveSwapBack", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedList128BytesExtensions::FixedList128BytesExtensions() {}
