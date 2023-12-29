#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DevicelessVRHelper)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class DevicelessVRHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DevicelessVRHelper);
// Type: ::DevicelessVRHelper
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 83, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13980))
// CS Name: ::DevicelessVRHelper*
class CORDL_TYPE DevicelessVRHelper : public ::UnityEngine::MonoBehaviour {
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

  /// @brief Field _hasInputFocus, offset 0x50, size 0x1
  __declspec(property(get = __get__hasInputFocus, put = __set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field _hasVrFocus, offset 0x51, size 0x1
  __declspec(property(get = __get__hasVrFocus, put = __set__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field _scrollingLastFrame, offset 0x52, size 0x1
  __declspec(property(get = __get__scrollingLastFrame, put = __set__scrollingLastFrame)) bool _scrollingLastFrame;

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

  constexpr bool& __get__hasInputFocus();

  constexpr bool const& __get__hasInputFocus() const;

  constexpr void __set__hasInputFocus(bool value);

  constexpr bool& __get__hasVrFocus();

  constexpr bool const& __get__hasVrFocus() const;

  constexpr void __set__hasVrFocus(bool value);

  constexpr bool& __get__scrollingLastFrame();

  constexpr bool const& __get__scrollingLastFrame() const;

  constexpr void __set__scrollingLastFrame(bool value);

  /// @brief Method add_inputFocusWasCapturedEvent addr 0x1fa31f4 size 0x9c virtual true final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fa3290 size 0x9c virtual true final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent addr 0x1fa332c size 0x9c virtual true final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fa33c8 size 0x9c virtual true final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent addr 0x1fa3464 size 0x9c virtual true final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fa3500 size 0x9c virtual true final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent addr 0x1fa359c size 0x9c virtual true final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fa3638 size 0x9c virtual true final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent addr 0x1fa36d4 size 0x9c virtual true final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent addr 0x1fa3770 size 0x9c virtual true final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent addr 0x1fa380c size 0x9c virtual true final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent addr 0x1fa38a8 size 0x9c virtual true final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fa3944 size 0x9c virtual true final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fa39e0 size 0x9c virtual true final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus addr 0x1fa3a7c size 0x8 virtual true final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus addr 0x1fa3a84 size 0x8 virtual true final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless addr 0x1fa3a8c size 0x8 virtual true final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK addr 0x1fa3a94 size 0x8 virtual true final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method Update addr 0x1fa3a9c size 0x15c virtual false final false
  inline void Update();

  /// @brief Method TriggerHapticPulse addr 0x1fa3bf8 size 0x4 virtual true final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method StopHaptics addr 0x1fa3bfc size 0x4 virtual true final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method GetPoseOffsetForNode addr 0x1fa3c00 size 0x98 virtual true final true
  inline ::GlobalNamespace::EulerPose GetPoseOffsetForNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetNodePose addr 0x1fa3c98 size 0x98 virtual true final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetAnyJoystickMaxAxis addr 0x1fa3d30 size 0x68 virtual true final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetTriggerValue addr 0x1fa3d98 size 0x28 virtual true final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetThumbstickValue addr 0x1fa3dc0 size 0x68 virtual true final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetMenuButton addr 0x1fa3e28 size 0x4 virtual true final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown addr 0x1fa3ea4 size 0x4 virtual true final true
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference addr 0x1fa3f20 size 0x1c virtual true final true
  inline void RefreshControllersReference();

  static inline ::GlobalNamespace::DevicelessVRHelper* New_ctor();

  /// @brief Method .ctor addr 0x1fa3f3c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DevicelessVRHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DevicelessVRHelper(DevicelessVRHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DevicelessVRHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DevicelessVRHelper(DevicelessVRHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DevicelessVRHelper();

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

  /// @brief Field _hasInputFocus, offset: 0x50, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _hasVrFocus, offset: 0x51, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field _scrollingLastFrame, offset: 0x52, size: 0x1, def value: None
  bool ____scrollingLastFrame;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DevicelessVRHelper, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___inputFocusWasCapturedEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___inputFocusWasReleasedEvent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___vrFocusWasCapturedEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___vrFocusWasReleasedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___hmdUnmountedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___hmdMountedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ___controllersDidChangeReferenceEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ____hasInputFocus) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ____hasVrFocus) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DevicelessVRHelper, ____scrollingLastFrame) == 0x52, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DevicelessVRHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DevicelessVRHelper*, "", "DevicelessVRHelper");
