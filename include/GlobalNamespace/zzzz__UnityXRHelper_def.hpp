#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRHelper)
namespace GlobalNamespace {
class UnityXRController_Configuration;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
struct UnityXRHelper_VRControllerManufacturerName;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
struct InputAction_CallbackContext;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine::XR {
struct XRNodeState;
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
struct UnityXRHelper_VRControllerManufacturerName;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName);
MARK_REF_PTR_T(::GlobalNamespace::UnityXRHelper);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityXRHelper/VRControllerManufacturerName
struct CORDL_TYPE UnityXRHelper_VRControllerManufacturerName {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UnityXRHelper_VRControllerManufacturerName_Unwrapped
  enum struct __UnityXRHelper_VRControllerManufacturerName_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_HTC = static_cast<int32_t>(0x1),
    __E_Oculus = static_cast<int32_t>(0x2),
    __E_Valve = static_cast<int32_t>(0x3),
    __E_Microsoft = static_cast<int32_t>(0x4),
    __E_Unknown = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UnityXRHelper_VRControllerManufacturerName_Unwrapped() const noexcept {
    return static_cast<__UnityXRHelper_VRControllerManufacturerName_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRHelper_VRControllerManufacturerName();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnityXRHelper_VRControllerManufacturerName(int32_t value__) noexcept;

  /// @brief Field HTC value: I32(1)
  static ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const HTC;

  /// @brief Field Microsoft value: I32(4)
  static ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const Microsoft;

  /// @brief Field Oculus value: I32(2)
  static ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const Oculus;

  /// @brief Field Undefined value: I32(0)
  static ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const Undefined;

  /// @brief Field Unknown value: I32(5)
  static ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const Unknown;

  /// @brief Field Valve value: I32(3)
  static ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName const Valve;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16494 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IVRPlatformHelper, IVerboseLogger, UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRHelper
class CORDL_TYPE UnityXRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using VRControllerManufacturerName = ::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName;

  /// @brief Field <hasVrFocus>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus_k__BackingField, put = __cordl_internal_set__hasVrFocus_k__BackingField)) bool _hasVrFocus_k__BackingField;

  /// @brief Field _headOrientationAction, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__headOrientationAction, put = __cordl_internal_set__headOrientationAction)) ::UnityEngine::InputSystem::InputAction* _headOrientationAction;

  /// @brief Field _headOrientationActionReference, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__headOrientationActionReference,
                      put = __cordl_internal_set__headOrientationActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _headOrientationActionReference;

  /// @brief Field _headPositionAction, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__headPositionAction, put = __cordl_internal_set__headPositionAction)) ::UnityEngine::InputSystem::InputAction* _headPositionAction;

  /// @brief Field _headPositionActionReference, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__headPositionActionReference, put = __cordl_internal_set__headPositionActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _headPositionActionReference;

  /// @brief Field _isPausePressed, offset 0xca, size 0x1
  __declspec(property(get = __cordl_internal_get__isPausePressed, put = __cordl_internal_set__isPausePressed)) bool _isPausePressed;

  /// @brief Field _leftController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController)) ::GlobalNamespace::UnityXRController* _leftController;

  /// @brief Field _leftControllerConfiguration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftControllerConfiguration,
                      put = __cordl_internal_set__leftControllerConfiguration)) ::GlobalNamespace::UnityXRController_Configuration* _leftControllerConfiguration;

  /// @brief Field _pauseGameAction, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameAction, put = __cordl_internal_set__pauseGameAction)) ::UnityEngine::InputSystem::InputAction* _pauseGameAction;

  /// @brief Field _pauseGameActionReference, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameActionReference, put = __cordl_internal_set__pauseGameActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _pauseGameActionReference;

  /// @brief Field _rightController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController)) ::GlobalNamespace::UnityXRController* _rightController;

