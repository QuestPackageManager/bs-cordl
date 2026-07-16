#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AudioHelpers_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AudioHelpers.NormalizedVolumeToDB
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioHelpers::NormalizedVolumeToDB)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x331f814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioHelpers*>(), { "NormalizedVolumeToDB", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioHelpers.DBToNormalizedVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::AudioHelpers::DBToNormalizedVolume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x331f898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioHelpers*>(), { "DBToNormalizedVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::AudioHelpers::NormalizedVolumeToDB(float_t normalizedVolume) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioHelpers*>(), { "NormalizedVolumeToDB", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, normalizedVolume);
}
inline float_t GlobalNamespace::AudioHelpers::DBToNormalizedVolume(float_t db) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AudioHelpers*>(), { "DBToNormalizedVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, db);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioHelpers::AudioHelpers() {}
