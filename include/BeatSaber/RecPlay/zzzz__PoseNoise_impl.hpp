#pragma once
// IWYU pragma private; include "BeatSaber\RecPlay\PoseNoise.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseNoise_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseNoise.Sample
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::BeatSaber::RecPlay::PoseNoise::*)(float_t)>(&::BeatSaber::RecPlay::PoseNoise::Sample)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32c59f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseNoise>(), { "Sample", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseNoise.SampleLemniscateOfBernoulli
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(float_t)>(&::BeatSaber::RecPlay::PoseNoise::SampleLemniscateOfBernoulli)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x32c5ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseNoise>(), { "SampleLemniscateOfBernoulli", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose BeatSaber::RecPlay::PoseNoise::Sample(float_t time) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseNoise>(), { "Sample", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(*this, ___internal_method, time);
}
inline ::UnityEngine::Vector2 BeatSaber::RecPlay::PoseNoise::SampleLemniscateOfBernoulli(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::RecPlay::PoseNoise>(), { "SampleLemniscateOfBernoulli", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, time);
}
// Ctor Parameters [CppParam { name: "frequency", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "move", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "rotate", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::RecPlay::PoseNoise::PoseNoise(float_t frequency, float_t move, float_t rotate) noexcept {
  this->frequency = frequency;
  this->move = move;
  this->rotate = rotate;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseNoise::PoseNoise() {}