  /// @brief Field _rightControllerConfiguration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightControllerConfiguration,
                      put = __cordl_internal_set__rightControllerConfiguration)) ::GlobalNamespace::UnityXRController_Configuration* _rightControllerConfiguration;

  /// @brief Field _scrollingLastFrame, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__scrollingLastFrame, put = __cordl_internal_set__scrollingLastFrame)) bool _scrollingLastFrame;

  /// @brief Field _userPresence, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get__userPresence, put = __cordl_internal_set__userPresence)) bool _userPresence;

  /// @brief Field _userPresenceAction, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresenceAction, put = __cordl_internal_set__userPresenceAction)) ::UnityEngine::InputSystem::InputAction* _userPresenceAction;

  /// @brief Field _userPresenceActionReference, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresenceActionReference, put = __cordl_internal_set__userPresenceActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _userPresenceActionReference;

  /// @brief Field _wasPausePressedThisFrame, offset 0xcb, size 0x1
  __declspec(property(get = __cordl_internal_get__wasPausePressedThisFrame, put = __cordl_internal_set__wasPausePressedThisFrame)) bool _wasPausePressedThisFrame;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidChangeReferenceEvent,
                      put = __cordl_internal_set_controllersDidChangeReferenceEvent)) ::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidDisconnectEvent, put = __cordl_internal_set_controllersDidDisconnectEvent)) ::System::Action* controllersDidDisconnectEvent;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus, put = set_hasVrFocus)) bool hasVrFocus;

  /// @brief Field hmdMountedEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdMountedEvent, put = __cordl_internal_set_hmdMountedEvent)) ::System::Action* hmdMountedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdUnmountedEvent, put = __cordl_internal_set_hmdUnmountedEvent)) ::System::Action* hmdUnmountedEvent;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasCapturedEvent, put = __cordl_internal_set_inputFocusWasCapturedEvent)) ::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasReleasedEvent, put = __cordl_internal_set_inputFocusWasReleasedEvent)) ::System::Action* inputFocusWasReleasedEvent;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  /// @brief Field kHTCViveLegacyPositionOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kHTCViveLegacyPositionOffset, put = setStaticF_kHTCViveLegacyPositionOffset)) ::UnityEngine::Vector3 kHTCViveLegacyPositionOffset;

  /// @brief Field kHTCViveLegacyRotationOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kHTCViveLegacyRotationOffset, put = setStaticF_kHTCViveLegacyRotationOffset)) ::UnityEngine::Vector3 kHTCViveLegacyRotationOffset;

  /// @brief Field kHTCViveOffsetDefaultPose, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kHTCViveOffsetDefaultPose, put = setStaticF_kHTCViveOffsetDefaultPose)) ::UnityEngine::Pose kHTCViveOffsetDefaultPose;

  /// @brief Field kHTCViveOriginOffsetToLegacy, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kHTCViveOriginOffsetToLegacy, put = setStaticF_kHTCViveOriginOffsetToLegacy)) ::UnityEngine::Pose kHTCViveOriginOffsetToLegacy;

  /// @brief Field kOculusOffsetDefaultPose, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kOculusOffsetDefaultPose, put = setStaticF_kOculusOffsetDefaultPose)) ::UnityEngine::Pose kOculusOffsetDefaultPose;

  /// @brief Field kOculusTouchLegacyPositionOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kOculusTouchLegacyPositionOffset, put = setStaticF_kOculusTouchLegacyPositionOffset)) ::UnityEngine::Vector3 kOculusTouchLegacyPositionOffset;

  /// @brief Field kOculusTouchLegacyRotationOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kOculusTouchLegacyRotationOffset, put = setStaticF_kOculusTouchLegacyRotationOffset)) ::UnityEngine::Vector3 kOculusTouchLegacyRotationOffset;

  /// @brief Field kOculusTouchOriginOffsetToLegacy, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kOculusTouchOriginOffsetToLegacy, put = setStaticF_kOculusTouchOriginOffsetToLegacy)) ::UnityEngine::Pose kOculusTouchOriginOffsetToLegacy;

  /// @brief Field kValveIndexLegacyPositionOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kValveIndexLegacyPositionOffset, put = setStaticF_kValveIndexLegacyPositionOffset)) ::UnityEngine::Vector3 kValveIndexLegacyPositionOffset;

  /// @brief Field kValveIndexLegacyRotationOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kValveIndexLegacyRotationOffset, put = setStaticF_kValveIndexLegacyRotationOffset)) ::UnityEngine::Vector3 kValveIndexLegacyRotationOffset;

  /// @brief Field kValveIndexOffsetDefaultPose, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kValveIndexOffsetDefaultPose, put = setStaticF_kValveIndexOffsetDefaultPose)) ::UnityEngine::Pose kValveIndexOffsetDefaultPose;

  /// @brief Field kValveIndexOriginOffsetToLegacy, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_kValveIndexOriginOffsetToLegacy, put = setStaticF_kValveIndexOriginOffsetToLegacy)) ::UnityEngine::Pose kValveIndexOriginOffsetToLegacy;

  __declspec(property(get = get_leftController)) ::GlobalNamespace::UnityXRController* leftController;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  __declspec(property(get = get_rightController)) ::GlobalNamespace::UnityXRController* rightController;

  __declspec(property(put = set_userPresence)) bool userPresence;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasCapturedEvent, put = __cordl_internal_set_vrFocusWasCapturedEvent)) ::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasReleasedEvent, put = __cordl_internal_set_vrFocusWasReleasedEvent)) ::System::Action* vrFocusWasReleasedEvent;

  __declspec(property(get = get_vrPlatformSDK)) ::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method ControllerFromNode, addr 0x39de450, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* ControllerFromNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x39df238, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetMenuButton, addr 0x39df2c4, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x39df2cc, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x39dea18, size 0x1f4, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetPoseOffsetForManufacturer, addr 0x39de868, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetPoseOffsetForManufacturer(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName manufacturerName);

  /// @brief Method GetRootPositionOffsetForLegacyNodePose, addr 0x39ded5c, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetRootPositionOffsetForLegacyNodePose(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName manufacturerName);

  /// @brief Method GetRootPositionOffsetForLegacyNodePose, addr 0x39deca4, size 0xb8, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x39df244, size 0x78, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetTriggerValue, addr 0x39df23c, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleNewXRNode, addr 0x39de3cc, size 0x24, virtual false, abstract: false, final false
  inline void HandleNewXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method HandleRemovedXRNode, addr 0x39de3f0, size 0x60, virtual false, abstract: false, final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method IsAdvancedHapticsSupported, addr 0x39df2bc, size 0x8, virtual true, abstract: false, final true
  inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node);

  /// @brief Method LateUpdate, addr 0x39df2d4, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::UnityXRHelper* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x39de384, size 0x34, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x39de160, size 0x214, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPauseGameCancelled, addr 0x39de3c4, size 0x8, virtual false, abstract: false, final false
  inline void OnPauseGameCancelled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnPauseGamePerformed, addr 0x39de3b8, size 0xc, virtual false, abstract: false, final false
  inline void OnPauseGamePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnTrackingOriginUpdated, addr 0x39de10c, size 0x1c, virtual false, abstract: false, final false
  inline void OnTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method OnUserPresenceCanceled, addr 0x39de374, size 0x8, virtual false, abstract: false, final false
  inline void OnUserPresenceCanceled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnUserPresenceStarted, addr 0x39de37c, size 0x8, virtual false, abstract: false, final false
  inline void OnUserPresenceStarted(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnboundaryChanged, addr 0x39de144, size 0x1c, virtual false, abstract: false, final false
  inline void OnboundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method ReadHeadPose, addr 0x39dec0c, size 0x98, virtual false, abstract: false, final false
  inline void ReadHeadPose(::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method RefreshControllersReference, addr 0x39de128, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method Start, addr 0x39ddc50, size 0x424, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopHaptics, addr 0x39de608, size 0x174, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x39de47c, size 0x18c, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetLegacyPoseOffsetForNode, addr 0x39df010, size 0x228, virtual false, abstract: false, final false
  static inline bool TryGetLegacyPoseOffsetForNode(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName manufacturerName, ::ByRef<::UnityEngine::Vector3> position,
                                                   ::ByRef<::UnityEngine::Vector3> rotation);

  /// @brief Method TryGetLegacyPoseOffsetForNode, addr 0x39def0c, size 0x104, virtual true, abstract: false, final true
  inline bool TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> rotation);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x39de77c, size 0xec, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method UpdateManufacturerOnNode, addr 0x39de074, size 0x98, virtual false, abstract: false, final false
  inline void UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node);

  constexpr bool const& __cordl_internal_get__hasVrFocus_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasVrFocus_k__BackingField();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__headOrientationAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__headOrientationAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__headOrientationActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__headOrientationActionReference();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__headPositionAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__headPositionAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__headPositionActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__headPositionActionReference();

  constexpr bool const& __cordl_internal_get__isPausePressed() const;

  constexpr bool& __cordl_internal_get__isPausePressed();

  constexpr ::GlobalNamespace::UnityXRController* const& __cordl_internal_get__leftController() const;

  constexpr ::GlobalNamespace::UnityXRController*& __cordl_internal_get__leftController();

  constexpr ::GlobalNamespace::UnityXRController_Configuration* const& __cordl_internal_get__leftControllerConfiguration() const;

  constexpr ::GlobalNamespace::UnityXRController_Configuration*& __cordl_internal_get__leftControllerConfiguration();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__pauseGameAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__pauseGameAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__pauseGameActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__pauseGameActionReference();

  constexpr ::GlobalNamespace::UnityXRController* const& __cordl_internal_get__rightController() const;

  constexpr ::GlobalNamespace::UnityXRController*& __cordl_internal_get__rightController();

  constexpr ::GlobalNamespace::UnityXRController_Configuration* const& __cordl_internal_get__rightControllerConfiguration() const;

  constexpr ::GlobalNamespace::UnityXRController_Configuration*& __cordl_internal_get__rightControllerConfiguration();

  constexpr bool const& __cordl_internal_get__scrollingLastFrame() const;

  constexpr bool& __cordl_internal_get__scrollingLastFrame();

  constexpr bool const& __cordl_internal_get__userPresence() const;

  constexpr bool& __cordl_internal_get__userPresence();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__userPresenceAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__userPresenceAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__userPresenceActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__userPresenceActionReference();

  constexpr bool const& __cordl_internal_get__wasPausePressedThisFrame() const;

  constexpr bool& __cordl_internal_get__wasPausePressedThisFrame();

  constexpr ::System::Action* const& __cordl_internal_get_controllersDidChangeReferenceEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_controllersDidChangeReferenceEvent();

  constexpr ::System::Action* const& __cordl_internal_get_controllersDidDisconnectEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_controllersDidDisconnectEvent();

  constexpr ::System::Action* const& __cordl_internal_get_hmdMountedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_hmdMountedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_hmdUnmountedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_hmdUnmountedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_inputFocusWasCapturedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_inputFocusWasCapturedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_inputFocusWasReleasedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_inputFocusWasReleasedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_vrFocusWasCapturedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrFocusWasCapturedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_vrFocusWasReleasedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrFocusWasReleasedEvent();

  constexpr void __cordl_internal_set__hasVrFocus_k__BackingField(bool value);

  constexpr void __cordl_internal_set__headOrientationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__headOrientationActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__headPositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__headPositionActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__isPausePressed(bool value);

  constexpr void __cordl_internal_set__leftController(::GlobalNamespace::UnityXRController* value);

  constexpr void __cordl_internal_set__leftControllerConfiguration(::GlobalNamespace::UnityXRController_Configuration* value);

  constexpr void __cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__rightController(::GlobalNamespace::UnityXRController* value);

  constexpr void __cordl_internal_set__rightControllerConfiguration(::GlobalNamespace::UnityXRController_Configuration* value);

  constexpr void __cordl_internal_set__scrollingLastFrame(bool value);

  constexpr void __cordl_internal_set__userPresence(bool value);

  constexpr void __cordl_internal_set__userPresenceAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__userPresenceActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__wasPausePressedThisFrame(bool value);

  constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x39df2dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x39dd8e4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x39dda1c, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x39dd7ac, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x39dd674, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x39dd194, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x39dd2cc, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x39dd404, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x39dd53c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  static inline ::UnityEngine::Vector3 getStaticF_kHTCViveLegacyPositionOffset();

  static inline ::UnityEngine::Vector3 getStaticF_kHTCViveLegacyRotationOffset();

  static inline ::UnityEngine::Pose getStaticF_kHTCViveOffsetDefaultPose();

  static inline ::UnityEngine::Pose getStaticF_kHTCViveOriginOffsetToLegacy();

  static inline ::UnityEngine::Pose getStaticF_kOculusOffsetDefaultPose();

  static inline ::UnityEngine::Vector3 getStaticF_kOculusTouchLegacyPositionOffset();

  static inline ::UnityEngine::Vector3 getStaticF_kOculusTouchLegacyRotationOffset();

  static inline ::UnityEngine::Pose getStaticF_kOculusTouchOriginOffsetToLegacy();

  static inline ::UnityEngine::Vector3 getStaticF_kValveIndexLegacyPositionOffset();

  static inline ::UnityEngine::Vector3 getStaticF_kValveIndexLegacyRotationOffset();

  static inline ::UnityEngine::Pose getStaticF_kValveIndexOffsetDefaultPose();

  static inline ::UnityEngine::Pose getStaticF_kValveIndexOriginOffsetToLegacy();

  /// @brief Method get_hasInputFocus, addr 0x39ddb54, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x39ddb5c, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x39ddb70, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_leftController, addr 0x39ddbc0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* get_leftController();

  /// @brief Method get_loggerPrefix, addr 0x39ddb80, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get_rightController, addr 0x39ddbc8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* get_rightController();

  /// @brief Method get_vrPlatformSDK, addr 0x39ddb78, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x39dd980, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x39ddab8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x39dd848, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x39dd710, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x39dd230, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x39dd368, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x39dd4a0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x39dd5d8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  static inline void setStaticF_kHTCViveLegacyPositionOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_kHTCViveLegacyRotationOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_kHTCViveOffsetDefaultPose(::UnityEngine::Pose value);

  static inline void setStaticF_kHTCViveOriginOffsetToLegacy(::UnityEngine::Pose value);

  static inline void setStaticF_kOculusOffsetDefaultPose(::UnityEngine::Pose value);

  static inline void setStaticF_kOculusTouchLegacyPositionOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_kOculusTouchLegacyRotationOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_kOculusTouchOriginOffsetToLegacy(::UnityEngine::Pose value);

  static inline void setStaticF_kValveIndexLegacyPositionOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_kValveIndexLegacyRotationOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_kValveIndexOffsetDefaultPose(::UnityEngine::Pose value);

  static inline void setStaticF_kValveIndexOriginOffsetToLegacy(::UnityEngine::Pose value);

  /// @brief Method set_hasVrFocus, addr 0x39ddb64, size 0xc, virtual false, abstract: false, final false
  inline void set_hasVrFocus(bool value);

  /// @brief Method set_userPresence, addr 0x39ddbd0, size 0x80, virtual false, abstract: false, final false
  inline void set_userPresence(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRHelper(UnityXRHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRHelper(UnityXRHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16495 };

  /// @brief Field _leftControllerConfiguration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController_Configuration* ____leftControllerConfiguration;

  /// @brief Field _rightControllerConfiguration, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController_Configuration* ____rightControllerConfiguration;

  /// @brief Field _userPresenceActionReference, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____userPresenceActionReference;

  /// @brief Field _headPositionActionReference, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____headPositionActionReference;

  /// @brief Field _headOrientationActionReference, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____headOrientationActionReference;

  /// @brief Field _pauseGameActionReference, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____pauseGameActionReference;

  /// @brief Field inputFocusWasCapturedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___controllersDidDisconnectEvent;

  /// @brief Field <hasVrFocus>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____hasVrFocus_k__BackingField;

  /// @brief Field _leftController, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____leftController;

  /// @brief Field _rightController, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____rightController;

  /// @brief Field _headPositionAction, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headPositionAction;

  /// @brief Field _headOrientationAction, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headOrientationAction;

  /// @brief Field _userPresenceAction, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____userPresenceAction;

  /// @brief Field _pauseGameAction, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____pauseGameAction;

  /// @brief Field _scrollingLastFrame, offset: 0xc8, size: 0x1, def value: None
  bool ____scrollingLastFrame;

  /// @brief Field _userPresence, offset: 0xc9, size: 0x1, def value: None
  bool ____userPresence;

  /// @brief Field _isPausePressed, offset: 0xca, size: 0x1, def value: None
  bool ____isPausePressed;

  /// @brief Field _wasPausePressedThisFrame, offset: 0xcb, size: 0x1, def value: None
  bool ____wasPausePressedThisFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftControllerConfiguration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightControllerConfiguration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresenceActionReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionActionReference) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationActionReference) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____pauseGameActionReference) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___inputFocusWasCapturedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___inputFocusWasReleasedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___vrFocusWasCapturedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___vrFocusWasReleasedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___hmdUnmountedEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___hmdMountedEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___controllersDidChangeReferenceEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___controllersDidDisconnectEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasVrFocus_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftController) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightController) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresenceAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____pauseGameAction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____scrollingLastFrame) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresence) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____isPausePressed) == 0xca, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____wasPausePressedThisFrame) == 0xcb, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRHelper, 0xd0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRHelper_VRControllerManufacturerName, "", "UnityXRHelper/VRControllerManufacturerName");
NEED_NO_BOX(::GlobalNamespace::UnityXRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRHelper*, "", "UnityXRHelper");
