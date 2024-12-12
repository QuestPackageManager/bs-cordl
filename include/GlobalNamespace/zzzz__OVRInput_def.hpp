#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput)
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis1DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis2DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualButtonMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualNearTouchMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualTouchMap;
}
namespace GlobalNamespace {
struct OVRInput_Axis1D;
}
namespace GlobalNamespace {
struct OVRInput_Axis2D;
}
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace GlobalNamespace {
struct OVRInput_ControllerInHandState;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
struct OVRInput_Hand;
}
namespace GlobalNamespace {
struct OVRInput_Handedness;
}
namespace GlobalNamespace {
class OVRInput_HapticInfo;
}
namespace GlobalNamespace {
struct OVRInput_HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct OVRInput_HapticsLocation;
}
namespace GlobalNamespace {
struct OVRInput_HapticsPcmVibration;
}
namespace GlobalNamespace {
struct OVRInput_InputDeviceShowState;
}
namespace GlobalNamespace {
struct OVRInput_InteractionProfile;
}
namespace GlobalNamespace {
struct OVRInput_NearTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerBase;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerHands;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRemote;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerTouch;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRButton;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRControllerDetails;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRController;
}
namespace GlobalNamespace {
struct OVRInput_RawAxis1D;
}
namespace GlobalNamespace {
struct OVRInput_RawAxis2D;
}
namespace GlobalNamespace {
struct OVRInput_RawButton;
}
namespace GlobalNamespace {
struct OVRInput_RawNearTouch;
}
namespace GlobalNamespace {
struct OVRInput_RawTouch;
}
namespace GlobalNamespace {
struct OVRInput_Touch;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState6;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Version;
}
namespace UnityEngine::XR {
struct XRNode;
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
struct OVRInput_Axis1D;
}
namespace GlobalNamespace {
struct OVRInput_Axis2D;
}
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
struct OVRInput_ControllerInHandState;
}
namespace GlobalNamespace {
struct OVRInput_Hand;
}
namespace GlobalNamespace {
struct OVRInput_Handedness;
}
namespace GlobalNamespace {
struct OVRInput_HapticsLocation;
}
namespace GlobalNamespace {
struct OVRInput_InputDeviceShowState;
}
namespace GlobalNamespace {
struct OVRInput_InteractionProfile;
}
namespace GlobalNamespace {
struct OVRInput_NearTouch;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRButton;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRController;
}
namespace GlobalNamespace {
struct OVRInput_RawAxis1D;
}
namespace GlobalNamespace {
struct OVRInput_RawAxis2D;
}
namespace GlobalNamespace {
struct OVRInput_RawButton;
}
namespace GlobalNamespace {
struct OVRInput_RawNearTouch;
}
namespace GlobalNamespace {
struct OVRInput_RawTouch;
}
namespace GlobalNamespace {
struct OVRInput_Touch;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis1DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualAxis2DMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualButtonMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualNearTouchMap;
}
namespace GlobalNamespace {
class OVRControllerBase_OVRInput_VirtualTouchMap;
}
namespace GlobalNamespace {
class OVRInput;
}
namespace GlobalNamespace {
class OVRInput_HapticInfo;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerBase;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerHands;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerLTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRHand;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRTouch;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerRemote;
}
namespace GlobalNamespace {
class OVRInput_OVRControllerTouch;
}
namespace GlobalNamespace {
struct OVRInput_HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct OVRInput_HapticsPcmVibration;
}
namespace GlobalNamespace {
struct OVRInput_OpenVRControllerDetails;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_Axis1D);
MARK_VAL_T(::GlobalNamespace::OVRInput_Axis2D);
MARK_VAL_T(::GlobalNamespace::OVRInput_Button);
MARK_VAL_T(::GlobalNamespace::OVRInput_Controller);
MARK_VAL_T(::GlobalNamespace::OVRInput_ControllerInHandState);
MARK_VAL_T(::GlobalNamespace::OVRInput_Hand);
MARK_VAL_T(::GlobalNamespace::OVRInput_Handedness);
MARK_VAL_T(::GlobalNamespace::OVRInput_HapticsLocation);
MARK_VAL_T(::GlobalNamespace::OVRInput_InputDeviceShowState);
MARK_VAL_T(::GlobalNamespace::OVRInput_InteractionProfile);
MARK_VAL_T(::GlobalNamespace::OVRInput_NearTouch);
MARK_VAL_T(::GlobalNamespace::OVRInput_OpenVRButton);
MARK_VAL_T(::GlobalNamespace::OVRInput_OpenVRController);
MARK_VAL_T(::GlobalNamespace::OVRInput_RawAxis1D);
MARK_VAL_T(::GlobalNamespace::OVRInput_RawAxis2D);
MARK_VAL_T(::GlobalNamespace::OVRInput_RawButton);
MARK_VAL_T(::GlobalNamespace::OVRInput_RawNearTouch);
MARK_VAL_T(::GlobalNamespace::OVRInput_RawTouch);
MARK_VAL_T(::GlobalNamespace::OVRInput_Touch);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap);
MARK_REF_PTR_T(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_HapticInfo);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerBase);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerGamepadPC);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerHands);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerLHand);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerLTouch);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerRHand);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerRTouch);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerRemote);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput_OVRControllerTouch);
MARK_VAL_T(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration);
MARK_VAL_T(::GlobalNamespace::OVRInput_HapticsPcmVibration);
MARK_VAL_T(::GlobalNamespace::OVRInput_OpenVRControllerDetails);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Button
struct CORDL_TYPE OVRInput_Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Button_Unwrapped
  enum struct __OVRInput_Button_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Three = static_cast<int32_t>(0x4),
    __E_Four = static_cast<int32_t>(0x8),
    __E_Start = static_cast<int32_t>(0x100),
    __E_Back = static_cast<int32_t>(0x200),
    __E_PrimaryShoulder = static_cast<int32_t>(0x1000),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x2000),
    __E_PrimaryHandTrigger = static_cast<int32_t>(0x4000),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x8000),
    __E_PrimaryThumbstickUp = static_cast<int32_t>(0x10000),
    __E_PrimaryThumbstickDown = static_cast<int32_t>(0x20000),
    __E_PrimaryThumbstickLeft = static_cast<int32_t>(0x40000),
    __E_PrimaryThumbstickRight = static_cast<int32_t>(0x80000),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x400),
    __E_SecondaryShoulder = static_cast<int32_t>(0x100000),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x200000),
    __E_SecondaryHandTrigger = static_cast<int32_t>(0x400000),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x800000),
    __E_SecondaryThumbstickUp = static_cast<int32_t>(0x1000000),
    __E_SecondaryThumbstickDown = static_cast<int32_t>(0x2000000),
    __E_SecondaryThumbstickLeft = static_cast<int32_t>(0x4000000),
    __E_SecondaryThumbstickRight = static_cast<int32_t>(0x8000000),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x800),
    __E_DpadUp = static_cast<int32_t>(0x10),
    __E_DpadDown = static_cast<int32_t>(0x20),
    __E_DpadLeft = static_cast<int32_t>(0x40),
    __E_DpadRight = static_cast<int32_t>(0x80),
    __E_Up = static_cast<int32_t>(0x10000000),
    __E_Down = static_cast<int32_t>(0x20000000),
    __E_Left = static_cast<int32_t>(0x40000000),
    __E_Right = static_cast<int32_t>(0x80000000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Button_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Button(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_Button const Any;

  /// @brief Field Back value: I32(512)
  static ::GlobalNamespace::OVRInput_Button const Back;

  /// @brief Field Down value: I32(536870912)
  static ::GlobalNamespace::OVRInput_Button const Down;

  /// @brief Field DpadDown value: I32(32)
  static ::GlobalNamespace::OVRInput_Button const DpadDown;

  /// @brief Field DpadLeft value: I32(64)
  static ::GlobalNamespace::OVRInput_Button const DpadLeft;

  /// @brief Field DpadRight value: I32(128)
  static ::GlobalNamespace::OVRInput_Button const DpadRight;

  /// @brief Field DpadUp value: I32(16)
  static ::GlobalNamespace::OVRInput_Button const DpadUp;

  /// @brief Field Four value: I32(8)
  static ::GlobalNamespace::OVRInput_Button const Four;

  /// @brief Field Left value: I32(1073741824)
  static ::GlobalNamespace::OVRInput_Button const Left;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_Button const None;

  /// @brief Field One value: I32(1)
  static ::GlobalNamespace::OVRInput_Button const One;

  /// @brief Field PrimaryHandTrigger value: I32(16384)
  static ::GlobalNamespace::OVRInput_Button const PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger value: I32(8192)
  static ::GlobalNamespace::OVRInput_Button const PrimaryIndexTrigger;

  /// @brief Field PrimaryShoulder value: I32(4096)
  static ::GlobalNamespace::OVRInput_Button const PrimaryShoulder;

  /// @brief Field PrimaryThumbstick value: I32(32768)
  static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickDown value: I32(131072)
  static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft value: I32(262144)
  static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight value: I32(524288)
  static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickRight;

  /// @brief Field PrimaryThumbstickUp value: I32(65536)
  static ::GlobalNamespace::OVRInput_Button const PrimaryThumbstickUp;

  /// @brief Field PrimaryTouchpad value: I32(1024)
  static ::GlobalNamespace::OVRInput_Button const PrimaryTouchpad;

  /// @brief Field Right value: I32(-2147483648)
  static ::GlobalNamespace::OVRInput_Button const Right;

  /// @brief Field SecondaryHandTrigger value: I32(4194304)
  static ::GlobalNamespace::OVRInput_Button const SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger value: I32(2097152)
  static ::GlobalNamespace::OVRInput_Button const SecondaryIndexTrigger;

  /// @brief Field SecondaryShoulder value: I32(1048576)
  static ::GlobalNamespace::OVRInput_Button const SecondaryShoulder;

  /// @brief Field SecondaryThumbstick value: I32(8388608)
  static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickDown value: I32(33554432)
  static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft value: I32(67108864)
  static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight value: I32(134217728)
  static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickRight;

  /// @brief Field SecondaryThumbstickUp value: I32(16777216)
  static ::GlobalNamespace::OVRInput_Button const SecondaryThumbstickUp;

  /// @brief Field SecondaryTouchpad value: I32(2048)
  static ::GlobalNamespace::OVRInput_Button const SecondaryTouchpad;

  /// @brief Field Start value: I32(256)
  static ::GlobalNamespace::OVRInput_Button const Start;

  /// @brief Field Three value: I32(4)
  static ::GlobalNamespace::OVRInput_Button const Three;

  /// @brief Field Two value: I32(2)
  static ::GlobalNamespace::OVRInput_Button const Two;

  /// @brief Field Up value: I32(268435456)
  static ::GlobalNamespace::OVRInput_Button const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7898 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Button, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Button, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawButton
struct CORDL_TYPE OVRInput_RawButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_RawButton_Unwrapped
  enum struct __OVRInput_RawButton_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_X = static_cast<int32_t>(0x100),
    __E_Y = static_cast<int32_t>(0x200),
    __E_Start = static_cast<int32_t>(0x100000),
    __E_Back = static_cast<int32_t>(0x200000),
    __E_LShoulder = static_cast<int32_t>(0x800),
    __E_LIndexTrigger = static_cast<int32_t>(0x10000000),
    __E_LHandTrigger = static_cast<int32_t>(0x20000000),
    __E_LThumbstick = static_cast<int32_t>(0x400),
    __E_LThumbstickUp = static_cast<int32_t>(0x10),
    __E_LThumbstickDown = static_cast<int32_t>(0x20),
    __E_LThumbstickLeft = static_cast<int32_t>(0x40),
    __E_LThumbstickRight = static_cast<int32_t>(0x80),
    __E_LTouchpad = static_cast<int32_t>(0x40000000),
    __E_RShoulder = static_cast<int32_t>(0x8),
    __E_RIndexTrigger = static_cast<int32_t>(0x4000000),
    __E_RHandTrigger = static_cast<int32_t>(0x8000000),
    __E_RThumbstick = static_cast<int32_t>(0x4),
    __E_RThumbstickUp = static_cast<int32_t>(0x1000),
    __E_RThumbstickDown = static_cast<int32_t>(0x2000),
    __E_RThumbstickLeft = static_cast<int32_t>(0x4000),
    __E_RThumbstickRight = static_cast<int32_t>(0x8000),
    __E_RTouchpad = static_cast<int32_t>(0x80000000),
    __E_DpadUp = static_cast<int32_t>(0x10000),
    __E_DpadDown = static_cast<int32_t>(0x20000),
    __E_DpadLeft = static_cast<int32_t>(0x40000),
    __E_DpadRight = static_cast<int32_t>(0x80000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_RawButton_Unwrapped() const noexcept {
    return static_cast<__OVRInput_RawButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_RawButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_RawButton(int32_t value__) noexcept;

  /// @brief Field A value: I32(1)
  static ::GlobalNamespace::OVRInput_RawButton const A;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_RawButton const Any;

  /// @brief Field B value: I32(2)
  static ::GlobalNamespace::OVRInput_RawButton const B;

  /// @brief Field Back value: I32(2097152)
  static ::GlobalNamespace::OVRInput_RawButton const Back;

  /// @brief Field DpadDown value: I32(131072)
  static ::GlobalNamespace::OVRInput_RawButton const DpadDown;

  /// @brief Field DpadLeft value: I32(262144)
  static ::GlobalNamespace::OVRInput_RawButton const DpadLeft;

  /// @brief Field DpadRight value: I32(524288)
  static ::GlobalNamespace::OVRInput_RawButton const DpadRight;

  /// @brief Field DpadUp value: I32(65536)
  static ::GlobalNamespace::OVRInput_RawButton const DpadUp;

  /// @brief Field LHandTrigger value: I32(536870912)
  static ::GlobalNamespace::OVRInput_RawButton const LHandTrigger;

  /// @brief Field LIndexTrigger value: I32(268435456)
  static ::GlobalNamespace::OVRInput_RawButton const LIndexTrigger;

  /// @brief Field LShoulder value: I32(2048)
  static ::GlobalNamespace::OVRInput_RawButton const LShoulder;

  /// @brief Field LThumbstick value: I32(1024)
  static ::GlobalNamespace::OVRInput_RawButton const LThumbstick;

  /// @brief Field LThumbstickDown value: I32(32)
  static ::GlobalNamespace::OVRInput_RawButton const LThumbstickDown;

  /// @brief Field LThumbstickLeft value: I32(64)
  static ::GlobalNamespace::OVRInput_RawButton const LThumbstickLeft;

  /// @brief Field LThumbstickRight value: I32(128)
  static ::GlobalNamespace::OVRInput_RawButton const LThumbstickRight;

  /// @brief Field LThumbstickUp value: I32(16)
  static ::GlobalNamespace::OVRInput_RawButton const LThumbstickUp;

  /// @brief Field LTouchpad value: I32(1073741824)
  static ::GlobalNamespace::OVRInput_RawButton const LTouchpad;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_RawButton const None;

  /// @brief Field RHandTrigger value: I32(134217728)
  static ::GlobalNamespace::OVRInput_RawButton const RHandTrigger;

  /// @brief Field RIndexTrigger value: I32(67108864)
  static ::GlobalNamespace::OVRInput_RawButton const RIndexTrigger;

  /// @brief Field RShoulder value: I32(8)
  static ::GlobalNamespace::OVRInput_RawButton const RShoulder;

  /// @brief Field RThumbstick value: I32(4)
  static ::GlobalNamespace::OVRInput_RawButton const RThumbstick;

  /// @brief Field RThumbstickDown value: I32(8192)
  static ::GlobalNamespace::OVRInput_RawButton const RThumbstickDown;

  /// @brief Field RThumbstickLeft value: I32(16384)
  static ::GlobalNamespace::OVRInput_RawButton const RThumbstickLeft;

  /// @brief Field RThumbstickRight value: I32(32768)
  static ::GlobalNamespace::OVRInput_RawButton const RThumbstickRight;

  /// @brief Field RThumbstickUp value: I32(4096)
  static ::GlobalNamespace::OVRInput_RawButton const RThumbstickUp;

  /// @brief Field RTouchpad value: I32(-2147483648)
  static ::GlobalNamespace::OVRInput_RawButton const RTouchpad;

  /// @brief Field Start value: I32(1048576)
  static ::GlobalNamespace::OVRInput_RawButton const Start;

  /// @brief Field X value: I32(256)
  static ::GlobalNamespace::OVRInput_RawButton const X;

  /// @brief Field Y value: I32(512)
  static ::GlobalNamespace::OVRInput_RawButton const Y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_RawButton, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Touch
struct CORDL_TYPE OVRInput_Touch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Touch_Unwrapped
  enum struct __OVRInput_Touch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_One = static_cast<int32_t>(0x1),
    __E_Two = static_cast<int32_t>(0x2),
    __E_Three = static_cast<int32_t>(0x4),
    __E_Four = static_cast<int32_t>(0x8),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x2000),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x8000),
    __E_PrimaryThumbRest = static_cast<int32_t>(0x1000),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x400),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x200000),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x800000),
    __E_SecondaryThumbRest = static_cast<int32_t>(0x100000),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x800),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Touch_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Touch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Touch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Touch(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_Touch const Any;

  /// @brief Field Four value: I32(8)
  static ::GlobalNamespace::OVRInput_Touch const Four;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_Touch const None;

  /// @brief Field One value: I32(1)
  static ::GlobalNamespace::OVRInput_Touch const One;

  /// @brief Field PrimaryIndexTrigger value: I32(8192)
  static ::GlobalNamespace::OVRInput_Touch const PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbRest value: I32(4096)
  static ::GlobalNamespace::OVRInput_Touch const PrimaryThumbRest;

  /// @brief Field PrimaryThumbstick value: I32(32768)
  static ::GlobalNamespace::OVRInput_Touch const PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad value: I32(1024)
  static ::GlobalNamespace::OVRInput_Touch const PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger value: I32(2097152)
  static ::GlobalNamespace::OVRInput_Touch const SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbRest value: I32(1048576)
  static ::GlobalNamespace::OVRInput_Touch const SecondaryThumbRest;

  /// @brief Field SecondaryThumbstick value: I32(8388608)
  static ::GlobalNamespace::OVRInput_Touch const SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad value: I32(2048)
  static ::GlobalNamespace::OVRInput_Touch const SecondaryTouchpad;

  /// @brief Field Three value: I32(4)
  static ::GlobalNamespace::OVRInput_Touch const Three;

  /// @brief Field Two value: I32(2)
  static ::GlobalNamespace::OVRInput_Touch const Two;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7900 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Touch, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Touch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawTouch
struct CORDL_TYPE OVRInput_RawTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_RawTouch_Unwrapped
  enum struct __OVRInput_RawTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_X = static_cast<int32_t>(0x100),
    __E_Y = static_cast<int32_t>(0x200),
    __E_LIndexTrigger = static_cast<int32_t>(0x1000),
    __E_LThumbstick = static_cast<int32_t>(0x400),
    __E_LThumbRest = static_cast<int32_t>(0x800),
    __E_LTouchpad = static_cast<int32_t>(0x40000000),
    __E_RIndexTrigger = static_cast<int32_t>(0x10),
    __E_RThumbstick = static_cast<int32_t>(0x4),
    __E_RThumbRest = static_cast<int32_t>(0x8),
    __E_RTouchpad = static_cast<int32_t>(0x80000000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_RawTouch_Unwrapped() const noexcept {
    return static_cast<__OVRInput_RawTouch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_RawTouch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_RawTouch(int32_t value__) noexcept;

  /// @brief Field A value: I32(1)
  static ::GlobalNamespace::OVRInput_RawTouch const A;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_RawTouch const Any;

  /// @brief Field B value: I32(2)
  static ::GlobalNamespace::OVRInput_RawTouch const B;

  /// @brief Field LIndexTrigger value: I32(4096)
  static ::GlobalNamespace::OVRInput_RawTouch const LIndexTrigger;

  /// @brief Field LThumbRest value: I32(2048)
  static ::GlobalNamespace::OVRInput_RawTouch const LThumbRest;

  /// @brief Field LThumbstick value: I32(1024)
  static ::GlobalNamespace::OVRInput_RawTouch const LThumbstick;

  /// @brief Field LTouchpad value: I32(1073741824)
  static ::GlobalNamespace::OVRInput_RawTouch const LTouchpad;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_RawTouch const None;

  /// @brief Field RIndexTrigger value: I32(16)
  static ::GlobalNamespace::OVRInput_RawTouch const RIndexTrigger;

  /// @brief Field RThumbRest value: I32(8)
  static ::GlobalNamespace::OVRInput_RawTouch const RThumbRest;

  /// @brief Field RThumbstick value: I32(4)
  static ::GlobalNamespace::OVRInput_RawTouch const RThumbstick;

  /// @brief Field RTouchpad value: I32(-2147483648)
  static ::GlobalNamespace::OVRInput_RawTouch const RTouchpad;

  /// @brief Field X value: I32(256)
  static ::GlobalNamespace::OVRInput_RawTouch const X;

  /// @brief Field Y value: I32(512)
  static ::GlobalNamespace::OVRInput_RawTouch const Y;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7901 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawTouch, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_RawTouch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/NearTouch
struct CORDL_TYPE OVRInput_NearTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_NearTouch_Unwrapped
  enum struct __OVRInput_NearTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
    __E_PrimaryThumbButtons = static_cast<int32_t>(0x2),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x4),
    __E_SecondaryThumbButtons = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_NearTouch_Unwrapped() const noexcept {
    return static_cast<__OVRInput_NearTouch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_NearTouch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_NearTouch(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_NearTouch const Any;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_NearTouch const None;

  /// @brief Field PrimaryIndexTrigger value: I32(1)
  static ::GlobalNamespace::OVRInput_NearTouch const PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons value: I32(2)
  static ::GlobalNamespace::OVRInput_NearTouch const PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger value: I32(4)
  static ::GlobalNamespace::OVRInput_NearTouch const SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons value: I32(8)
  static ::GlobalNamespace::OVRInput_NearTouch const SecondaryThumbButtons;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7902 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_NearTouch, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_NearTouch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawNearTouch
struct CORDL_TYPE OVRInput_RawNearTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_RawNearTouch_Unwrapped
  enum struct __OVRInput_RawNearTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LIndexTrigger = static_cast<int32_t>(0x1),
    __E_LThumbButtons = static_cast<int32_t>(0x2),
    __E_RIndexTrigger = static_cast<int32_t>(0x4),
    __E_RThumbButtons = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_RawNearTouch_Unwrapped() const noexcept {
    return static_cast<__OVRInput_RawNearTouch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_RawNearTouch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_RawNearTouch(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_RawNearTouch const Any;

  /// @brief Field LIndexTrigger value: I32(1)
  static ::GlobalNamespace::OVRInput_RawNearTouch const LIndexTrigger;

  /// @brief Field LThumbButtons value: I32(2)
  static ::GlobalNamespace::OVRInput_RawNearTouch const LThumbButtons;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_RawNearTouch const None;

  /// @brief Field RIndexTrigger value: I32(4)
  static ::GlobalNamespace::OVRInput_RawNearTouch const RIndexTrigger;

  /// @brief Field RThumbButtons value: I32(8)
  static ::GlobalNamespace::OVRInput_RawNearTouch const RThumbButtons;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7903 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawNearTouch, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_RawNearTouch, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Axis1D
struct CORDL_TYPE OVRInput_Axis1D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Axis1D_Unwrapped
  enum struct __OVRInput_Axis1D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
    __E_PrimaryHandTrigger = static_cast<int32_t>(0x4),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x2),
    __E_SecondaryHandTrigger = static_cast<int32_t>(0x8),
    __E_PrimaryIndexTriggerCurl = static_cast<int32_t>(0x10),
    __E_PrimaryIndexTriggerSlide = static_cast<int32_t>(0x20),
    __E_PrimaryThumbRestForce = static_cast<int32_t>(0x40),
    __E_PrimaryStylusForce = static_cast<int32_t>(0x80),
    __E_SecondaryIndexTriggerCurl = static_cast<int32_t>(0x100),
    __E_SecondaryIndexTriggerSlide = static_cast<int32_t>(0x200),
    __E_SecondaryThumbRestForce = static_cast<int32_t>(0x400),
    __E_SecondaryStylusForce = static_cast<int32_t>(0x800),
    __E_PrimaryIndexTriggerForce = static_cast<int32_t>(0x1000),
    __E_SecondaryIndexTriggerForce = static_cast<int32_t>(0x2000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Axis1D_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Axis1D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Axis1D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Axis1D(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_Axis1D const Any;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_Axis1D const None;

  /// @brief Field PrimaryHandTrigger value: I32(4)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger value: I32(1)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTrigger;

  /// @brief Field PrimaryIndexTriggerCurl value: I32(16)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerForce value: I32(4096)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTriggerForce;

  /// @brief Field PrimaryIndexTriggerSlide value: I32(32)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryStylusForce value: I32(128)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryStylusForce;

  /// @brief Field PrimaryThumbRestForce value: I32(64)
  static ::GlobalNamespace::OVRInput_Axis1D const PrimaryThumbRestForce;

  /// @brief Field SecondaryHandTrigger value: I32(8)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger value: I32(2)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTrigger;

  /// @brief Field SecondaryIndexTriggerCurl value: I32(256)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerForce value: I32(8192)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerSlide value: I32(512)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryStylusForce value: I32(2048)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryStylusForce;

  /// @brief Field SecondaryThumbRestForce value: I32(1024)
  static ::GlobalNamespace::OVRInput_Axis1D const SecondaryThumbRestForce;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7904 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Axis1D, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Axis1D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawAxis1D
struct CORDL_TYPE OVRInput_RawAxis1D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_RawAxis1D_Unwrapped
  enum struct __OVRInput_RawAxis1D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LIndexTrigger = static_cast<int32_t>(0x1),
    __E_LHandTrigger = static_cast<int32_t>(0x4),
    __E_RIndexTrigger = static_cast<int32_t>(0x2),
    __E_RHandTrigger = static_cast<int32_t>(0x8),
    __E_LIndexTriggerCurl = static_cast<int32_t>(0x10),
    __E_LIndexTriggerSlide = static_cast<int32_t>(0x20),
    __E_LThumbRestForce = static_cast<int32_t>(0x40),
    __E_LStylusForce = static_cast<int32_t>(0x80),
    __E_RIndexTriggerCurl = static_cast<int32_t>(0x100),
    __E_RIndexTriggerSlide = static_cast<int32_t>(0x200),
    __E_RThumbRestForce = static_cast<int32_t>(0x400),
    __E_RStylusForce = static_cast<int32_t>(0x800),
    __E_LIndexTriggerForce = static_cast<int32_t>(0x1000),
    __E_RIndexTriggerForce = static_cast<int32_t>(0x2000),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_RawAxis1D_Unwrapped() const noexcept {
    return static_cast<__OVRInput_RawAxis1D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_RawAxis1D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_RawAxis1D(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_RawAxis1D const Any;

  /// @brief Field LHandTrigger value: I32(4)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LHandTrigger;

  /// @brief Field LIndexTrigger value: I32(1)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTrigger;

  /// @brief Field LIndexTriggerCurl value: I32(16)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTriggerCurl;

  /// @brief Field LIndexTriggerForce value: I32(4096)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTriggerForce;

  /// @brief Field LIndexTriggerSlide value: I32(32)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LIndexTriggerSlide;

  /// @brief Field LStylusForce value: I32(128)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LStylusForce;

  /// @brief Field LThumbRestForce value: I32(64)
  static ::GlobalNamespace::OVRInput_RawAxis1D const LThumbRestForce;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_RawAxis1D const None;

  /// @brief Field RHandTrigger value: I32(8)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RHandTrigger;

  /// @brief Field RIndexTrigger value: I32(2)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTrigger;

  /// @brief Field RIndexTriggerCurl value: I32(256)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTriggerCurl;

  /// @brief Field RIndexTriggerForce value: I32(8192)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTriggerForce;

  /// @brief Field RIndexTriggerSlide value: I32(512)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RIndexTriggerSlide;

  /// @brief Field RStylusForce value: I32(2048)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RStylusForce;

  /// @brief Field RThumbRestForce value: I32(1024)
  static ::GlobalNamespace::OVRInput_RawAxis1D const RThumbRestForce;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7905 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawAxis1D, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_RawAxis1D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Axis2D
struct CORDL_TYPE OVRInput_Axis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Axis2D_Unwrapped
  enum struct __OVRInput_Axis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x1),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x4),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x2),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Axis2D_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Axis2D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Axis2D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Axis2D(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_Axis2D const Any;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_Axis2D const None;

  /// @brief Field PrimaryThumbstick value: I32(1)
  static ::GlobalNamespace::OVRInput_Axis2D const PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad value: I32(4)
  static ::GlobalNamespace::OVRInput_Axis2D const PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick value: I32(2)
  static ::GlobalNamespace::OVRInput_Axis2D const SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad value: I32(8)
  static ::GlobalNamespace::OVRInput_Axis2D const SecondaryTouchpad;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7906 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Axis2D, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Axis2D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawAxis2D
struct CORDL_TYPE OVRInput_RawAxis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_RawAxis2D_Unwrapped
  enum struct __OVRInput_RawAxis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LThumbstick = static_cast<int32_t>(0x1),
    __E_LTouchpad = static_cast<int32_t>(0x4),
    __E_RThumbstick = static_cast<int32_t>(0x2),
    __E_RTouchpad = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_RawAxis2D_Unwrapped() const noexcept {
    return static_cast<__OVRInput_RawAxis2D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_RawAxis2D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_RawAxis2D(int32_t value__) noexcept;

  /// @brief Field Any value: I32(-1)
  static ::GlobalNamespace::OVRInput_RawAxis2D const Any;

  /// @brief Field LThumbstick value: I32(1)
  static ::GlobalNamespace::OVRInput_RawAxis2D const LThumbstick;

  /// @brief Field LTouchpad value: I32(4)
  static ::GlobalNamespace::OVRInput_RawAxis2D const LTouchpad;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_RawAxis2D const None;

  /// @brief Field RThumbstick value: I32(2)
  static ::GlobalNamespace::OVRInput_RawAxis2D const RThumbstick;

  /// @brief Field RTouchpad value: I32(8)
  static ::GlobalNamespace::OVRInput_RawAxis2D const RTouchpad;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7907 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawAxis2D, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_RawAxis2D, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/OpenVRButton
struct CORDL_TYPE OVRInput_OpenVRButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct __OVRInput_OpenVRButton_Unwrapped
  enum struct __OVRInput_OpenVRButton_Unwrapped : uint64_t {
    __E_None = static_cast<uint64_t>(0x0u),
    __E_Two = static_cast<uint64_t>(0x2u),
    __E_Thumbstick = static_cast<uint64_t>(0x100000000u),
    __E_Grip = static_cast<uint64_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_OpenVRButton_Unwrapped() const noexcept {
    return static_cast<__OVRInput_OpenVRButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OpenVRButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRInput_OpenVRButton(uint64_t value__) noexcept;

  /// @brief Field Grip value: U64(4)
  static ::GlobalNamespace::OVRInput_OpenVRButton const Grip;

  /// @brief Field None value: U64(0)
  static ::GlobalNamespace::OVRInput_OpenVRButton const None;

  /// @brief Field Thumbstick value: U64(4294967296)
  static ::GlobalNamespace::OVRInput_OpenVRButton const Thumbstick;

  /// @brief Field Two value: U64(2)
  static ::GlobalNamespace::OVRInput_OpenVRButton const Two;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7908 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OpenVRButton, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Controller
struct CORDL_TYPE OVRInput_Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Controller_Unwrapped
  enum struct __OVRInput_Controller_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LTouch = static_cast<int32_t>(0x1),
    __E_RTouch = static_cast<int32_t>(0x2),
    __E_Touch = static_cast<int32_t>(0x3),
    __E_Remote = static_cast<int32_t>(0x4),
    __E_Gamepad = static_cast<int32_t>(0x10),
    __E_Hands = static_cast<int32_t>(0x60),
    __E_LHand = static_cast<int32_t>(0x20),
    __E_RHand = static_cast<int32_t>(0x40),
    __E_Active = static_cast<int32_t>(0x80000000),
    __E_All = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Controller_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Controller_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Controller();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Controller(int32_t value__) noexcept;

  /// @brief Field Active value: I32(-2147483648)
  static ::GlobalNamespace::OVRInput_Controller const Active;

  /// @brief Field All value: I32(-1)
  static ::GlobalNamespace::OVRInput_Controller const All;

  /// @brief Field Gamepad value: I32(16)
  static ::GlobalNamespace::OVRInput_Controller const Gamepad;

  /// @brief Field Hands value: I32(96)
  static ::GlobalNamespace::OVRInput_Controller const Hands;

  /// @brief Field LHand value: I32(32)
  static ::GlobalNamespace::OVRInput_Controller const LHand;

  /// @brief Field LTouch value: I32(1)
  static ::GlobalNamespace::OVRInput_Controller const LTouch;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_Controller const None;

  /// @brief Field RHand value: I32(64)
  static ::GlobalNamespace::OVRInput_Controller const RHand;

  /// @brief Field RTouch value: I32(2)
  static ::GlobalNamespace::OVRInput_Controller const RTouch;

  /// @brief Field Remote value: I32(4)
  static ::GlobalNamespace::OVRInput_Controller const Remote;

  /// @brief Field Touch value: I32(3)
  static ::GlobalNamespace::OVRInput_Controller const Touch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7909 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Controller, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Controller, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Handedness
struct CORDL_TYPE OVRInput_Handedness {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Handedness_Unwrapped
  enum struct __OVRInput_Handedness_Unwrapped : int32_t {
    __E_Unsupported = static_cast<int32_t>(0x0),
    __E_LeftHanded = static_cast<int32_t>(0x1),
    __E_RightHanded = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Handedness_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Handedness_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Handedness();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Handedness(int32_t value__) noexcept;

  /// @brief Field LeftHanded value: I32(1)
  static ::GlobalNamespace::OVRInput_Handedness const LeftHanded;

  /// @brief Field RightHanded value: I32(2)
  static ::GlobalNamespace::OVRInput_Handedness const RightHanded;

  /// @brief Field Unsupported value: I32(0)
  static ::GlobalNamespace::OVRInput_Handedness const Unsupported;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7910 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Handedness, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Handedness, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/HapticsLocation
struct CORDL_TYPE OVRInput_HapticsLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_HapticsLocation_Unwrapped
  enum struct __OVRInput_HapticsLocation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hand = static_cast<int32_t>(0x1),
    __E_Thumb = static_cast<int32_t>(0x2),
    __E_Index = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_HapticsLocation_Unwrapped() const noexcept {
    return static_cast<__OVRInput_HapticsLocation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_HapticsLocation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_HapticsLocation(int32_t value__) noexcept;

  /// @brief Field Hand value: I32(1)
  static ::GlobalNamespace::OVRInput_HapticsLocation const Hand;

  /// @brief Field Index value: I32(4)
  static ::GlobalNamespace::OVRInput_HapticsLocation const Index;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_HapticsLocation const None;

  /// @brief Field Thumb value: I32(2)
  static ::GlobalNamespace::OVRInput_HapticsLocation const Thumb;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7911 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsLocation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_HapticsLocation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/InteractionProfile
struct CORDL_TYPE OVRInput_InteractionProfile {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_InteractionProfile_Unwrapped
  enum struct __OVRInput_InteractionProfile_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Touch = static_cast<int32_t>(0x1),
    __E_TouchPro = static_cast<int32_t>(0x2),
    __E_TouchPlus = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_InteractionProfile_Unwrapped() const noexcept {
    return static_cast<__OVRInput_InteractionProfile_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_InteractionProfile();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_InteractionProfile(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::GlobalNamespace::OVRInput_InteractionProfile const None;

  /// @brief Field Touch value: I32(1)
  static ::GlobalNamespace::OVRInput_InteractionProfile const Touch;

  /// @brief Field TouchPlus value: I32(4)
  static ::GlobalNamespace::OVRInput_InteractionProfile const TouchPlus;

  /// @brief Field TouchPro value: I32(2)
  static ::GlobalNamespace::OVRInput_InteractionProfile const TouchPro;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7912 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_InteractionProfile, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_InteractionProfile, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Hand
struct CORDL_TYPE OVRInput_Hand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_Hand_Unwrapped
  enum struct __OVRInput_Hand_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_Hand_Unwrapped() const noexcept {
    return static_cast<__OVRInput_Hand_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_Hand();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_Hand(int32_t value__) noexcept;

  /// @brief Field HandLeft value: I32(0)
  static ::GlobalNamespace::OVRInput_Hand const HandLeft;

  /// @brief Field HandRight value: I32(1)
  static ::GlobalNamespace::OVRInput_Hand const HandRight;

  /// @brief Field None value: I32(-1)
  static ::GlobalNamespace::OVRInput_Hand const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7913 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Hand, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_Hand, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/InputDeviceShowState
struct CORDL_TYPE OVRInput_InputDeviceShowState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_InputDeviceShowState_Unwrapped
  enum struct __OVRInput_InputDeviceShowState_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_ControllerInHandOrNoHand = static_cast<int32_t>(0x1),
    __E_ControllerInHand = static_cast<int32_t>(0x2),
    __E_ControllerNotInHand = static_cast<int32_t>(0x3),
    __E_NoHand = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_InputDeviceShowState_Unwrapped() const noexcept {
    return static_cast<__OVRInput_InputDeviceShowState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_InputDeviceShowState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_InputDeviceShowState(int32_t value__) noexcept;

  /// @brief Field Always value: I32(0)
  static ::GlobalNamespace::OVRInput_InputDeviceShowState const Always;

  /// @brief Field ControllerInHand value: I32(2)
  static ::GlobalNamespace::OVRInput_InputDeviceShowState const ControllerInHand;

  /// @brief Field ControllerInHandOrNoHand value: I32(1)
  static ::GlobalNamespace::OVRInput_InputDeviceShowState const ControllerInHandOrNoHand;

  /// @brief Field ControllerNotInHand value: I32(3)
  static ::GlobalNamespace::OVRInput_InputDeviceShowState const ControllerNotInHand;

  /// @brief Field NoHand value: I32(4)
  static ::GlobalNamespace::OVRInput_InputDeviceShowState const NoHand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7914 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_InputDeviceShowState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_InputDeviceShowState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/ControllerInHandState
struct CORDL_TYPE OVRInput_ControllerInHandState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRInput_ControllerInHandState_Unwrapped
  enum struct __OVRInput_ControllerInHandState_Unwrapped : int32_t {
    __E_NoHand = static_cast<int32_t>(0x0),
    __E_ControllerInHand = static_cast<int32_t>(0x1),
    __E_ControllerNotInHand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_ControllerInHandState_Unwrapped() const noexcept {
    return static_cast<__OVRInput_ControllerInHandState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_ControllerInHandState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRInput_ControllerInHandState(int32_t value__) noexcept;

  /// @brief Field ControllerInHand value: I32(1)
  static ::GlobalNamespace::OVRInput_ControllerInHandState const ControllerInHand;

  /// @brief Field ControllerNotInHand value: I32(2)
  static ::GlobalNamespace::OVRInput_ControllerInHandState const ControllerNotInHand;

  /// @brief Field NoHand value: I32(0)
  static ::GlobalNamespace::OVRInput_ControllerInHandState const NoHand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7915 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_ControllerInHandState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_ControllerInHandState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/HapticsAmplitudeEnvelopeVibration
struct CORDL_TYPE OVRInput_HapticsAmplitudeEnvelopeVibration {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_HapticsAmplitudeEnvelopeVibration();

  // Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr OVRInput_HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t Duration) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7916 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field Duration, offset: 0x10, size: 0x4, def value: None
  float_t Duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, SamplesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, Samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, Duration) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/HapticsPcmVibration
struct CORDL_TYPE OVRInput_HapticsPcmVibration {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_HapticsPcmVibration();

  // Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: None }]
  constexpr OVRInput_HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t SampleRateHz, bool Append) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7917 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field SampleRateHz, offset: 0x10, size: 0x4, def value: None
  float_t SampleRateHz;

  /// @brief Field Append, offset: 0x14, size: 0x1, def value: None
  bool Append;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, SamplesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, Samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, SampleRateHz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticsPcmVibration, Append) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_HapticsPcmVibration, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/OpenVRController
struct CORDL_TYPE OVRInput_OpenVRController {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct __OVRInput_OpenVRController_Unwrapped
  enum struct __OVRInput_OpenVRController_Unwrapped : uint64_t {
    __E_Unknown = static_cast<uint64_t>(0x0u),
    __E_OculusTouch = static_cast<uint64_t>(0x1u),
    __E_ViveController = static_cast<uint64_t>(0x2u),
    __E_WindowsMRController = static_cast<uint64_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRInput_OpenVRController_Unwrapped() const noexcept {
    return static_cast<__OVRInput_OpenVRController_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OpenVRController();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRInput_OpenVRController(uint64_t value__) noexcept;

  /// @brief Field OculusTouch value: U64(1)
  static ::GlobalNamespace::OVRInput_OpenVRController const OculusTouch;

  /// @brief Field Unknown value: U64(0)
  static ::GlobalNamespace::OVRInput_OpenVRController const Unknown;

  /// @brief Field ViveController value: U64(2)
  static ::GlobalNamespace::OVRInput_OpenVRController const ViveController;

  /// @brief Field WindowsMRController value: U64(3)
  static ::GlobalNamespace::OVRInput_OpenVRController const WindowsMRController;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7918 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRController, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OpenVRController, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVR.OpenVR.VRControllerState_t, OVRInput::OpenVRController, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/OpenVRControllerDetails
struct CORDL_TYPE OVRInput_OpenVRControllerDetails {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OpenVRControllerDetails();

  // Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: None }, CppParam { name: "controllerType", ty:
  // "::GlobalNamespace::OVRInput_OpenVRController", modifiers: "", def_value: None }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "localPosition",
  // ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr OVRInput_OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t state, ::GlobalNamespace::OVRInput_OpenVRController controllerType, uint32_t deviceID,
                                             ::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localOrientation) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7919 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field state, offset: 0x0, size: 0x40, def value: None
  ::OVR::OpenVR::VRControllerState_t state;

  /// @brief Field controllerType, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRInput_OpenVRController controllerType;

  /// @brief Field deviceID, offset: 0x48, size: 0x4, def value: None
  uint32_t deviceID;

  /// @brief Field localPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 localPosition;

  /// @brief Field localOrientation, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion localOrientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, controllerType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, deviceID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, localPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OpenVRControllerDetails, localOrientation) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OpenVRControllerDetails, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/HapticInfo
class CORDL_TYPE OVRInput_HapticInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field hapticAmplitude, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticAmplitude, put = __cordl_internal_set_hapticAmplitude)) float_t hapticAmplitude;

  /// @brief Field hapticsDuration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticsDuration, put = __cordl_internal_set_hapticsDuration)) float_t hapticsDuration;

  /// @brief Field hapticsDurationPlayed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticsDurationPlayed, put = __cordl_internal_set_hapticsDurationPlayed)) float_t hapticsDurationPlayed;

  /// @brief Field node, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::UnityEngine::XR::XRNode node;

  /// @brief Field playingHaptics, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_playingHaptics, put = __cordl_internal_set_playingHaptics)) bool playingHaptics;

  static inline ::GlobalNamespace::OVRInput_HapticInfo* New_ctor();

  constexpr float_t const& __cordl_internal_get_hapticAmplitude() const;

  constexpr float_t& __cordl_internal_get_hapticAmplitude();

  constexpr float_t const& __cordl_internal_get_hapticsDuration() const;

  constexpr float_t& __cordl_internal_get_hapticsDuration();

  constexpr float_t const& __cordl_internal_get_hapticsDurationPlayed() const;

  constexpr float_t& __cordl_internal_get_hapticsDurationPlayed();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_node();

  constexpr bool const& __cordl_internal_get_playingHaptics() const;

  constexpr bool& __cordl_internal_get_playingHaptics();

  constexpr void __cordl_internal_set_hapticAmplitude(float_t value);

  constexpr void __cordl_internal_set_hapticsDuration(float_t value);

  constexpr void __cordl_internal_set_hapticsDurationPlayed(float_t value);

  constexpr void __cordl_internal_set_node(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set_playingHaptics(bool value);

  /// @brief Method .ctor, addr 0x3fbf9a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_HapticInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_HapticInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_HapticInfo(OVRInput_HapticInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_HapticInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_HapticInfo(OVRInput_HapticInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7920 };

  /// @brief Field playingHaptics, offset: 0x10, size: 0x1, def value: None
  bool ___playingHaptics;

  /// @brief Field hapticsDurationPlayed, offset: 0x14, size: 0x4, def value: None
  float_t ___hapticsDurationPlayed;

  /// @brief Field hapticsDuration, offset: 0x18, size: 0x4, def value: None
  float_t ___hapticsDuration;

  /// @brief Field hapticAmplitude, offset: 0x1c, size: 0x4, def value: None
  float_t ___hapticAmplitude;

  /// @brief Field node, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ___node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___playingHaptics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___hapticsDurationPlayed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___hapticsDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___hapticAmplitude) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_HapticInfo, ___node) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_HapticInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::RawButton, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualButtonMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualButtonMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field Back, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Back, put = __cordl_internal_set_Back)) ::GlobalNamespace::OVRInput_RawButton Back;

  /// @brief Field Down, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_Down, put = __cordl_internal_set_Down)) ::GlobalNamespace::OVRInput_RawButton Down;

  /// @brief Field DpadDown, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadDown, put = __cordl_internal_set_DpadDown)) ::GlobalNamespace::OVRInput_RawButton DpadDown;

  /// @brief Field DpadLeft, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadLeft, put = __cordl_internal_set_DpadLeft)) ::GlobalNamespace::OVRInput_RawButton DpadLeft;

  /// @brief Field DpadRight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadRight, put = __cordl_internal_set_DpadRight)) ::GlobalNamespace::OVRInput_RawButton DpadRight;

  /// @brief Field DpadUp, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadUp, put = __cordl_internal_set_DpadUp)) ::GlobalNamespace::OVRInput_RawButton DpadUp;

  /// @brief Field Four, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Four, put = __cordl_internal_set_Four)) ::GlobalNamespace::OVRInput_RawButton Four;

  /// @brief Field Left, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_Left, put = __cordl_internal_set_Left)) ::GlobalNamespace::OVRInput_RawButton Left;

  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawButton None;

  /// @brief Field One, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_One, put = __cordl_internal_set_One)) ::GlobalNamespace::OVRInput_RawButton One;

  /// @brief Field PrimaryHandTrigger, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryHandTrigger, put = __cordl_internal_set_PrimaryHandTrigger)) ::GlobalNamespace::OVRInput_RawButton PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawButton PrimaryIndexTrigger;

  /// @brief Field PrimaryShoulder, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryShoulder, put = __cordl_internal_set_PrimaryShoulder)) ::GlobalNamespace::OVRInput_RawButton PrimaryShoulder;

  /// @brief Field PrimaryThumbstick, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstick, put = __cordl_internal_set_PrimaryThumbstick)) ::GlobalNamespace::OVRInput_RawButton PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickDown, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickDown, put = __cordl_internal_set_PrimaryThumbstickDown)) ::GlobalNamespace::OVRInput_RawButton PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickLeft, put = __cordl_internal_set_PrimaryThumbstickLeft)) ::GlobalNamespace::OVRInput_RawButton PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickRight, put = __cordl_internal_set_PrimaryThumbstickRight)) ::GlobalNamespace::OVRInput_RawButton PrimaryThumbstickRight;

  /// @brief Field PrimaryThumbstickUp, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickUp, put = __cordl_internal_set_PrimaryThumbstickUp)) ::GlobalNamespace::OVRInput_RawButton PrimaryThumbstickUp;

  /// @brief Field PrimaryTouchpad, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryTouchpad, put = __cordl_internal_set_PrimaryTouchpad)) ::GlobalNamespace::OVRInput_RawButton PrimaryTouchpad;

  /// @brief Field Right, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_Right, put = __cordl_internal_set_Right)) ::GlobalNamespace::OVRInput_RawButton Right;

  /// @brief Field SecondaryHandTrigger, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryHandTrigger, put = __cordl_internal_set_SecondaryHandTrigger)) ::GlobalNamespace::OVRInput_RawButton SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawButton SecondaryIndexTrigger;

  /// @brief Field SecondaryShoulder, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryShoulder, put = __cordl_internal_set_SecondaryShoulder)) ::GlobalNamespace::OVRInput_RawButton SecondaryShoulder;

  /// @brief Field SecondaryThumbstick, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstick, put = __cordl_internal_set_SecondaryThumbstick)) ::GlobalNamespace::OVRInput_RawButton SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickDown, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickDown, put = __cordl_internal_set_SecondaryThumbstickDown)) ::GlobalNamespace::OVRInput_RawButton SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickLeft, put = __cordl_internal_set_SecondaryThumbstickLeft)) ::GlobalNamespace::OVRInput_RawButton SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickRight, put = __cordl_internal_set_SecondaryThumbstickRight)) ::GlobalNamespace::OVRInput_RawButton SecondaryThumbstickRight;

  /// @brief Field SecondaryThumbstickUp, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickUp, put = __cordl_internal_set_SecondaryThumbstickUp)) ::GlobalNamespace::OVRInput_RawButton SecondaryThumbstickUp;

  /// @brief Field SecondaryTouchpad, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryTouchpad, put = __cordl_internal_set_SecondaryTouchpad)) ::GlobalNamespace::OVRInput_RawButton SecondaryTouchpad;

  /// @brief Field Start, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_Start, put = __cordl_internal_set_Start)) ::GlobalNamespace::OVRInput_RawButton Start;

  /// @brief Field Three, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Three, put = __cordl_internal_set_Three)) ::GlobalNamespace::OVRInput_RawButton Three;

  /// @brief Field Two, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Two, put = __cordl_internal_set_Two)) ::GlobalNamespace::OVRInput_RawButton Two;

  /// @brief Field Up, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_Up, put = __cordl_internal_set_Up)) ::GlobalNamespace::OVRInput_RawButton Up;

  static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x3fc11b0, size 0x214, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawButton ToRawMask(::GlobalNamespace::OVRInput_Button virtualMask);

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Back() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Back();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Down() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Down();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadDown() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadDown();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadLeft() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadLeft();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadRight() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadRight();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_DpadUp() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_DpadUp();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Four() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Four();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Left() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Left();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_One() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_One();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryHandTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryHandTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryShoulder() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryShoulder();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstick() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickDown() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickDown();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickLeft() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickLeft();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickRight() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickRight();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryThumbstickUp() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryThumbstickUp();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_PrimaryTouchpad() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Right() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Right();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryHandTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryHandTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryShoulder() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryShoulder();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstick() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickDown() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickDown();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickLeft() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickLeft();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickRight() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickRight();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryThumbstickUp() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryThumbstickUp();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_SecondaryTouchpad() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Start() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Start();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Three() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Three();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Two() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Two();

  constexpr ::GlobalNamespace::OVRInput_RawButton const& __cordl_internal_get_Up() const;

  constexpr ::GlobalNamespace::OVRInput_RawButton& __cordl_internal_get_Up();

  constexpr void __cordl_internal_set_Back(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Down(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_DpadDown(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_DpadLeft(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_DpadRight(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_DpadUp(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Left(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_One(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryShoulder(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Right(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryShoulder(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickDown(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickLeft(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickRight(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickUp(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Start(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawButton value);

  constexpr void __cordl_internal_set_Up(::GlobalNamespace::OVRInput_RawButton value);

  /// @brief Method .ctor, addr 0x3fc0444, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerBase_OVRInput_VirtualButtonMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualButtonMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerBase_OVRInput_VirtualButtonMap(OVRControllerBase_OVRInput_VirtualButtonMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualButtonMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerBase_OVRInput_VirtualButtonMap(OVRControllerBase_OVRInput_VirtualButtonMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7921 };

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___None;

  /// @brief Field One, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___One;

  /// @brief Field Two, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Two;

  /// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Three;

  /// @brief Field Four, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Four;

  /// @brief Field Start, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Start;

  /// @brief Field Back, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Back;

  /// @brief Field PrimaryShoulder, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryShoulder;

  /// @brief Field PrimaryIndexTrigger, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryHandTrigger;

  /// @brief Field PrimaryThumbstick, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickUp, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryThumbstickUp;

  /// @brief Field PrimaryThumbstickDown, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryThumbstickRight;

  /// @brief Field PrimaryTouchpad, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___PrimaryTouchpad;

  /// @brief Field SecondaryShoulder, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryShoulder;

  /// @brief Field SecondaryIndexTrigger, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryHandTrigger;

  /// @brief Field SecondaryThumbstick, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickUp, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryThumbstickUp;

  /// @brief Field SecondaryThumbstickDown, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryThumbstickRight;

  /// @brief Field SecondaryTouchpad, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___SecondaryTouchpad;

  /// @brief Field DpadUp, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___DpadUp;

  /// @brief Field DpadDown, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___DpadDown;

  /// @brief Field DpadLeft, offset: 0x7c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___DpadLeft;

  /// @brief Field DpadRight, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___DpadRight;

  /// @brief Field Up, offset: 0x84, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Up;

  /// @brief Field Down, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Down;

  /// @brief Field Left, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Left;

  /// @brief Field Right, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawButton ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___One) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Two) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Three) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Four) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Start) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Back) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryShoulder) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryIndexTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryHandTrigger) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickUp) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickDown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickLeft) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryThumbstickRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___PrimaryTouchpad) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryShoulder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryIndexTrigger) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryHandTrigger) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstick) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickUp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickDown) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickLeft) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryThumbstickRight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___SecondaryTouchpad) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadUp) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadDown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadLeft) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___DpadRight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Up) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Down) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Left) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, ___Right) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::RawTouch, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualTouchMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualTouchMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field Four, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Four, put = __cordl_internal_set_Four)) ::GlobalNamespace::OVRInput_RawTouch Four;

  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawTouch None;

  /// @brief Field One, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_One, put = __cordl_internal_set_One)) ::GlobalNamespace::OVRInput_RawTouch One;

  /// @brief Field PrimaryIndexTrigger, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawTouch PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbRest, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbRest, put = __cordl_internal_set_PrimaryThumbRest)) ::GlobalNamespace::OVRInput_RawTouch PrimaryThumbRest;

  /// @brief Field PrimaryThumbstick, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstick, put = __cordl_internal_set_PrimaryThumbstick)) ::GlobalNamespace::OVRInput_RawTouch PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryTouchpad, put = __cordl_internal_set_PrimaryTouchpad)) ::GlobalNamespace::OVRInput_RawTouch PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawTouch SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbRest, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbRest, put = __cordl_internal_set_SecondaryThumbRest)) ::GlobalNamespace::OVRInput_RawTouch SecondaryThumbRest;

  /// @brief Field SecondaryThumbstick, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstick, put = __cordl_internal_set_SecondaryThumbstick)) ::GlobalNamespace::OVRInput_RawTouch SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryTouchpad, put = __cordl_internal_set_SecondaryTouchpad)) ::GlobalNamespace::OVRInput_RawTouch SecondaryTouchpad;

  /// @brief Field Three, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Three, put = __cordl_internal_set_Three)) ::GlobalNamespace::OVRInput_RawTouch Three;

  /// @brief Field Two, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Two, put = __cordl_internal_set_Two)) ::GlobalNamespace::OVRInput_RawTouch Two;

  static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x3fc13c4, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawTouch ToRawMask(::GlobalNamespace::OVRInput_Touch virtualMask);

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_Four() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_Four();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_One() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_One();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryThumbRest() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryThumbRest();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryThumbstick() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_PrimaryTouchpad() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryThumbRest() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryThumbRest();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryThumbstick() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_SecondaryTouchpad() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_Three() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_Three();

  constexpr ::GlobalNamespace::OVRInput_RawTouch const& __cordl_internal_get_Two() const;

  constexpr ::GlobalNamespace::OVRInput_RawTouch& __cordl_internal_get_Two();

  constexpr void __cordl_internal_set_Four(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_One(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_PrimaryThumbRest(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_SecondaryThumbRest(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_Three(::GlobalNamespace::OVRInput_RawTouch value);

  constexpr void __cordl_internal_set_Two(::GlobalNamespace::OVRInput_RawTouch value);

  /// @brief Method .ctor, addr 0x3fc044c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerBase_OVRInput_VirtualTouchMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualTouchMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerBase_OVRInput_VirtualTouchMap(OVRControllerBase_OVRInput_VirtualTouchMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualTouchMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerBase_OVRInput_VirtualTouchMap(OVRControllerBase_OVRInput_VirtualTouchMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7922 };

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___None;

  /// @brief Field One, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___One;

  /// @brief Field Two, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___Two;

  /// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___Three;

  /// @brief Field Four, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___Four;

  /// @brief Field PrimaryIndexTrigger, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbstick, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___PrimaryThumbstick;

  /// @brief Field PrimaryThumbRest, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___PrimaryThumbRest;

  /// @brief Field PrimaryTouchpad, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbstick, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___SecondaryThumbstick;

  /// @brief Field SecondaryThumbRest, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___SecondaryThumbRest;

  /// @brief Field SecondaryTouchpad, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawTouch ___SecondaryTouchpad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___One) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___Two) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___Three) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___Four) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryIndexTrigger) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryThumbstick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryThumbRest) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___PrimaryTouchpad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryIndexTrigger) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryThumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryThumbRest) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, ___SecondaryTouchpad) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::RawNearTouch, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualNearTouchMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualNearTouchMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawNearTouch None;

  /// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawNearTouch PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbButtons, put = __cordl_internal_set_PrimaryThumbButtons)) ::GlobalNamespace::OVRInput_RawNearTouch PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawNearTouch SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbButtons, put = __cordl_internal_set_SecondaryThumbButtons)) ::GlobalNamespace::OVRInput_RawNearTouch SecondaryThumbButtons;

  static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x3fc1498, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawNearTouch ToRawMask(::GlobalNamespace::OVRInput_NearTouch virtualMask);

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_PrimaryThumbButtons() const;

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_PrimaryThumbButtons();

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch const& __cordl_internal_get_SecondaryThumbButtons() const;

  constexpr ::GlobalNamespace::OVRInput_RawNearTouch& __cordl_internal_get_SecondaryThumbButtons();

  constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawNearTouch value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch value);

  constexpr void __cordl_internal_set_PrimaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawNearTouch value);

  constexpr void __cordl_internal_set_SecondaryThumbButtons(::GlobalNamespace::OVRInput_RawNearTouch value);

  /// @brief Method .ctor, addr 0x3fc0454, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerBase_OVRInput_VirtualNearTouchMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualNearTouchMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerBase_OVRInput_VirtualNearTouchMap(OVRControllerBase_OVRInput_VirtualNearTouchMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualNearTouchMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerBase_OVRInput_VirtualNearTouchMap(OVRControllerBase_OVRInput_VirtualNearTouchMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7923 };

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawNearTouch ___None;

  /// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawNearTouch ___PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawNearTouch ___PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawNearTouch ___SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawNearTouch ___SecondaryThumbButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___PrimaryIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___PrimaryThumbButtons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___SecondaryIndexTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, ___SecondaryThumbButtons) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::RawAxis1D, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualAxis1DMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualAxis1DMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawAxis1D None;

  /// @brief Field PrimaryHandTrigger, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryHandTrigger, put = __cordl_internal_set_PrimaryHandTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryIndexTrigger;

  /// @brief Field PrimaryIndexTriggerCurl, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTriggerCurl, put = __cordl_internal_set_PrimaryIndexTriggerCurl)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerForce, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTriggerForce, put = __cordl_internal_set_PrimaryIndexTriggerForce)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryIndexTriggerForce;

  /// @brief Field PrimaryIndexTriggerSlide, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTriggerSlide, put = __cordl_internal_set_PrimaryIndexTriggerSlide)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryStylusForce, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryStylusForce, put = __cordl_internal_set_PrimaryStylusForce)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryStylusForce;

  /// @brief Field PrimaryThumbRestForce, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbRestForce, put = __cordl_internal_set_PrimaryThumbRestForce)) ::GlobalNamespace::OVRInput_RawAxis1D PrimaryThumbRestForce;

  /// @brief Field SecondaryHandTrigger, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryHandTrigger, put = __cordl_internal_set_SecondaryHandTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryIndexTrigger;

  /// @brief Field SecondaryIndexTriggerCurl, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTriggerCurl, put = __cordl_internal_set_SecondaryIndexTriggerCurl)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerForce, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTriggerForce, put = __cordl_internal_set_SecondaryIndexTriggerForce)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerSlide, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTriggerSlide, put = __cordl_internal_set_SecondaryIndexTriggerSlide)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryStylusForce, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryStylusForce, put = __cordl_internal_set_SecondaryStylusForce)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryStylusForce;

  /// @brief Field SecondaryThumbRestForce, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbRestForce, put = __cordl_internal_set_SecondaryThumbRestForce)) ::GlobalNamespace::OVRInput_RawAxis1D SecondaryThumbRestForce;

  static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x3fc14ec, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawAxis1D ToRawMask(::GlobalNamespace::OVRInput_Axis1D virtualMask);

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryHandTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryHandTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerCurl() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerCurl();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerForce() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerForce();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerSlide() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerSlide();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryStylusForce() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryStylusForce();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_PrimaryThumbRestForce() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_PrimaryThumbRestForce();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryHandTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryHandTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerCurl() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerCurl();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerForce() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerForce();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerSlide() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerSlide();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryStylusForce() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryStylusForce();

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D const& __cordl_internal_get_SecondaryThumbRestForce() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis1D& __cordl_internal_get_SecondaryThumbRestForce();

  constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTriggerCurl(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTriggerForce(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTriggerSlide(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryStylusForce(::GlobalNamespace::OVRInput_RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryThumbRestForce(::GlobalNamespace::OVRInput_RawAxis1D value);

  /// @brief Method .ctor, addr 0x3fc045c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerBase_OVRInput_VirtualAxis1DMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis1DMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerBase_OVRInput_VirtualAxis1DMap(OVRControllerBase_OVRInput_VirtualAxis1DMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis1DMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerBase_OVRInput_VirtualAxis1DMap(OVRControllerBase_OVRInput_VirtualAxis1DMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7924 };

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___None;

  /// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryHandTrigger;

  /// @brief Field PrimaryIndexTriggerCurl, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerSlide, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryThumbRestForce, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryThumbRestForce;

  /// @brief Field PrimaryStylusForce, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryStylusForce;

  /// @brief Field SecondaryIndexTriggerCurl, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerSlide, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryThumbRestForce, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryThumbRestForce;

  /// @brief Field SecondaryStylusForce, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryStylusForce;

  /// @brief Field PrimaryIndexTriggerForce, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___PrimaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerForce, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis1D ___SecondaryIndexTriggerForce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryHandTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTriggerCurl) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTriggerSlide) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryThumbRestForce) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryStylusForce) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTriggerCurl) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTriggerSlide) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryThumbRestForce) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryStylusForce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___PrimaryIndexTriggerForce) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, ___SecondaryIndexTriggerForce) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::RawAxis2D, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase/VirtualAxis2DMap
class CORDL_TYPE OVRControllerBase_OVRInput_VirtualAxis2DMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None)) ::GlobalNamespace::OVRInput_RawAxis2D None;

  /// @brief Field PrimaryThumbstick, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstick, put = __cordl_internal_set_PrimaryThumbstick)) ::GlobalNamespace::OVRInput_RawAxis2D PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryTouchpad, put = __cordl_internal_set_PrimaryTouchpad)) ::GlobalNamespace::OVRInput_RawAxis2D PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstick, put = __cordl_internal_set_SecondaryThumbstick)) ::GlobalNamespace::OVRInput_RawAxis2D SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryTouchpad, put = __cordl_internal_set_SecondaryTouchpad)) ::GlobalNamespace::OVRInput_RawAxis2D SecondaryTouchpad;

  static inline ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x3fc15e0, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawAxis2D ToRawMask(::GlobalNamespace::OVRInput_Axis2D virtualMask);

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_PrimaryThumbstick() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_PrimaryTouchpad() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_SecondaryThumbstick() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D const& __cordl_internal_get_SecondaryTouchpad() const;

  constexpr ::GlobalNamespace::OVRInput_RawAxis2D& __cordl_internal_get_SecondaryTouchpad();

  constexpr void __cordl_internal_set_None(::GlobalNamespace::OVRInput_RawAxis2D value);

  constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D value);

  constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D value);

  constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::OVRInput_RawAxis2D value);

  constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::OVRInput_RawAxis2D value);

  /// @brief Method .ctor, addr 0x3fc0464, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRControllerBase_OVRInput_VirtualAxis2DMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis2DMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRControllerBase_OVRInput_VirtualAxis2DMap(OVRControllerBase_OVRInput_VirtualAxis2DMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRControllerBase_OVRInput_VirtualAxis2DMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRControllerBase_OVRInput_VirtualAxis2DMap(OVRControllerBase_OVRInput_VirtualAxis2DMap const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7925 };

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis2D ___None;

  /// @brief Field PrimaryThumbstick, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis2D ___PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis2D ___PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis2D ___SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_RawAxis2D ___SecondaryTouchpad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___PrimaryThumbstick) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___PrimaryTouchpad) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___SecondaryThumbstick) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, ___SecondaryTouchpad) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::Controller, OVRPlugin::ControllerState6, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerBase
class CORDL_TYPE OVRInput_OVRControllerBase : public ::System::Object {
public:
  // Declarations
  using VirtualAxis1DMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap;

  using VirtualAxis2DMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap;

  using VirtualButtonMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap;

  using VirtualNearTouchMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap;

  using VirtualTouchMap = ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap;

  /// @brief Field HapticsPcmSamplesConsumedCache, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_HapticsPcmSamplesConsumedCache, put = __cordl_internal_set_HapticsPcmSamplesConsumedCache)) ::ArrayW<uint32_t, ::Array<uint32_t>*>
      HapticsPcmSamplesConsumedCache;

  /// @brief Field axis1DMap, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_axis1DMap, put = __cordl_internal_set_axis1DMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* axis1DMap;

  /// @brief Field axis2DMap, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_axis2DMap, put = __cordl_internal_set_axis2DMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* axis2DMap;

  /// @brief Field buttonMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonMap, put = __cordl_internal_set_buttonMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* buttonMap;

  /// @brief Field controllerType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerType, put = __cordl_internal_set_controllerType)) ::GlobalNamespace::OVRInput_Controller controllerType;

  /// @brief Field currentState, offset 0xac, size 0x6c
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState)) ::GlobalNamespace::OVRPlugin_ControllerState6 currentState;

  /// @brief Field nearTouchMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nearTouchMap, put = __cordl_internal_set_nearTouchMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* nearTouchMap;

  /// @brief Field previousState, offset 0x40, size 0x6c
  __declspec(property(get = __cordl_internal_get_previousState, put = __cordl_internal_set_previousState)) ::GlobalNamespace::OVRPlugin_ControllerState6 previousState;

  /// @brief Field shouldApplyDeadzone, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldApplyDeadzone, put = __cordl_internal_set_shouldApplyDeadzone)) bool shouldApplyDeadzone;

  /// @brief Field touchMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_touchMap, put = __cordl_internal_set_touchMap)) ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* touchMap;

  /// @brief Method ConfigureAxis1DMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc11a8, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  /// @brief Method GetControllerSampleRateHz, addr 0x3fc1134, size 0x74, virtual true, abstract: false, final false
  inline float_t GetControllerSampleRateHz();

  /// @brief Method GetOpenVRControllerState, addr 0x3fc083c, size 0x4b4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRPlugin_ControllerState6 GetOpenVRControllerState(::GlobalNamespace::OVRInput_Controller controllerType);

  static inline ::GlobalNamespace::OVRInput_OVRControllerBase* New_ctor();

  /// @brief Method ResolveToRawMask, addr 0x3fbedf0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawAxis1D ResolveToRawMask(::GlobalNamespace::OVRInput_Axis1D virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x3fbf29c, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawAxis2D ResolveToRawMask(::GlobalNamespace::OVRInput_Axis2D virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x3fbd56c, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawButton ResolveToRawMask(::GlobalNamespace::OVRInput_Button virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x3fbe22c, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawNearTouch ResolveToRawMask(::GlobalNamespace::OVRInput_NearTouch virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x3fbdb98, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_RawTouch ResolveToRawMask(::GlobalNamespace::OVRInput_Touch virtualMask);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0x3fc0de8, size 0x138, virtual true, abstract: false, final false
  inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration hapticsVibration);

  /// @brief Method SetControllerHapticsPcm, addr 0x3fc0f20, size 0x214, virtual true, abstract: false, final false
  inline int32_t SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration hapticsVibration);

  /// @brief Method SetControllerLocalizedVibration, addr 0x3fc0d64, size 0x84, virtual true, abstract: false, final false
  inline void SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude);

  /// @brief Method SetControllerVibration, addr 0x3fc0cf0, size 0x74, virtual true, abstract: false, final false
  inline void SetControllerVibration(float_t frequency, float_t amplitude);

  /// @brief Method Update, addr 0x3fc046c, size 0x3d0, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRInput_Controller Update();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_HapticsPcmSamplesConsumedCache() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_HapticsPcmSamplesConsumedCache();

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* const& __cordl_internal_get_axis1DMap() const;

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*& __cordl_internal_get_axis1DMap();

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* const& __cordl_internal_get_axis2DMap() const;

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*& __cordl_internal_get_axis2DMap();

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* const& __cordl_internal_get_buttonMap() const;

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*& __cordl_internal_get_buttonMap();

  constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get_controllerType() const;

  constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get_controllerType();

  constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& __cordl_internal_get_currentState() const;

  constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& __cordl_internal_get_currentState();

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* const& __cordl_internal_get_nearTouchMap() const;

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*& __cordl_internal_get_nearTouchMap();

  constexpr ::GlobalNamespace::OVRPlugin_ControllerState6 const& __cordl_internal_get_previousState() const;

  constexpr ::GlobalNamespace::OVRPlugin_ControllerState6& __cordl_internal_get_previousState();

  constexpr bool const& __cordl_internal_get_shouldApplyDeadzone() const;

  constexpr bool& __cordl_internal_get_shouldApplyDeadzone();

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* const& __cordl_internal_get_touchMap() const;

  constexpr ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*& __cordl_internal_get_touchMap();

  constexpr void __cordl_internal_set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_axis1DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* value);

  constexpr void __cordl_internal_set_axis2DMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* value);

  constexpr void __cordl_internal_set_buttonMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* value);

  constexpr void __cordl_internal_set_controllerType(::GlobalNamespace::OVRInput_Controller value);

  constexpr void __cordl_internal_set_currentState(::GlobalNamespace::OVRPlugin_ControllerState6 value);

  constexpr void __cordl_internal_set_nearTouchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* value);

  constexpr void __cordl_internal_set_previousState(::GlobalNamespace::OVRPlugin_ControllerState6 value);

  constexpr void __cordl_internal_set_shouldApplyDeadzone(bool value);

  constexpr void __cordl_internal_set_touchMap(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* value);

  /// @brief Method .ctor, addr 0x3fc0294, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerBase(OVRInput_OVRControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerBase(OVRInput_OVRControllerBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7926 };

  /// @brief Field controllerType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::OVRInput_Controller ___controllerType;

  /// @brief Field buttonMap, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap* ___buttonMap;

  /// @brief Field touchMap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap* ___touchMap;

  /// @brief Field nearTouchMap, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap* ___nearTouchMap;

  /// @brief Field axis1DMap, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap* ___axis1DMap;

  /// @brief Field axis2DMap, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap* ___axis2DMap;

  /// @brief Field previousState, offset: 0x40, size: 0x6c, def value: None
  ::GlobalNamespace::OVRPlugin_ControllerState6 ___previousState;

  /// @brief Field currentState, offset: 0xac, size: 0x6c, def value: None
  ::GlobalNamespace::OVRPlugin_ControllerState6 ___currentState;

  /// @brief Field shouldApplyDeadzone, offset: 0x118, size: 0x1, def value: None
  bool ___shouldApplyDeadzone;

  /// @brief Field HapticsPcmSamplesConsumedCache, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___HapticsPcmSamplesConsumedCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___controllerType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___buttonMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___touchMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___nearTouchMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___axis1DMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___axis2DMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___previousState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___currentState) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___shouldApplyDeadzone) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRInput_OVRControllerBase, ___HapticsPcmSamplesConsumedCache) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerBase, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerTouch
class CORDL_TYPE OVRInput_OVRControllerTouch : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1704, size 0x4c, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1750, size 0x2c, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1634, size 0x68, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc16d8, size 0x2c, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc169c, size 0x3c, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc177c, size 0x14, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::OVRInput_OVRControllerTouch* New_ctor();

  /// @brief Method .ctor, addr 0x3fba54c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerTouch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerTouch(OVRInput_OVRControllerTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerTouch(OVRInput_OVRControllerTouch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerLTouch
class CORDL_TYPE OVRInput_OVRControllerLTouch : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1878, size 0x48, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc18c0, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc17b0, size 0x6c, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc1850, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc181c, size 0x34, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc18e8, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::OVRInput_OVRControllerLTouch* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1790, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerLTouch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerLTouch(OVRInput_OVRControllerLTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerLTouch(OVRInput_OVRControllerLTouch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7928 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerLTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerRTouch
class CORDL_TYPE OVRInput_OVRControllerRTouch : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc19e4, size 0x48, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1a2c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1910, size 0x78, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc19bc, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc1988, size 0x34, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc1a54, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::OVRInput_OVRControllerRTouch* New_ctor();

  /// @brief Method .ctor, addr 0x3fc18f0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerRTouch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerRTouch(OVRInput_OVRControllerRTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerRTouch(OVRInput_OVRControllerRTouch const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7929 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerRTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerHands
class CORDL_TYPE OVRInput_OVRControllerHands : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1b14, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1b3c, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1a7c, size 0x50, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc1af4, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc1acc, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc1b5c, size 0x14, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::OVRInput_OVRControllerHands* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1a5c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerHands();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerHands", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerHands(OVRInput_OVRControllerHands&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerHands", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerHands(OVRInput_OVRControllerHands const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7930 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerHands, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerLHand
class CORDL_TYPE OVRInput_OVRControllerLHand : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1c28, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1c50, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1b90, size 0x50, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc1c08, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc1be0, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc1c70, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::OVRInput_OVRControllerLHand* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1b70, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerLHand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerLHand(OVRInput_OVRControllerLHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerLHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerLHand(OVRInput_OVRControllerLHand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7931 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerLHand, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerRHand
class CORDL_TYPE OVRInput_OVRControllerRHand : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1d30, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1d58, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1c98, size 0x50, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc1d10, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc1ce8, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x3fc1d78, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::OVRInput_OVRControllerRHand* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1c78, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerRHand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerRHand(OVRInput_OVRControllerRHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerRHand(OVRInput_OVRControllerRHand const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7932 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerRHand, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerRemote
class CORDL_TYPE OVRInput_OVRControllerRemote : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1e48, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1e70, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1da0, size 0x60, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc1e28, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc1e00, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  static inline ::GlobalNamespace::OVRInput_OVRControllerRemote* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1d80, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerRemote();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRemote", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerRemote(OVRInput_OVRControllerRemote&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerRemote", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerRemote(OVRInput_OVRControllerRemote const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7933 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerRemote, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerGamepadPC
class CORDL_TYPE OVRInput_OVRControllerGamepadPC : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc1f68, size 0x30, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc1f98, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1eb0, size 0x70, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc1f48, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc1f20, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  static inline ::GlobalNamespace::OVRInput_OVRControllerGamepadPC* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1e90, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerGamepadPC();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadPC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerGamepadPC(OVRInput_OVRControllerGamepadPC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadPC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerGamepadPC(OVRInput_OVRControllerGamepadPC const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7934 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerGamepadPC, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::OVRControllerBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput/OVRControllerGamepadAndroid
class CORDL_TYPE OVRInput_OVRControllerGamepadAndroid : public ::GlobalNamespace::OVRInput_OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x3fc2098, size 0x30, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x3fc20c8, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x3fc1fe0, size 0x70, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x3fc2078, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x3fc2050, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  static inline ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid* New_ctor();

  /// @brief Method .ctor, addr 0x3fc1fc0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput_OVRControllerGamepadAndroid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadAndroid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput_OVRControllerGamepadAndroid(OVRInput_OVRControllerGamepadAndroid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput_OVRControllerGamepadAndroid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput_OVRControllerGamepadAndroid(OVRInput_OVRControllerGamepadAndroid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7935 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRInput::Controller, OVRPlugin::Step, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRInput
class CORDL_TYPE OVRInput : public ::System::Object {
public:
  // Declarations
  using Axis1D = ::GlobalNamespace::OVRInput_Axis1D;

  using Axis2D = ::GlobalNamespace::OVRInput_Axis2D;

  using Button = ::GlobalNamespace::OVRInput_Button;

  using Controller = ::GlobalNamespace::OVRInput_Controller;

  using ControllerInHandState = ::GlobalNamespace::OVRInput_ControllerInHandState;

  using Hand = ::GlobalNamespace::OVRInput_Hand;

  using Handedness = ::GlobalNamespace::OVRInput_Handedness;

  using HapticInfo = ::GlobalNamespace::OVRInput_HapticInfo;

  using HapticsAmplitudeEnvelopeVibration = ::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration;

  using HapticsLocation = ::GlobalNamespace::OVRInput_HapticsLocation;

  using HapticsPcmVibration = ::GlobalNamespace::OVRInput_HapticsPcmVibration;

  using InputDeviceShowState = ::GlobalNamespace::OVRInput_InputDeviceShowState;

  using InteractionProfile = ::GlobalNamespace::OVRInput_InteractionProfile;

  using NearTouch = ::GlobalNamespace::OVRInput_NearTouch;

  using OVRControllerBase = ::GlobalNamespace::OVRInput_OVRControllerBase;

  using OVRControllerGamepadAndroid = ::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid;

  using OVRControllerGamepadPC = ::GlobalNamespace::OVRInput_OVRControllerGamepadPC;

  using OVRControllerHands = ::GlobalNamespace::OVRInput_OVRControllerHands;

  using OVRControllerLHand = ::GlobalNamespace::OVRInput_OVRControllerLHand;

  using OVRControllerLTouch = ::GlobalNamespace::OVRInput_OVRControllerLTouch;

  using OVRControllerRHand = ::GlobalNamespace::OVRInput_OVRControllerRHand;

  using OVRControllerRTouch = ::GlobalNamespace::OVRInput_OVRControllerRTouch;

  using OVRControllerRemote = ::GlobalNamespace::OVRInput_OVRControllerRemote;

  using OVRControllerTouch = ::GlobalNamespace::OVRInput_OVRControllerTouch;

  using OpenVRButton = ::GlobalNamespace::OVRInput_OpenVRButton;

  using OpenVRController = ::GlobalNamespace::OVRInput_OpenVRController;

  using OpenVRControllerDetails = ::GlobalNamespace::OVRInput_OpenVRControllerDetails;

  using RawAxis1D = ::GlobalNamespace::OVRInput_RawAxis1D;

  using RawAxis2D = ::GlobalNamespace::OVRInput_RawAxis2D;

  using RawButton = ::GlobalNamespace::OVRInput_RawButton;

  using RawNearTouch = ::GlobalNamespace::OVRInput_RawNearTouch;

  using RawTouch = ::GlobalNamespace::OVRInput_RawTouch;

  using Touch = ::GlobalNamespace::OVRInput_Touch;

  /// @brief Field AXIS_AS_BUTTON_THRESHOLD, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AXIS_AS_BUTTON_THRESHOLD, put = setStaticF_AXIS_AS_BUTTON_THRESHOLD)) float_t AXIS_AS_BUTTON_THRESHOLD;

  /// @brief Field AXIS_DEADZONE_THRESHOLD, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_AXIS_DEADZONE_THRESHOLD, put = setStaticF_AXIS_DEADZONE_THRESHOLD)) float_t AXIS_DEADZONE_THRESHOLD;

  /// @brief Field HAPTIC_VIBRATION_DURATION_SECONDS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS, put = setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS)) float_t HAPTIC_VIBRATION_DURATION_SECONDS;

  /// @brief Field NUM_HAPTIC_CHANNELS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_NUM_HAPTIC_CHANNELS, put = setStaticF_NUM_HAPTIC_CHANNELS)) int32_t NUM_HAPTIC_CHANNELS;

  /// @brief Field OPENVR_MAX_HAPTIC_AMPLITUDE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE, put = setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE)) float_t OPENVR_MAX_HAPTIC_AMPLITUDE;

  /// @brief Field OPENVR_TOUCH_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OPENVR_TOUCH_NAME, put = setStaticF_OPENVR_TOUCH_NAME)) ::StringW OPENVR_TOUCH_NAME;

  /// @brief Field OPENVR_VIVE_CONTROLLER_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OPENVR_VIVE_CONTROLLER_NAME, put = setStaticF_OPENVR_VIVE_CONTROLLER_NAME)) ::StringW OPENVR_VIVE_CONTROLLER_NAME;

  /// @brief Field OPENVR_WINDOWSMR_CONTROLLER_NAME, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME, put = setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME)) ::StringW OPENVR_WINDOWSMR_CONTROLLER_NAME;

  /// @brief Field _pluginSupportsActiveController, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__pluginSupportsActiveController, put = setStaticF__pluginSupportsActiveController)) bool _pluginSupportsActiveController;

  /// @brief Field _pluginSupportsActiveControllerCached, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__pluginSupportsActiveControllerCached, put = setStaticF__pluginSupportsActiveControllerCached)) bool _pluginSupportsActiveControllerCached;

  /// @brief Field _pluginSupportsActiveControllerMinVersion, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pluginSupportsActiveControllerMinVersion,
                      put = setStaticF__pluginSupportsActiveControllerMinVersion)) ::System::Version* _pluginSupportsActiveControllerMinVersion;

  /// @brief Field activeControllerType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_activeControllerType, put = setStaticF_activeControllerType)) ::GlobalNamespace::OVRInput_Controller activeControllerType;

  /// @brief Field connectedControllerTypes, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_connectedControllerTypes, put = setStaticF_connectedControllerTypes)) ::GlobalNamespace::OVRInput_Controller connectedControllerTypes;

  /// @brief Field controllers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_controllers, put = setStaticF_controllers)) ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* controllers;

  /// @brief Field fixedUpdateCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_fixedUpdateCount, put = setStaticF_fixedUpdateCount)) int32_t fixedUpdateCount;

  /// @brief Field hapticInfos, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_hapticInfos, put = setStaticF_hapticInfos)) ::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*> hapticInfos;

  /// @brief Field openVRControllerDetails, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_openVRControllerDetails,
                      put = setStaticF_openVRControllerDetails)) ::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*>
      openVRControllerDetails;

  /// @brief Field stepType, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_stepType, put = setStaticF_stepType)) ::GlobalNamespace::OVRPlugin_Step stepType;

  /// @brief Method AreHandPosesGeneratedByControllerData, addr 0x3fbb754, size 0x9c, virtual false, abstract: false, final false
  static inline bool AreHandPosesGeneratedByControllerData(::GlobalNamespace::OVRPlugin_Step stepId, ::GlobalNamespace::OVRInput_Hand hand);

  /// @brief Method CalculateAbsMax, addr 0x3fbf3ec, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalculateAbsMax(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method CalculateAbsMax, addr 0x3fbee58, size 0x24, virtual false, abstract: false, final false
  static inline float_t CalculateAbsMax(float_t a, float_t b);

  /// @brief Method CalculateDeadzone, addr 0x3fbf2b4, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalculateDeadzone(::UnityEngine::Vector2 a, float_t deadzone);

  /// @brief Method CalculateDeadzone, addr 0x3fbee08, size 0x50, virtual false, abstract: false, final false
  static inline float_t CalculateDeadzone(float_t a, float_t deadzone);

  /// @brief Method DisableSimultaneousHandsAndControllers, addr 0x3fbb844, size 0x54, virtual false, abstract: false, final false
  static inline bool DisableSimultaneousHandsAndControllers();

  /// @brief Method EnableSimultaneousHandsAndControllers, addr 0x3fbb7f0, size 0x54, virtual false, abstract: false, final false
  static inline bool EnableSimultaneousHandsAndControllers();

  /// @brief Method FixedUpdate, addr 0x3fbb230, size 0x10c, virtual false, abstract: false, final false
  static inline void FixedUpdate();

  /// @brief Method Get, addr 0x3fbf234, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::OVRInput_RawAxis2D rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbee7c, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::OVRInput_Axis2D virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbb160, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbe1c4, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbb1c8, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbd36c, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbe010, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbd9e4, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbed88, size 0x68, virtual false, abstract: false, final false
  static inline float_t Get(::GlobalNamespace::OVRInput_RawAxis1D rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method Get, addr 0x3fbe6a4, size 0x68, virtual false, abstract: false, final false
  static inline float_t Get(::GlobalNamespace::OVRInput_Axis1D virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetActiveController, addr 0x3fbf4d0, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_Controller GetActiveController();

  /// @brief Method GetActiveControllerForHand, addr 0x3fbb998, size 0x104, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_Controller GetActiveControllerForHand(::GlobalNamespace::OVRInput_Handedness handedness);

  /// @brief Method GetConnectedControllers, addr 0x3fbf414, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_Controller GetConnectedControllers();

  /// @brief Method GetControllerBatteryPercentRemaining, addr 0x3fc016c, size 0x128, virtual false, abstract: false, final false
  static inline uint8_t GetControllerBatteryPercentRemaining(::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetControllerIsInHandState, addr 0x3fbb898, size 0x100, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_ControllerInHandState GetControllerIsInHandState(::GlobalNamespace::OVRInput_Hand hand);

  /// @brief Method GetControllerOrientationTracked, addr 0x3fbb394, size 0xf0, virtual false, abstract: false, final false
  static inline bool GetControllerOrientationTracked(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetControllerOrientationValid, addr 0x3fbb484, size 0xf0, virtual false, abstract: false, final false
  static inline bool GetControllerOrientationValid(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetControllerPositionTracked, addr 0x3fbb574, size 0xf0, virtual false, abstract: false, final false
  static inline bool GetControllerPositionTracked(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetControllerPositionValid, addr 0x3fbb664, size 0xf0, virtual false, abstract: false, final false
  static inline bool GetControllerPositionValid(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetControllerSampleRateHz, addr 0x3fc0044, size 0x128, virtual false, abstract: false, final false
  static inline float_t GetControllerSampleRateHz(::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetCurrentInteractionProfile, addr 0x3fbb33c, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_InteractionProfile GetCurrentInteractionProfile(::GlobalNamespace::OVRInput_Hand hand);

  /// @brief Method GetDominantHand, addr 0x3fbd31c, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRInput_Handedness GetDominantHand();

  /// @brief Method GetDown, addr 0x3fbd74c, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetDown, addr 0x3fbe40c, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetDown, addr 0x3fbdd78, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetDown, addr 0x3fbd584, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetDown, addr 0x3fbe244, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetDown, addr 0x3fbdbb0, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetLocalControllerAcceleration, addr 0x3fbc2d8, size 0x258, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAcceleration(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetLocalControllerAngularAcceleration, addr 0x3fbcd44, size 0x264, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAngularAcceleration(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetLocalControllerAngularVelocity, addr 0x3fbcae0, size 0x264, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAngularVelocity(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetLocalControllerPosition, addr 0x3fbba9c, size 0x5d8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerPosition(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetLocalControllerRotation, addr 0x3fbc530, size 0x5b0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetLocalControllerRotation(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetLocalControllerStatesWithoutPrediction, addr 0x3fbcfa8, size 0x374, virtual false, abstract: false, final false
  static inline bool GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::OVRInput_Controller controllerType, ::ByRef<::UnityEngine::Vector3> position,
                                                               ::ByRef<::UnityEngine::Quaternion> rotation, ::ByRef<::UnityEngine::Vector3> velocity, ::ByRef<::UnityEngine::Vector3> angularVelocity);

  /// @brief Method GetLocalControllerVelocity, addr 0x3fbc074, size 0x264, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerVelocity(::GlobalNamespace::OVRInput_Controller controllerType);

  /// @brief Method GetOpenVRStringProperty, addr 0x3fbf73c, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId);

  /// @brief Method GetResolvedAxis1D, addr 0x3fbe70c, size 0x67c, virtual false, abstract: false, final false
  static inline float_t GetResolvedAxis1D(::GlobalNamespace::OVRInput_Axis1D virtualMask, ::GlobalNamespace::OVRInput_RawAxis1D rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedAxis2D, addr 0x3fbeee4, size 0x350, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetResolvedAxis2D(::GlobalNamespace::OVRInput_Axis2D virtualMask, ::GlobalNamespace::OVRInput_RawAxis2D rawMask,
                                                         ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedButton, addr 0x3fbd3d4, size 0x14c, virtual false, abstract: false, final false
  static inline bool GetResolvedButton(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedButtonDown, addr 0x3fbd5ec, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedButtonDown(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedButtonUp, addr 0x3fbd81c, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedButtonUp(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedNearTouch, addr 0x3fbe078, size 0x14c, virtual false, abstract: false, final false
  static inline bool GetResolvedNearTouch(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedNearTouchDown, addr 0x3fbe2ac, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedNearTouchDown(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch rawMask,
                                              ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedNearTouchUp, addr 0x3fbe4dc, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedNearTouchUp(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedTouch, addr 0x3fbda4c, size 0x14c, virtual false, abstract: false, final false
  static inline bool GetResolvedTouch(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedTouchDown, addr 0x3fbdc18, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedTouchDown(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetResolvedTouchUp, addr 0x3fbde48, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedTouchUp(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetUp, addr 0x3fbd97c, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::OVRInput_RawButton rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetUp, addr 0x3fbe63c, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::OVRInput_RawNearTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetUp, addr 0x3fbdfa8, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::OVRInput_RawTouch rawMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetUp, addr 0x3fbd7b4, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::OVRInput_Button virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetUp, addr 0x3fbe474, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::OVRInput_NearTouch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method GetUp, addr 0x3fbdde0, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::OVRInput_Touch virtualMask, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method InitHapticInfo, addr 0x3fba568, size 0x140, virtual false, abstract: false, final false
  static inline void InitHapticInfo();

  /// @brief Method IsControllerConnected, addr 0x3fbf46c, size 0x64, virtual false, abstract: false, final false
  static inline bool IsControllerConnected(::GlobalNamespace::OVRInput_Controller controller);

  /// @brief Method IsValidOpenVRDevice, addr 0x3fbf9b0, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidOpenVRDevice(uint32_t deviceId);

  /// @brief Method PlayHapticImpulse, addr 0x3fbf88c, size 0x11c, virtual false, abstract: false, final false
  static inline void PlayHapticImpulse(float_t amplitude, ::UnityEngine::XR::XRNode deviceNode);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0x3fbfd98, size 0x150, virtual false, abstract: false, final false
  static inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration hapticsVibration, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method SetControllerHapticsPcm, addr 0x3fbfee8, size 0x15c, virtual false, abstract: false, final false
  static inline int32_t SetControllerHapticsPcm(::GlobalNamespace::OVRInput_HapticsPcmVibration hapticsVibration, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method SetControllerLocalizedVibration, addr 0x3fbfbac, size 0x1ec, virtual false, abstract: false, final false
  static inline void SetControllerLocalizedVibration(::GlobalNamespace::OVRInput_HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude,
                                                     ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method SetControllerVibration, addr 0x3fbf9bc, size 0x1f0, virtual false, abstract: false, final false
  static inline void SetControllerVibration(float_t frequency, float_t amplitude, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method SetOpenVRLocalPose, addr 0x3fbf62c, size 0x110, virtual false, abstract: false, final false
  static inline void SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot);

  /// @brief Method ShouldResolveController, addr 0x3fbd520, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldResolveController(::GlobalNamespace::OVRInput_Controller controllerType, ::GlobalNamespace::OVRInput_Controller controllerMask);

  /// @brief Method StartVibration, addr 0x3fbf528, size 0x104, virtual false, abstract: false, final false
  static inline void StartVibration(float_t amplitude, float_t duration, ::UnityEngine::XR::XRNode controllerNode);

  /// @brief Method Update, addr 0x3fba6a8, size 0x53c, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method UpdateXRControllerHaptics, addr 0x3fbaf7c, size 0x1e4, virtual false, abstract: false, final false
  static inline void UpdateXRControllerHaptics();

  /// @brief Method UpdateXRControllerNodeIds, addr 0x3fbabe4, size 0x398, virtual false, abstract: false, final false
  static inline void UpdateXRControllerNodeIds();

  static inline float_t getStaticF_AXIS_AS_BUTTON_THRESHOLD();

  static inline float_t getStaticF_AXIS_DEADZONE_THRESHOLD();

  static inline float_t getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS();

  static inline int32_t getStaticF_NUM_HAPTIC_CHANNELS();

  static inline float_t getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE();

  static inline ::StringW getStaticF_OPENVR_TOUCH_NAME();

  static inline ::StringW getStaticF_OPENVR_VIVE_CONTROLLER_NAME();

  static inline ::StringW getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME();

  static inline bool getStaticF__pluginSupportsActiveController();

  static inline bool getStaticF__pluginSupportsActiveControllerCached();

  static inline ::System::Version* getStaticF__pluginSupportsActiveControllerMinVersion();

  static inline ::GlobalNamespace::OVRInput_Controller getStaticF_activeControllerType();

  static inline ::GlobalNamespace::OVRInput_Controller getStaticF_connectedControllerTypes();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* getStaticF_controllers();

  static inline int32_t getStaticF_fixedUpdateCount();

  static inline ::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*> getStaticF_hapticInfos();

  static inline ::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*> getStaticF_openVRControllerDetails();

  static inline ::GlobalNamespace::OVRPlugin_Step getStaticF_stepType();

  /// @brief Method get_pluginSupportsActiveController, addr 0x3fb9f94, size 0x9c, virtual false, abstract: false, final false
  static inline bool get_pluginSupportsActiveController();

  static inline void setStaticF_AXIS_AS_BUTTON_THRESHOLD(float_t value);

  static inline void setStaticF_AXIS_DEADZONE_THRESHOLD(float_t value);

  static inline void setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS(float_t value);

  static inline void setStaticF_NUM_HAPTIC_CHANNELS(int32_t value);

  static inline void setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t value);

  static inline void setStaticF_OPENVR_TOUCH_NAME(::StringW value);

  static inline void setStaticF_OPENVR_VIVE_CONTROLLER_NAME(::StringW value);

  static inline void setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW value);

  static inline void setStaticF__pluginSupportsActiveController(bool value);

  static inline void setStaticF__pluginSupportsActiveControllerCached(bool value);

  static inline void setStaticF__pluginSupportsActiveControllerMinVersion(::System::Version* value);

  static inline void setStaticF_activeControllerType(::GlobalNamespace::OVRInput_Controller value);

  static inline void setStaticF_connectedControllerTypes(::GlobalNamespace::OVRInput_Controller value);

  static inline void setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::OVRInput_OVRControllerBase*>* value);

  static inline void setStaticF_fixedUpdateCount(int32_t value);

  static inline void setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::OVRInput_HapticInfo*, ::Array<::GlobalNamespace::OVRInput_HapticInfo*>*> value);

  static inline void setStaticF_openVRControllerDetails(::ArrayW<::GlobalNamespace::OVRInput_OpenVRControllerDetails, ::Array<::GlobalNamespace::OVRInput_OpenVRControllerDetails>*> value);

  static inline void setStaticF_stepType(::GlobalNamespace::OVRPlugin_Step value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRInput(OVRInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRInput(OVRInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7936 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Axis1D, "", "OVRInput/Axis1D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Axis2D, "", "OVRInput/Axis2D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Button, "", "OVRInput/Button");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Controller, "", "OVRInput/Controller");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_ControllerInHandState, "", "OVRInput/ControllerInHandState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Hand, "", "OVRInput/Hand");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Handedness, "", "OVRInput/Handedness");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_HapticsLocation, "", "OVRInput/HapticsLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_InputDeviceShowState, "", "OVRInput/InputDeviceShowState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_InteractionProfile, "", "OVRInput/InteractionProfile");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_NearTouch, "", "OVRInput/NearTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OpenVRButton, "", "OVRInput/OpenVRButton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OpenVRController, "", "OVRInput/OpenVRController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_RawAxis1D, "", "OVRInput/RawAxis1D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_RawAxis2D, "", "OVRInput/RawAxis2D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_RawButton, "", "OVRInput/RawButton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_RawNearTouch, "", "OVRInput/RawNearTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_RawTouch, "", "OVRInput/RawTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_Touch, "", "OVRInput/Touch");
NEED_NO_BOX(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis1DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis1DMap");
NEED_NO_BOX(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
NEED_NO_BOX(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualButtonMap*, "", "OVRInput/OVRControllerBase/VirtualButtonMap");
NEED_NO_BOX(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualNearTouchMap*, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
NEED_NO_BOX(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRControllerBase_OVRInput_VirtualTouchMap*, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
NEED_NO_BOX(::GlobalNamespace::OVRInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput*, "", "OVRInput");
NEED_NO_BOX(::GlobalNamespace::OVRInput_HapticInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_HapticInfo*, "", "OVRInput/HapticInfo");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerBase*, "", "OVRInput/OVRControllerBase");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerGamepadAndroid*, "", "OVRInput/OVRControllerGamepadAndroid");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerGamepadPC);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerGamepadPC*, "", "OVRInput/OVRControllerGamepadPC");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerHands);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerHands*, "", "OVRInput/OVRControllerHands");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerLHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerLHand*, "", "OVRInput/OVRControllerLHand");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerLTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerLTouch*, "", "OVRInput/OVRControllerLTouch");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerRHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerRHand*, "", "OVRInput/OVRControllerRHand");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerRTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerRTouch*, "", "OVRInput/OVRControllerRTouch");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerRemote);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerRemote*, "", "OVRInput/OVRControllerRemote");
NEED_NO_BOX(::GlobalNamespace::OVRInput_OVRControllerTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OVRControllerTouch*, "", "OVRInput/OVRControllerTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_HapticsAmplitudeEnvelopeVibration, "", "OVRInput/HapticsAmplitudeEnvelopeVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_HapticsPcmVibration, "", "OVRInput/HapticsPcmVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput_OpenVRControllerDetails, "", "OVRInput/OpenVRControllerDetails");
