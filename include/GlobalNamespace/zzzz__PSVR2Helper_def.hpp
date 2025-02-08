#pragma once
// IWYU pragma private; include "GlobalNamespace/PSVR2Helper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PSVR2Helper)
namespace GlobalNamespace {
struct PSVR2Helper_HeadsetHapticFrequencyLimit;
}
namespace GlobalNamespace {
class PSVR2Helper__CheckControllerConnectionOnStartup_d__75;
}
namespace GlobalNamespace {
class PSVR2Helper___c;
}
namespace GlobalNamespace {
class UnityXRController_Configuration;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
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
class PSVR2Helper__CheckControllerConnectionOnStartup_d__75;
}
namespace GlobalNamespace {
class PSVR2Helper___c;
}
namespace GlobalNamespace {
struct PSVR2Helper_HeadsetHapticFrequencyLimit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PSVR2Helper);
MARK_REF_PTR_T(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75);
MARK_REF_PTR_T(::GlobalNamespace::PSVR2Helper___c);
MARK_VAL_T(::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PSVR2Helper/HeadsetHapticFrequencyLimit
struct CORDL_TYPE PSVR2Helper_HeadsetHapticFrequencyLimit {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x39d289c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t maxTimePlayed, int32_t maximumFrequency);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVR2Helper_HeadsetHapticFrequencyLimit();

  // Ctor Parameters [CppParam { name: "maxTimePlayed", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maximumFrequency", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PSVR2Helper_HeadsetHapticFrequencyLimit(float_t maxTimePlayed, int32_t maximumFrequency) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16480 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field maxTimePlayed, offset: 0x0, size: 0x4, def value: None
  float_t maxTimePlayed;

  /// @brief Field maximumFrequency, offset: 0x4, size: 0x4, def value: None
  int32_t maximumFrequency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit, maxTimePlayed) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit, maximumFrequency) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PSVR2Helper/<>c
