#pragma once
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarPoseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarPoseData::*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose)>(
    &::BeatSaber::AvatarCore::AvatarPoseData::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe0bd6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarPoseData>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::AvatarCore::AvatarPoseData::_ctor(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarPoseData>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headPose, leftHandPose, rightHandPose);
}
// Ctor Parameters [CppParam { name: "headPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftHandPose", ty: "::UnityEngine::Pose", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "rightHandPose", ty: "::UnityEngine::Pose", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::AvatarCore::AvatarPoseData::AvatarPoseData(::UnityEngine::Pose headPose, ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose) noexcept {
  this->headPose = headPose;
  this->leftHandPose = leftHandPose;
  this->rightHandPose = rightHandPose;
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarPoseData::AvatarPoseData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
