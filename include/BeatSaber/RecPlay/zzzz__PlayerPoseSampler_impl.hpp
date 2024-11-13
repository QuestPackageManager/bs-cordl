#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PlayerPoseSampler.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseSampler_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseSampler.Sample
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseSampler::*)(float_t, ByRef<::BeatSaber::RecPlay::PlayerPose>)>(
    &::BeatSaber::RecPlay::PlayerPoseSampler::Sample)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2247d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseSampler*>::get(), "Sample", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::RecPlay::PlayerPose>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::RecPlay::PlayerPoseSampler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PlayerPoseSampler::*)()>(&::BeatSaber::RecPlay::PlayerPoseSampler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x22480b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseSampler*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::RecPlay::PoseOffsets& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_offsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsets;
}
constexpr ::BeatSaber::RecPlay::PoseOffsets const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_offsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___offsets;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set_offsets(::BeatSaber::RecPlay::PoseOffsets value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___offsets = value;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_frames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseFrames const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get_frames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frames;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set_frames(::BeatSaber::RecPlay::PlayerPoseFrames value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frames = value;
}
constexpr int32_t& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__headNearestFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNearestFrame;
}
constexpr int32_t const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__headNearestFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNearestFrame;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set__headNearestFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headNearestFrame = value;
}
constexpr int32_t& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__leftHandNearestFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandNearestFrame;
}
constexpr int32_t const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__leftHandNearestFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandNearestFrame;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set__leftHandNearestFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandNearestFrame = value;
}
constexpr int32_t& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__rightHandNearestFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandNearestFrame;
}
constexpr int32_t const& BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_get__rightHandNearestFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandNearestFrame;
}
constexpr void BeatSaber::RecPlay::PlayerPoseSampler::__cordl_internal_set__rightHandNearestFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandNearestFrame = value;
}
inline void BeatSaber::RecPlay::PlayerPoseSampler::Sample(float_t time, ByRef<::BeatSaber::RecPlay::PlayerPose> player) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseSampler*>::get(), "Sample", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::BeatSaber::RecPlay::PlayerPose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, player);
}
inline ::BeatSaber::RecPlay::PlayerPoseSampler* BeatSaber::RecPlay::PlayerPoseSampler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::RecPlay::PlayerPoseSampler*>());
}
inline void BeatSaber::RecPlay::PlayerPoseSampler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PlayerPoseSampler*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PlayerPoseSampler::PlayerPoseSampler() {}
