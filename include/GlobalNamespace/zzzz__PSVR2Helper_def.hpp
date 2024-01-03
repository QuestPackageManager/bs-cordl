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
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Pose;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
namespace GlobalNamespace {
struct __PSVR2Helper__HeadsetHapticFrequencyLimit;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14428))
// CS Name: ::PSVR2Helper::HeadsetHapticFrequencyLimit
struct CORDL_TYPE __PSVR2Helper__HeadsetHapticFrequencyLimit {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x20fbb58, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t maxTimePlayed, int32_t maximumFrequency);

  // Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PSVR2Helper__HeadsetHapticFrequencyLimit(float_t maxTimePlayed, int32_t maximumFrequency) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PSVR2Helper__HeadsetHapticFrequencyLimit();

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10057)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14429))
// CS Name: ::PSVR2Helper*
class CORDL_TYPE PSVR2Helper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HeadsetHapticFrequencyLimit = ::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit;

  /// @brief Field _leftController, offset 0x18, size 0x8
  __declspec(property(get = __get__leftController, put = __set__leftController))::GlobalNamespace::__UnityXRController__Configuration* _leftController;

  /// @brief Field _rightController, offset 0x20, size 0x8
  __declspec(property(get = __get__rightController, put = __set__rightController))::GlobalNamespace::__UnityXRController__Configuration* _rightController;

  /// @brief Field _defaultPose, offset 0x28, size 0x1c
  __declspec(property(get = __get__defaultPose, put = __set__defaultPose))::UnityEngine::Pose _defaultPose;

  /// @brief Field _controllers, offset 0x48, size 0x8
  __declspec(property(get = __get__controllers, put = __set__controllers))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* _controllers;

  /// @brief Field _controllersWithRumble, offset 0x50, size 0x8
  __declspec(property(
      get = __get__controllersWithRumble,
      put = __set__controllersWithRumble))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* _controllersWithRumble;

  /// @brief Field _timeWhenStartedPlayingHaptic, offset 0x58, size 0x4
  __declspec(property(get = __get__timeWhenStartedPlayingHaptic, put = __set__timeWhenStartedPlayingHaptic)) float_t _timeWhenStartedPlayingHaptic;

  /// @brief Field _lastTimeWhenTriggeredHaptic, offset 0x5c, size 0x4
  __declspec(property(get = __get__lastTimeWhenTriggeredHaptic, put = __set__lastTimeWhenTriggeredHaptic)) float_t _lastTimeWhenTriggeredHaptic;

  /// @brief Field _hasInputFocus, offset 0x60, size 0x1
  __declspec(property(get = __get__hasInputFocus, put = __set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field _maximumHapticFrequencyLimits, offset 0x68, size 0x8
  __declspec(property(get = __get__maximumHapticFrequencyLimits,
                      put = __set__maximumHapticFrequencyLimits))::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>* _maximumHapticFrequencyLimits;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_controllersDidChangeReferenceEvent, put = __set_controllersDidChangeReferenceEvent))::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field _hasVrFocus, offset 0x78, size 0x1
  __declspec(property(get = __get__hasVrFocus, put = __set__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x80, size 0x8
  __declspec(property(get = __get_inputFocusWasCapturedEvent, put = __set_inputFocusWasCapturedEvent))::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x88, size 0x8
  __declspec(property(get = __get_inputFocusWasReleasedEvent, put = __set_inputFocusWasReleasedEvent))::System::Action* inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_vrFocusWasCapturedEvent, put = __set_vrFocusWasCapturedEvent))::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_vrFocusWasReleasedEvent, put = __set_vrFocusWasReleasedEvent))::System::Action* vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __get_hmdUnmountedEvent, put = __set_hmdUnmountedEvent))::System::Action* hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_hmdMountedEvent, put = __set_hmdMountedEvent))::System::Action* hmdMountedEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_controllersDidDisconnectEvent, put = __set_controllersDidDisconnectEvent))::System::Action* controllersDidDisconnectEvent;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  __declspec(property(get = get_vrPlatformSDK))::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __get__leftController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __get__leftController() const;

  constexpr void __set__leftController(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr ::GlobalNamespace::__UnityXRController__Configuration*& __get__rightController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__UnityXRController__Configuration*> const& __get__rightController() const;

  constexpr void __set__rightController(::GlobalNamespace::__UnityXRController__Configuration* value);

  constexpr ::UnityEngine::Pose& __get__defaultPose();

  constexpr ::UnityEngine::Pose const& __get__defaultPose() const;

  constexpr void __set__defaultPose(::UnityEngine::Pose value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*& __get__controllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*> const& __get__controllers() const;

  constexpr void __set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*& __get__controllersWithRumble();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*> const&
  __get__controllersWithRumble() const;

  constexpr void __set__controllersWithRumble(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* value);

  constexpr float_t& __get__timeWhenStartedPlayingHaptic();

  constexpr float_t const& __get__timeWhenStartedPlayingHaptic() const;

  constexpr void __set__timeWhenStartedPlayingHaptic(float_t value);

  constexpr float_t& __get__lastTimeWhenTriggeredHaptic();

  constexpr float_t const& __get__lastTimeWhenTriggeredHaptic() const;

  constexpr void __set__lastTimeWhenTriggeredHaptic(float_t value);

  constexpr bool& __get__hasInputFocus();

  constexpr bool const& __get__hasInputFocus() const;

  constexpr void __set__hasInputFocus(bool value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*& __get__maximumHapticFrequencyLimits();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>*> const&
  __get__maximumHapticFrequencyLimits() const;

  constexpr void __set__maximumHapticFrequencyLimits(::System::Collections::Generic::List_1<::GlobalNamespace::__PSVR2Helper__HeadsetHapticFrequencyLimit>* value);

  constexpr ::System::Action*& __get_controllersDidChangeReferenceEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_controllersDidChangeReferenceEvent() const;

  constexpr void __set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr bool& __get__hasVrFocus();

  constexpr bool const& __get__hasVrFocus() const;

  constexpr void __set__hasVrFocus(bool value);

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

  constexpr ::System::Action*& __get_controllersDidDisconnectEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_controllersDidDisconnectEvent() const;

  constexpr void __set_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x20fa108, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x20fa1a4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x20fa240, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x20fa248, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x20fa250, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x20fa258, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x20fa260, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x20fa2fc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x20fa398, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x20fa434, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x20fa4d0, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x20fa56c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x20fa608, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x20fa6a4, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x20fa740, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x20fa7dc, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x20fa878, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x20fa914, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x20fa9b0, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x20faa4c, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method Awake, addr 0x20faae8, size 0x258, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method TryGetPoseOffsetForNode, addr 0x20fae00, size 0x20, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method GetNodePose, addr 0x20fae20, size 0x16c, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetTriggerValue, addr 0x20faf8c, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x20faf94, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetThumbstickValue, addr 0x20faf98, size 0xd4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode nodeType);

  /// @brief Method GetMenuButton, addr 0x20fb06c, size 0x4, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x20fb070, size 0x4, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference, addr 0x20fb074, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method StopHaptics, addr 0x20fb090, size 0x4, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x20fb094, size 0xa0, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method GetTRCCompliantHeadsetHapticFrequency, addr 0x20fb134, size 0x200, virtual false, abstract: false, final false
  inline int32_t GetTRCCompliantHeadsetHapticFrequency(float_t initialFrequency);

  /// @brief Method HandleApplicationFocusLost, addr 0x20fb334, size 0x24, virtual false, abstract: false, final false
  inline void HandleApplicationFocusLost();

  /// @brief Method HandleApplicationFocusResumed, addr 0x20fb358, size 0x28, virtual false, abstract: false, final false
  inline void HandleApplicationFocusResumed();

  /// @brief Method InputDeviceChangeTriggered, addr 0x20fb380, size 0x34c, virtual false, abstract: false, final false
  inline void InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice* inputDevice, ::UnityEngine::InputSystem::InputDeviceChange inputDeviceChange);

  /// @brief Method AddControllerToMap, addr 0x20fb6cc, size 0x278, virtual false, abstract: false, final false
  inline void AddControllerToMap(::UnityEngine::XR::XRNode forNode, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnDestroy, addr 0x20fb944, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::PSVR2Helper* New_ctor();

  /// @brief Method .ctor, addr 0x20fb9e8, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVR2Helper(PSVR2Helper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVR2Helper(PSVR2Helper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVR2Helper();

public:
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

  /// @brief Field kRightControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRightControllerName{ u"PSVR2ControllerRight" };

  /// @brief Field kLeftControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLeftControllerName{ u"PSVR2ControllerLeft" };

  /// @brief Field kMaxHMDFrequency offset 0xffffffff size 0x4
  static constexpr int32_t kMaxHMDFrequency{ static_cast<int32_t>(0x19) };

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
