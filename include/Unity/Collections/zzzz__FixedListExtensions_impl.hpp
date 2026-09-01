#pragma once
// IWYU pragma private; include "Unity\Collections\FixedListExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__FixedListExtensions_def.hpp"
#include "Unity/Collections/zzzz__FixedList128Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList32Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList4096Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList512Bytes_1_def.hpp"
#include "Unity/Collections/zzzz__FixedList64Bytes_1_def.hpp"
template <typename T> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                                           { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList32Bytes_1<T>> list, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                       { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList32Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
template <typename T> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                                           { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList64Bytes_1<T>> list, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                       { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList64Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
template <typename T> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                                           { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList128Bytes_1<T>> list, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                       { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList128Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
template <typename T> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                                           { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList512Bytes_1<T>> list, U comp) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                       { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList512Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
template <typename T> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> list) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                                                           { "Sort", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template <typename T, typename U> inline void Unity::Collections::FixedListExtensions::Sort(::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>> list, U comp) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedListExtensions*>(),
                          { "Sort", { ::i2c::class_of<T>(), ::i2c::class_of<U>() }, { ::i2c::type_of<::by_ref<::Unity::Collections::FixedList4096Bytes_1<T>>>(), ::i2c::type_of<U>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list, comp);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedListExtensions::FixedListExtensions() {}
