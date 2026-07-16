#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Constant.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/CompilerServices/zzzz__Constant_def.hpp"
//  Writing Method size for method: ::Unity::Burst::CompilerServices::Constant.IsConstantExpression
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(void*)>(&::Unity::Burst::CompilerServices::Constant::IsConstantExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64a1df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Constant*>(), { "IsConstantExpression", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
template <typename T> inline bool Unity::Burst::CompilerServices::Constant::IsConstantExpression(T t) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Constant*>(), { "IsConstantExpression", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool Unity::Burst::CompilerServices::Constant::IsConstantExpression(void* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Burst::CompilerServices::Constant*>(), { "IsConstantExpression", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
// Ctor Parameters []
constexpr ::Unity::Burst::CompilerServices::Constant::Constant() {}
