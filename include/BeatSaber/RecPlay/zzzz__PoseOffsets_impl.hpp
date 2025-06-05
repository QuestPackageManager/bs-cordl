#pragma once
// IWYU pragma private; include "BeatSaber/RecPlay/PoseOffsets.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseOffsets_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPose_def.hpp"
//  Writing Method size for method: ::BeatSaber::RecPlay::PoseOffsets.Adjust
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::RecPlay::PoseOffsets::*)(::ByRef<::BeatSaber::RecPlay::PlayerPose>)>(
    &::BeatSaber::RecPlay::PoseOffsets::Adjust)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x227be3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "Adjust", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::RecPlay::PlayerPose>>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::RecPlay::PoseOffsets::setStaticF_kDefault(::BeatSaber::RecPlay::PoseOffsets value) {
  ::cordl_internals::setStaticField<::BeatSaber::RecPlay::PoseOffsets, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get>(
      std::forward<::BeatSaber::RecPlay::PoseOffsets>(value));
}
inline ::BeatSaber::RecPlay::PoseOffsets BeatSaber::RecPlay::PoseOffsets::getStaticF_kDefault() {
  return ::cordl_internals::getStaticField<::BeatSaber::RecPlay::PoseOffsets, "kDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get>();
}
inline void BeatSaber::RecPlay::PoseOffsets::Adjust(::ByRef<::BeatSaber::RecPlay::PlayerPose> pose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::RecPlay::PoseOffsets>::get(), "Adjust", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::RecPlay::PlayerPose>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pose);
}
// Ctor Parameters [CppParam { name: "room", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftController", ty: "::UnityEngine::Pose", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "rightController", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::RecPlay::PoseOffsets::PoseOffsets(::UnityEngine::Pose room, ::UnityEngine::Pose leftController, ::UnityEngine::Pose rightController) noexcept {
  this->room = room;
  this->leftController = leftController;
  this->rightController = rightController;
}
// Ctor Parameters []
constexpr ::BeatSaber::RecPlay::PoseOffsets::PoseOffsets() {}
