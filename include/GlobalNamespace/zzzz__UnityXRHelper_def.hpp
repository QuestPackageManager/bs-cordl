#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityXRHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRHelper)
namespace GlobalNamespace {
class ControllerConfiguration;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
class UnityXRController;
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
class UnityXRHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityXRHelper);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRHelper
class CORDL_TYPE UnityXRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hasInputFocus, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInputFocus, put = __cordl_internal_set__hasInputFocus)) bool _hasInputFocus;

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

  /// @brief Field _isPausePressed, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get__isPausePressed, put = __cordl_internal_set__isPausePressed)) bool _isPausePressed;

  /// @brief Field _leftController, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController)) ::GlobalNamespace::UnityXRController* _leftController;

  /// @brief Field _leftControllerConfiguration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftControllerConfiguration,
                      put = __cordl_internal_set__leftControllerConfiguration)) ::GlobalNamespace::ControllerConfiguration* _leftControllerConfiguration;

  /// @brief Field _pauseGameAction, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameAction, put = __cordl_internal_set__pauseGameAction)) ::UnityEngine::InputSystem::InputAction* _pauseGameAction;

  /// @brief Field _pauseGameActionReference, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameActionReference, put = __cordl_internal_set__pauseGameActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _pauseGameActionReference;

  /// @brief Field _rightController, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController)) ::GlobalNamespace::UnityXRController* _rightController;

  /// @brief Field _rightControllerConfiguration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightControllerConfiguration,
                      put = __cordl_internal_set__rightControllerConfiguration)) ::GlobalNamespace::ControllerConfiguration* _rightControllerConfiguration;

  /// @brief Field _userPresence, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__userPresence, put = __cordl_internal_set__userPresence)) bool _userPresence;

  /// @brief Field _userPresenceActionReference, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresenceActionReference, put = __cordl_internal_set__userPresenceActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _userPresenceActionReference;

  /// @brief Field _wasPausePressedThisFrame, offset 0xc3, size 0x1
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

  /// @brief Field vrFocusWasCapturedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasCapturedEvent, put = __cordl_internal_set_vrFocusWasCapturedEvent)) ::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasReleasedEvent, put = __cordl_internal_set_vrFocusWasReleasedEvent)) ::System::Action* vrFocusWasReleasedEvent;

  __declspec(property(get = get_vrPlatformSDK)) ::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x5787998, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetControllerFromNode, addr 0x5787a70, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* GetControllerFromNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x5787aac, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x5787ab4, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x57880a0, size 0x23c, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t id, ::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetRootPositionOffsetForLegacyNodePose, addr 0x578837c, size 0x258, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x57879ac, size 0xc4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetTriggerValue, addr 0x57879a0, size 0xc, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleBoundaryChanged, addr 0x5788950, size 0x1c, virtual false, abstract: false, final false
  inline void HandleBoundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method HandleNewXRNode, addr 0x5788980, size 0x8, virtual false, abstract: false, final false
  inline void HandleNewXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method HandlePauseGameCancelled, addr 0x5788978, size 0x8, virtual false, abstract: false, final false
  inline void HandlePauseGameCancelled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method HandlePauseGamePerformed, addr 0x578896c, size 0xc, virtual false, abstract: false, final false
  inline void HandlePauseGamePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method HandleRemovedXRNode, addr 0x57888e0, size 0x54, virtual false, abstract: false, final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method HandleTrackingOriginUpdated, addr 0x5788934, size 0x1c, virtual false, abstract: false, final false
  inline void HandleTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method IsAdvancedHapticsSupported, addr 0x5787a9c, size 0x10, virtual true, abstract: false, final true
  inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node);

  /// @brief Method LateUpdate, addr 0x5787704, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::UnityXRHelper* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x5787960, size 0x38, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x578770c, size 0x254, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReadHeadPose, addr 0x57882dc, size 0xa0, virtual false, abstract: false, final false
  inline void ReadHeadPose(::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method RefreshControllersReference, addr 0x5787abc, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method SetInputFocus, addr 0x57888a0, size 0x40, virtual false, abstract: false, final false
  inline void SetInputFocus(bool newInputFocus);

  /// @brief Method SetUserPresence, addr 0x5788860, size 0x40, virtual false, abstract: false, final false
  inline void SetUserPresence(bool newUserPresence);

  /// @brief Method Start, addr 0x57870f4, size 0x474, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopHaptics, addr 0x5787c94, size 0x1a4, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x5787ad8, size 0x1bc, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetLegacyPoseOffsetForNode, addr 0x57885d4, size 0x28c, virtual true, abstract: false, final true
  inline bool TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> rotation);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x5787e38, size 0x268, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method Update, addr 0x5787700, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateManufacturerOnNode, addr 0x5787568, size 0xac, virtual false, abstract: false, final false
  inline void UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node);

  /// @brief Method UpdateUserPresence, addr 0x5787614, size 0xec, virtual false, abstract: false, final false
  inline void UpdateUserPresence();

  constexpr bool const& __cordl_internal_get__hasInputFocus() const;

  constexpr bool& __cordl_internal_get__hasInputFocus();

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

  constexpr ::GlobalNamespace::ControllerConfiguration* const& __cordl_internal_get__leftControllerConfiguration() const;

  constexpr ::GlobalNamespace::ControllerConfiguration*& __cordl_internal_get__leftControllerConfiguration();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__pauseGameAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__pauseGameAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__pauseGameActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__pauseGameActionReference();

  constexpr ::GlobalNamespace::UnityXRController* const& __cordl_internal_get__rightController() const;

  constexpr ::GlobalNamespace::UnityXRController*& __cordl_internal_get__rightController();

  constexpr ::GlobalNamespace::ControllerConfiguration* const& __cordl_internal_get__rightControllerConfiguration() const;

  constexpr ::GlobalNamespace::ControllerConfiguration*& __cordl_internal_get__rightControllerConfiguration();

  constexpr bool const& __cordl_internal_get__userPresence() const;

  constexpr bool& __cordl_internal_get__userPresence();

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

  constexpr void __cordl_internal_set__hasInputFocus(bool value);

  constexpr void __cordl_internal_set__hasVrFocus_k__BackingField(bool value);

  constexpr void __cordl_internal_set__headOrientationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__headOrientationActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__headPositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__headPositionActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__isPausePressed(bool value);

  constexpr void __cordl_internal_set__leftController(::GlobalNamespace::UnityXRController* value);

  constexpr void __cordl_internal_set__leftControllerConfiguration(::GlobalNamespace::ControllerConfiguration* value);

  constexpr void __cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__rightController(::GlobalNamespace::UnityXRController* value);

  constexpr void __cordl_internal_set__rightControllerConfiguration(::GlobalNamespace::ControllerConfiguration* value);

  constexpr void __cordl_internal_set__userPresence(bool value);

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

  /// @brief Method .ctor, addr 0x5788988, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x5786dc8, size 0xac, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x5786f20, size 0xac, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x5786c70, size 0xac, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x5786b18, size 0xac, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x57865b8, size 0xac, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x5786710, size 0xac, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x5786868, size 0xac, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x57869c0, size 0xac, virtual true, abstract: false, final true
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

  /// @brief Method get_hasInputFocus, addr 0x5787078, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x5787080, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x5787090, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_leftController, addr 0x57870e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* get_leftController();

  /// @brief Method get_loggerPrefix, addr 0x57870a0, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get_rightController, addr 0x57870ec, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* get_rightController();

  /// @brief Method get_vrPlatformSDK, addr 0x5787098, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x5786e74, size 0xac, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x5786fcc, size 0xac, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x5786d1c, size 0xac, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x5786bc4, size 0xac, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x5786664, size 0xac, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x57867bc, size 0xac, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x5786914, size 0xac, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x5786a6c, size 0xac, virtual true, abstract: false, final true
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

  /// @brief Method set_hasVrFocus, addr 0x5787088, size 0x8, virtual false, abstract: false, final false
  inline void set_hasVrFocus(bool value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6867 };

  /// @brief Field _leftControllerConfiguration, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ControllerConfiguration* ____leftControllerConfiguration;

  /// @brief Field _rightControllerConfiguration, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ControllerConfiguration* ____rightControllerConfiguration;

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

  /// @brief Field _pauseGameAction, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____pauseGameAction;

  /// @brief Field _userPresence, offset: 0xc0, size: 0x1, def value: None
  bool ____userPresence;

  /// @brief Field _hasInputFocus, offset: 0xc1, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _isPausePressed, offset: 0xc2, size: 0x1, def value: None
  bool ____isPausePressed;

  /// @brief Field _wasPausePressedThisFrame, offset: 0xc3, size: 0x1, def value: None
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

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____pauseGameAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresence) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasInputFocus) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____isPausePressed) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____wasPausePressedThisFrame) == 0xc3, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRHelper, 0xc8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityXRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRHelper*, "", "UnityXRHelper");
