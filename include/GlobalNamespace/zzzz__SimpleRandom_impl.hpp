#pragma once
// IWYU pragma private; include "GlobalNamespace\SimpleRandom.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleRandom_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleRandom::*)()>(&::GlobalNamespace::SimpleRandom::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x330c3f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleRandom*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleRandom._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleRandom::*)(int32_t)>(&::GlobalNamespace::SimpleRandom::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x330c414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleRandom*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleRandom.Sample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::SimpleRandom::*)()>(&::GlobalNamespace::SimpleRandom::Sample)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x330c480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleRandom*>(), { "Sample", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Random*& GlobalNamespace::SimpleRandom::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::System::Random* const& GlobalNamespace::SimpleRandom::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::SimpleRandom::__cordl_internal_set__random(::System::Random* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
inline void GlobalNamespace::SimpleRandom::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleRandom*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleRandom::_ctor(int32_t seed) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleRandom*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seed);
}
inline double_t GlobalNamespace::SimpleRandom::Sample() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleRandom*>(), { "Sample", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleRandom* GlobalNamespace::SimpleRandom::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleRandom*>());
}
inline ::GlobalNamespace::SimpleRandom* GlobalNamespace::SimpleRandom::New_ctor(int32_t seed) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleRandom*>(seed));
}
/// @brief Convert operator to "::GlobalNamespace::IRandom"
constexpr GlobalNamespace::SimpleRandom::operator ::GlobalNamespace::IRandom*() noexcept {
  return static_cast<::GlobalNamespace::IRandom*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRandom"
constexpr ::GlobalNamespace::IRandom* GlobalNamespace::SimpleRandom::i___GlobalNamespace__IRandom() noexcept {
  return static_cast<::GlobalNamespace::IRandom*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleRandom::SimpleRandom() {}
