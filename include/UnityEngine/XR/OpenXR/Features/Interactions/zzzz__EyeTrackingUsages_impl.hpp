#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/EyeTrackingUsages.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/OpenXR/Features/Interactions/zzzz__EyeTrackingUsages_def.hpp"
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages::setStaticF_gazePosition(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>, "gazePosition",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages*>::get>(
      std::forward<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>>(value));
}
inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages::getStaticF_gazePosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3>, "gazePosition",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages*>::get>();
}
inline void UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages::setStaticF_gazeRotation(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>, "gazeRotation",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages*>::get>(
      std::forward<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>>(value));
}
inline ::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages::getStaticF_gazeRotation() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion>, "gazeRotation",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages*>::get>();
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::OpenXR::Features::Interactions::EyeTrackingUsages::EyeTrackingUsages() {}
