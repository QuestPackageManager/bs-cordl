#pragma once
// IWYU pragma private; include "GlobalNamespace/NormalizedRandom.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NormalizedRandom_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NormalizedRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NormalizedRandom::*)(double_t)>(&::GlobalNamespace::NormalizedRandom::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x330a8b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NormalizedRandom*>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NormalizedRandom.Sample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::NormalizedRandom::*)()>(&::GlobalNamespace::NormalizedRandom::Sample)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x330a8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NormalizedRandom*>(), { "Sample", {}, {} })));
    return ___internal_method;
  }
};
constexpr double_t& GlobalNamespace::NormalizedRandom::__cordl_internal_get_seed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr double_t const& GlobalNamespace::NormalizedRandom::__cordl_internal_get_seed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___seed;
}
constexpr void GlobalNamespace::NormalizedRandom::__cordl_internal_set_seed(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___seed = value;
}
inline void GlobalNamespace::NormalizedRandom::_ctor(double_t seed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NormalizedRandom*>(), { ".ctor", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline double_t GlobalNamespace::NormalizedRandom::Sample() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NormalizedRandom*>(), { "Sample", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::GlobalNamespace::NormalizedRandom* GlobalNamespace::NormalizedRandom::New_ctor(double_t seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NormalizedRandom*>(seed));
}
/// @brief Convert operator to "::GlobalNamespace::IRandom"
constexpr GlobalNamespace::NormalizedRandom::operator ::GlobalNamespace::IRandom*() noexcept {
  return static_cast<::GlobalNamespace::IRandom*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRandom"
constexpr ::GlobalNamespace::IRandom* GlobalNamespace::NormalizedRandom::i___GlobalNamespace__IRandom() noexcept {
  return static_cast<::GlobalNamespace::IRandom*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NormalizedRandom::NormalizedRandom() {}
