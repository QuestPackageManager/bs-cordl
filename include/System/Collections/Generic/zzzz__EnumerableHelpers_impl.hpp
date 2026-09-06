#pragma once
// IWYU pragma private; include "System/Collections/Generic/EnumerableHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__EnumerableHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename T> inline ::ArrayW<T> System::Collections::Generic::EnumerableHelpers::ToArray(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::EnumerableHelpers*>(),
                                                           { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, source);
}
template <typename T> inline ::ArrayW<T> System::Collections::Generic::EnumerableHelpers::ToArray(::System::Collections::Generic::IEnumerable_1<T>* source, ::by_ref<int32_t> length) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::EnumerableHelpers*>(),
                                              { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, source, length);
}
// Ctor Parameters []
constexpr ::System::Collections::Generic::EnumerableHelpers::EnumerableHelpers() {}
