#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "RootMotion/zzzz__AvatarUtility_def.hpp"
#include "RootMotion/zzzz__TQ_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__Avatar_def.hpp"
#include "UnityEngine/zzzz__HumanBodyBones_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::RootMotion::AvatarUtility.GetPostRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::UnityEngine::Avatar*, ::UnityEngine::AvatarIKGoal)>(
    &::RootMotion::AvatarUtility::GetPostRotation)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x1231ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), "GetPostRotation", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Avatar*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::AvatarUtility.GetIKGoalTQ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::RootMotion::TQ* (*)(::UnityEngine::Avatar*, float_t, ::UnityEngine::AvatarIKGoal, ::RootMotion::TQ*, ::RootMotion::TQ*)>(&::RootMotion::AvatarUtility::GetIKGoalTQ)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0x1231f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), "GetIKGoalTQ", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Avatar*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::TQ*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::TQ*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::AvatarUtility.HumanIDFromAvatarIKGoal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::HumanBodyBones (*)(::UnityEngine::AvatarIKGoal)>(
    &::RootMotion::AvatarUtility::HumanIDFromAvatarIKGoal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1231efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), "HumanIDFromAvatarIKGoal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::AvatarUtility._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::AvatarUtility::*)()>(&::RootMotion::AvatarUtility::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1232574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Quaternion RootMotion::AvatarUtility::GetPostRotation(::UnityEngine::Avatar* avatar, ::UnityEngine::AvatarIKGoal avatarIKGoal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), "GetPostRotation", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Avatar*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, avatar, avatarIKGoal);
}
inline ::RootMotion::TQ* RootMotion::AvatarUtility::GetIKGoalTQ(::UnityEngine::Avatar* avatar, float_t humanScale, ::UnityEngine::AvatarIKGoal avatarIKGoal, ::RootMotion::TQ* bodyPositionRotation,
                                                                ::RootMotion::TQ* boneTQ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), "GetIKGoalTQ", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Avatar*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::TQ*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::TQ*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::TQ*, false>(nullptr, ___internal_method, avatar, humanScale, avatarIKGoal, bodyPositionRotation, boneTQ);
}
inline ::UnityEngine::HumanBodyBones RootMotion::AvatarUtility::HumanIDFromAvatarIKGoal(::UnityEngine::AvatarIKGoal avatarIKGoal) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), "HumanIDFromAvatarIKGoal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AvatarIKGoal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HumanBodyBones, false>(nullptr, ___internal_method, avatarIKGoal);
}
inline ::RootMotion::AvatarUtility* RootMotion::AvatarUtility::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::RootMotion::AvatarUtility*>());
}
inline void RootMotion::AvatarUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::AvatarUtility*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::AvatarUtility::AvatarUtility() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
