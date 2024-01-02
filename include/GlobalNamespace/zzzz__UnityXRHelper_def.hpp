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
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
struct __InputAction__CallbackContext;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __UnityXRHelper__VRControllerManufacturerName;
}
namespace System {
class Action;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace GlobalNamespace {
class IVerboseLogger;
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
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14435))
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
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 276, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10057))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14436))
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

  /// @brief Field controllersDidDisconnectEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_controllersDidDisconnectEvent, put = __set_controllersDidDisconnectEvent))::System::Action* controllersDidDisconnectEvent;

  /// @brief Field <hasVrFocus>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __get__hasVrFocus_k__BackingField, put = __set__hasVrFocus_k__BackingField)) bool _hasVrFocus_k__BackingField;

  /// @brief Field _oculusOffsetPose, offset 0x5c, size 0x1c
  __declspec(property(get = __get__oculusOffsetPose, put = __set__oculusOffsetPose))::UnityEngine::Pose _oculusOffsetPose;

  /// @brief Field _valveIndexOffsetPose, offset 0x78, size 0x1c
  __declspec(property(get = __get__valveIndexOffsetPose, put = __set__valveIndexOffsetPose))::UnityEngine::Pose _valveIndexOffsetPose;

  /// @brief Field _htcViveOffsetPose, offset 0x94, size 0x1c
  __declspec(property(get = __get__htcViveOffsetPose, put = __set__htcViveOffsetPose))::UnityEngine::Pose _htcViveOffsetPose;

  /// @brief Field _leftControllerConfiguration, offset 0xb0, size 0x8
  __declspec(property(get = __get__leftControllerConfiguration, put = __set__leftControllerConfiguration))::GlobalNamespace::__UnityXRController__Configuration* _leftControllerConfiguration;

  /// @brief Field _rightControllerConfiguration, offset 0xb8, size 0x8
  __declspec(property(get = __get__rightControllerConfiguration, put = __set__rightControllerConfiguration))::GlobalNamespace::__UnityXRController__Configuration* _rightControllerConfiguration;

  /// @brief Field _userPresenceActionReference, offset 0xc0, size 0x8
  __declspec(property(get = __get__userPresenceActionReference, put = __set__userPresenceActionReference))::UnityEngine::InputSystem::InputActionReference* _userPresenceActionReference;

  /// @brief Field _headPositionActionReference, offset 0xc8, size 0x8
  __declspec(property(get = __get__headPositionActionReference, put = __set__headPositionActionReference))::UnityEngine::InputSystem::InputActionReference* _headPositionActionReference;

  /// @brief Field _headOrientationActionReference, offset 0xd0, size 0x8
  __declspec(property(get = __get__headOrientationActionReference, put = __set__headOrientationActionReference))::UnityEngine::InputSystem::InputActionReference* _headOrientationActionReference;

  /// @brief Field _pauseGameActionReference, offset 0xd8, size 0x8
  __declspec(property(get = __get__pauseGameActionReference, put = __set__pauseGameActionReference))::UnityEngine::InputSystem::InputActionReference* _pauseGameActionReference;

  /// @brief Field _leftController, offset 0xe0, size 0x8
  __declspec(property(get = __get__leftController, put = __set__leftController))::GlobalNamespace::UnityXRController* _leftController;

  /// @brief Field _rightController, offset 0xe8, size 0x8
  __declspec(property(get = __get__rightController, put = __set__rightController))::GlobalNamespace::UnityXRController* _rightController;

  /// @brief Field _headPositionAction, offset 0xf0, size 0x8
  __declspec(property(get = __get__headPositionAction, put = __set__headPositionAction))::UnityEngine::InputSystem::InputAction* _headPositionAction;

  /// @brief Field _headOrientationAction, offset 0xf8, size 0x8
  __declspec(property(get = __get__headOrientationAction, put = __set__headOrientationAction))::UnityEngine::InputSystem::InputAction* _headOrientationAction;

  /// @brief Field _userPresenceAction, offset 0x100, size 0x8
  __declspec(property(get = __get__userPresenceAction, put = __set__userPresenceAction))::UnityEngine::InputSystem::InputAction* _userPresenceAction;

  /// @brief Field _pauseGameAction, offset 0x108, size 0x8
  __declspec(property(get = __get__pauseGameAction, put = __set__pauseGameAction))::UnityEngine::InputSystem::InputAction* _pauseGameAction;

  /// @brief Field _scrollingLastFrame, offset 0x110, size 0x1
  __declspec(property(get = __get__scrollingLastFrame, put = __set__scrollingLastFrame)) bool _scrollingLastFrame;

  /// @brief Field _userPresence, offset 0x111, size 0x1
  __declspec(property(get = __get__userPresence, put = __set__userPresence)) bool _userPresence;

  /// @brief Field _isPausePressed, offset 0x112, size 0x1
  __declspec(property(get = __get__isPausePressed, put = __set__isPausePressed)) bool _isPausePressed;

  /// @brief Field _wasPausePressedThisFrame, offset 0x113, size 0x1
  __declspec(property(get = __get__wasPausePressedThisFrame, put = __set__wasPausePressedThisFrame)) bool _wasPausePressedThisFrame;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

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

  constexpr ::System::Action*& __get_controllersDidDisconnectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_controllersDidDisconnectEvent() const;

  constexpr void __set_controllersDidDisconnectEvent(::System::Action* value);

  constexpr bool& __get__hasVrFocus_k__BackingField();

  constexpr bool const& __get__hasVrFocus_k__BackingField() const;

  constexpr void __set__hasVrFocus_k__BackingField(bool value);

  constexpr ::UnityEngine::Pose& __get__oculusOffsetPose();

  constexpr ::UnityEngine::Pose const& __get__oculusOffsetPose() const;

  constexpr void __set__oculusOffsetPose(::UnityEngine::Pose value);

  constexpr ::UnityEngine::Pose& __get__valveIndexOffsetPose();

  constexpr ::UnityEngine::Pose const& __get__valveIndexOffsetPose() const;

  constexpr void __set__valveIndexOffsetPose(::UnityEngine::Pose value);

  constexpr ::UnityEngine::Pose& __get__htcViveOffsetPose();

  constexpr ::UnityEngine::Pose const& __get__htcViveOffsetPose() const;

  constexpr void __set__htcViveOffsetPose(::UnityEngine::Pose value);

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

  constexpr ::UnityEngine::InputSystem::InputActionReference*& __get__pauseGameActionReference();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputActionReference*> const& __get__pauseGameActionReference() const;

  constexpr void __set__pauseGameActionReference(::UnityEngine::InputSystem::InputActionReference* value);

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

  constexpr ::UnityEngine::InputSystem::InputAction*& __get__pauseGameAction();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputAction*> const& __get__pauseGameAction() const;

  constexpr void __set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr bool& __get__scrollingLastFrame();

  constexpr bool const& __get__scrollingLastFrame() const;

  constexpr void __set__scrollingLastFrame(bool value);

  constexpr bool& __get__userPresence();

  constexpr bool const& __get__userPresence() const;

  constexpr void __set__userPresence(bool value);

  constexpr bool& __get__isPausePressed();

  constexpr bool const& __get__isPausePressed() const;

  constexpr void __set__isPausePressed(bool value);

  constexpr bool& __get__wasPausePressedThisFrame();

  constexpr bool const& __get__wasPausePressedThisFrame() const;

  constexpr void __set__wasPausePressedThisFrame(bool value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x20fd71c, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x20fd7b8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x20fd854, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x20fd8f0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x20fd98c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x20fda28, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x20fdac4, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x20fdb60, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x20fdbfc, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x20fdc98, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x20fdd34, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x20fddd0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x20fde6c, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x20fdf08, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x20fdfa4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x20fe040, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x20fe0dc, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x20fe0e4, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method set_hasVrFocus, addr 0x20fe0ec, size 0xc, virtual false, abstract: false, final false
  inline void set_hasVrFocus(bool value);

  /// @brief Method get_isAlwaysWireless, addr 0x20fe0f8, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x20fe100, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method get_loggerPrefix, addr 0x20fe108, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method set_userPresence, addr 0x20fe148, size 0x80, virtual false, abstract: false, final false
  inline void set_userPresence(bool value);

  /// @brief Method Start, addr 0x20fe1c8, size 0x43c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnTrackingOriginUpdated, addr 0x20fe69c, size 0x1c, virtual false, abstract: false, final false
  inline void OnTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method OnboundaryChanged, addr 0x20fe6d4, size 0x1c, virtual false, abstract: false, final false
  inline void OnboundaryChanged(::UnityEngine::XR::XRInputSubsystem* inputSystem);

  /// @brief Method OnDestroy, addr 0x20fe6f0, size 0x22c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnUserPresenceCanceled, addr 0x20fe91c, size 0x8, virtual false, abstract: false, final false
  inline void OnUserPresenceCanceled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnUserPresenceStarted, addr 0x20fe924, size 0x8, virtual false, abstract: false, final false
  inline void OnUserPresenceStarted(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnApplicationPause, addr 0x20fe92c, size 0x34, virtual false, abstract: false, final false
  inline void OnApplicationPause(bool pauseStatus);

  /// @brief Method OnPauseGamePerformed, addr 0x20fe960, size 0xc, virtual false, abstract: false, final false
  inline void OnPauseGamePerformed(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method OnPauseGameCancelled, addr 0x20fe96c, size 0x8, virtual false, abstract: false, final false
  inline void OnPauseGameCancelled(::UnityEngine::InputSystem::__InputAction__CallbackContext context);

  /// @brief Method HandleNewXRNode, addr 0x20fe974, size 0x24, virtual false, abstract: false, final false
  inline void HandleNewXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method UpdateManufacturerOnNode, addr 0x20fe604, size 0x98, virtual false, abstract: false, final false
  inline void UpdateManufacturerOnNode(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleRemovedXRNode, addr 0x20fe998, size 0x60, virtual false, abstract: false, final false
  inline void HandleRemovedXRNode(::UnityEngine::XR::XRNodeState state);

  /// @brief Method ControllerFromNode, addr 0x20fe9f8, size 0x2c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UnityXRController* ControllerFromNode(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x20fea24, size 0x18c, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method StopHaptics, addr 0x20febb0, size 0x174, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x20fed24, size 0xe8, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method GetPoseOffsetForManufacturer, addr 0x20fee0c, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetPoseOffsetForManufacturer(::GlobalNamespace::__UnityXRHelper__VRControllerManufacturerName manufacturerName);

  /// @brief Method GetNodePose, addr 0x20fef5c, size 0x1f4, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x20ff1e8, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetTriggerValue, addr 0x20ff1ec, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x20ff1f4, size 0x78, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x20ff26c, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x20ff274, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference, addr 0x20fe6b8, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method ReadHeadPose, addr 0x20ff150, size 0x98, virtual false, abstract: false, final false
  inline void ReadHeadPose(ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method LateUpdate, addr 0x20ff27c, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::UnityXRHelper* New_ctor();

  /// @brief Method .ctor, addr 0x20ff284, size 0x8, virtual false, abstract: false, final false
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
  ::UnityEngine::InputSystem::InputActionReference* ____userPresenceActionReference;

  /// @brief Field _headPositionActionReference, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____headPositionActionReference;

  /// @brief Field _headOrientationActionReference, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____headOrientationActionReference;

  /// @brief Field _pauseGameActionReference, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputActionReference* ____pauseGameActionReference;

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
