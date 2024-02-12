#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRPlatformHelper)
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class IVRPlatformHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IVRPlatformHelper);
// Type: ::IVRPlatformHelper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14565))
// CS Name: ::IVRPlatformHelper*
class CORDL_TYPE IVRPlatformHelper {
public:
  // Declarations
  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method TriggerHapticPulse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method StopHaptics, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method GetNodePose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetTriggerValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RefreshControllersReference();

  // Ctor Parameters [CppParam { name: "", ty: "IVRPlatformHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRPlatformHelper(IVRPlatformHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRPlatformHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRPlatformHelper(IVRPlatformHelper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IVRPlatformHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IVRPlatformHelper*, "", "IVRPlatformHelper");
