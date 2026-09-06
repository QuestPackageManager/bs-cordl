#pragma once
// IWYU pragma private; include "System/IO/MonoLinqHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__MonoLinqHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename T> inline ::ArrayW<T> System::IO::MonoLinqHelper::ToArray(::System::Collections::Generic::IEnumerable_1<T>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::IO::MonoLinqHelper*>(), { "ToArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::System::IO::MonoLinqHelper::MonoLinqHelper() {}
