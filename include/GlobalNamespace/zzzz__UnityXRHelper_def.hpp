#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRHelper)
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
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
namespace GlobalNamespace {
struct __UnityXRHelper__VRControllerManufacturerName;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
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
struct __UnityXRHelper__VRControllerManufacturerName;
}
namespace GlobalNamespace {
class UnityXRHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName);
MARK_REF_PTR_T(::GlobalNamespace::UnityXRHelper);
// Type: ::VRControllerManufacturerName
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::UnityXRHelper::VRControllerManufacturerName
struct CORDL_TYPE __UnityXRHelper__VRControllerManufacturerName {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____UnityXRHelper__VRControllerManufacturerName_Unwrapped
  enum struct ____UnityXRHelper__VRControllerManufacturerName_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_HTC = static_cast<int32_t>(0x1),
    __E_Oculus = static_cast<int32_t>(0x2),
    __E_Valve = static_cast<int32_t>(0x3),
    __E_Microsoft = static_cast<int32_t>(0x4),
    __E_Unknown = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____UnityXRHelper__VRControllerManufacturerName_Unwrapped() const noexcept {
    return static_cast<____UnityXRHelper__VRControllerManufacturerName_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityXRHelper__VRControllerManufacturerName();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnityXRHelper__VRControllerManufacturerName(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HTC value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const HTC;

  /// @brief Field Microsoft value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Microsoft;

  /// @brief Field Oculus value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Oculus;

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Undefined;

  /// @brief Field Unknown value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Unknown;

  /// @brief Field Valve value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Valve;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnityXRHelper
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 276, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityXRHelper*
class CORDL_TYPE UnityXRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using VRControllerManufacturerName = ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName;

  /// @brief Field <hasVrFocus>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus_k__BackingField, put = __cordl_internal_set__hasVrFocus_k__BackingField)) bool _hasVrFocus_k__BackingField;

  /// @brief Field _headOrientationAction, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__headOrientationAction, put = __cordl_internal_set__headOrientationAction))::UnityEngine::InputSystem::InputAction* _headOrientationAction;

  /// @brief Field _headOrientationActionReference, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__headOrientationActionReference,
                      put = __cordl_internal_set__headOrientationActionReference))::UnityW<::UnityEngine::InputSystem::InputActionReference> _headOrientationActionReference;

  /// @brief Field _headPositionAction, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__headPositionAction, put = __cordl_internal_set__headPositionAction))::UnityEngine::InputSystem::InputAction* _headPositionAction;

