#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/IAvatarPoseRestriction.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
inline void BeatSaber::AvatarCore::IAvatarPoseRestriction::RestrictPose(::UnityEngine::Quaternion headRotation, ::UnityEngine::Vector3 headPosition, ::UnityEngine::Vector3 leftHandPosition,
                                                                        ::UnityEngine::Vector3 rightHandPosition, ::ByRef<::UnityEngine::Vector3> newHeadPosition,
                                                                        ::ByRef<::UnityEngine::Vector3> newLeftHandPosition, ::ByRef<::UnityEngine::Vector3> newRightHandPosition) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::IAvatarPoseRestriction*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, headRotation, headPosition, leftHandPosition, rightHandPosition, newHeadPosition, newLeftHandPosition,
                                                          newRightHandPosition);
}
