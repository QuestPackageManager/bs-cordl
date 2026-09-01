#pragma once
// IWYU pragma private; include "GlobalNamespace\UnityXRHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
class IXRSystemState;
}
namespace GlobalNamespace {
class UnityXRController;
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
MARK_REF_T(::GlobalNamespace::UnityXRHelper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityXRHelper*, "", "UnityXRHelper");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnityXRHelper
class CORDL_TYPE UnityXRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _hasInputFocus, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInputFocus, put = __cordl_internal_set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field <hasVrFocus>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus_k__BackingField, put = __cordl_internal_set__hasVrFocus_k__BackingField)) bool _hasVrFocus_k__BackingField;

  /// @brief Field _headOrientationAction, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__headOrientationAction, put = __cordl_internal_set__headOrientationAction)) ::UnityEngine::InputSystem::InputAction* _headOrientationAction;

  /// @brief Field _headOrientationActionReference, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__headOrientationActionReference,
                      put = __cordl_internal_set__headOrientationActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _headOrientationActionReference;

  /// @brief Field _headPositionAction, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__headPositionAction, put = __cordl_internal_set__headPositionAction)) ::UnityEngine::InputSystem::InputAction* _headPositionAction;

  /// @brief Field _headPositionActionReference, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__headPositionActionReference, put = __cordl_internal_set__headPositionActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _headPositionActionReference;

  /// @brief Field _isPausePressed, offset 0x8a, size 0x1
  __declspec(property(get = __cordl_internal_get__isPausePressed, put = __cordl_internal_set__isPausePressed)) bool _isPausePressed;

  /// @brief Field _leftController, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController)) ::GlobalNamespace::UnityXRController* _leftController;

  /// @brief Field _leftControllerConfiguration, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftControllerConfiguration,
                      put = __cordl_internal_set__leftControllerConfiguration)) ::GlobalNamespace::ControllerConfiguration* _leftControllerConfiguration;

  /// @brief Field _pauseGameAction, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameAction, put = __cordl_internal_set__pauseGameAction)) ::UnityEngine::InputSystem::InputAction* _pauseGameAction;

  /// @brief Field _pauseGameActionReference, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameActionReference, put = __cordl_internal_set__pauseGameActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _pauseGameActionReference;

  /// @brief Field _rightController, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController)) ::GlobalNamespace::UnityXRController* _rightController;

  /// @brief Field _rightControllerConfiguration, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightControllerConfiguration,
                      put = __cordl_internal_set__rightControllerConfiguration)) ::GlobalNamespace::ControllerConfiguration* _rightControllerConfiguration;

  /// @brief Field _userPresence, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__userPresence, put = __cordl_internal_set__userPresence)) bool _userPresence;

  /// @brief Field _userPresenceActionReference, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresenceActionReference, put = __cordl_internal_set__userPresenceActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _userPresenceActionReference;

  /// @brief Field _wasPausePressedThisFrame, offset 0x8b, size 0x1
  __declspec(property(get = __cordl_internal_get__wasPausePressedThisFrame, put = __cordl_internal_set__wasPausePressedThisFrame)) bool _wasPausePressedThisFrame;

  /// @brief Field _xrSystemState, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__xrSystemState, put = __cordl_internal_set__xrSystemState)) ::GlobalNamespace::IXRSystemState* _xrSystemState;

  __declspec(property(get = get_debugUpdateOffsetsContinuously)) bool debugUpdateOffsetsContinuously;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus, put = set_hasVrFocus)) bool hasVrFocus;

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

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x591dd00, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetControllerFromNode, addr 0x591dda0, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* GetControllerFromNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x591dea0, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x591dea8, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x591e478, size 0x23c, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t id, ::by_ref<::UnityEngine::Vector3> pos, ::by_ref<::UnityEngine::Quaternion> rot);

  /// @brief Method GetRootPositionOffsetForLegacyNodePose, addr 0x591e754, size 0x258, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x591ddcc, size 0xc4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetTriggerValue, addr 0x591dd08, size 0x98, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleBoundaryChanged, addr 0x591ed18, size 0xa8, virtual false, abstract: false, final false
  inline void HandleBoundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method HandleNewXRNode, addr 0x591edd4, size 0x8, virtual false, abstract: false, final false
  inline void HandleNewXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method HandlePauseGameCancelled, addr 0x591edcc, size 0x8, virtual false, abstract: false, final false
  inline void HandlePauseGameCancelled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method HandlePauseGamePerformed, addr 0x591edc0, size 0xc, virtual false, abstract: false, final false
  inline void HandlePauseGamePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method HandleRemovedXRNode, addr 0x591ec38, size 0x38, virtual false, abstract: false, final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method HandleTrackingOriginUpdated, addr 0x591ec70, size 0xa8, virtual false, abstract: false, final false
  inline void HandleTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method IsAdvancedHapticsSupported, addr 0x591de90, size 0x10, virtual true, abstract: false, final true
  inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node);

  /// @brief Method LateUpdate, addr 0x591daa4, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::UnityXRHelper* New_ctor();

  /// @brief Method OnDestroy, addr 0x591daac, size 0x254, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ReadHeadPose, addr 0x591e6b4, size 0xa0, virtual false, abstract: false, final false
  inline void ReadHeadPose(::by_ref<::UnityEngine::Vector3> pos, ::by_ref<::UnityEngine::Quaternion> rot);

  /// @brief Method Start, addr 0x591d50c, size 0x464, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopHaptics, addr 0x591e06c, size 0x1a4, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x591deb0, size 0x1bc, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetLegacyPoseOffsetForNode, addr 0x591e9ac, size 0x28c, virtual true, abstract: false, final true
  inline bool TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Vector3> rotation);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x591e210, size 0x268, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::by_ref<::UnityEngine::Pose> poseOffset);

  /// @brief Method UpdateManufacturerOnNode, addr 0x591d970, size 0x134, virtual false, abstract: false, final false
  inline void UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node);

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

  constexpr ::GlobalNamespace::IXRSystemState* const& __cordl_internal_get__xrSystemState() const;

  constexpr ::GlobalNamespace::IXRSystemState*& __cordl_internal_get__xrSystemState();

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

  constexpr void __cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value);

  /// @brief Method .ctor, addr 0x591eddc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

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

  /// @brief Method get_debugUpdateOffsetsContinuously, addr 0x591d490, size 0x8, virtual false, abstract: false, final false
  inline bool get_debugUpdateOffsetsContinuously();

  /// @brief Method get_hasInputFocus, addr 0x591d498, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x591d4a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x591d4b0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isAlwaysWireless();

  /// @brief Method get_leftController, addr 0x591d4fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* get_leftController();

  /// @brief Method get_loggerPrefix, addr 0x591d4b8, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get_rightController, addr 0x591d504, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* get_rightController();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

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

  /// @brief Method set_hasVrFocus, addr 0x591d4a8, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6806 };

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

  /// @brief Field _xrSystemState, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IXRSystemState* ____xrSystemState;

  /// @brief Field <hasVrFocus>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____hasVrFocus_k__BackingField;

  /// @brief Field _leftController, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____leftController;

  /// @brief Field _rightController, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____rightController;

  /// @brief Field _headPositionAction, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headPositionAction;

  /// @brief Field _headOrientationAction, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headOrientationAction;

  /// @brief Field _pauseGameAction, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____pauseGameAction;

  /// @brief Field _userPresence, offset: 0x88, size: 0x1, def value: None
  bool ____userPresence;

  /// @brief Field _hasInputFocus, offset: 0x89, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _isPausePressed, offset: 0x8a, size: 0x1, def value: None
  bool ____isPausePressed;

  /// @brief Field _wasPausePressedThisFrame, offset: 0x8b, size: 0x1, def value: None
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

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____xrSystemState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasVrFocus_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____pauseGameAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresence) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasInputFocus) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____isPausePressed) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____wasPausePressedThisFrame) == 0x8b, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityXRHelper) == 0x90, "Size mismatch!");

} // namespace GlobalNamespace
