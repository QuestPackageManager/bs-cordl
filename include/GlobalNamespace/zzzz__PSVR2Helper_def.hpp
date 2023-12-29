#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PSVR2Helper)
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class UnityXRController;
}
namespace UnityEngine {
struct Vector2;
}
namespace GlobalNamespace {
struct VRPlatformSDK;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class __UnityXRController__Configuration;
}
namespace UnityEngine::InputSystem::XR {
class XRControllerWithRumble;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct EulerPose;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PSVR2Helper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PSVR2Helper);
// Type: ::PSVR2Helper
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13992))
// CS Name: ::PSVR2Helper*
class CORDL_TYPE PSVR2Helper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _leftController, offset 0x18, size 0x8
  __declspec(property(get = __get__leftController, put = __set__leftController))::GlobalNamespace::__UnityXRController__Configuration* _leftController;

  /// @brief Field _rightController, offset 0x20, size 0x8
  __declspec(property(get = __get__rightController, put = __set__rightController))::GlobalNamespace::__UnityXRController__Configuration* _rightController;

  /// @brief Field _controllers, offset 0x28, size 0x8
  __declspec(property(get = __get__controllers, put = __set__controllers))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* _controllers;

  /// @brief Field _controllersWithRumble, offset 0x30, size 0x8
  __declspec(property(
      get = __get__controllersWithRumble,
      put = __set__controllersWithRumble))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* _controllersWithRumble;

  /// @brief Field controllersDidChangeReferenceEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_controllersDidChangeReferenceEvent, put = __set_controllersDidChangeReferenceEvent))::System::Action* controllersDidChangeReferenceEvent;

  /// @brief Field _hasVrFocus, offset 0x40, size 0x1
  __declspec(property(get = __get__hasVrFocus, put = __set__hasVrFocus)) bool _hasVrFocus;

  /// @brief Field inputFocusWasCapturedEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_inputFocusWasCapturedEvent, put = __set_inputFocusWasCapturedEvent))::System::Action* inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_inputFocusWasReleasedEvent, put = __set_inputFocusWasReleasedEvent))::System::Action* inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_vrFocusWasCapturedEvent, put = __set_vrFocusWasCapturedEvent))::System::Action* vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset 0x60, size 0x8
  __declspec(property(get = __get_vrFocusWasReleasedEvent, put = __set_vrFocusWasReleasedEvent))::System::Action* vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset 0x68, size 0x8
  __declspec(property(get = __get_hmdUnmountedEvent, put = __set_hmdUnmountedEvent))::System::Action* hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_hmdMountedEvent, put = __set_hmdMountedEvent))::System::Action* hmdMountedEvent;

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

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*& __get__controllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>*> const& __get__controllers() const;

  constexpr void __set__controllers(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*& __get__controllersWithRumble();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>*> const&
  __get__controllersWithRumble() const;

  constexpr void __set__controllersWithRumble(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* value);

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

  /// @brief Method add_controllersDidChangeReferenceEvent addr 0x1fa6730 size 0x9c virtual true final true
  inline void add_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method remove_controllersDidChangeReferenceEvent addr 0x1fa67cc size 0x9c virtual true final true
  inline void remove_controllersDidChangeReferenceEvent(::System::Action* value);

  /// @brief Method get_hasInputFocus addr 0x1fa6868 size 0x8 virtual true final true
  inline bool get_hasInputFocus();

  /// @brief Method get_hasVrFocus addr 0x1fa6870 size 0x8 virtual true final true
  inline bool get_hasVrFocus();

  /// @brief Method get_isAlwaysWireless addr 0x1fa6878 size 0x8 virtual true final true
  inline bool get_isAlwaysWireless();

  /// @brief Method get_vrPlatformSDK addr 0x1fa6880 size 0x8 virtual true final true
  inline ::GlobalNamespace::VRPlatformSDK get_vrPlatformSDK();

  /// @brief Method add_inputFocusWasCapturedEvent addr 0x1fa6888 size 0x9c virtual true final true
  inline void add_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasCapturedEvent addr 0x1fa6924 size 0x9c virtual true final true
  inline void remove_inputFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_inputFocusWasReleasedEvent addr 0x1fa69c0 size 0x9c virtual true final true
  inline void add_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_inputFocusWasReleasedEvent addr 0x1fa6a5c size 0x9c virtual true final true
  inline void remove_inputFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasCapturedEvent addr 0x1fa6af8 size 0x9c virtual true final true
  inline void add_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasCapturedEvent addr 0x1fa6b94 size 0x9c virtual true final true
  inline void remove_vrFocusWasCapturedEvent(::System::Action* value);

  /// @brief Method add_vrFocusWasReleasedEvent addr 0x1fa6c30 size 0x9c virtual true final true
  inline void add_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method remove_vrFocusWasReleasedEvent addr 0x1fa6ccc size 0x9c virtual true final true
  inline void remove_vrFocusWasReleasedEvent(::System::Action* value);

  /// @brief Method add_hmdUnmountedEvent addr 0x1fa6d68 size 0x9c virtual true final true
  inline void add_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method remove_hmdUnmountedEvent addr 0x1fa6e04 size 0x9c virtual true final true
  inline void remove_hmdUnmountedEvent(::System::Action* value);

  /// @brief Method add_hmdMountedEvent addr 0x1fa6ea0 size 0x9c virtual true final true
  inline void add_hmdMountedEvent(::System::Action* value);

  /// @brief Method remove_hmdMountedEvent addr 0x1fa6f3c size 0x9c virtual true final true
  inline void remove_hmdMountedEvent(::System::Action* value);

  /// @brief Method Awake addr 0x1fa6fd8 size 0x258 virtual false final false
  inline void Awake();

  /// @brief Method GetPoseOffsetForNode addr 0x1fa72f0 size 0x98 virtual true final true
  inline ::GlobalNamespace::EulerPose GetPoseOffsetForNode(::UnityEngine::XR::XRNode node);

  /// @brief Method GetNodePose addr 0x1fa7388 size 0x16c virtual true final true
  inline bool GetNodePose(::UnityEngine::XR::XRNode nodeType, int32_t idx, ByRef<::UnityEngine::Vector3> pos, ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetTriggerValue addr 0x1fa74f4 size 0xc virtual true final true
  inline float_t GetTriggerValue(::UnityEngine::XR::XRNode node);

  /// @brief Method GetAnyJoystickMaxAxis addr 0x1fa7500 size 0x8 virtual true final true
  inline ::UnityEngine::Vector2 GetAnyJoystickMaxAxis();

  /// @brief Method GetThumbstickValue addr 0x1fa7508 size 0xd4 virtual true final true
  inline ::UnityEngine::Vector2 GetThumbstickValue(::UnityEngine::XR::XRNode nodeType);

  /// @brief Method GetMenuButton addr 0x1fa75dc size 0x8 virtual true final true
  inline bool GetMenuButton();

  /// @brief Method GetMenuButtonDown addr 0x1fa75e4 size 0x8 virtual true final true
  inline bool GetMenuButtonDown();

  /// @brief Method RefreshControllersReference addr 0x1fa75ec size 0x1c virtual true final true
  inline void RefreshControllersReference();

  /// @brief Method StopHaptics addr 0x1fa7608 size 0x4 virtual true final true
  inline void StopHaptics(::UnityEngine::XR::XRNode node);

  /// @brief Method TriggerHapticPulse addr 0x1fa760c size 0xa0 virtual true final true
  inline void TriggerHapticPulse(::UnityEngine::XR::XRNode node, float_t duration, float_t strength, float_t frequency);

  /// @brief Method HandleApplicationFocusLost addr 0x1fa76ac size 0x1c virtual false final false
  inline void HandleApplicationFocusLost();

  /// @brief Method HandleApplicationFocusResumed addr 0x1fa76c8 size 0x1c virtual false final false
  inline void HandleApplicationFocusResumed();

  /// @brief Method InputDeviceChangeTriggered addr 0x1fa76e4 size 0x1e4 virtual false final false
  inline void InputDeviceChangeTriggered(::UnityEngine::InputSystem::InputDevice* inputDevice, ::UnityEngine::InputSystem::InputDeviceChange inputDeviceChange);

  /// @brief Method AddControllerToMap addr 0x1fa78c8 size 0x278 virtual false final false
  inline void AddControllerToMap(::UnityEngine::XR::XRNode forNode, ::UnityEngine::InputSystem::InputDevice* device);

  /// @brief Method OnDestroy addr 0x1fa7b40 size 0xa4 virtual false final false
  inline void OnDestroy();

  static inline ::GlobalNamespace::PSVR2Helper* New_ctor();

  /// @brief Method .ctor addr 0x1fa7be4 size 0x10 virtual false final false
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

  /// @brief Field _controllers, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::GlobalNamespace::UnityXRController*>* ____controllers;

  /// @brief Field _controllersWithRumble, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::XRNode, ::UnityEngine::InputSystem::XR::XRControllerWithRumble*>* ____controllersWithRumble;

  /// @brief Field controllersDidChangeReferenceEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___controllersDidChangeReferenceEvent;

  /// @brief Field _hasVrFocus, offset: 0x40, size: 0x1, def value: None
  bool ____hasVrFocus;

  /// @brief Field inputFocusWasCapturedEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasCapturedEvent;

  /// @brief Field inputFocusWasReleasedEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action* ___inputFocusWasReleasedEvent;

  /// @brief Field vrFocusWasCapturedEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasCapturedEvent;

  /// @brief Field vrFocusWasReleasedEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action* ___vrFocusWasReleasedEvent;

  /// @brief Field hmdUnmountedEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action* ___hmdUnmountedEvent;

  /// @brief Field hmdMountedEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action* ___hmdMountedEvent;

  /// @brief Field kRightControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kRightControllerName{ u"PSVR2ControllerRight" };

  /// @brief Field kLeftControllerName offset 0xffffffff size 0x8
  static constexpr ::ConstString kLeftControllerName{ u"PSVR2ControllerLeft" };

  /// @brief Field kRumbleMinimalDuration offset 0xffffffff size 0x4
  static constexpr float_t kRumbleMinimalDuration{ 0.05 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PSVR2Helper, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____leftController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____rightController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____controllers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____controllersWithRumble) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___controllersDidChangeReferenceEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ____hasVrFocus) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___inputFocusWasCapturedEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___inputFocusWasReleasedEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrFocusWasCapturedEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___vrFocusWasReleasedEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___hmdUnmountedEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PSVR2Helper, ___hmdMountedEvent) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PSVR2Helper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PSVR2Helper*, "", "PSVR2Helper");
