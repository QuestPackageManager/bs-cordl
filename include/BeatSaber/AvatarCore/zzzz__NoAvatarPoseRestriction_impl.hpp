#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__NoAvatarPoseRestriction_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::NoAvatarPoseRestriction.RestrictPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::NoAvatarPoseRestriction::*)(
    ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(
    &::BeatSaber::AvatarCore::NoAvatarPoseRestriction::RestrictPose)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe10498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>::get(), "RestrictPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::NoAvatarPoseRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::NoAvatarPoseRestriction::*)()>(
    &::BeatSaber::AvatarCore::NoAvatarPoseRestriction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe104c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BeatSaber::AvatarCore::IAvatarPoseRestriction"
constexpr BeatSaber::AvatarCore::NoAvatarPoseRestriction::operator ::BeatSaber::AvatarCore::IAvatarPoseRestriction*() noexcept {
  return static_cast<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>(static_cast<void*>(this));
}
inline void BeatSaber::AvatarCore::NoAvatarPoseRestriction::RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                                                         ::UnityEngine::Vector3 rightHandPosition, ByRef<::UnityEngine::Vector3> newHeadPosition,
                                                                         ByRef<::UnityEngine::Vector3> newLeftHandPosition, ByRef<::UnityEngine::Vector3> newRightHandPosition) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>::get(), "RestrictPose", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition,
                                                          newRightHandPosition);
}
inline ::BeatSaber::AvatarCore::NoAvatarPoseRestriction* BeatSaber::AvatarCore::NoAvatarPoseRestriction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>());
}
inline void BeatSaber::AvatarCore::NoAvatarPoseRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::NoAvatarPoseRestriction*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::NoAvatarPoseRestriction::NoAvatarPoseRestriction() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