class CORDL_TYPE PSVR2Helper___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::PSVR2Helper___c* __9;

  /// @brief Field <>9__54_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__54_0, put = setStaticF___9__54_0)) ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>* __9__54_0;

  static inline ::GlobalNamespace::PSVR2Helper___c* New_ctor();

  /// @brief Method <HasAnyVRControllerConnected>b__54_0, addr 0x39d290c, size 0x9c, virtual false, abstract: false, final false
  inline bool _HasAnyVRControllerConnected_b__54_0(::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method .ctor, addr 0x39d2904, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::PSVR2Helper___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>* getStaticF___9__54_0();

  static inline void setStaticF___9(::GlobalNamespace::PSVR2Helper___c* value);

  static inline void setStaticF___9__54_0(::System::Func_2<::UnityEngine::InputSystem::InputDevice*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVR2Helper___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVR2Helper___c(PSVR2Helper___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVR2Helper___c(PSVR2Helper___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVR2Helper___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PSVR2Helper/<CheckControllerConnectionOnStartup>d__75
class CORDL_TYPE PSVR2Helper__CheckControllerConnectionOnStartup_d__75 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::PSVR2Helper> __4__this;

  /// @brief Field delayInSeconds, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_delayInSeconds, put = __cordl_internal_set_delayInSeconds)) float_t delayInSeconds;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x39d29ac, size 0xc4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x39d2a70, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x39d2a78, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x39d2ab0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x39d29a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::UnityW<::GlobalNamespace::PSVR2Helper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PSVR2Helper>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_delayInSeconds() const;

  constexpr float_t& __cordl_internal_get_delayInSeconds();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PSVR2Helper> value);

  constexpr void __cordl_internal_set_delayInSeconds(float_t value);

  /// @brief Method .ctor, addr 0x39d2644, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PSVR2Helper__CheckControllerConnectionOnStartup_d__75();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper__CheckControllerConnectionOnStartup_d__75", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PSVR2Helper__CheckControllerConnectionOnStartup_d__75(PSVR2Helper__CheckControllerConnectionOnStartup_d__75&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PSVR2Helper__CheckControllerConnectionOnStartup_d__75", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PSVR2Helper__CheckControllerConnectionOnStartup_d__75(PSVR2Helper__CheckControllerConnectionOnStartup_d__75 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16482 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field delayInSeconds, offset: 0x20, size: 0x4, def value: None
  float_t ___delayInSeconds;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PSVR2Helper> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75, ___delayInSeconds) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75, _____4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies IVRPlatformHelper, UnityEngine.MonoBehaviour, UnityEngine.Pose
namespace GlobalNamespace {
// Is value type: false
// CS Name: PSVR2Helper
class CORDL_TYPE PSVR2Helper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HeadsetHapticFrequencyLimit = ::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit;

  using _CheckControllerConnectionOnStartup_d__75 = ::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75;

  using __c = ::GlobalNamespace::PSVR2Helper___c;

  /// @brief Field _controllers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__controllers,
                      put = __cordl_internal_set__controllers)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* _controllers;

  /// @brief Field _controllersWithRumble, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__controllersWithRumble,
                      put = __cordl_internal_set__controllersWithRumble)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode,
                                                                                                                       ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* _controllersWithRumble;

  /// @brief Field _defaultPose, offset 0x38, size 0x1c
  __declspec(property(get = __cordl_internal_get__defaultPose, put = __cordl_internal_set__defaultPose)) ::UnityEngine::Pose _defaultPose;

  /// @brief Field _hasInputFocus, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__hasInputFocus, put = __cordl_internal_set__hasInputFocus)) bool _hasInputFocus;

  /// @brief Field _hasVrFocus, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get__hasVrFocus, put = __cordl_internal_set__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field _lastTimeWhenTriggeredHaptic, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__lastTimeWhenTriggeredHaptic, put = __cordl_internal_set__lastTimeWhenTriggeredHaptic)) float_t _lastTimeWhenTriggeredHaptic;

  /// @brief Field _leftController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__leftController, put = __cordl_internal_set__leftController)) ::GlobalNamespace::UnityXRController_Configuration* _leftController;

  /// @brief Field _maximumHapticFrequencyLimits, offset 0x80, size 0x8
  __declspec(property(
      get = __cordl_internal_get__maximumHapticFrequencyLimits,
      put = __cordl_internal_set__maximumHapticFrequencyLimits)) ::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>* _maximumHapticFrequencyLimits;

  /// @brief Field _menuButtonDown, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__menuButtonDown, put = __cordl_internal_set__menuButtonDown)) bool _menuButtonDown;

  /// @brief Field _menuButtonDownThisFrame, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__menuButtonDownThisFrame, put = __cordl_internal_set__menuButtonDownThisFrame)) bool _menuButtonDownThisFrame;

  /// @brief Field _pauseGameAction, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameAction, put = __cordl_internal_set__pauseGameAction)) ::UnityEngine::InputSystem::InputAction* _pauseGameAction;

  /// @brief Field _pauseGameActionReference, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pauseGameActionReference, put = __cordl_internal_set__pauseGameActionReference)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>
      _pauseGameActionReference;

  /// @brief Field _rightController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rightController, put = __cordl_internal_set__rightController)) ::GlobalNamespace::UnityXRController_Configuration* _rightController;

  /// @brief Field _timeWhenStartedPlayingHaptic, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get__timeWhenStartedPlayingHaptic, put = __cordl_internal_set__timeWhenStartedPlayingHaptic)) float_t _timeWhenStartedPlayingHaptic;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidChangeReferenceEvent,
                      put = __cordl_internal_set_controllersDidChangeReferenceEvent)) ::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field controllersDidDisconnectEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_controllersDidDisconnectEvent, put = __cordl_internal_set_controllersDidDisconnectEvent)) ::System::Action* controllersDidDisconnectEvent;

  __declspec(property(get = get_hasInputFocus)) bool hasInputFocus;

  __declspec(property(get = get_hasVrFocus)) bool hasVrFocus;

  /// @brief Field hmdMountedEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdMountedEvent, put = __cordl_internal_set_hmdMountedEvent)) ::System::Action* hmdMountedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_hmdUnmountedEvent, put = __cordl_internal_set_hmdUnmountedEvent)) ::System::Action* hmdUnmountedEvent;

  /// @brief Field inputFocusWasCapturedEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasCapturedEvent, put = __cordl_internal_set_inputFocusWasCapturedEvent)) ::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_inputFocusWasReleasedEvent, put = __cordl_internal_set_inputFocusWasReleasedEvent)) ::System::Action* inputFocusWasReleasedEvent;

  __declspec(property(get = get_isAlwaysWireless)) bool isAlwaysWireless;

  /// @brief Field vrControllersDisconnectedOnStartupEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_vrControllersDisconnectedOnStartupEvent,
                      put = __cordl_internal_set_vrControllersDisconnectedOnStartupEvent)) ::System::Action* vrControllersDisconnectedOnStartupEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasCapturedEvent, put = __cordl_internal_set_vrFocusWasCapturedEvent)) ::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_vrFocusWasReleasedEvent, put = __cordl_internal_set_vrFocusWasReleasedEvent)) ::System::Action* vrFocusWasReleasedEvent;

  __declspec(property(get = get_vrPlatformSDK)) ::GlobalNamespace::VRPlatformSDK vrPlatformSDK;

  /// @brief Convert operator to "::GlobalNamespace::IVRPlatformHelper"
  constexpr operator ::GlobalNamespace::IVRPlatformHelper*() noexcept;

  /// @brief Method AddControllerToMap, addr 0x39d2368, size 0x26c, virtual false, abstract: false, final false
  inline void AddControllerToMap(::UnityEngine::XR::XRNode forNode, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method Awake, addr 0x39d1568, size 0x324, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckControllerConnectionOnStartup, addr 0x39d25d4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* CheckControllerConnectionOnStartup(float_t delayInSeconds);

  /// @brief Method GetAnyJoystickMaxAxis, addr 0x39d1bc8, size 0x4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetMenuButton, addr 0x39d1ca8, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown, addr 0x39d1cb0, size 0x8, virtual true, abstract: false, final true
  inline bool GetMenuButtonDown();

  /// @brief Method GetNodePose, addr 0x39d1968, size 0x16c, virtual true, abstract: false, final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ::ByRef<::UnityEngine::Vector3> pos, ::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetRootPositionOffsetForLegacyNodePose, addr 0x39d1ad4, size 0x74, virtual true, abstract: false, final true
  inline ::UnityEngine::Pose GetRootPositionOffsetForLegacyNodePose(::UnityEngine::XR::XRNode node);

  /// @brief Method GetTRCCompliantHeadsetHapticFrequency, addr 0x39d1d78, size 0x200, virtual false, abstract: false, final false
  inline int32_t GetTRCCompliantHeadsetHapticFrequency(float_t initialFrequency);

  /// @brief Method GetThumbstickValue, addr 0x39d1bcc, size 0xd4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode nodeType);

  /// @brief Method GetTriggerValue, addr 0x39d1bc0, size 0x8, virtual true, abstract: false, final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method HandleApplicationInputFocusLost, addr 0x39d1fbc, size 0x20, virtual false, abstract: false, final false
  inline void HandleApplicationInputFocusLost();

  /// @brief Method HandleApplicationInputFocusResumed, addr 0x39d1fdc, size 0x24, virtual false, abstract: false, final false
  inline void HandleApplicationInputFocusResumed();

  /// @brief Method HandleApplicationVRFocusLost, addr 0x39d1f78, size 0x20, virtual false, abstract: false, final false
  inline void HandleApplicationVRFocusLost();

  /// @brief Method HandleApplicationVRFocusResumed, addr 0x39d1f98, size 0x24, virtual false, abstract: false, final false
  inline void HandleApplicationVRFocusResumed();

  /// @brief Method HasAnyVRControllerConnected, addr 0x39d140c, size 0x15c, virtual false, abstract: false, final false
  inline bool HasAnyVRControllerConnected();

  /// @brief Method InputDeviceChangeTriggered, addr 0x39d2000, size 0x368, virtual false, abstract: false, final false
  inline void InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice* inputDevice, ::UnityEngine::InputSystem::InputDeviceChange inputDeviceChange);

  /// @brief Method IsAdvancedHapticsSupported, addr 0x39d1ca0, size 0x8, virtual true, abstract: false, final true
  inline bool IsAdvancedHapticsSupported(::UnityEngine::XR::XRNode node);

  /// @brief Method LateUpdate, addr 0x39d2724, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::PSVR2Helper* New_ctor();

  /// @brief Method OnDestroy, addr 0x39d266c, size 0xa4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnPauseGameCancelled, addr 0x39d271c, size 0x8, virtual false, abstract: false, final false
  inline void OnPauseGameCancelled(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method OnPauseGamePerformed, addr 0x39d2710, size 0xc, virtual false, abstract: false, final false
  inline void OnPauseGamePerformed(::UnityEngine::InputSystem::InputAction_CallbackContext context);

  /// @brief Method RefreshControllersReference, addr 0x39d1cb8, size 0x1c, virtual true, abstract: false, final true
  inline void RefreshControllersReference();

  /// @brief Method StopHaptics, addr 0x39d1cd4, size 0x4, virtual true, abstract: false, final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse, addr 0x39d1cd8, size 0xa0, virtual true, abstract: false, final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method TryGetLegacyPoseOffsetForNode, addr 0x39d1b48, size 0x78, virtual true, abstract: false, final true
  inline bool TryGetLegacyPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Vector3> rotation);

  /// @brief Method TryGetPoseOffsetForNode, addr 0x39d1948, size 0x20, virtual true, abstract: false, final true
  inline bool TryGetPoseOffsetForNode(::UnityEngine::XR::XRNode node, ::ByRef<::UnityEngine::Pose> poseOffset);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* const& __cordl_internal_get__controllers() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*& __cordl_internal_get__controllers();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* const&
  __cordl_internal_get__controllersWithRumble() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*& __cordl_internal_get__controllersWithRumble();

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__defaultPose() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__defaultPose();

  constexpr bool const& __cordl_internal_get__hasInputFocus() const;

  constexpr bool& __cordl_internal_get__hasInputFocus();

  constexpr bool const& __cordl_internal_get__hasVrFocus() const;

  constexpr bool& __cordl_internal_get__hasVrFocus();

  constexpr float_t const& __cordl_internal_get__lastTimeWhenTriggeredHaptic() const;

  constexpr float_t& __cordl_internal_get__lastTimeWhenTriggeredHaptic();

  constexpr ::GlobalNamespace::UnityXRController_Configuration* const& __cordl_internal_get__leftController() const;

  constexpr ::GlobalNamespace::UnityXRController_Configuration*& __cordl_internal_get__leftController();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>* const& __cordl_internal_get__maximumHapticFrequencyLimits() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>*& __cordl_internal_get__maximumHapticFrequencyLimits();

  constexpr bool const& __cordl_internal_get__menuButtonDown() const;

  constexpr bool& __cordl_internal_get__menuButtonDown();

  constexpr bool const& __cordl_internal_get__menuButtonDownThisFrame() const;

  constexpr bool& __cordl_internal_get__menuButtonDownThisFrame();

  constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get__pauseGameAction() const;

  constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get__pauseGameAction();

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get__pauseGameActionReference() const;

  constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get__pauseGameActionReference();

  constexpr ::GlobalNamespace::UnityXRController_Configuration* const& __cordl_internal_get__rightController() const;

  constexpr ::GlobalNamespace::UnityXRController_Configuration*& __cordl_internal_get__rightController();

  constexpr float_t const& __cordl_internal_get__timeWhenStartedPlayingHaptic() const;

  constexpr float_t& __cordl_internal_get__timeWhenStartedPlayingHaptic();

  constexpr ::System::Action* const& __cordl_internal_get_controllersDidChangeReferenceEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_controllersDidChangeReferenceEvent();

  constexpr ::System::Action* const& __cordl_internal_get_controllersDidDisconnectEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_controllersDidDisconnectEvent();

  constexpr ::System::Action* const& __cordl_internal_get_hmdMountedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_hmdMountedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_hmdUnmountedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_hmdUnmountedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_inputFocusWasCapturedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_inputFocusWasCapturedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_inputFocusWasReleasedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_inputFocusWasReleasedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_vrControllersDisconnectedOnStartupEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrControllersDisconnectedOnStartupEvent();

  constexpr ::System::Action* const& __cordl_internal_get_vrFocusWasCapturedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrFocusWasCapturedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_vrFocusWasReleasedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_vrFocusWasReleasedEvent();

  constexpr void __cordl_internal_set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* value);

  constexpr void __cordl_internal_set__controllersWithRumble(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* value);

  constexpr void __cordl_internal_set__defaultPose(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set__hasInputFocus(bool value);

  constexpr void __cordl_internal_set__hasVrFocus(bool value);

  constexpr void __cordl_internal_set__lastTimeWhenTriggeredHaptic(float_t value);

  constexpr void __cordl_internal_set__leftController(::GlobalNamespace::UnityXRController_Configuration* value);

  constexpr void __cordl_internal_set__maximumHapticFrequencyLimits(::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>* value);

  constexpr void __cordl_internal_set__menuButtonDown(bool value);

  constexpr void __cordl_internal_set__menuButtonDownThisFrame(bool value);

  constexpr void __cordl_internal_set__pauseGameAction(::UnityEngine::InputSystem::InputAction* value);

  constexpr void __cordl_internal_set__pauseGameActionReference(::UnityW<::UnityEngine::InputSystem::InputActionReference> value);

  constexpr void __cordl_internal_set__rightController(::GlobalNamespace::UnityXRController_Configuration* value);

  constexpr void __cordl_internal_set__timeWhenStartedPlayingHaptic(float_t value);

  constexpr void __cordl_internal_set_controllersDidChangeReferenceEvent(::System::Action* value);

  constexpr void __cordl_internal_set_controllersDidDisconnectEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdMountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_hmdUnmountedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_inputFocusWasReleasedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrControllersDisconnectedOnStartupEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasCapturedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x39d272c, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_controllersDidChangeReferenceEvent, addr 0x39d08f4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method add_controllersDidDisconnectEvent, addr 0x39d12d4, size 0x9c, virtual true, abstract: false, final true
  inline void add_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent, addr 0x39d119c, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent, addr 0x39d1064, size 0x9c, virtual true, abstract: false, final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasCapturedEvent, addr 0x39d0b84, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent, addr 0x39d0cbc, size 0x9c, virtual true, abstract: false, final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrControllersDisconnectedOnStartupEvent, addr 0x39d0a2c, size 0x9c, virtual false, abstract: false, final false
  inline void add_vrControllersDisconnectedOnStartupEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent, addr 0x39d0df4, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent, addr 0x39d0f2c, size 0x9c, virtual true, abstract: false, final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus, addr 0x39d0b64, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus, addr 0x39d0b6c, size 0x8, virtual true, abstract: false, final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless, addr 0x39d0b74, size 0x8, virtual true, abstract: false, final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK, addr 0x39d0b7c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Convert to "::GlobalNamespace::IVRPlatformHelper"
  constexpr ::GlobalNamespace::IVRPlatformHelper* i___GlobalNamespace__IVRPlatformHelper() noexcept;

  /// @brief Method remove_controllersDidChangeReferenceEvent, addr 0x39d0990, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidDisconnectEvent, addr 0x39d1370, size 0x9c, virtual true, abstract: false, final true
  inline void remove_controllersDidDisconnectEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent, addr 0x39d1238, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent, addr 0x39d1100, size 0x9c, virtual true, abstract: false, final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent, addr 0x39d0c20, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent, addr 0x39d0d58, size 0x9c, virtual true, abstract: false, final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrControllersDisconnectedOnStartupEvent, addr 0x39d0ac8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_vrControllersDisconnectedOnStartupEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent, addr 0x39d0e90, size 0x9c, virtual true, abstract: false, final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent, addr 0x39d0fc8, size 0x9c, virtual true, abstract: false, final true
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16483 };

  /// @brief Field kLeftControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLeftControllerName{ u"PSVR2ControllerLeft" };

  /// @brief Field kMaxHMDFrequency offset 0xffffffff size 0x4
  static constexpr int32_t kMaxHMDFrequency{ static_cast<int32_t>(0x19) };

  /// @brief Field kRightControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRightControllerName{ u"PSVR2ControllerRight" };

  /// @brief Field kRumbleMinimalDuration offset 0xffffffff size 0x4
  static constexpr float_t kRumbleMinimalDuration{ static_cast<float_t>(0.05f) };

  /// @brief Field _leftController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController_Configuration* ____leftController;

  /// @brief Field _rightController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::UnityXRController_Configuration* ____rightController;

  /// @brief Field _pauseGameActionReference, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::InputSystem::InputActionReference> ____pauseGameActionReference;

  /// @brief Field _defaultPose, offset: 0x38, size: 0x1c, def value: None
  ::UnityEngine::Pose ____defaultPose;

  /// @brief Field _controllers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* ____controllers;

  /// @brief Field _controllersWithRumble, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* ____controllersWithRumble;

  /// @brief Field _pauseGameAction, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::InputSystem::InputAction* ____pauseGameAction;

  /// @brief Field _timeWhenStartedPlayingHaptic, offset: 0x70, size: 0x4, def value: None
  float_t ____timeWhenStartedPlayingHaptic;

  /// @brief Field _lastTimeWhenTriggeredHaptic, offset: 0x74, size: 0x4, def value: None
  float_t ____lastTimeWhenTriggeredHaptic;

  /// @brief Field _hasInputFocus, offset: 0x78, size: 0x1, def value: None
  bool ____hasInputFocus;

  /// @brief Field _menuButtonDown, offset: 0x79, size: 0x1, def value: None
  bool ____menuButtonDown;

  /// @brief Field _menuButtonDownThisFrame, offset: 0x7a, size: 0x1, def value: None
  bool ____menuButtonDownThisFrame;

  /// @brief Field _maximumHapticFrequencyLimits, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit>* ____maximumHapticFrequencyLimits;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field vrControllersDisconnectedOnStartupEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action* ___vrControllersDisconnectedOnStartupEvent;

  /// @brief Field _hasVrFocus, offset: 0x98, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field inputFocusWasCapturedEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0xb8, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0xc0, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field controllersDidDisconnectEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action* ___controllersDidDisconnectEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____leftController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____rightController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____pauseGameActionReference) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____defaultPose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____controllers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____controllersWithRumble) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____pauseGameAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____timeWhenStartedPlayingHaptic) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____lastTimeWhenTriggeredHaptic) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____hasInputFocus) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____menuButtonDown) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____menuButtonDownThisFrame) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____maximumHapticFrequencyLimits) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___controllersDidChangeReferenceEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrControllersDisconnectedOnStartupEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____hasVrFocus) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___inputFocusWasCapturedEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___inputFocusWasReleasedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrFocusWasCapturedEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrFocusWasReleasedEvent) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___hmdUnmountedEvent) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___hmdMountedEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___controllersDidDisconnectEvent) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVR2Helper, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PSVR2Helper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper*, "", "PSVR2Helper");
NEED_NO_BOX(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper__CheckControllerConnectionOnStartup_d__75*, "", "PSVR2Helper/<CheckControllerConnectionOnStartup>d__75");
NEED_NO_BOX(::GlobalNamespace::PSVR2Helper___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper___c*, "", "PSVR2Helper/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper_HeadsetHapticFrequencyLimit, "", "PSVR2Helper/HeadsetHapticFrequencyLimit");
