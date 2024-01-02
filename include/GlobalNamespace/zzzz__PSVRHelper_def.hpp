#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PSVRHelper)
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PSVRHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PSVRHelper);
// Type: ::PSVRHelper
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14430))
// CS Name: ::PSVRHelper*
class CORDL_TYPE PSVRHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
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

  /// @brief Field _didGetNodeStatesThisFrame, offset 0x58, size 0x1
  __declspec(property(get = __get__didGetNodeStatesThisFrame, put = __set__didGetNodeStatesThisFrame)) bool _didGetNodeStatesThisFrame;

  /// @brief Field _nodeStates, offset 0x60, size 0x8
  __declspec(property(get = __get__nodeStates, put = __set__nodeStates))::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* _nodeStates;

  /// @brief Field _hasVrFocus, offset 0x68, size 0x1
  __declspec(property(get = __get__hasVrFocus, put = __set__hasVrFocus)) bool _hasVrFocus;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

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

  constexpr bool& __get__didGetNodeStatesThisFrame();

  constexpr bool const& __get__didGetNodeStatesThisFrame() const;

  constexpr void __set__didGetNodeStatesThisFrame(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*& __get__nodeStates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>*> const& __get__nodeStates() const;

  constexpr void __set__nodeStates(::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* value);

  constexpr bool& __get__hasVrFocus();

  constexpr bool const& __get__hasVrFocus() const;

  constexpr void __set__hasVrFocus(bool value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x20fbb64, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x20fbc00, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x20fbc9c, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x20fbd38, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x20fbdd4, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x20fbe70, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x20fbf0c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x20fbfa8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x20fc044, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x20fc0e0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x20fc17c, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x20fc218, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x20fc2b4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x20fc350, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x20fc3ec, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x20fc488, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x20fc524, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x20fc52c, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x20fc534, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x20fc53c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method Start, addr 0x20fc544, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x20fc548, size 0x4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleMoveDeviceDidDisconnectEvent, addr 0x20fc54c, size 0x1c, virtual false, abstract: false, final false
  inline void HandleMoveDeviceDidDisconnectEvent();

  /// @brief Method Update, addr 0x20fc568, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method LateUpdate, addr 0x20fc56c, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  /// @brief Method TriggerHapticPulse, addr 0x20fc574, size 0x4, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method StopHaptics, addr 0x20fc578, size 0x4, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x20fc57c, size 0x88, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method XRNodeToPSDeviceIndex, addr 0x20fc604, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t XRNodeToPSDeviceIndex(::UnityEngine::XR::XRNode node);

  /// @brief Method GetNodePose, addr 0x20fc6e0, size 0x384, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x20fca64, size 0x40, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetTriggerValue, addr 0x20fcaa4, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue, addr 0x20fcaac, size 0x40, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton, addr 0x20fcaec, size 0x4, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x20fcaf0, size 0x4, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference, addr 0x20fcaf4, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  static inline ::GlobalNamespace::PSVRHelper* New_ctor();

  /// @brief Method .ctor, addr 0x20fcb10, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PSVRHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVRHelper(PSVRHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVRHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVRHelper(PSVRHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVRHelper();

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

  /// @brief Field _didGetNodeStatesThisFrame, offset: 0x58, size: 0x1, def value: None
  bool ____didGetNodeStatesThisFrame;

  /// @brief Field _nodeStates, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::XRNodeState>* ____nodeStates;

  /// @brief Field _hasVrFocus, offset: 0x68, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field kContinuesRumbleImpulseStrength offset 0xffffffff size 0x4
  static constexpr float_t kContinuesRumbleImpulseStrength{ 0.8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVRHelper, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___inputFocusWasCapturedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___inputFocusWasReleasedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___vrFocusWasCapturedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___vrFocusWasReleasedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___hmdUnmountedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___hmdMountedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___controllersDidChangeReferenceEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ___controllersDidDisconnectEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____didGetNodeStatesThisFrame) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____nodeStates) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVRHelper, ____hasVrFocus) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PSVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVRHelper*, "", "PSVRHelper");