  /// @brief Field _headPositionActionReference, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__headPositionActionReference,
                      put = __cordl_internal_set__headPositionActionReference))::UnityW<::UnityEngine::InputSystem::InputActionReference> _headPositionActionReference;

  /// @brief Field _htcViveOffsetPose, offset 0x94, size 0x1c
  __declspec(property(get = __cordl_internal_get__htcViveOffsetPose, put = __cordl_internal_set__htcViveOffsetPose))::UnityEngine::Pose _htcViveOffsetPose;

  /// @brief Field _isPausePressed, offset 0x112, size 0x1
  __declspec(property(get = __cordl_internal_get__isPausePressed, put = __cordl_internal_set__isPausePressed)) bool _isPausePressed;

  /// @brief Field _leftController, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController))::GlobalNamespace::UnityXRController* _leftController;

  /// @brief Field _leftControllerConfiguration, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__leftControllerConfiguration,
                      put = __cordl_internal_set__leftControllerConfiguration))::GlobalNamespace::__UnityXRController__Configuration* _leftControllerConfiguration;

  /// @brief Field _oculusOffsetPose, offset 0x5c, size 0x1c
  __declspec(property(get = __cordl_internal_get__oculusOffsetPose, put = __cordl_internal_set__oculusOffsetPose))::UnityEngine::Pose _oculusOffsetPose;

  /// @brief Field _pauseGameAction, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameAction, put = __cordl_internal_set__pauseGameAction))::UnityEngine::InputSystem::InputAction* _pauseGameAction;

  /// @brief Field _pauseGameActionReference, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameActionReference,
                      put = __cordl_internal_set__pauseGameActionReference))::UnityW<::UnityEngine::InputSystem::InputActionReference> _pauseGameActionReference;

  /// @brief Field _rightController, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController))::GlobalNamespace::UnityXRController* _rightController;

  /// @brief Field _rightControllerConfiguration, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__rightControllerConfiguration,
                      put = __cordl_internal_set__rightControllerConfiguration))::GlobalNamespace::__UnityXRController__Configuration* _rightControllerConfiguration;

  /// @brief Field _scrollingLastFrame, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get__scrollingLastFrame, put = __cordl_internal_set__scrollingLastFrame)) bool _scrollingLastFrame;

  /// @brief Field _userPresence, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get__userPresence, put = __cordl_internal_set__userPresence)) bool _userPresence;

  /// @brief Field _userPresenceAction, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresenceAction, put = __cordl_internal_set__userPresenceAction))::UnityEngine::InputSystem::InputAction* _userPresenceAction;

  /// @brief Field _userPresenceActionReference, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresenceActionReference,
                      put = __cordl_internal_set__userPresenceActionReference))::UnityW<::UnityEngine::InputSystem::InputActionReference> _userPresenceActionReference;

  /// @brief Field _valveIndexOffsetPose, offset 0x78, size 0x1c
  __declspec(property(get = __cordl_internal_get__valveIndexOffsetPose, put = __cordl_internal_set__valveIndexOffsetPose))::UnityEngine::Pose _valveIndexOffsetPose;

  /// @brief Field _wasPausePressedThisFrame, offset 0x113, size 0x1
  __declspec(property(get = __cordl_internal_get__wasPausePressedThisFrame, put = __cordl_internal_set__wasPausePressedThisFrame)) bool _wasPausePressedThisFrame;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidChangeReferenceEvent,
                      put = __cordl_internal_set_controllersDidChangeReferenceEvent))::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidDisconnectEvent, put = __cordl_internal_set_controllersDidDisconnectEvent))::System::Action* controllersDidDisconnectEvent;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus, put = set_hasVrFocus)) bool hasVrFocus;

  /// @brief Field hmdMountedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdMountedEvent, put = __cordl_internal_set_hmdMountedEvent))::System::Action* hmdMountedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdUnmountedEvent, put = __cordl_internal_set_hmdUnmountedEvent))::System::Action* hmdUnmountedEvent;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasCapturedEvent, put = __cordl_internal_set_inputFocusWasCapturedEvent))::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasReleasedEvent, put = __cordl_internal_set_inputFocusWasReleasedEvent))::System::Action* inputFocusWasReleasedEvent;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_loggerPrefix))::StringW loggerPrefix;

  __declspec(property(put = set_userPresence)) bool userPresence;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasCapturedEvent, put = __cordl_internal_set_vrFocusWasCapturedEvent))::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasReleasedEvent, put = __cordl_internal_set_vrFocusWasReleasedEvent))::System::Action* vrFocusWasReleasedEvent;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method ControllerFromNode, addr 0x2260a70, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* ControllerFromNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x2261260, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetMenuButton, addr 0x22612e4, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x22612ec, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x2260fd4, size 0x1f4, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetPoseOffsetForManufacturer, addr 0x2260e84, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetPoseOffsetForManufacturer(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName manufacturerName);

  /// @brief Method GetThumbstickValue, addr 0x226126c, size 0x78, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetTriggerValue, addr 0x2261264, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleNewXRNode, addr 0x22609ec, size 0x24, virtual false, abstract: false, final false
  inline void HandleNewXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method HandleRemovedXRNode, addr 0x2260a10, size 0x60, virtual false, abstract: false, final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method LateUpdate, addr 0x22612f4, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::UnityXRHelper* New_ctor();

  /// @brief Method OnApplicationPause, addr 0x22609a4, size 0x34, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnDestroy, addr 0x2260768, size 0x22c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPauseGameCancelled, addr 0x22609e4, size 0x8, virtual false, abstract: false, final false
  inline void OnPauseGameCancelled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPauseGamePerformed, addr 0x22609d8, size 0xc, virtual false, abstract: false, final false
  inline void OnPauseGamePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnTrackingOriginUpdated, addr 0x2260714, size 0x1c, virtual false, abstract: false, final false
  inline void OnTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method OnUserPresenceCanceled, addr 0x2260994, size 0x8, virtual false, abstract: false, final false
  inline void OnUserPresenceCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnUserPresenceStarted, addr 0x226099c, size 0x8, virtual false, abstract: false, final false
  inline void OnUserPresenceStarted(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnboundaryChanged, addr 0x226074c, size 0x1c, virtual false, abstract: false, final false
  inline void OnboundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method ReadHeadPose, addr 0x22611c8, size 0x98, virtual false, abstract: false, final false
  inline void ReadHeadPose(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method RefreshControllersReference, addr 0x2260730, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method Start, addr 0x2260240, size 0x43c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopHaptics, addr 0x2260c28, size 0x174, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x2260a9c, size 0x18c, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x2260d9c, size 0xe8, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method UpdateManufacturerOnNode, addr 0x226067c, size 0x98, virtual false, abstract: false, final false
  inline void UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node);

  constexpr bool const& __cordl_internal_get__hasVrFocus_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasVrFocus_k__BackingField();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__headOrientationAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get__headOrientationAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__headOrientationActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__headOrientationActionReference();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__headPositionAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get__headPositionAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__headPositionActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__headPositionActionReference();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__htcViveOffsetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__htcViveOffsetPose();

  constexpr bool const& __cordl_internal_get__isPausePressed() const;

  constexpr bool& __cordl_internal_get__isPausePressed();

  constexpr ::GlobalNamespace::UnityXRController*& __cordl_internal_get__leftController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> const& __cordl_internal_get__leftController() const;

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __cordl_internal_get__leftControllerConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __cordl_internal_get__leftControllerConfiguration() const;

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__oculusOffsetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__oculusOffsetPose();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__pauseGameAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get__pauseGameAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__pauseGameActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__pauseGameActionReference();

  constexpr ::GlobalNamespace::UnityXRController*& __cordl_internal_get__rightController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> const& __cordl_internal_get__rightController() const;

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __cordl_internal_get__rightControllerConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __cordl_internal_get__rightControllerConfiguration() const;

  constexpr bool const& __cordl_internal_get__scrollingLastFrame() const;

  constexpr bool& __cordl_internal_get__scrollingLastFrame();

  constexpr bool const& __cordl_internal_get__userPresence() const;

  constexpr bool& __cordl_internal_get__userPresence();

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__userPresenceAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __cordl_internal_get__userPresenceAction() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__userPresenceActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__userPresenceActionReference();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__valveIndexOffsetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__valveIndexOffsetPose();

  constexpr bool const& __cordl_internal_get__wasPausePressedThisFrame() const;

  constexpr bool& __cordl_internal_get__wasPausePressedThisFrame();

  constexpr ::System::Action*& __cordl_internal_get_controllersDidChangeReferenceEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_controllersDidChangeReferenceEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_controllersDidDisconnectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_controllersDidDisconnectEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_hmdMountedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_hmdMountedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_hmdUnmountedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_hmdUnmountedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_inputFocusWasCapturedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_inputFocusWasCapturedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_inputFocusWasReleasedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_inputFocusWasReleasedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrFocusWasCapturedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_vrFocusWasCapturedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrFocusWasReleasedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_vrFocusWasReleasedEvent() const;

  constexpr void __cordl_internal_set__hasVrFocus_k__BackingField(bool value);

  constexpr void __cordl_internal_set__headOrientationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__headOrientationActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__headPositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__headPositionActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__htcViveOffsetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__isPausePressed(bool value);

  constexpr void __cordl_internal_set__leftController(::GlobalNamespace::UnityXRController* value);

  constexpr void __cordl_internal_set__leftControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr void __cordl_internal_set__oculusOffsetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__rightController(::GlobalNamespace::UnityXRController* value);

  constexpr void __cordl_internal_set__rightControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr void __cordl_internal_set__scrollingLastFrame(bool value);

  constexpr void __cordl_internal_set__userPresence(bool value);

  constexpr void __cordl_internal_set__userPresenceAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__userPresenceActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__valveIndexOffsetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__wasPausePressedThisFrame(bool value);

  constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x22612fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x225fee4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x226001c, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x225fdac, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x225fc74, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x225f794, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x225f8cc, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x225fa04, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x225fb3c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x2260154, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x226015c, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x2260170, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_loggerPrefix, addr 0x2260180, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get_vrPlatformSDK, addr 0x2260178, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x225ff80, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x22600b8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x225fe48, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x225fd10, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x225f830, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x225f968, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x225faa0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x225fbd8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method set_hasVrFocus, addr 0x2260164, size 0xc, virtual false, abstract: false, final false
  inline void set_hasVrFocus(bool value);

  /// @brief Method set_userPresence, addr 0x22601c0, size 0x80, virtual false, abstract: false, final false
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

  /// @brief Field inputFocusWasCapturedEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0x20, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___controllersDidDisconnectEvent;

  /// @brief Field <hasVrFocus>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____hasVrFocus_k__BackingField;

  /// @brief Field _oculusOffsetPose, offset: 0x5c, size: 0x1c, def value: None
  ::UnityEngine::Pose ____oculusOffsetPose;

  /// @brief Field _valveIndexOffsetPose, offset: 0x78, size: 0x1c, def value: None
  ::UnityEngine::Pose ____valveIndexOffsetPose;

  /// @brief Field _htcViveOffsetPose, offset: 0x94, size: 0x1c, def value: None
  ::UnityEngine::Pose ____htcViveOffsetPose;

  /// @brief Field _leftControllerConfiguration, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityXRController__Configuration* ____leftControllerConfiguration;

  /// @brief Field _rightControllerConfiguration, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityXRController__Configuration* ____rightControllerConfiguration;

  /// @brief Field _userPresenceActionReference, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____userPresenceActionReference;

  /// @brief Field _headPositionActionReference, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____headPositionActionReference;

  /// @brief Field _headOrientationActionReference, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____headOrientationActionReference;

  /// @brief Field _pauseGameActionReference, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____pauseGameActionReference;

  /// @brief Field _leftController, offset: 0xe0, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____leftController;

  /// @brief Field _rightController, offset: 0xe8, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____rightController;

  /// @brief Field _headPositionAction, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headPositionAction;

  /// @brief Field _headOrientationAction, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headOrientationAction;

  /// @brief Field _userPresenceAction, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____userPresenceAction;

  /// @brief Field _pauseGameAction, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____pauseGameAction;

  /// @brief Field _scrollingLastFrame, offset: 0x110, size: 0x1, def value: None
  bool ____scrollingLastFrame;

  /// @brief Field _userPresence, offset: 0x111, size: 0x1, def value: None
  bool ____userPresence;

  /// @brief Field _isPausePressed, offset: 0x112, size: 0x1, def value: None
  bool ____isPausePressed;

  /// @brief Field _wasPausePressedThisFrame, offset: 0x113, size: 0x1, def value: None
  bool ____wasPausePressedThisFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRHelper, 0x118>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___inputFocusWasCapturedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___inputFocusWasReleasedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___vrFocusWasCapturedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___vrFocusWasReleasedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___hmdUnmountedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___hmdMountedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___controllersDidChangeReferenceEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___controllersDidDisconnectEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasVrFocus_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____oculusOffsetPose) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____valveIndexOffsetPose) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____htcViveOffsetPose) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftControllerConfiguration) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightControllerConfiguration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresenceActionReference) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionActionReference) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationActionReference) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____pauseGameActionReference) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftController) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightController) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionAction) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationAction) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresenceAction) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____pauseGameAction) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____scrollingLastFrame) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresence) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____isPausePressed) == 0x112, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____wasPausePressedThisFrame) == 0x113, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName, "", "UnityXRHelper/VRControllerManufacturerName");
NEED_NO_BOX(::GlobalNamespace::UnityXRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRHelper*, "", "UnityXRHelper");
