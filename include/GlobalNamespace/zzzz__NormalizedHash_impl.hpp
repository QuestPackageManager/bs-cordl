#pragma once
// IWYU pragma private; include "GlobalNamespace\NormalizedHash.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NormalizedHash_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NormalizedHash.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(double_t)>(&::GlobalNamespace::NormalizedHash::Evaluate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x330c394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NormalizedHash*>(), { "Evaluate", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
inline double_t GlobalNamespace::NormalizedHash::Evaluate(double_t seed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NormalizedHash*>(), { "Evaluate", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, seed);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NormalizedHash::NormalizedHash() {}
