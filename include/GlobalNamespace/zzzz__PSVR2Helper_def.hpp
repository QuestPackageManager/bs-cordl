#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PSVR2Helper)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace GlobalNamespace {
struct __PSVR2Helper__HeadsetHapticFrequencyLimit;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
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
class PSVR2Helper;
}
namespace GlobalNamespace {
struct __PSVR2Helper__HeadsetHapticFrequencyLimit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PSVR2Helper);
MARK_VAL_T(::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit);
// Type: ::HeadsetHapticFrequencyLimit
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PSVR2Helper::HeadsetHapticFrequencyLimit
struct CORDL_TYPE __PSVR2Helper__HeadsetHapticFrequencyLimit {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x23e6c50, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t maxTimePlayed, int32_t maximumFrequency);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PSVR2Helper__HeadsetHapticFrequencyLimit();

  // Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PSVR2Helper__HeadsetHapticFrequencyLimit(float_t maxTimePlayed, int32_t maximumFrequency) noexcept;

  /// @brief Field maxTimePlayed, offset: 0x0, size: 0x4, def value: None
  float_t maxTimePlayed;

  /// @brief Field maximumFrequency, offset: 0x4, size: 0x4, def value: None
  int32_t maximumFrequency;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit, maxTimePlayed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit, maximumFrequency) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PSVR2Helper
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PSVR2Helper*
class CORDL_TYPE PSVR2Helper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HeadsetHapticFrequencyLimit = ::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit;

  /// @brief Field _controllers, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__controllers,
                      put = __cordl_internal_set__controllers))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* _controllers;

  /// @brief Field _controllersWithRumble, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__controllersWithRumble,
                      put = __cordl_internal_set__controllersWithRumble))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                                                                                      ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* _controllersWithRumble;

  /// @brief Field _defaultPose, offset 0x28, size 0x1c
  __declspec(property(get = __cordl_internal_get__defaultPose, put = __cordl_internal_set__defaultPose))::UnityEngine::Pose _defaultPose;

  /// @brief Field _hasInputFocus, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInputFocus, put = __cordl_internal_set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field _hasVrFocus, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus, put = __cordl_internal_set__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field _lastTimeWhenTriggeredHaptic, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__lastTimeWhenTriggeredHaptic, put = __cordl_internal_set__lastTimeWhenTriggeredHaptic)) float_t _lastTimeWhenTriggeredHaptic;

  /// @brief Field _leftController, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController))::GlobalNamespace::__UnityXRController__Configuration* _leftController;

  /// @brief Field _maximumHapticFrequencyLimits, offset 0x68, size 0x8
  __declspec(property(
      get = __cordl_internal_get__maximumHapticFrequencyLimits,
      put = __cordl_internal_set__maximumHapticFrequencyLimits))::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>* _maximumHapticFrequencyLimits;

  /// @brief Field _rightController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController))::GlobalNamespace::__UnityXRController__Configuration* _rightController;

  /// @brief Field _timeWhenStartedPlayingHaptic, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__timeWhenStartedPlayingHaptic, put = __cordl_internal_set__timeWhenStartedPlayingHaptic)) float_t _timeWhenStartedPlayingHaptic;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidChangeReferenceEvent,
                      put = __cordl_internal_set_controllersDidChangeReferenceEvent))::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidDisconnectEvent, put = __cordl_internal_set_controllersDidDisconnectEvent))::System::Action* controllersDidDisconnectEvent;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  /// @brief Field hmdMountedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdMountedEvent, put = __cordl_internal_set_hmdMountedEvent))::System::Action* hmdMountedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdUnmountedEvent, put = __cordl_internal_set_hmdUnmountedEvent))::System::Action* hmdUnmountedEvent;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasCapturedEvent, put = __cordl_internal_set_inputFocusWasCapturedEvent))::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasReleasedEvent, put = __cordl_internal_set_inputFocusWasReleasedEvent))::System::Action* inputFocusWasReleasedEvent;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasCapturedEvent, put = __cordl_internal_set_vrFocusWasCapturedEvent))::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasReleasedEvent, put = __cordl_internal_set_vrFocusWasReleasedEvent))::System::Action* vrFocusWasReleasedEvent;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Method AddControllerToMap, addr 0x23e67c4, size 0x278, virtual false, abstract: false, final false
  inline void AddControllerToMap(::UnityEngine::XR::XRNode forNode, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Awake, addr 0x23e5b9c, size 0x258, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x23e6048, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetMenuButton, addr 0x23e6128, size 0x4, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x23e612c, size 0x4, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x23e5ed4, size 0x16c, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetTRCCompliantHeadsetHapticFrequency, addr 0x23e61f0, size 0x200, virtual false, abstract: false, final false
  inline int32_t GetTRCCompliantHeadsetHapticFrequency(float_t initialFrequency);

  /// @brief Method GetThumbstickValue, addr 0x23e604c, size 0xd4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode nodeType);

  /// @brief Method GetTriggerValue, addr 0x23e6040, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleApplicationInputFocusLost, addr 0x23e6434, size 0x20, virtual false, abstract: false, final false
  inline void HandleApplicationInputFocusLost();

  /// @brief Method HandleApplicationInputFocusResumed, addr 0x23e6454, size 0x24, virtual false, abstract: false, final false
  inline void HandleApplicationInputFocusResumed();

  /// @brief Method HandleApplicationVRFocusLost, addr 0x23e63f0, size 0x20, virtual false, abstract: false, final false
  inline void HandleApplicationVRFocusLost();

  /// @brief Method HandleApplicationVRFocusResumed, addr 0x23e6410, size 0x24, virtual false, abstract: false, final false
  inline void HandleApplicationVRFocusResumed();

  /// @brief Method InputDeviceChangeTriggered, addr 0x23e6478, size 0x34c, virtual false, abstract: false, final false
  inline void InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice* inputDevice, ::UnityEngine::InputSystem::InputDeviceChange inputDeviceChange);

  /// @brief Method IsAdvancedHapticsSupported, addr 0x23e6120, size 0x8, virtual true, abstract: false, final true
  inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node);

  static inline ::GlobalNamespace::PSVR2Helper* New_ctor();

  /// @brief Method OnDestroy, addr 0x23e6a3c, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshControllersReference, addr 0x23e6130, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method StopHaptics, addr 0x23e614c, size 0x4, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x23e6150, size 0xa0, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x23e5eb4, size 0x20, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*& __cordl_internal_get__controllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*> const&
  __cordl_internal_get__controllers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*& __cordl_internal_get__controllersWithRumble();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*> const&
  __cordl_internal_get__controllersWithRumble() const;

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__defaultPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__defaultPose();

  constexpr bool const& __cordl_internal_get__hasInputFocus() const;

  constexpr bool& __cordl_internal_get__hasInputFocus();

  constexpr bool const& __cordl_internal_get__hasVrFocus() const;

  constexpr bool& __cordl_internal_get__hasVrFocus();

  constexpr float_t const& __cordl_internal_get__lastTimeWhenTriggeredHaptic() const;

  constexpr float_t& __cordl_internal_get__lastTimeWhenTriggeredHaptic();

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __cordl_internal_get__leftController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __cordl_internal_get__leftController() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*& __cordl_internal_get__maximumHapticFrequencyLimits();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*> const&
  __cordl_internal_get__maximumHapticFrequencyLimits() const;

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __cordl_internal_get__rightController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __cordl_internal_get__rightController() const;

  constexpr float_t const& __cordl_internal_get__timeWhenStartedPlayingHaptic() const;

  constexpr float_t& __cordl_internal_get__timeWhenStartedPlayingHaptic();

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

  constexpr void __cordl_internal_set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* value);

  constexpr void __cordl_internal_set__controllersWithRumble(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* value);

  constexpr void __cordl_internal_set__defaultPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__hasInputFocus(bool value);

  constexpr void __cordl_internal_set__hasVrFocus(bool value);

  constexpr void __cordl_internal_set__lastTimeWhenTriggeredHaptic(float_t value);

  constexpr void __cordl_internal_set__leftController(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr void __cordl_internal_set__maximumHapticFrequencyLimits(::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>* value);

  constexpr void __cordl_internal_set__rightController(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr void __cordl_internal_set__timeWhenStartedPlayingHaptic(float_t value);

  constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x23e6ae0, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x23e51bc, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x23e5a64, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x23e592c, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x23e57f4, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x23e5314, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x23e544c, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x23e5584, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x23e56bc, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x23e52f4, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x23e52fc, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x23e5304, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x23e530c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x23e5258, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x23e5b00, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x23e59c8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x23e5890, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x23e53b0, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x23e54e8, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x23e5620, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x23e5758, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVR2Helper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVR2Helper(PSVR2Helper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVR2Helper(PSVR2Helper const&) = delete;

  /// @brief Field _leftController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__UnityXRController__Configuration* ____leftController;

  /// @brief Field _rightController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__UnityXRController__Configuration* ____rightController;

  /// @brief Field _defaultPose, offset: 0x28, size: 0x1c, def value: None
  ::UnityEngine::Pose ____defaultPose;

  /// @brief Field _controllers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* ____controllers;

  /// @brief Field _controllersWithRumble, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* ____controllersWithRumble;

  /// @brief Field _timeWhenStartedPlayingHaptic, offset: 0x58, size: 0x4, def value: None
  float_t ____timeWhenStartedPlayingHaptic;

  /// @brief Field _lastTimeWhenTriggeredHaptic, offset: 0x5c, size: 0x4, def value: None
  float_t ____lastTimeWhenTriggeredHaptic;

  /// @brief Field _hasInputFocus, offset: 0x60, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _maximumHapticFrequencyLimits, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>* ____maximumHapticFrequencyLimits;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field _hasVrFocus, offset: 0x78, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field inputFocusWasCapturedEvent, offset: 0x80, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field controllersDidDisconnectEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ___controllersDidDisconnectEvent;

  /// @brief Field kLeftControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLeftControllerName{ u"PSVR2ControllerLeft" };

  /// @brief Field kMaxHMDFrequency offset 0xffffffff size 0x4
  static constexpr int32_t kMaxHMDFrequency{ static_cast<int32_t>(0x19) };

  /// @brief Field kRightControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRightControllerName{ u"PSVR2ControllerRight" };

  /// @brief Field kRumbleMinimalDuration offset 0xffffffff size 0x4
  static constexpr float_t kRumbleMinimalDuration{ 0.05 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVR2Helper, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____leftController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____rightController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____defaultPose) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____controllers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____controllersWithRumble) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____timeWhenStartedPlayingHaptic) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____lastTimeWhenTriggeredHaptic) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____hasInputFocus) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____maximumHapticFrequencyLimits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___controllersDidChangeReferenceEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____hasVrFocus) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___inputFocusWasCapturedEvent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___inputFocusWasReleasedEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrFocusWasCapturedEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrFocusWasReleasedEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___hmdUnmountedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___hmdMountedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___controllersDidDisconnectEvent) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PSVR2Helper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper*, "", "PSVR2Helper");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit, "", "PSVR2Helper/HeadsetHapticFrequencyLimit");
