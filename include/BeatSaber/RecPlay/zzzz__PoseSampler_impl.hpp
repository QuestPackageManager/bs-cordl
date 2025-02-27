#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseSampler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseSampler_def.hpp"
#include "BeatSaber/RecPlay/zzzz__FrameSample_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseFrame_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseSampler.SamplePose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>, float_t,
                                                                                                          ::ByRef<int32_t>)>(&::BeatSaber::RecPlay::PoseSampler::SamplePose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x22801cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseSampler*>::get(), "SamplePose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseSampler.FindPoseSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::FrameSample (*)(
    ::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>, float_t, int32_t)>(&::BeatSaber::RecPlay::PoseSampler::FindPoseSample)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x22804b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseSampler*>::get(), "FindPoseSample", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseSampler.InterpolatePoseSample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(
    ::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>, ::ByRef<::BeatSaber::RecPlay::FrameSample>)>(&::BeatSaber::RecPlay::PoseSampler::InterpolatePoseSample)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x228060c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseSampler*>::get(), "InterpolatePoseSample", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::RecPlay::FrameSample>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose BeatSaber::RecPlay::PoseSampler::SamplePose(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames, float_t time,
                                                                       ::ByRef<int32_t> nearest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseSampler*>::get(), "SamplePose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, frames, time, nearest);
}
inline ::BeatSaber::RecPlay::FrameSample BeatSaber::RecPlay::PoseSampler::FindPoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames, float_t time,
                                                                                         int32_t nearest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseSampler*>::get(), "FindPoseSample", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::FrameSample, false>(nullptr, ___internal_method, frames, time, nearest);
}
inline ::UnityEngine::Pose BeatSaber::RecPlay::PoseSampler::InterpolatePoseSample(::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*> frames,
                                                                                  ::ByRef<::BeatSaber::RecPlay::FrameSample> sample) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseSampler*>::get(), "InterpolatePoseSample", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::BeatSaber::RecPlay::PoseFrame, ::Array<::BeatSaber::RecPlay::PoseFrame>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::RecPlay::FrameSample>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, frames, sample);
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseSampler::PoseSampler() {}
