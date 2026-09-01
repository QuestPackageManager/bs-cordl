#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberSwingRating.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaberSwingRating_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRating.NormalRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::SaberSwingRating::NormalRating)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x370b5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSwingRating*>(), { "NormalRating", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRating.BeforeCutStepRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::SaberSwingRating::BeforeCutStepRating)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x370b598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSwingRating*>(), { "BeforeCutStepRating", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRating.AfterCutStepRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::SaberSwingRating::AfterCutStepRating)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x370b608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSwingRating*>(), { "AfterCutStepRating", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::SaberSwingRating::NormalRating(float_t normalDiff) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSwingRating*>(), { "NormalRating", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, normalDiff);
}
inline float_t GlobalNamespace::SaberSwingRating::BeforeCutStepRating(float_t angleDiff, float_t normalDiff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSwingRating*>(), { "BeforeCutStepRating", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angleDiff, normalDiff);
}
inline float_t GlobalNamespace::SaberSwingRating::AfterCutStepRating(float_t angleDiff, float_t normalDiff) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberSwingRating*>(), { "AfterCutStepRating", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, angleDiff, normalDiff);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberSwingRating::SaberSwingRating() {}
