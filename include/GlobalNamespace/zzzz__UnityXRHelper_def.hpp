#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EulerPose_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityXRHelper)
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace GlobalNamespace {
struct __UnityXRHelper__VRControllerManufacturerName;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13996))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __UnityXRHelper__VRControllerManufacturerName(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UnityXRHelper__VRControllerManufacturerName();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Undefined;

  /// @brief Field HTC value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const HTC;

  /// @brief Field Oculus value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Oculus;

  /// @brief Field Valve value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Valve;

  /// @brief Field Microsoft value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Microsoft;

  /// @brief Field Unknown value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName const Unknown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::UnityXRHelper
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 242, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(16065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13997))
// CS Name: ::UnityXRHelper*
class CORDL_TYPE UnityXRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using VRControllerManufacturerName = ::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_inputFocusWasCapturedEvent, put = __set_inputFocusWasCapturedEvent))::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x20, size 0x8
  __declspec(property(get = __get_inputFocusWasReleasedEvent, put = __set_inputFocusWasReleasedEvent))::System::Action* inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x28, size 0x8
  __declspec(property(get = __get_vrFocusWasCapturedEvent, put = __set_vrFocusWasCapturedEvent))::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_vrFocusWasReleasedEvent, put = __set_vrFocusWasReleasedEvent))::System::Action* vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_hmdUnmountedEvent, put = __set_hmdUnmountedEvent))::System::Action* hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_hmdMountedEvent, put = __set_hmdMountedEvent))::System::Action* hmdMountedEvent;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_controllersDidChangeReferenceEvent, put = __set_controllersDidChangeReferenceEvent))::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field <hasInputFocus>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __get__hasInputFocus_k__BackingField, put = __set__hasInputFocus_k__BackingField)) bool _hasInputFocus_k__BackingField;

  /// @brief Field <hasVrFocus>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __get__hasVrFocus_k__BackingField, put = __set__hasVrFocus_k__BackingField)) bool _hasVrFocus_k__BackingField;

  /// @brief Field _oculusPoseOffset, offset 0x54, size 0x18
  __declspec(property(get = __get__oculusPoseOffset, put = __set__oculusPoseOffset))::GlobalNamespace::EulerPose _oculusPoseOffset;

  /// @brief Field _valveIndexPoseOffset, offset 0x6c, size 0x18
  __declspec(property(get = __get__valveIndexPoseOffset, put = __set__valveIndexPoseOffset))::GlobalNamespace::EulerPose _valveIndexPoseOffset;

  /// @brief Field _htcVivePoseOffset, offset 0x84, size 0x18
  __declspec(property(get = __get__htcVivePoseOffset, put = __set__htcVivePoseOffset))::GlobalNamespace::EulerPose _htcVivePoseOffset;

  /// @brief Field _leftControllerConfiguration, offset 0xa0, size 0x8
  __declspec(property(get = __get__leftControllerConfiguration, put = __set__leftControllerConfiguration))::GlobalNamespace::__UnityXRController__Configuration* _leftControllerConfiguration;

  /// @brief Field _rightControllerConfiguration, offset 0xa8, size 0x8
  __declspec(property(get = __get__rightControllerConfiguration, put = __set__rightControllerConfiguration))::GlobalNamespace::__UnityXRController__Configuration* _rightControllerConfiguration;

  /// @brief Field _userPresenceActionReference, offset 0xb0, size 0x8
  __declspec(property(get = __get__userPresenceActionReference, put = __set__userPresenceActionReference))::UnityEngine::InputSystem::InputActionReference* _userPresenceActionReference;

  /// @brief Field _headPositionActionReference, offset 0xb8, size 0x8
  __declspec(property(get = __get__headPositionActionReference, put = __set__headPositionActionReference))::UnityEngine::InputSystem::InputActionReference* _headPositionActionReference;

  /// @brief Field _headOrientationActionReference, offset 0xc0, size 0x8
  __declspec(property(get = __get__headOrientationActionReference, put = __set__headOrientationActionReference))::UnityEngine::InputSystem::InputActionReference* _headOrientationActionReference;

  /// @brief Field _leftController, offset 0xc8, size 0x8
  __declspec(property(get = __get__leftController, put = __set__leftController))::GlobalNamespace::UnityXRController* _leftController;

  /// @brief Field _rightController, offset 0xd0, size 0x8
  __declspec(property(get = __get__rightController, put = __set__rightController))::GlobalNamespace::UnityXRController* _rightController;

  /// @brief Field _headPositionAction, offset 0xd8, size 0x8
  __declspec(property(get = __get__headPositionAction, put = __set__headPositionAction))::UnityEngine::InputSystem::InputAction* _headPositionAction;

  /// @brief Field _headOrientationAction, offset 0xe0, size 0x8
  __declspec(property(get = __get__headOrientationAction, put = __set__headOrientationAction))::UnityEngine::InputSystem::InputAction* _headOrientationAction;

  /// @brief Field _userPresenceAction, offset 0xe8, size 0x8
  __declspec(property(get = __get__userPresenceAction, put = __set__userPresenceAction))::UnityEngine::InputSystem::InputAction* _userPresenceAction;

  /// @brief Field _scrollingLastFrame, offset 0xf0, size 0x1
  __declspec(property(get = __get__scrollingLastFrame, put = __set__scrollingLastFrame)) bool _scrollingLastFrame;

  /// @brief Field _userPresence, offset 0xf1, size 0x1
  __declspec(property(get = __get__userPresence, put = __set__userPresence)) bool _userPresence;

  __declspec(property(get = get_hasInputFocus, put = set_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus, put = set_hasVrFocus)) bool hasVrFocus;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  __declspec(property(get = get_loggerPrefix))::StringW loggerPrefix;

  __declspec(property(put = set_userPresence)) bool userPresence;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  constexpr ::System::Action*& __get_inputFocusWasCapturedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_inputFocusWasCapturedEvent() const;

  constexpr void __set_inputFocusWasCapturedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_inputFocusWasReleasedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_inputFocusWasReleasedEvent() const;

  constexpr void __set_inputFocusWasReleasedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_vrFocusWasCapturedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_vrFocusWasCapturedEvent() const;

  constexpr void __set_vrFocusWasCapturedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_vrFocusWasReleasedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_vrFocusWasReleasedEvent() const;

  constexpr void __set_vrFocusWasReleasedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_hmdUnmountedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_hmdUnmountedEvent() const;

  constexpr void __set_hmdUnmountedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_hmdMountedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_hmdMountedEvent() const;

  constexpr void __set_hmdMountedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_controllersDidChangeReferenceEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_controllersDidChangeReferenceEvent() const;

  constexpr void __set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr bool& __get__hasInputFocus_k__BackingField();

  constexpr bool const& __get__hasInputFocus_k__BackingField() const;

  constexpr void __set__hasInputFocus_k__BackingField(bool value);

  constexpr bool& __get__hasVrFocus_k__BackingField();

  constexpr bool const& __get__hasVrFocus_k__BackingField() const;

  constexpr void __set__hasVrFocus_k__BackingField(bool value);

  constexpr ::GlobalNamespace::EulerPose& __get__oculusPoseOffset();

  constexpr ::GlobalNamespace::EulerPose const& __get__oculusPoseOffset() const;

  constexpr void __set__oculusPoseOffset(::GlobalNamespace::EulerPose value);

  constexpr ::GlobalNamespace::EulerPose& __get__valveIndexPoseOffset();

  constexpr ::GlobalNamespace::EulerPose const& __get__valveIndexPoseOffset() const;

  constexpr void __set__valveIndexPoseOffset(::GlobalNamespace::EulerPose value);

  constexpr ::GlobalNamespace::EulerPose& __get__htcVivePoseOffset();

  constexpr ::GlobalNamespace::EulerPose const& __get__htcVivePoseOffset() const;

  constexpr void __set__htcVivePoseOffset(::GlobalNamespace::EulerPose value);

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __get__leftControllerConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __get__leftControllerConfiguration() const;

  constexpr void __set__leftControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __get__rightControllerConfiguration();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __get__rightControllerConfiguration() const;

  constexpr void __set__rightControllerConfiguration(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__userPresenceActionReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__userPresenceActionReference() const;

  constexpr void __set__userPresenceActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__headPositionActionReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__headPositionActionReference() const;

  constexpr void __set__headPositionActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__headOrientationActionReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__headOrientationActionReference() const;

  constexpr void __set__headOrientationActionReference(::UnityEngine::InputSystem::InputActionReference* value);

  constexpr ::GlobalNamespace::UnityXRController*& __get__leftController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> const& __get__leftController() const;

  constexpr void __set__leftController(::GlobalNamespace::UnityXRController* value);

  constexpr ::GlobalNamespace::UnityXRController*& __get__rightController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::UnityXRController*> const& __get__rightController() const;

  constexpr void __set__rightController(::GlobalNamespace::UnityXRController* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get__headPositionAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get__headPositionAction() const;

  constexpr void __set__headPositionAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get__headOrientationAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get__headOrientationAction() const;

  constexpr void __set__headOrientationAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr ::UnityEngine::InputSystem::InputAction*& __get__userPresenceAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get__userPresenceAction() const;

  constexpr void __set__userPresenceAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr bool& __get__scrollingLastFrame();

  constexpr bool const& __get__scrollingLastFrame() const;

  constexpr void __set__scrollingLastFrame(bool value);

  constexpr bool& __get__userPresence();

  constexpr bool const& __get__userPresence() const;

  constexpr void __set__userPresence(bool value);

  /// @brief Method add_inputFocusWasCapturedEvent addr 0x1fa8f20 size 0x9c virtual true final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fa8fbc size 0x9c virtual true final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent addr 0x1fa9058 size 0x9c virtual true final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fa90f4 size 0x9c virtual true final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent addr 0x1fa9190 size 0x9c virtual true final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fa922c size 0x9c virtual true final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent addr 0x1fa92c8 size 0x9c virtual true final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fa9364 size 0x9c virtual true final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent addr 0x1fa9400 size 0x9c virtual true final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent addr 0x1fa949c size 0x9c virtual true final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent addr 0x1fa9538 size 0x9c virtual true final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent addr 0x1fa95d4 size 0x9c virtual true final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fa9670 size 0x9c virtual true final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fa970c size 0x9c virtual true final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus addr 0x1fa97a8 size 0x8 virtual true final true
  inline bool get_hasInputFocus();

  /// @brief Method set_hasInputFocus addr 0x1fa97b0 size 0xc virtual false final false
  inline void set_hasInputFocus(bool value);

  /// @brief Method get_hasVrFocus addr 0x1fa97bc size 0x8 virtual true final true
  inline bool get_hasVrFocus();

  /// @brief Method set_hasVrFocus addr 0x1fa97c4 size 0xc virtual false final false
  inline void set_hasVrFocus(bool value);

  /// @brief Method get_isAlwaysWireless addr 0x1fa97d0 size 0x8 virtual true final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK addr 0x1fa97d8 size 0x8 virtual true final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method get_loggerPrefix addr 0x1fa97e0 size 0x40 virtual true final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method set_userPresence addr 0x1fa9820 size 0x8c virtual false final false
  inline void set_userPresence(bool value);

  /// @brief Method Start addr 0x1fa98ac size 0x380 virtual false final false
  inline void Start();

  /// @brief Method OnTrackingOriginUpdated addr 0x1fa9cc4 size 0x1c virtual false final false
  inline void OnTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method OnboundaryChanged addr 0x1fa9cfc size 0x1c virtual false final false
  inline void OnboundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method OnDestroy addr 0x1fa9d18 size 0x174 virtual false final false
  inline void OnDestroy();

  /// @brief Method OnUserPresenceCanceled addr 0x1fa9e8c size 0x8 virtual false final false
  inline void OnUserPresenceCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnUserPresenceStarted addr 0x1fa9e94 size 0x8 virtual false final false
  inline void OnUserPresenceStarted(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnApplicationPause addr 0x1fa9e9c size 0x34 virtual false final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method HandleNewXRNode addr 0x1fa9ed0 size 0x24 virtual false final false
  inline void HandleNewXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method UpdateManufacturerOnNode addr 0x1fa9c2c size 0x98 virtual false final false
  inline void UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleRemovedXRNode addr 0x1fa9ef4 size 0x44 virtual false final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method ControllerFromNode addr 0x1fa9f38 size 0x2c virtual false final false
  inline ::GlobalNamespace::UnityXRController* ControllerFromNode(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse addr 0x1fa9f64 size 0xe0 virtual true final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method StopHaptics addr 0x1faa044 size 0xcc virtual true final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method GetPoseOffsetForNode addr 0x1faa110 size 0xf4 virtual true final true
  inline ::GlobalNamespace::EulerPose GetPoseOffsetForNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetPoseOffsetForManufacturer addr 0x1faa204 size 0x178 virtual false final false
  inline ::GlobalNamespace::EulerPose GetPoseOffsetForManufacturer(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName manufacturerName);

  /// @brief Method GetNodePose addr 0x1faa37c size 0x1f4 virtual true final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetAnyJoystickMaxAxis addr 0x1faa608 size 0x8 virtual true final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetTriggerValue addr 0x1faa610 size 0xc virtual true final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue addr 0x1faa61c size 0x78 virtual true final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton addr 0x1faa694 size 0x4c virtual true final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown addr 0x1faa7a8 size 0x4c virtual true final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetMenuButtonNames addr 0x1faa6e0 size 0xc8 virtual false final false
  inline void GetMenuButtonNames(ByRef<::StringW> leftControllerButtonName, ByRef<::StringW> rightControllerButtonName);

  /// @brief Method RefreshControllersReference addr 0x1fa9ce0 size 0x1c virtual true final true
  inline void RefreshControllersReference();

  /// @brief Method ReadHeadPose addr 0x1faa570 size 0x98 virtual false final false
  inline void ReadHeadPose(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  static inline ::GlobalNamespace::UnityXRHelper* New_ctor();

  /// @brief Method .ctor addr 0x1faa7f4 size 0xf0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnityXRHelper(UnityXRHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnityXRHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnityXRHelper(UnityXRHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnityXRHelper();

public:
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

  /// @brief Field <hasInputFocus>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____hasInputFocus_k__BackingField;

  /// @brief Field <hasVrFocus>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____hasVrFocus_k__BackingField;

  /// @brief Field _oculusPoseOffset, offset: 0x54, size: 0x18, def value: None
  ::GlobalNamespace::EulerPose ____oculusPoseOffset;

  /// @brief Field _valveIndexPoseOffset, offset: 0x6c, size: 0x18, def value: None
  ::GlobalNamespace::EulerPose ____valveIndexPoseOffset;

  /// @brief Field _htcVivePoseOffset, offset: 0x84, size: 0x18, def value: None
  ::GlobalNamespace::EulerPose ____htcVivePoseOffset;

  /// @brief Field _leftControllerConfiguration, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::__UnityXRController__Configuration* ____leftControllerConfiguration;

  /// @brief Field _rightControllerConfiguration, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__UnityXRController__Configuration* ____rightControllerConfiguration;

  /// @brief Field _userPresenceActionReference, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____userPresenceActionReference;

  /// @brief Field _headPositionActionReference, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____headPositionActionReference;

  /// @brief Field _headOrientationActionReference, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____headOrientationActionReference;

  /// @brief Field _leftController, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____leftController;

  /// @brief Field _rightController, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController* ____rightController;

  /// @brief Field _headPositionAction, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headPositionAction;

  /// @brief Field _headOrientationAction, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____headOrientationAction;

  /// @brief Field _userPresenceAction, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____userPresenceAction;

  /// @brief Field _scrollingLastFrame, offset: 0xf0, size: 0x1, def value: None
  bool ____scrollingLastFrame;

  /// @brief Field _userPresence, offset: 0xf1, size: 0x1, def value: None
  bool ____userPresence;

  /// @brief Field kSecondaryButtonLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kSecondaryButtonLeftHand{ u"OpenXRSecondaryButtonLeftHand" };

  /// @brief Field kSecondaryButtonRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kSecondaryButtonRightHand{ u"OpenXRSecondaryButtonRightHand" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityXRHelper, 0xf8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___inputFocusWasCapturedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___inputFocusWasReleasedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___vrFocusWasCapturedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___vrFocusWasReleasedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___hmdUnmountedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___hmdMountedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ___controllersDidChangeReferenceEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasInputFocus_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____hasVrFocus_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____oculusPoseOffset) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____valveIndexPoseOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____htcVivePoseOffset) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftControllerConfiguration) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightControllerConfiguration) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresenceActionReference) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionActionReference) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationActionReference) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____leftController) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____rightController) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headPositionAction) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____headOrientationAction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresenceAction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____scrollingLastFrame) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UnityXRHelper, ____userPresence) == 0xf1, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName, "", "UnityXRHelper/VRControllerManufacturerName");
NEED_NO_BOX(::GlobalNamespace::UnityXRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityXRHelper*, "", "UnityXRHelper");
