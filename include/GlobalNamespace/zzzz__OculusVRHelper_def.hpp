#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusVRHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusVRHelper)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class IVerboseLogger;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace GlobalNamespace {
struct __OVRInput__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRPlugin__Node;
}
namespace System {
class Action;
}
namespace UnityEngine::EventSystems {
class EventSystem;
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
class OculusVRHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusVRHelper);
// Type: ::OculusVRHelper
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusVRHelper*
class CORDL_TYPE OculusVRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _disabledEventSystem, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledEventSystem, put = __cordl_internal_set__disabledEventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> _disabledEventSystem;

  /// @brief Field _hasInputFocus, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInputFocus, put = __cordl_internal_set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field _hasVrFocus, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus, put = __cordl_internal_set__hasVrFocus)) bool _hasVrFocus;

  __declspec(property(get = get__isOVRManagerPresent)) bool _isOVRManagerPresent;

  /// @brief Field _oculusTouchControllerOffsetPose, offset 0x20, size 0x1c
  __declspec(property(get = __cordl_internal_get__oculusTouchControllerOffsetPose, put = __cordl_internal_set__oculusTouchControllerOffsetPose)) ::UnityEngine::Pose _oculusTouchControllerOffsetPose;

  /// @brief Field _userPresent, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get__userPresent, put = __cordl_internal_set__userPresent)) bool _userPresent;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidChangeReferenceEvent,
                      put = __cordl_internal_set_controllersDidChangeReferenceEvent)) ::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidDisconnectEvent, put = __cordl_internal_set_controllersDidDisconnectEvent)) ::System::Action* controllersDidDisconnectEvent;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  /// @brief Field hmdMountedEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdMountedEvent, put = __cordl_internal_set_hmdMountedEvent)) ::System::Action* hmdMountedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdUnmountedEvent, put = __cordl_internal_set_hmdUnmountedEvent)) ::System::Action* hmdUnmountedEvent;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasCapturedEvent, put = __cordl_internal_set_inputFocusWasCapturedEvent)) ::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasReleasedEvent, put = __cordl_internal_set_inputFocusWasReleasedEvent)) ::System::Action* inputFocusWasReleasedEvent;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_loggerPrefix)) ::StringW loggerPrefix;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasCapturedEvent, put = __cordl_internal_set_vrFocusWasCapturedEvent)) ::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasReleasedEvent, put = __cordl_internal_set_vrFocusWasReleasedEvent)) ::System::Action* vrFocusWasReleasedEvent;

  __declspec(property(get = get_vrPlatformSDK)) ::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Method DisableEventSystem, addr 0x3974b1c, size 0xf8, virtual false, abstract: false, final false
  inline void DisableEventSystem();

  /// @brief Method EnableEventSystem, addr 0x3974c14, size 0x84, virtual false, abstract: false, final false
  inline void EnableEventSystem();

  /// @brief Method FixedUpdate, addr 0x3974c98, size 0x58, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x39751c0, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetControllerTransformAdjustment, addr 0x3974eec, size 0xa4, virtual false, abstract: false, final false
  inline void GetControllerTransformAdjustment(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Vector3> outPos, ByRef<::UnityEngine::Vector3> outRot);

  /// @brief Method GetInteractionProfile, addr 0x39736d8, size 0x7c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__InteractionProfile GetInteractionProfile(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x3975374, size 0x58, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x39753cc, size 0x58, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x3974f90, size 0x158, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetThumbstickValue, addr 0x3975264, size 0x100, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetTriggerValue, addr 0x39751c4, size 0xa0, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method IsAdvancedHapticsSupported, addr 0x3975364, size 0x10, virtual true, abstract: false, final true
  inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node);

  /// @brief Method LateUpdate, addr 0x3974cf0, size 0x58, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::OculusVRHelper* New_ctor();

  /// @brief Method RefreshControllersReference, addr 0x3975424, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method StopHaptics, addr 0x3974dc0, size 0x68, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x3974d48, size 0x78, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x3974e28, size 0xc4, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method Update, addr 0x39748e0, size 0x23c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method XRNodeToOVRNode, addr 0x39750e8, size 0xd8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Node XRNodeToOVRNode(::UnityEngine::XR::XRNode node);

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& __cordl_internal_get__disabledEventSystem() const;

  constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& __cordl_internal_get__disabledEventSystem();

  constexpr bool const& __cordl_internal_get__hasInputFocus() const;

  constexpr bool& __cordl_internal_get__hasInputFocus();

  constexpr bool const& __cordl_internal_get__hasVrFocus() const;

  constexpr bool& __cordl_internal_get__hasVrFocus();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__oculusTouchControllerOffsetPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__oculusTouchControllerOffsetPose();

  constexpr bool const& __cordl_internal_get__userPresent() const;

  constexpr bool& __cordl_internal_get__userPresent();

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

  constexpr void __cordl_internal_set__disabledEventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value);

  constexpr void __cordl_internal_set__hasInputFocus(bool value);

  constexpr void __cordl_internal_set__hasVrFocus(bool value);

  constexpr void __cordl_internal_set__oculusTouchControllerOffsetPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__userPresent(bool value);

  constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3975440, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x39744c4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x39745fc, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x397438c, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x3974254, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x3973d74, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x3973eac, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x3973fe4, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x397411c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method get__isOVRManagerPresent, addr 0x3974824, size 0xbc, virtual false, abstract: false, final false
  inline bool get__isOVRManagerPresent();

  /// @brief Method get_hasInputFocus, addr 0x3974734, size 0x50, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x3974784, size 0x50, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x39747d4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_loggerPrefix, addr 0x39747e4, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get_vrPlatformSDK, addr 0x39747dc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x3974560, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x3974698, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x3974428, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x39742f0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x3973e10, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x3973f48, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x3974080, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x39741b8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusVRHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusVRHelper(OculusVRHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusVRHelper(OculusVRHelper const&) = delete;

  /// @brief Field _oculusTouchControllerOffsetPose, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::Pose ____oculusTouchControllerOffsetPose;

  /// @brief Field inputFocusWasCapturedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action* ___controllersDidDisconnectEvent;

  /// @brief Field _hasInputFocus, offset: 0x80, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _hasVrFocus, offset: 0x81, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field _userPresent, offset: 0x82, size: 0x1, def value: None
  bool ____userPresent;

  /// @brief Field _disabledEventSystem, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::EventSystems::EventSystem> ____disabledEventSystem;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16431 };

  /// @brief Field kHorizontalLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kHorizontalLeftHand{ u"HorizontalLeftHand" };

  /// @brief Field kHorizontalRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kHorizontalRightHand{ u"HorizontalRightHand" };

  /// @brief Field kVerticalLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kVerticalLeftHand{ u"VerticalLeftHand" };

  /// @brief Field kVerticalRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kVerticalRightHand{ u"VerticalRightHand" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusVRHelper, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____oculusTouchControllerOffsetPose) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___inputFocusWasCapturedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___inputFocusWasReleasedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___vrFocusWasCapturedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___vrFocusWasReleasedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___hmdUnmountedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___hmdMountedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___controllersDidChangeReferenceEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___controllersDidDisconnectEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____hasInputFocus) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____hasVrFocus) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____userPresent) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____disabledEventSystem) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusVRHelper*, "", "OculusVRHelper");
