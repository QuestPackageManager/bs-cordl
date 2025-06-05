#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseNoise.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseNoise_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseNoise.Sample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::BeatSaber::RecPlay::PoseNoise::*)(float_t)>(&::BeatSaber::RecPlay::PoseNoise::Sample)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x227c3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseNoise>::get(), "Sample", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseNoise.SampleLemniscateOfBernoulli
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(float_t)>(&::BeatSaber::RecPlay::PoseNoise::SampleLemniscateOfBernoulli)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x227c494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseNoise>::get(), "SampleLemniscateOfBernoulli",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose BeatSaber::RecPlay::PoseNoise::Sample(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseNoise>::get(), "Sample", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, time);
}
inline ::UnityEngine::Vector2 BeatSaber::RecPlay::PoseNoise::SampleLemniscateOfBernoulli(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseNoise>::get(), "SampleLemniscateOfBernoulli",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, time);
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
