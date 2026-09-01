#pragma once
// IWYU pragma private; include "Unity\Collections\FixedList.hpp"
#include "Unity/Collections/zzzz__FixedList_def.hpp"
template <typename T> inline int32_t Unity::Collections::FixedList::PaddingBytes() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList>(), { "PaddingBytes", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename BUFFER, typename T> inline int32_t Unity::Collections::FixedList::StorageBytes() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList>(), { "StorageBytes", { ::i2c::class_of<BUFFER>(), ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<BUFFER>(), ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename BUFFER, typename T> inline int32_t Unity::Collections::FixedList::Capacity() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList>(), { "Capacity", { ::i2c::class_of<BUFFER>(), ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<BUFFER>(), ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
template <typename BUFFER, typename T> inline void Unity::Collections::FixedList::CheckResize(int32_t newLength) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::FixedList>(), { "CheckResize", { ::i2c::class_of<BUFFER>(), ::i2c::class_of<T>() }, { ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<BUFFER>(), ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newLength);
}
// Ctor Parameters []
constexpr ::Unity::Collections::FixedList::FixedList() {}
