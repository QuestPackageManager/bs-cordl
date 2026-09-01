#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\JitHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__JitHelpers_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> inline T System::Runtime::CompilerServices::JitHelpers::UnsafeCast(::System::Object* o) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::JitHelpers*>(), { "UnsafeCast", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, o);
}
template <typename T> inline int32_t System::Runtime::CompilerServices::JitHelpers::UnsafeEnumCast(T val) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::JitHelpers*>(), { "UnsafeEnumCast", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, val);
}
template <typename T> inline int64_t System::Runtime::CompilerServices::JitHelpers::UnsafeEnumCastLong(T val) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::JitHelpers*>(), { "UnsafeEnumCastLong", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, val);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::JitHelpers::JitHelpers() {}
