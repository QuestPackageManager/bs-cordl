#pragma once
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
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10057)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14419))
// CS Name: ::OculusVRHelper*
class CORDL_TYPE OculusVRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _oculusTouchControllerOffsetPose, offset 0x18, size 0x1c
  __declspec(property(get = __get__oculusTouchControllerOffsetPose, put = __set__oculusTouchControllerOffsetPose))::UnityEngine::Pose _oculusTouchControllerOffsetPose;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_inputFocusWasCapturedEvent, put = __set_inputFocusWasCapturedEvent))::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_inputFocusWasReleasedEvent, put = __set_inputFocusWasReleasedEvent))::System::Action* inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_vrFocusWasCapturedEvent, put = __set_vrFocusWasCapturedEvent))::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_vrFocusWasReleasedEvent, put = __set_vrFocusWasReleasedEvent))::System::Action* vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_hmdUnmountedEvent, put = __set_hmdUnmountedEvent))::System::Action* hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_hmdMountedEvent, put = __set_hmdMountedEvent))::System::Action* hmdMountedEvent;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_controllersDidChangeReferenceEvent, put = __set_controllersDidChangeReferenceEvent))::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_controllersDidDisconnectEvent, put = __set_controllersDidDisconnectEvent))::System::Action* controllersDidDisconnectEvent;

  /// @brief Field _hasInputFocus, offset 0x78, size 0x1
  __declspec(property(get = __get__hasInputFocus, put = __set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field _hasVrFocus, offset 0x79, size 0x1
  __declspec(property(get = __get__hasVrFocus, put = __set__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field _userPresent, offset 0x7a, size 0x1
  __declspec(property(get = __get__userPresent, put = __set__userPresent)) bool _userPresent;

  /// @brief Field _disabledEventSystem, offset 0x80, size 0x8
  __declspec(property(get = __get__disabledEventSystem, put = __set__disabledEventSystem))::UnityEngine::EventSystems::EventSystem* _disabledEventSystem;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  __declspec(property(get = get_loggerPrefix))::StringW loggerPrefix;

  __declspec(property(get = get__isOVRManagerPresent)) bool _isOVRManagerPresent;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::IVerboseLogger"
  constexpr operator ::GlobalNamespace::IVerboseLogger*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IVerboseLogger"
  constexpr ::GlobalNamespace::IVerboseLogger* i___GlobalNamespace__IVerboseLogger() noexcept;

  constexpr ::UnityEngine::Pose& __get__oculusTouchControllerOffsetPose();

  constexpr ::UnityEngine::Pose const& __get__oculusTouchControllerOffsetPose() const;

  constexpr void __set__oculusTouchControllerOffsetPose(::UnityEngine::Pose value);

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

  constexpr bool& __get__hasInputFocus();

  constexpr bool const& __get__hasInputFocus() const;

  constexpr void __set__hasInputFocus(bool value);

  constexpr bool& __get__hasVrFocus();

  constexpr bool const& __get__hasVrFocus() const;

  constexpr void __set__hasVrFocus(bool value);

  constexpr bool& __get__userPresent();

  constexpr bool const& __get__userPresent() const;

  constexpr void __set__userPresent(bool value);

  constexpr ::UnityEngine::EventSystems::EventSystem*& __get__disabledEventSystem();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::EventSystem*> const& __get__disabledEventSystem() const;

  constexpr void __set__disabledEventSystem(::UnityEngine::EventSystems::EventSystem* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x20f7bf4, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x20f7c90, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x20f7d2c, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x20f7dc8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x20f7e64, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x20f7f00, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x20f7f9c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x20f8038, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x20f80d4, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x20f8170, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x20f820c, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x20f82a8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x20f8344, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x20f83e0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x20f847c, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x20f8518, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x20f85b4, size 0x50, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x20f8604, size 0x50, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x20f8654, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x20f865c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method get_loggerPrefix, addr 0x20f8664, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_loggerPrefix();

  /// @brief Method get__isOVRManagerPresent, addr 0x20f86a4, size 0xbc, virtual false, abstract: false, final false
  inline bool get__isOVRManagerPresent();

  /// @brief Method Update, addr 0x20f8760, size 0x218, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method FixedUpdate, addr 0x20f8af4, size 0x58, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method LateUpdate, addr 0x20f8b4c, size 0x58, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method TriggerHapticPulse, addr 0x20f8ba4, size 0x7c, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method StopHaptics, addr 0x20f8c20, size 0x6c, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x20f8c8c, size 0xc4, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method GetNodePose, addr 0x20f8d50, size 0x164, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method XRNodeToOVRNode, addr 0x20f8eb4, size 0xd8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRPlugin__Node XRNodeToOVRNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x20f8f8c, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetTriggerValue, addr 0x20f8f90, size 0x98, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x20f9028, size 0xf8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x20f9120, size 0x44, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x20f9164, size 0x44, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference, addr 0x20f91a8, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method EnableEventSystem, addr 0x20f8a70, size 0x84, virtual false, abstract: false, final false
  inline void EnableEventSystem();

  /// @brief Method DisableEventSystem, addr 0x20f8978, size 0xf8, virtual false, abstract: false, final false
  inline void DisableEventSystem();

  static inline ::GlobalNamespace::OculusVRHelper* New_ctor();

  /// @brief Method .ctor, addr 0x20f91c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusVRHelper(OculusVRHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusVRHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusVRHelper(OculusVRHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusVRHelper();

public:
  /// @brief Field _oculusTouchControllerOffsetPose, offset: 0x18, size: 0x1c, def value: None
  ::UnityEngine::Pose ____oculusTouchControllerOffsetPose;

  /// @brief Field inputFocusWasCapturedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___controllersDidDisconnectEvent;

  /// @brief Field _hasInputFocus, offset: 0x78, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _hasVrFocus, offset: 0x79, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field _userPresent, offset: 0x7a, size: 0x1, def value: None
  bool ____userPresent;

  /// @brief Field _disabledEventSystem, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::EventSystems::EventSystem* ____disabledEventSystem;

  /// @brief Field kVerticalLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kVerticalLeftHand{ u"VerticalLeftHand" };

  /// @brief Field kVerticalRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kVerticalRightHand{ u"VerticalRightHand" };

  /// @brief Field kHorizontalLeftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kHorizontalLeftHand{ u"HorizontalLeftHand" };

  /// @brief Field kHorizontalRightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString kHorizontalRightHand{ u"HorizontalRightHand" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusVRHelper, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____oculusTouchControllerOffsetPose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___inputFocusWasCapturedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___inputFocusWasReleasedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___vrFocusWasCapturedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___vrFocusWasReleasedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___hmdUnmountedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___hmdMountedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___controllersDidChangeReferenceEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ___controllersDidDisconnectEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____hasInputFocus) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____hasVrFocus) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____userPresent) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusVRHelper, ____disabledEventSystem) == 0x80, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusVRHelper*, "", "OculusVRHelper");
