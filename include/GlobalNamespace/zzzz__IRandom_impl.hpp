#pragma once
// IWYU pragma private; include "GlobalNamespace\IRandom.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IRandom.Sample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::IRandom::*)()>(&::GlobalNamespace::IRandom::Sample)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IRandom*>(), { ::i2c::class_of<::GlobalNamespace::IRandom*>(), 0 }));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::IRandom::Sample() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IRandom*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
