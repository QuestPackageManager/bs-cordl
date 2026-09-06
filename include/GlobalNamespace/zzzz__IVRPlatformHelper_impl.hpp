#pragma once
// IWYU pragma private; include "GlobalNamespace/IVRPlatformHelper.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.TriggerHapticPulse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode, float_t, float_t, float_t)>(
    &::GlobalNamespace::IVRPlatformHelper::TriggerHapticPulse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.StopHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::IVRPlatformHelper::StopHaptics)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.TryGetPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::Pose>)>(
    &::GlobalNamespace::IVRPlatformHelper::TryGetPoseOffsetForNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetNodePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode, int32_t, ::by_ref<::UnityEngine::Vector3>,
                                                                                                      ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::IVRPlatformHelper::GetNodePose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetRootPositionOffsetForLegacyNodePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::IVRPlatformHelper::GetRootPositionOffsetForLegacyNodePose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.TryGetLegacyPoseOffsetForNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::IVRPlatformHelper::TryGetLegacyPoseOffsetForNode)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetAnyJoystickMaxAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::IVRPlatformHelper::*)()>(&::GlobalNamespace::IVRPlatformHelper::GetAnyJoystickMaxAxis)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetTriggerValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::IVRPlatformHelper::GetTriggerValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetThumbstickValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode)>(
    &::GlobalNamespace::IVRPlatformHelper::GetThumbstickValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.IsAdvancedHapticsSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IVRPlatformHelper::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::IVRPlatformHelper::IsAdvancedHapticsSupported)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetMenuButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IVRPlatformHelper::*)()>(&::GlobalNamespace::IVRPlatformHelper::GetMenuButton)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IVRPlatformHelper.GetMenuButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::IVRPlatformHelper::*)()>(&::GlobalNamespace::IVRPlatformHelper::GetMenuButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 11 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IVRPlatformHelper::TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node, duration, strength, frequency);
}
inline void GlobalNamespace::IVRPlatformHelper::StopHaptics(::UnityEngine::XR::XRNode node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool GlobalNamespace::IVRPlatformHelper::TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Pose> poseOffset) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, poseOffset);
}
inline bool GlobalNamespace::IVRPlatformHelper::GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ::by_ref<::UnityEngine::Vector3> pos, ::by_ref<::UnityEngine::Quaternion> rot) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nodeType, idx, pos, rot);
}
inline ::UnityEngine::Pose GlobalNamespace::IVRPlatformHelper::GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, node);
}
inline bool GlobalNamespace::IVRPlatformHelper::TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> rotation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node, position, rotation);
}
inline ::UnityEngine::Vector2 GlobalNamespace::IVRPlatformHelper::GetAnyJoystickMaxAxis() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t GlobalNamespace::IVRPlatformHelper::GetTriggerValue(::UnityEngine::XR::XRNode node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, node);
}
inline ::UnityEngine::Vector2 GlobalNamespace::IVRPlatformHelper::GetThumbstickValue(::UnityEngine::XR::XRNode node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, node);
}
inline bool GlobalNamespace::IVRPlatformHelper::IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline bool GlobalNamespace::IVRPlatformHelper::GetMenuButton() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::IVRPlatformHelper::GetMenuButtonDown() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IVRPlatformHelper*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
