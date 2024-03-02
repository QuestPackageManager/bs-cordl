#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput)
namespace GlobalNamespace {
struct __OVRInput__Axis1D;
}
namespace GlobalNamespace {
struct __OVRInput__Axis2D;
}
namespace GlobalNamespace {
struct __OVRInput__Button;
}
namespace GlobalNamespace {
struct __OVRInput__ControllerInHandState;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace GlobalNamespace {
struct __OVRInput__Hand;
}
namespace GlobalNamespace {
struct __OVRInput__Handedness;
}
namespace GlobalNamespace {
class __OVRInput__HapticInfo;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsLocation;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct __OVRInput__InputDeviceShowState;
}
namespace GlobalNamespace {
struct __OVRInput__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRInput__NearTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis1DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis2DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualButtonMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualNearTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerHands;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLHand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRHand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRemote;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerTouch;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRButton;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRControllerDetails;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRController;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis1D;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis2D;
}
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
namespace GlobalNamespace {
struct __OVRInput__RawNearTouch;
}
namespace GlobalNamespace {
struct __OVRInput__RawTouch;
}
namespace GlobalNamespace {
struct __OVRInput__Touch;
}
namespace GlobalNamespace {
struct __OVRPlugin__ControllerState6;
}
namespace GlobalNamespace {
struct __OVRPlugin__Step;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
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
struct __OVRInput__Axis1D;
}
namespace GlobalNamespace {
struct __OVRInput__Axis2D;
}
namespace GlobalNamespace {
struct __OVRInput__Button;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace GlobalNamespace {
struct __OVRInput__ControllerInHandState;
}
namespace GlobalNamespace {
struct __OVRInput__Hand;
}
namespace GlobalNamespace {
struct __OVRInput__Handedness;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsLocation;
}
namespace GlobalNamespace {
struct __OVRInput__InputDeviceShowState;
}
namespace GlobalNamespace {
struct __OVRInput__InteractionProfile;
}
namespace GlobalNamespace {
struct __OVRInput__NearTouch;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRButton;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRController;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis1D;
}
namespace GlobalNamespace {
struct __OVRInput__RawAxis2D;
}
namespace GlobalNamespace {
struct __OVRInput__RawButton;
}
namespace GlobalNamespace {
struct __OVRInput__RawNearTouch;
}
namespace GlobalNamespace {
struct __OVRInput__RawTouch;
}
namespace GlobalNamespace {
struct __OVRInput__Touch;
}
namespace GlobalNamespace {
class OVRInput;
}
namespace GlobalNamespace {
class __OVRInput__HapticInfo;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis1DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualAxis2DMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualButtonMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualNearTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerBase__VirtualTouchMap;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadAndroid;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerGamepadPC;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerHands;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLHand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerLTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRHand;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRTouch;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerRemote;
}
namespace GlobalNamespace {
class __OVRInput__OVRControllerTouch;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct __OVRInput__HapticsPcmVibration;
}
namespace GlobalNamespace {
struct __OVRInput__OpenVRControllerDetails;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRInput__Axis1D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Axis2D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Button);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Controller);
MARK_VAL_T(::GlobalNamespace::__OVRInput__ControllerInHandState);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Hand);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Handedness);
MARK_VAL_T(::GlobalNamespace::__OVRInput__HapticsLocation);
MARK_VAL_T(::GlobalNamespace::__OVRInput__InputDeviceShowState);
MARK_VAL_T(::GlobalNamespace::__OVRInput__InteractionProfile);
MARK_VAL_T(::GlobalNamespace::__OVRInput__NearTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__OpenVRButton);
MARK_VAL_T(::GlobalNamespace::__OVRInput__OpenVRController);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawAxis1D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawAxis2D);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawButton);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawNearTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__RawTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__Touch);
MARK_REF_PTR_T(::GlobalNamespace::OVRInput);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__HapticInfo);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerGamepadPC);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerHands);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerLHand);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerLTouch);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerRHand);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerRTouch);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerRemote);
MARK_REF_PTR_T(::GlobalNamespace::__OVRInput__OVRControllerTouch);
MARK_VAL_T(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration);
MARK_VAL_T(::GlobalNamespace::__OVRInput__HapticsPcmVibration);
MARK_VAL_T(::GlobalNamespace::__OVRInput__OpenVRControllerDetails);
// Type: ::Button
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Button
struct CORDL_TYPE __OVRInput__Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Button_Unwrapped
  enum struct ____OVRInput__Button_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__Button_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Button(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Button const Any;

  /// @brief Field Back value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__Button const Back;

  /// @brief Field Down value: static_cast<int32_t>(0x20000000)
  static ::GlobalNamespace::__OVRInput__Button const Down;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__Button const DpadDown;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__Button const DpadLeft;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__Button const DpadRight;

  /// @brief Field DpadUp value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__Button const DpadUp;

  /// @brief Field Four value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Button const Four;

  /// @brief Field Left value: static_cast<int32_t>(0x40000000)
  static ::GlobalNamespace::__OVRInput__Button const Left;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Button const None;

  /// @brief Field One value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Button const One;

  /// @brief Field PrimaryHandTrigger value: static_cast<int32_t>(0x4000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryIndexTrigger;

  /// @brief Field PrimaryShoulder value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryShoulder;

  /// @brief Field PrimaryThumbstick value: static_cast<int32_t>(0x8000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickDown value: static_cast<int32_t>(0x20000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft value: static_cast<int32_t>(0x40000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight value: static_cast<int32_t>(0x80000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickRight;

  /// @brief Field PrimaryThumbstickUp value: static_cast<int32_t>(0x10000)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryThumbstickUp;

  /// @brief Field PrimaryTouchpad value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__Button const PrimaryTouchpad;

  /// @brief Field Right value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__Button const Right;

  /// @brief Field SecondaryHandTrigger value: static_cast<int32_t>(0x400000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x200000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryIndexTrigger;

  /// @brief Field SecondaryShoulder value: static_cast<int32_t>(0x100000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryShoulder;

  /// @brief Field SecondaryThumbstick value: static_cast<int32_t>(0x800000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickDown value: static_cast<int32_t>(0x2000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft value: static_cast<int32_t>(0x4000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight value: static_cast<int32_t>(0x8000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickRight;

  /// @brief Field SecondaryThumbstickUp value: static_cast<int32_t>(0x1000000)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryThumbstickUp;

  /// @brief Field SecondaryTouchpad value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__Button const SecondaryTouchpad;

  /// @brief Field Start value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__Button const Start;

  /// @brief Field Three value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Button const Three;

  /// @brief Field Two value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Button const Two;

  /// @brief Field Up value: static_cast<int32_t>(0x10000000)
  static ::GlobalNamespace::__OVRInput__Button const Up;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Button, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Button, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RawButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::RawButton
struct CORDL_TYPE __OVRInput__RawButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawButton_Unwrapped
  enum struct ____OVRInput__RawButton_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__RawButton_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawButton(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field A value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawButton const A;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawButton const Any;

  /// @brief Field B value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawButton const B;

  /// @brief Field Back value: static_cast<int32_t>(0x200000)
  static ::GlobalNamespace::__OVRInput__RawButton const Back;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x20000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadDown;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x40000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadLeft;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x80000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadRight;

  /// @brief Field DpadUp value: static_cast<int32_t>(0x10000)
  static ::GlobalNamespace::__OVRInput__RawButton const DpadUp;

  /// @brief Field LHandTrigger value: static_cast<int32_t>(0x20000000)
  static ::GlobalNamespace::__OVRInput__RawButton const LHandTrigger;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x10000000)
  static ::GlobalNamespace::__OVRInput__RawButton const LIndexTrigger;

  /// @brief Field LShoulder value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__RawButton const LShoulder;

  /// @brief Field LThumbstick value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstick;

  /// @brief Field LThumbstickDown value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickDown;

  /// @brief Field LThumbstickLeft value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickLeft;

  /// @brief Field LThumbstickRight value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickRight;

  /// @brief Field LThumbstickUp value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__RawButton const LThumbstickUp;

  /// @brief Field LTouchpad value: static_cast<int32_t>(0x40000000)
  static ::GlobalNamespace::__OVRInput__RawButton const LTouchpad;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawButton const None;

  /// @brief Field RHandTrigger value: static_cast<int32_t>(0x8000000)
  static ::GlobalNamespace::__OVRInput__RawButton const RHandTrigger;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x4000000)
  static ::GlobalNamespace::__OVRInput__RawButton const RIndexTrigger;

  /// @brief Field RShoulder value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawButton const RShoulder;

  /// @brief Field RThumbstick value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstick;

  /// @brief Field RThumbstickDown value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickDown;

  /// @brief Field RThumbstickLeft value: static_cast<int32_t>(0x4000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickLeft;

  /// @brief Field RThumbstickRight value: static_cast<int32_t>(0x8000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickRight;

  /// @brief Field RThumbstickUp value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__RawButton const RThumbstickUp;

  /// @brief Field RTouchpad value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__RawButton const RTouchpad;

  /// @brief Field Start value: static_cast<int32_t>(0x100000)
  static ::GlobalNamespace::__OVRInput__RawButton const Start;

  /// @brief Field X value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__RawButton const X;

  /// @brief Field Y value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__RawButton const Y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__RawButton, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Touch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Touch
struct CORDL_TYPE __OVRInput__Touch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Touch_Unwrapped
  enum struct ____OVRInput__Touch_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__Touch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Touch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Touch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Touch(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Touch const Any;

  /// @brief Field Four value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Touch const Four;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Touch const None;

  /// @brief Field One value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Touch const One;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbRest value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryThumbRest;

  /// @brief Field PrimaryThumbstick value: static_cast<int32_t>(0x8000)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__Touch const PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x200000)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbRest value: static_cast<int32_t>(0x100000)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryThumbRest;

  /// @brief Field SecondaryThumbstick value: static_cast<int32_t>(0x800000)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__Touch const SecondaryTouchpad;

  /// @brief Field Three value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Touch const Three;

  /// @brief Field Two value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Touch const Two;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Touch, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Touch, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RawTouch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::RawTouch
struct CORDL_TYPE __OVRInput__RawTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawTouch_Unwrapped
  enum struct ____OVRInput__RawTouch_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__RawTouch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawTouch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawTouch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawTouch(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field A value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawTouch const A;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawTouch const Any;

  /// @brief Field B value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawTouch const B;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__RawTouch const LIndexTrigger;

  /// @brief Field LThumbRest value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__RawTouch const LThumbRest;

  /// @brief Field LThumbstick value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__RawTouch const LThumbstick;

  /// @brief Field LTouchpad value: static_cast<int32_t>(0x40000000)
  static ::GlobalNamespace::__OVRInput__RawTouch const LTouchpad;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawTouch const None;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__RawTouch const RIndexTrigger;

  /// @brief Field RThumbRest value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawTouch const RThumbRest;

  /// @brief Field RThumbstick value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawTouch const RThumbstick;

  /// @brief Field RTouchpad value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__RawTouch const RTouchpad;

  /// @brief Field X value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__RawTouch const X;

  /// @brief Field Y value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__RawTouch const Y;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawTouch, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__RawTouch, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NearTouch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::NearTouch
struct CORDL_TYPE __OVRInput__NearTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__NearTouch_Unwrapped
  enum struct ____OVRInput__NearTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryIndexTrigger = static_cast<int32_t>(0x1),
    __E_PrimaryThumbButtons = static_cast<int32_t>(0x2),
    __E_SecondaryIndexTrigger = static_cast<int32_t>(0x4),
    __E_SecondaryThumbButtons = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__NearTouch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__NearTouch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__NearTouch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__NearTouch(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__NearTouch const Any;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__NearTouch const None;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__NearTouch const PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__NearTouch const PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__NearTouch const SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__NearTouch const SecondaryThumbButtons;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__NearTouch, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__NearTouch, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RawNearTouch
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::RawNearTouch
struct CORDL_TYPE __OVRInput__RawNearTouch {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawNearTouch_Unwrapped
  enum struct ____OVRInput__RawNearTouch_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LIndexTrigger = static_cast<int32_t>(0x1),
    __E_LThumbButtons = static_cast<int32_t>(0x2),
    __E_RIndexTrigger = static_cast<int32_t>(0x4),
    __E_RThumbButtons = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawNearTouch_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawNearTouch_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawNearTouch();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawNearTouch(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const Any;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const LIndexTrigger;

  /// @brief Field LThumbButtons value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const LThumbButtons;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const None;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const RIndexTrigger;

  /// @brief Field RThumbButtons value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawNearTouch const RThumbButtons;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawNearTouch, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__RawNearTouch, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Axis1D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Axis1D
struct CORDL_TYPE __OVRInput__Axis1D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Axis1D_Unwrapped
  enum struct ____OVRInput__Axis1D_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__Axis1D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Axis1D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Axis1D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Axis1D(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Axis1D const Any;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Axis1D const None;

  /// @brief Field PrimaryHandTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTrigger;

  /// @brief Field PrimaryIndexTriggerCurl value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerForce value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTriggerForce;

  /// @brief Field PrimaryIndexTriggerSlide value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryStylusForce value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryStylusForce;

  /// @brief Field PrimaryThumbRestForce value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__Axis1D const PrimaryThumbRestForce;

  /// @brief Field SecondaryHandTrigger value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTrigger;

  /// @brief Field SecondaryIndexTriggerCurl value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerForce value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerSlide value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryStylusForce value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryStylusForce;

  /// @brief Field SecondaryThumbRestForce value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__Axis1D const SecondaryThumbRestForce;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Axis1D, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Axis1D, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RawAxis1D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::RawAxis1D
struct CORDL_TYPE __OVRInput__RawAxis1D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawAxis1D_Unwrapped
  enum struct ____OVRInput__RawAxis1D_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__RawAxis1D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawAxis1D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawAxis1D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawAxis1D(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const Any;

  /// @brief Field LHandTrigger value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LHandTrigger;

  /// @brief Field LIndexTrigger value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTrigger;

  /// @brief Field LIndexTriggerCurl value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTriggerCurl;

  /// @brief Field LIndexTriggerForce value: static_cast<int32_t>(0x1000)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTriggerForce;

  /// @brief Field LIndexTriggerSlide value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LIndexTriggerSlide;

  /// @brief Field LStylusForce value: static_cast<int32_t>(0x80)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LStylusForce;

  /// @brief Field LThumbRestForce value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const LThumbRestForce;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const None;

  /// @brief Field RHandTrigger value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RHandTrigger;

  /// @brief Field RIndexTrigger value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTrigger;

  /// @brief Field RIndexTriggerCurl value: static_cast<int32_t>(0x100)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTriggerCurl;

  /// @brief Field RIndexTriggerForce value: static_cast<int32_t>(0x2000)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTriggerForce;

  /// @brief Field RIndexTriggerSlide value: static_cast<int32_t>(0x200)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RIndexTriggerSlide;

  /// @brief Field RStylusForce value: static_cast<int32_t>(0x800)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RStylusForce;

  /// @brief Field RThumbRestForce value: static_cast<int32_t>(0x400)
  static ::GlobalNamespace::__OVRInput__RawAxis1D const RThumbRestForce;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawAxis1D, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__RawAxis1D, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Axis2D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Axis2D
struct CORDL_TYPE __OVRInput__Axis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Axis2D_Unwrapped
  enum struct ____OVRInput__Axis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryThumbstick = static_cast<int32_t>(0x1),
    __E_PrimaryTouchpad = static_cast<int32_t>(0x4),
    __E_SecondaryThumbstick = static_cast<int32_t>(0x2),
    __E_SecondaryTouchpad = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Axis2D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Axis2D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Axis2D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Axis2D(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Axis2D const Any;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Axis2D const None;

  /// @brief Field PrimaryThumbstick value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Axis2D const PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Axis2D const PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Axis2D const SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__Axis2D const SecondaryTouchpad;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Axis2D, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Axis2D, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RawAxis2D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::RawAxis2D
struct CORDL_TYPE __OVRInput__RawAxis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__RawAxis2D_Unwrapped
  enum struct ____OVRInput__RawAxis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_LThumbstick = static_cast<int32_t>(0x1),
    __E_LTouchpad = static_cast<int32_t>(0x4),
    __E_RThumbstick = static_cast<int32_t>(0x2),
    __E_RTouchpad = static_cast<int32_t>(0x8),
    __E_Any = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__RawAxis2D_Unwrapped() const noexcept {
    return static_cast<____OVRInput__RawAxis2D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__RawAxis2D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__RawAxis2D(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Any value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const Any;

  /// @brief Field LThumbstick value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const LThumbstick;

  /// @brief Field LTouchpad value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const LTouchpad;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const None;

  /// @brief Field RThumbstick value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const RThumbstick;

  /// @brief Field RTouchpad value: static_cast<int32_t>(0x8)
  static ::GlobalNamespace::__OVRInput__RawAxis2D const RTouchpad;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__RawAxis2D, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__RawAxis2D, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenVRButton
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::OpenVRButton
struct CORDL_TYPE __OVRInput__OpenVRButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____OVRInput__OpenVRButton_Unwrapped
  enum struct ____OVRInput__OpenVRButton_Unwrapped : uint64_t {
    __E_None = static_cast<uint64_t>(0x0u),
    __E_Two = static_cast<uint64_t>(0x2u),
    __E_Thumbstick = static_cast<uint64_t>(0x100000000u),
    __E_Grip = static_cast<uint64_t>(0x4u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__OpenVRButton_Unwrapped() const noexcept {
    return static_cast<____OVRInput__OpenVRButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OpenVRButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__OpenVRButton(uint64_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief Field Grip value: static_cast<uint64_t>(0x4u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const Grip;

  /// @brief Field None value: static_cast<uint64_t>(0x0u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const None;

  /// @brief Field Thumbstick value: static_cast<uint64_t>(0x100000000u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const Thumbstick;

  /// @brief Field Two value: static_cast<uint64_t>(0x2u)
  static ::GlobalNamespace::__OVRInput__OpenVRButton const Two;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OpenVRButton, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRButton, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Controller
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Controller
struct CORDL_TYPE __OVRInput__Controller {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Controller_Unwrapped
  enum struct ____OVRInput__Controller_Unwrapped : int32_t {
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
  constexpr operator ____OVRInput__Controller_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Controller_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Controller();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Controller(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Active value: static_cast<int32_t>(0x80000000)
  static ::GlobalNamespace::__OVRInput__Controller const Active;

  /// @brief Field All value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Controller const All;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x10)
  static ::GlobalNamespace::__OVRInput__Controller const Gamepad;

  /// @brief Field Hands value: static_cast<int32_t>(0x60)
  static ::GlobalNamespace::__OVRInput__Controller const Hands;

  /// @brief Field LHand value: static_cast<int32_t>(0x20)
  static ::GlobalNamespace::__OVRInput__Controller const LHand;

  /// @brief Field LTouch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Controller const LTouch;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Controller const None;

  /// @brief Field RHand value: static_cast<int32_t>(0x40)
  static ::GlobalNamespace::__OVRInput__Controller const RHand;

  /// @brief Field RTouch value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Controller const RTouch;

  /// @brief Field Remote value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__Controller const Remote;

  /// @brief Field Touch value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRInput__Controller const Touch;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Controller, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Controller, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Handedness
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Handedness
struct CORDL_TYPE __OVRInput__Handedness {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Handedness_Unwrapped
  enum struct ____OVRInput__Handedness_Unwrapped : int32_t {
    __E_Unsupported = static_cast<int32_t>(0x0),
    __E_LeftHanded = static_cast<int32_t>(0x1),
    __E_RightHanded = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Handedness_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Handedness_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Handedness();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Handedness(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LeftHanded value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Handedness const LeftHanded;

  /// @brief Field RightHanded value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__Handedness const RightHanded;

  /// @brief Field Unsupported value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Handedness const Unsupported;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Handedness, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Handedness, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsLocation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::HapticsLocation
struct CORDL_TYPE __OVRInput__HapticsLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__HapticsLocation_Unwrapped
  enum struct ____OVRInput__HapticsLocation_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Hand = static_cast<int32_t>(0x1),
    __E_Thumb = static_cast<int32_t>(0x2),
    __E_Index = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__HapticsLocation_Unwrapped() const noexcept {
    return static_cast<____OVRInput__HapticsLocation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticsLocation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__HapticsLocation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Hand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const Hand;

  /// @brief Field Index value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const Index;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const None;

  /// @brief Field Thumb value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__HapticsLocation const Thumb;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticsLocation, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsLocation, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InteractionProfile
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::InteractionProfile
struct CORDL_TYPE __OVRInput__InteractionProfile {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__InteractionProfile_Unwrapped
  enum struct ____OVRInput__InteractionProfile_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Touch = static_cast<int32_t>(0x1),
    __E_TouchPro = static_cast<int32_t>(0x2),
    __E_TouchPlus = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__InteractionProfile_Unwrapped() const noexcept {
    return static_cast<____OVRInput__InteractionProfile_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__InteractionProfile();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__InteractionProfile(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const None;

  /// @brief Field Touch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const Touch;

  /// @brief Field TouchPlus value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const TouchPlus;

  /// @brief Field TouchPro value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__InteractionProfile const TouchPro;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__InteractionProfile, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__InteractionProfile, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Hand
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::Hand
struct CORDL_TYPE __OVRInput__Hand {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__Hand_Unwrapped
  enum struct ____OVRInput__Hand_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0xffffffff),
    __E_HandLeft = static_cast<int32_t>(0x0),
    __E_HandRight = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__Hand_Unwrapped() const noexcept {
    return static_cast<____OVRInput__Hand_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__Hand();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__Hand(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field HandLeft value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__Hand const HandLeft;

  /// @brief Field HandRight value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__Hand const HandRight;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::GlobalNamespace::__OVRInput__Hand const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__Hand, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__Hand, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::InputDeviceShowState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::InputDeviceShowState
struct CORDL_TYPE __OVRInput__InputDeviceShowState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__InputDeviceShowState_Unwrapped
  enum struct ____OVRInput__InputDeviceShowState_Unwrapped : int32_t {
    __E_Always = static_cast<int32_t>(0x0),
    __E_ControllerInHandOrNoHand = static_cast<int32_t>(0x1),
    __E_ControllerInHand = static_cast<int32_t>(0x2),
    __E_ControllerNotInHand = static_cast<int32_t>(0x3),
    __E_NoHand = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__InputDeviceShowState_Unwrapped() const noexcept {
    return static_cast<____OVRInput__InputDeviceShowState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__InputDeviceShowState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__InputDeviceShowState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Always value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const Always;

  /// @brief Field ControllerInHand value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const ControllerInHand;

  /// @brief Field ControllerInHandOrNoHand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const ControllerInHandOrNoHand;

  /// @brief Field ControllerNotInHand value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const ControllerNotInHand;

  /// @brief Field NoHand value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__OVRInput__InputDeviceShowState const NoHand;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__InputDeviceShowState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__InputDeviceShowState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ControllerInHandState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::ControllerInHandState
struct CORDL_TYPE __OVRInput__ControllerInHandState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRInput__ControllerInHandState_Unwrapped
  enum struct ____OVRInput__ControllerInHandState_Unwrapped : int32_t {
    __E_NoHand = static_cast<int32_t>(0x0),
    __E_ControllerInHand = static_cast<int32_t>(0x1),
    __E_ControllerNotInHand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__ControllerInHandState_Unwrapped() const noexcept {
    return static_cast<____OVRInput__ControllerInHandState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__ControllerInHandState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__ControllerInHandState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ControllerInHand value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRInput__ControllerInHandState const ControllerInHand;

  /// @brief Field ControllerNotInHand value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__OVRInput__ControllerInHandState const ControllerNotInHand;

  /// @brief Field NoHand value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRInput__ControllerInHandState const NoHand;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__ControllerInHandState, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__ControllerInHandState, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsAmplitudeEnvelopeVibration
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::HapticsAmplitudeEnvelopeVibration
struct CORDL_TYPE __OVRInput__HapticsAmplitudeEnvelopeVibration {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticsAmplitudeEnvelopeVibration();

  // Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t Duration) noexcept;

  /// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field Duration, offset: 0x10, size: 0x4, def value: None
  float_t Duration;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, SamplesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, Samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, Duration) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticsPcmVibration
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::HapticsPcmVibration
struct CORDL_TYPE __OVRInput__HapticsPcmVibration {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticsPcmVibration();

  // Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value:
  // None }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRInput__HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t SampleRateHz, bool Append) noexcept;

  /// @brief Field SamplesCount, offset: 0x0, size: 0x4, def value: None
  int32_t SamplesCount;

  /// @brief Field Samples, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> Samples;

  /// @brief Field SampleRateHz, offset: 0x10, size: 0x4, def value: None
  float_t SampleRateHz;

  /// @brief Field Append, offset: 0x14, size: 0x1, def value: None
  bool Append;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticsPcmVibration, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsPcmVibration, SamplesCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsPcmVibration, Samples) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsPcmVibration, SampleRateHz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticsPcmVibration, Append) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenVRController
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::OpenVRController
struct CORDL_TYPE __OVRInput__OpenVRController {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct ____OVRInput__OpenVRController_Unwrapped
  enum struct ____OVRInput__OpenVRController_Unwrapped : uint64_t {
    __E_Unknown = static_cast<uint64_t>(0x0u),
    __E_OculusTouch = static_cast<uint64_t>(0x1u),
    __E_ViveController = static_cast<uint64_t>(0x2u),
    __E_WindowsMRController = static_cast<uint64_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRInput__OpenVRController_Unwrapped() const noexcept {
    return static_cast<____OVRInput__OpenVRController_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OpenVRController();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OVRInput__OpenVRController(uint64_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  /// @brief Field OculusTouch value: static_cast<uint64_t>(0x1u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const OculusTouch;

  /// @brief Field Unknown value: static_cast<uint64_t>(0x0u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const Unknown;

  /// @brief Field ViveController value: static_cast<uint64_t>(0x2u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const ViveController;

  /// @brief Field WindowsMRController value: static_cast<uint64_t>(0x3u)
  static ::GlobalNamespace::__OVRInput__OpenVRController const WindowsMRController;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OpenVRController, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRController, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OpenVRControllerDetails
// SizeInfo { instance_size: 104, native_size: 104, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRInput::OpenVRControllerDetails
struct CORDL_TYPE __OVRInput__OpenVRControllerDetails {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OpenVRControllerDetails();

  // Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: None }, CppParam { name: "controllerType", ty:
  // "::GlobalNamespace::__OVRInput__OpenVRController", modifiers: "", def_value: None }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr __OVRInput__OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t state, ::GlobalNamespace::__OVRInput__OpenVRController controllerType, uint32_t deviceID,
                                                ::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localOrientation) noexcept;

  /// @brief Field state, offset: 0x0, size: 0x40, def value: None
  ::OVR::OpenVR::VRControllerState_t state;

  /// @brief Field controllerType, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OpenVRController controllerType;

  /// @brief Field deviceID, offset: 0x48, size: 0x4, def value: None
  uint32_t deviceID;

  /// @brief Field localPosition, offset: 0x4c, size: 0xc, def value: None
  ::UnityEngine::Vector3 localPosition;

  /// @brief Field localOrientation, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Quaternion localOrientation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, controllerType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, deviceID) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, localPosition) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, localOrientation) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HapticInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::HapticInfo*
class CORDL_TYPE __OVRInput__HapticInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field hapticAmplitude, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticAmplitude, put = __cordl_internal_set_hapticAmplitude)) float_t hapticAmplitude;

  /// @brief Field hapticsDuration, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticsDuration, put = __cordl_internal_set_hapticsDuration)) float_t hapticsDuration;

  /// @brief Field hapticsDurationPlayed, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_hapticsDurationPlayed, put = __cordl_internal_set_hapticsDurationPlayed)) float_t hapticsDurationPlayed;

  /// @brief Field node, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node))::UnityEngine::XR::XRNode node;

  /// @brief Field playingHaptics, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_playingHaptics, put = __cordl_internal_set_playingHaptics)) bool playingHaptics;

  static inline ::GlobalNamespace::__OVRInput__HapticInfo* New_ctor();

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

  /// @brief Method .ctor, addr 0x282801c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__HapticInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__HapticInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__HapticInfo(__OVRInput__HapticInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__HapticInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__HapticInfo(__OVRInput__HapticInfo const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__HapticInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticInfo, ___playingHaptics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticInfo, ___hapticsDurationPlayed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticInfo, ___hapticsDuration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticInfo, ___hapticAmplitude) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__HapticInfo, ___node) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualButtonMap
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerBase::VirtualButtonMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualButtonMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field Back, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_Back, put = __cordl_internal_set_Back))::GlobalNamespace::__OVRInput__RawButton Back;

  /// @brief Field Down, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_Down, put = __cordl_internal_set_Down))::GlobalNamespace::__OVRInput__RawButton Down;

  /// @brief Field DpadDown, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadDown, put = __cordl_internal_set_DpadDown))::GlobalNamespace::__OVRInput__RawButton DpadDown;

  /// @brief Field DpadLeft, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadLeft, put = __cordl_internal_set_DpadLeft))::GlobalNamespace::__OVRInput__RawButton DpadLeft;

  /// @brief Field DpadRight, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadRight, put = __cordl_internal_set_DpadRight))::GlobalNamespace::__OVRInput__RawButton DpadRight;

  /// @brief Field DpadUp, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_DpadUp, put = __cordl_internal_set_DpadUp))::GlobalNamespace::__OVRInput__RawButton DpadUp;

  /// @brief Field Four, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Four, put = __cordl_internal_set_Four))::GlobalNamespace::__OVRInput__RawButton Four;

  /// @brief Field Left, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_Left, put = __cordl_internal_set_Left))::GlobalNamespace::__OVRInput__RawButton Left;

  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None))::GlobalNamespace::__OVRInput__RawButton None;

  /// @brief Field One, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_One, put = __cordl_internal_set_One))::GlobalNamespace::__OVRInput__RawButton One;

  /// @brief Field PrimaryHandTrigger, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryHandTrigger, put = __cordl_internal_set_PrimaryHandTrigger))::GlobalNamespace::__OVRInput__RawButton PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawButton PrimaryIndexTrigger;

  /// @brief Field PrimaryShoulder, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryShoulder, put = __cordl_internal_set_PrimaryShoulder))::GlobalNamespace::__OVRInput__RawButton PrimaryShoulder;

  /// @brief Field PrimaryThumbstick, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstick, put = __cordl_internal_set_PrimaryThumbstick))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickDown, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickDown, put = __cordl_internal_set_PrimaryThumbstickDown))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickLeft, put = __cordl_internal_set_PrimaryThumbstickLeft))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickRight, put = __cordl_internal_set_PrimaryThumbstickRight))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickRight;

  /// @brief Field PrimaryThumbstickUp, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstickUp, put = __cordl_internal_set_PrimaryThumbstickUp))::GlobalNamespace::__OVRInput__RawButton PrimaryThumbstickUp;

  /// @brief Field PrimaryTouchpad, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryTouchpad, put = __cordl_internal_set_PrimaryTouchpad))::GlobalNamespace::__OVRInput__RawButton PrimaryTouchpad;

  /// @brief Field Right, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_Right, put = __cordl_internal_set_Right))::GlobalNamespace::__OVRInput__RawButton Right;

  /// @brief Field SecondaryHandTrigger, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryHandTrigger, put = __cordl_internal_set_SecondaryHandTrigger))::GlobalNamespace::__OVRInput__RawButton SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawButton SecondaryIndexTrigger;

  /// @brief Field SecondaryShoulder, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryShoulder, put = __cordl_internal_set_SecondaryShoulder))::GlobalNamespace::__OVRInput__RawButton SecondaryShoulder;

  /// @brief Field SecondaryThumbstick, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstick, put = __cordl_internal_set_SecondaryThumbstick))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickDown, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickDown, put = __cordl_internal_set_SecondaryThumbstickDown))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickLeft, put = __cordl_internal_set_SecondaryThumbstickLeft))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickRight, put = __cordl_internal_set_SecondaryThumbstickRight))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickRight;

  /// @brief Field SecondaryThumbstickUp, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstickUp, put = __cordl_internal_set_SecondaryThumbstickUp))::GlobalNamespace::__OVRInput__RawButton SecondaryThumbstickUp;

  /// @brief Field SecondaryTouchpad, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryTouchpad, put = __cordl_internal_set_SecondaryTouchpad))::GlobalNamespace::__OVRInput__RawButton SecondaryTouchpad;

  /// @brief Field Start, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_Start, put = __cordl_internal_set_Start))::GlobalNamespace::__OVRInput__RawButton Start;

  /// @brief Field Three, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Three, put = __cordl_internal_set_Three))::GlobalNamespace::__OVRInput__RawButton Three;

  /// @brief Field Two, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Two, put = __cordl_internal_set_Two))::GlobalNamespace::__OVRInput__RawButton Two;

  /// @brief Field Up, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_Up, put = __cordl_internal_set_Up))::GlobalNamespace::__OVRInput__RawButton Up;

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x28297d0, size 0x214, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawButton ToRawMask(::GlobalNamespace::__OVRInput__Button virtualMask);

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Back() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Back();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Down() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Down();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_DpadDown() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_DpadDown();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_DpadLeft() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_DpadLeft();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_DpadRight() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_DpadRight();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_DpadUp() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_DpadUp();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Four() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Four();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Left() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Left();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_One() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_One();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryHandTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryShoulder() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryShoulder();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryThumbstick() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryThumbstickDown() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryThumbstickDown();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryThumbstickLeft() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryThumbstickLeft();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryThumbstickRight() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryThumbstickRight();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryThumbstickUp() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryThumbstickUp();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_PrimaryTouchpad() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Right() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Right();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryHandTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryShoulder() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryShoulder();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryThumbstick() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryThumbstickDown() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryThumbstickDown();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryThumbstickLeft() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryThumbstickLeft();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryThumbstickRight() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryThumbstickRight();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryThumbstickUp() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryThumbstickUp();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_SecondaryTouchpad() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Start() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Start();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Three() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Three();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Two() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Two();

  constexpr ::GlobalNamespace::__OVRInput__RawButton const& __cordl_internal_get_Up() const;

  constexpr ::GlobalNamespace::__OVRInput__RawButton& __cordl_internal_get_Up();

  constexpr void __cordl_internal_set_Back(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Down(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_DpadDown(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_DpadLeft(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_DpadRight(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_DpadUp(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Four(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Left(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_None(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_One(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryShoulder(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickDown(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickLeft(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickRight(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryThumbstickUp(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Right(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryShoulder(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickDown(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickLeft(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickRight(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryThumbstickUp(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Start(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Three(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Two(::GlobalNamespace::__OVRInput__RawButton value);

  constexpr void __cordl_internal_set_Up(::GlobalNamespace::__OVRInput__RawButton value);

  /// @brief Method .ctor, addr 0x2828a94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualButtonMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualButtonMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualButtonMap(__OVRInput__OVRControllerBase__VirtualButtonMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualButtonMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualButtonMap(__OVRInput__OVRControllerBase__VirtualButtonMap const&) = delete;

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___None;

  /// @brief Field One, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___One;

  /// @brief Field Two, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Two;

  /// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Three;

  /// @brief Field Four, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Four;

  /// @brief Field Start, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Start;

  /// @brief Field Back, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Back;

  /// @brief Field PrimaryShoulder, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryShoulder;

  /// @brief Field PrimaryIndexTrigger, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryHandTrigger;

  /// @brief Field PrimaryThumbstick, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstick;

  /// @brief Field PrimaryThumbstickUp, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickUp;

  /// @brief Field PrimaryThumbstickDown, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickDown;

  /// @brief Field PrimaryThumbstickLeft, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickLeft;

  /// @brief Field PrimaryThumbstickRight, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryThumbstickRight;

  /// @brief Field PrimaryTouchpad, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___PrimaryTouchpad;

  /// @brief Field SecondaryShoulder, offset: 0x50, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryShoulder;

  /// @brief Field SecondaryIndexTrigger, offset: 0x54, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset: 0x58, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryHandTrigger;

  /// @brief Field SecondaryThumbstick, offset: 0x5c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstick;

  /// @brief Field SecondaryThumbstickUp, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickUp;

  /// @brief Field SecondaryThumbstickDown, offset: 0x64, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickDown;

  /// @brief Field SecondaryThumbstickLeft, offset: 0x68, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickLeft;

  /// @brief Field SecondaryThumbstickRight, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryThumbstickRight;

  /// @brief Field SecondaryTouchpad, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___SecondaryTouchpad;

  /// @brief Field DpadUp, offset: 0x74, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadUp;

  /// @brief Field DpadDown, offset: 0x78, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadDown;

  /// @brief Field DpadLeft, offset: 0x7c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadLeft;

  /// @brief Field DpadRight, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___DpadRight;

  /// @brief Field Up, offset: 0x84, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Up;

  /// @brief Field Down, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Down;

  /// @brief Field Left, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Left;

  /// @brief Field Right, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawButton ___Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___One) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Two) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Three) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Four) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Start) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Back) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryShoulder) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryIndexTrigger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryHandTrigger) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryThumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryThumbstickUp) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryThumbstickDown) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryThumbstickLeft) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryThumbstickRight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___PrimaryTouchpad) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryShoulder) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryIndexTrigger) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryHandTrigger) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryThumbstick) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryThumbstickUp) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryThumbstickDown) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryThumbstickLeft) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryThumbstickRight) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___SecondaryTouchpad) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___DpadUp) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___DpadDown) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___DpadLeft) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___DpadRight) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Up) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Down) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Left) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap, ___Right) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualTouchMap
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerBase::VirtualTouchMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualTouchMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field Four, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Four, put = __cordl_internal_set_Four))::GlobalNamespace::__OVRInput__RawTouch Four;

  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None))::GlobalNamespace::__OVRInput__RawTouch None;

  /// @brief Field One, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_One, put = __cordl_internal_set_One))::GlobalNamespace::__OVRInput__RawTouch One;

  /// @brief Field PrimaryIndexTrigger, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawTouch PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbRest, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbRest, put = __cordl_internal_set_PrimaryThumbRest))::GlobalNamespace::__OVRInput__RawTouch PrimaryThumbRest;

  /// @brief Field PrimaryThumbstick, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstick, put = __cordl_internal_set_PrimaryThumbstick))::GlobalNamespace::__OVRInput__RawTouch PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryTouchpad, put = __cordl_internal_set_PrimaryTouchpad))::GlobalNamespace::__OVRInput__RawTouch PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawTouch SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbRest, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbRest, put = __cordl_internal_set_SecondaryThumbRest))::GlobalNamespace::__OVRInput__RawTouch SecondaryThumbRest;

  /// @brief Field SecondaryThumbstick, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstick, put = __cordl_internal_set_SecondaryThumbstick))::GlobalNamespace::__OVRInput__RawTouch SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryTouchpad, put = __cordl_internal_set_SecondaryTouchpad))::GlobalNamespace::__OVRInput__RawTouch SecondaryTouchpad;

  /// @brief Field Three, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Three, put = __cordl_internal_set_Three))::GlobalNamespace::__OVRInput__RawTouch Three;

  /// @brief Field Two, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Two, put = __cordl_internal_set_Two))::GlobalNamespace::__OVRInput__RawTouch Two;

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x28299e4, size 0xd4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawTouch ToRawMask(::GlobalNamespace::__OVRInput__Touch virtualMask);

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_Four() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_Four();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_One() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_One();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_PrimaryThumbRest() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_PrimaryThumbRest();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_PrimaryThumbstick() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_PrimaryTouchpad() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_SecondaryThumbRest() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_SecondaryThumbRest();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_SecondaryThumbstick() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_SecondaryTouchpad() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_SecondaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_Three() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_Three();

  constexpr ::GlobalNamespace::__OVRInput__RawTouch const& __cordl_internal_get_Two() const;

  constexpr ::GlobalNamespace::__OVRInput__RawTouch& __cordl_internal_get_Two();

  constexpr void __cordl_internal_set_Four(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_None(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_One(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_PrimaryThumbRest(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_SecondaryThumbRest(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_Three(::GlobalNamespace::__OVRInput__RawTouch value);

  constexpr void __cordl_internal_set_Two(::GlobalNamespace::__OVRInput__RawTouch value);

  /// @brief Method .ctor, addr 0x2828a9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualTouchMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualTouchMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualTouchMap(__OVRInput__OVRControllerBase__VirtualTouchMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualTouchMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualTouchMap(__OVRInput__OVRControllerBase__VirtualTouchMap const&) = delete;

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___None;

  /// @brief Field One, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___One;

  /// @brief Field Two, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___Two;

  /// @brief Field Three, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___Three;

  /// @brief Field Four, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___Four;

  /// @brief Field PrimaryIndexTrigger, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbstick, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryThumbstick;

  /// @brief Field PrimaryThumbRest, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryThumbRest;

  /// @brief Field PrimaryTouchpad, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___PrimaryTouchpad;

  /// @brief Field SecondaryIndexTrigger, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbstick, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryThumbstick;

  /// @brief Field SecondaryThumbRest, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryThumbRest;

  /// @brief Field SecondaryTouchpad, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawTouch ___SecondaryTouchpad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___One) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___Two) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___Three) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___Four) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___PrimaryIndexTrigger) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___PrimaryThumbstick) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___PrimaryThumbRest) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___PrimaryTouchpad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___SecondaryIndexTrigger) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___SecondaryThumbstick) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___SecondaryThumbRest) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap, ___SecondaryTouchpad) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualNearTouchMap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerBase::VirtualNearTouchMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualNearTouchMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None))::GlobalNamespace::__OVRInput__RawNearTouch None;

  /// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawNearTouch PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbButtons, put = __cordl_internal_set_PrimaryThumbButtons))::GlobalNamespace::__OVRInput__RawNearTouch PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawNearTouch SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbButtons, put = __cordl_internal_set_SecondaryThumbButtons))::GlobalNamespace::__OVRInput__RawNearTouch SecondaryThumbButtons;

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x2829ab8, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawNearTouch ToRawMask(::GlobalNamespace::__OVRInput__NearTouch virtualMask);

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __cordl_internal_get_PrimaryThumbButtons() const;

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __cordl_internal_get_PrimaryThumbButtons();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& __cordl_internal_get_SecondaryThumbButtons() const;

  constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& __cordl_internal_get_SecondaryThumbButtons();

  constexpr void __cordl_internal_set_None(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr void __cordl_internal_set_PrimaryThumbButtons(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawNearTouch value);

  constexpr void __cordl_internal_set_SecondaryThumbButtons(::GlobalNamespace::__OVRInput__RawNearTouch value);

  /// @brief Method .ctor, addr 0x2828aa4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualNearTouchMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualNearTouchMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualNearTouchMap(__OVRInput__OVRControllerBase__VirtualNearTouchMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualNearTouchMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualNearTouchMap(__OVRInput__OVRControllerBase__VirtualNearTouchMap const&) = delete;

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___None;

  /// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___PrimaryIndexTrigger;

  /// @brief Field PrimaryThumbButtons, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___PrimaryThumbButtons;

  /// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___SecondaryIndexTrigger;

  /// @brief Field SecondaryThumbButtons, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawNearTouch ___SecondaryThumbButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, ___PrimaryIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, ___PrimaryThumbButtons) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, ___SecondaryIndexTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap, ___SecondaryThumbButtons) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualAxis1DMap
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerBase::VirtualAxis1DMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualAxis1DMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None))::GlobalNamespace::__OVRInput__RawAxis1D None;

  /// @brief Field PrimaryHandTrigger, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryHandTrigger, put = __cordl_internal_set_PrimaryHandTrigger))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryHandTrigger;

  /// @brief Field PrimaryIndexTrigger, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTrigger, put = __cordl_internal_set_PrimaryIndexTrigger))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTrigger;

  /// @brief Field PrimaryIndexTriggerCurl, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTriggerCurl, put = __cordl_internal_set_PrimaryIndexTriggerCurl))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerForce, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTriggerForce, put = __cordl_internal_set_PrimaryIndexTriggerForce))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTriggerForce;

  /// @brief Field PrimaryIndexTriggerSlide, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryIndexTriggerSlide, put = __cordl_internal_set_PrimaryIndexTriggerSlide))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryStylusForce, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryStylusForce, put = __cordl_internal_set_PrimaryStylusForce))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryStylusForce;

  /// @brief Field PrimaryThumbRestForce, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbRestForce, put = __cordl_internal_set_PrimaryThumbRestForce))::GlobalNamespace::__OVRInput__RawAxis1D PrimaryThumbRestForce;

  /// @brief Field SecondaryHandTrigger, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryHandTrigger, put = __cordl_internal_set_SecondaryHandTrigger))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTrigger, put = __cordl_internal_set_SecondaryIndexTrigger))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTrigger;

  /// @brief Field SecondaryIndexTriggerCurl, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTriggerCurl, put = __cordl_internal_set_SecondaryIndexTriggerCurl))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerForce, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTriggerForce, put = __cordl_internal_set_SecondaryIndexTriggerForce))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerSlide, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryIndexTriggerSlide, put = __cordl_internal_set_SecondaryIndexTriggerSlide))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryStylusForce, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryStylusForce, put = __cordl_internal_set_SecondaryStylusForce))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryStylusForce;

  /// @brief Field SecondaryThumbRestForce, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbRestForce, put = __cordl_internal_set_SecondaryThumbRestForce))::GlobalNamespace::__OVRInput__RawAxis1D SecondaryThumbRestForce;

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x2829b0c, size 0xf4, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawAxis1D ToRawMask(::GlobalNamespace::__OVRInput__Axis1D virtualMask);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryHandTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerCurl() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerCurl();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerForce() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryIndexTriggerSlide() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryIndexTriggerSlide();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryStylusForce() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryStylusForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_PrimaryThumbRestForce() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_PrimaryThumbRestForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryHandTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryHandTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryIndexTrigger() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryIndexTrigger();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerCurl() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerCurl();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerForce() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryIndexTriggerSlide() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryIndexTriggerSlide();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryStylusForce() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryStylusForce();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& __cordl_internal_get_SecondaryThumbRestForce() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& __cordl_internal_get_SecondaryThumbRestForce();

  constexpr void __cordl_internal_set_None(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryHandTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTriggerCurl(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTriggerForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryIndexTriggerSlide(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryStylusForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_PrimaryThumbRestForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryHandTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTriggerCurl(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTriggerForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryIndexTriggerSlide(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryStylusForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  constexpr void __cordl_internal_set_SecondaryThumbRestForce(::GlobalNamespace::__OVRInput__RawAxis1D value);

  /// @brief Method .ctor, addr 0x2828aac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualAxis1DMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis1DMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualAxis1DMap(__OVRInput__OVRControllerBase__VirtualAxis1DMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis1DMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualAxis1DMap(__OVRInput__OVRControllerBase__VirtualAxis1DMap const&) = delete;

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___None;

  /// @brief Field PrimaryIndexTrigger, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTrigger;

  /// @brief Field PrimaryHandTrigger, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryHandTrigger;

  /// @brief Field SecondaryIndexTrigger, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTrigger;

  /// @brief Field SecondaryHandTrigger, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryHandTrigger;

  /// @brief Field PrimaryIndexTriggerCurl, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTriggerCurl;

  /// @brief Field PrimaryIndexTriggerSlide, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTriggerSlide;

  /// @brief Field PrimaryThumbRestForce, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryThumbRestForce;

  /// @brief Field PrimaryStylusForce, offset: 0x30, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryStylusForce;

  /// @brief Field SecondaryIndexTriggerCurl, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTriggerCurl;

  /// @brief Field SecondaryIndexTriggerSlide, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTriggerSlide;

  /// @brief Field SecondaryThumbRestForce, offset: 0x3c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryThumbRestForce;

  /// @brief Field SecondaryStylusForce, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryStylusForce;

  /// @brief Field PrimaryIndexTriggerForce, offset: 0x44, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___PrimaryIndexTriggerForce;

  /// @brief Field SecondaryIndexTriggerForce, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis1D ___SecondaryIndexTriggerForce;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryIndexTrigger) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryHandTrigger) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryIndexTrigger) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryHandTrigger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryIndexTriggerCurl) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryIndexTriggerSlide) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryThumbRestForce) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryStylusForce) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryIndexTriggerCurl) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryIndexTriggerSlide) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryThumbRestForce) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryStylusForce) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___PrimaryIndexTriggerForce) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap, ___SecondaryIndexTriggerForce) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::VirtualAxis2DMap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerBase::VirtualAxis2DMap*
class CORDL_TYPE __OVRInput__OVRControllerBase__VirtualAxis2DMap : public ::System::Object {
public:
  // Declarations
  /// @brief Field None, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_None, put = __cordl_internal_set_None))::GlobalNamespace::__OVRInput__RawAxis2D None;

  /// @brief Field PrimaryThumbstick, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryThumbstick, put = __cordl_internal_set_PrimaryThumbstick))::GlobalNamespace::__OVRInput__RawAxis2D PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_PrimaryTouchpad, put = __cordl_internal_set_PrimaryTouchpad))::GlobalNamespace::__OVRInput__RawAxis2D PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryThumbstick, put = __cordl_internal_set_SecondaryThumbstick))::GlobalNamespace::__OVRInput__RawAxis2D SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SecondaryTouchpad, put = __cordl_internal_set_SecondaryTouchpad))::GlobalNamespace::__OVRInput__RawAxis2D SecondaryTouchpad;

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* New_ctor();

  /// @brief Method ToRawMask, addr 0x2829c00, size 0x54, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawAxis2D ToRawMask(::GlobalNamespace::__OVRInput__Axis2D virtualMask);

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __cordl_internal_get_None() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __cordl_internal_get_None();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __cordl_internal_get_PrimaryThumbstick() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __cordl_internal_get_PrimaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __cordl_internal_get_PrimaryTouchpad() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __cordl_internal_get_PrimaryTouchpad();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __cordl_internal_get_SecondaryThumbstick() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __cordl_internal_get_SecondaryThumbstick();

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& __cordl_internal_get_SecondaryTouchpad() const;

  constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& __cordl_internal_get_SecondaryTouchpad();

  constexpr void __cordl_internal_set_None(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr void __cordl_internal_set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr void __cordl_internal_set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr void __cordl_internal_set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawAxis2D value);

  constexpr void __cordl_internal_set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawAxis2D value);

  /// @brief Method .ctor, addr 0x2828ab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase__VirtualAxis2DMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis2DMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase__VirtualAxis2DMap(__OVRInput__OVRControllerBase__VirtualAxis2DMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase__VirtualAxis2DMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase__VirtualAxis2DMap(__OVRInput__OVRControllerBase__VirtualAxis2DMap const&) = delete;

  /// @brief Field None, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___None;

  /// @brief Field PrimaryThumbstick, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___PrimaryThumbstick;

  /// @brief Field PrimaryTouchpad, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___PrimaryTouchpad;

  /// @brief Field SecondaryThumbstick, offset: 0x1c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___SecondaryThumbstick;

  /// @brief Field SecondaryTouchpad, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__RawAxis2D ___SecondaryTouchpad;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, ___None) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, ___PrimaryThumbstick) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, ___PrimaryTouchpad) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, ___SecondaryThumbstick) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap, ___SecondaryTouchpad) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerBase
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerBase*
class CORDL_TYPE __OVRInput__OVRControllerBase : public ::System::Object {
public:
  // Declarations
  using VirtualAxis1DMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap;

  using VirtualAxis2DMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap;

  using VirtualButtonMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap;

  using VirtualNearTouchMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap;

  using VirtualTouchMap = ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap;

  /// @brief Field HapticsPcmSamplesConsumedCache, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_HapticsPcmSamplesConsumedCache,
                      put = __cordl_internal_set_HapticsPcmSamplesConsumedCache))::ArrayW<uint32_t, ::Array<uint32_t>*> HapticsPcmSamplesConsumedCache;

  /// @brief Field axis1DMap, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_axis1DMap, put = __cordl_internal_set_axis1DMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* axis1DMap;

  /// @brief Field axis2DMap, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_axis2DMap, put = __cordl_internal_set_axis2DMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* axis2DMap;

  /// @brief Field buttonMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonMap, put = __cordl_internal_set_buttonMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* buttonMap;

  /// @brief Field controllerType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_controllerType, put = __cordl_internal_set_controllerType))::GlobalNamespace::__OVRInput__Controller controllerType;

  /// @brief Field currentState, offset 0xac, size 0x6c
  __declspec(property(get = __cordl_internal_get_currentState, put = __cordl_internal_set_currentState))::GlobalNamespace::__OVRPlugin__ControllerState6 currentState;

  /// @brief Field nearTouchMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nearTouchMap, put = __cordl_internal_set_nearTouchMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* nearTouchMap;

  /// @brief Field previousState, offset 0x40, size 0x6c
  __declspec(property(get = __cordl_internal_get_previousState, put = __cordl_internal_set_previousState))::GlobalNamespace::__OVRPlugin__ControllerState6 previousState;

  /// @brief Field shouldApplyDeadzone, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldApplyDeadzone, put = __cordl_internal_set_shouldApplyDeadzone)) bool shouldApplyDeadzone;

  /// @brief Field touchMap, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_touchMap, put = __cordl_internal_set_touchMap))::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* touchMap;

  /// @brief Method ConfigureAxis1DMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x28297c8, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  /// @brief Method GetControllerSampleRateHz, addr 0x2829754, size 0x74, virtual true, abstract: false, final false
  inline float_t GetControllerSampleRateHz();

  /// @brief Method GetOpenVRControllerState, addr 0x2828ea4, size 0x470, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__ControllerState6 GetOpenVRControllerState(::GlobalNamespace::__OVRInput__Controller controllerType);

  static inline ::GlobalNamespace::__OVRInput__OVRControllerBase* New_ctor();

  /// @brief Method ResolveToRawMask, addr 0x2827464, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawAxis1D ResolveToRawMask(::GlobalNamespace::__OVRInput__Axis1D virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x2827910, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawAxis2D ResolveToRawMask(::GlobalNamespace::__OVRInput__Axis2D virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x2825be8, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawButton ResolveToRawMask(::GlobalNamespace::__OVRInput__Button virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x28268a0, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawNearTouch ResolveToRawMask(::GlobalNamespace::__OVRInput__NearTouch virtualMask);

  /// @brief Method ResolveToRawMask, addr 0x2826210, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__RawTouch ResolveToRawMask(::GlobalNamespace::__OVRInput__Touch virtualMask);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0x282940c, size 0x138, virtual true, abstract: false, final false
  inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration);

  /// @brief Method SetControllerHapticsPcm, addr 0x2829544, size 0x210, virtual true, abstract: false, final false
  inline int32_t SetControllerHapticsPcm(::GlobalNamespace::__OVRInput__HapticsPcmVibration hapticsVibration);

  /// @brief Method SetControllerLocalizedVibration, addr 0x2829388, size 0x84, virtual true, abstract: false, final false
  inline void SetControllerLocalizedVibration(::GlobalNamespace::__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude);

  /// @brief Method SetControllerVibration, addr 0x2829314, size 0x74, virtual true, abstract: false, final false
  inline void SetControllerVibration(float_t frequency, float_t amplitude);

  /// @brief Method Update, addr 0x2828abc, size 0x3e8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__OVRInput__Controller Update();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_HapticsPcmSamplesConsumedCache() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_HapticsPcmSamplesConsumedCache();

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*& __cordl_internal_get_axis1DMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*> const& __cordl_internal_get_axis1DMap() const;

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*& __cordl_internal_get_axis2DMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*> const& __cordl_internal_get_axis2DMap() const;

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*& __cordl_internal_get_buttonMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*> const& __cordl_internal_get_buttonMap() const;

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __cordl_internal_get_controllerType() const;

  constexpr ::GlobalNamespace::__OVRInput__Controller& __cordl_internal_get_controllerType();

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6 const& __cordl_internal_get_currentState() const;

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6& __cordl_internal_get_currentState();

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*& __cordl_internal_get_nearTouchMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*> const& __cordl_internal_get_nearTouchMap() const;

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6 const& __cordl_internal_get_previousState() const;

  constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6& __cordl_internal_get_previousState();

  constexpr bool const& __cordl_internal_get_shouldApplyDeadzone() const;

  constexpr bool& __cordl_internal_get_shouldApplyDeadzone();

  constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*& __cordl_internal_get_touchMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*> const& __cordl_internal_get_touchMap() const;

  constexpr void __cordl_internal_set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_axis1DMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* value);

  constexpr void __cordl_internal_set_axis2DMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* value);

  constexpr void __cordl_internal_set_buttonMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* value);

  constexpr void __cordl_internal_set_controllerType(::GlobalNamespace::__OVRInput__Controller value);

  constexpr void __cordl_internal_set_currentState(::GlobalNamespace::__OVRPlugin__ControllerState6 value);

  constexpr void __cordl_internal_set_nearTouchMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* value);

  constexpr void __cordl_internal_set_previousState(::GlobalNamespace::__OVRPlugin__ControllerState6 value);

  constexpr void __cordl_internal_set_shouldApplyDeadzone(bool value);

  constexpr void __cordl_internal_set_touchMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* value);

  /// @brief Method .ctor, addr 0x28288e4, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerBase(__OVRInput__OVRControllerBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerBase(__OVRInput__OVRControllerBase const&) = delete;

  /// @brief Field controllerType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ___controllerType;

  /// @brief Field buttonMap, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* ___buttonMap;

  /// @brief Field touchMap, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* ___touchMap;

  /// @brief Field nearTouchMap, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* ___nearTouchMap;

  /// @brief Field axis1DMap, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* ___axis1DMap;

  /// @brief Field axis2DMap, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* ___axis2DMap;

  /// @brief Field previousState, offset: 0x40, size: 0x6c, def value: None
  ::GlobalNamespace::__OVRPlugin__ControllerState6 ___previousState;

  /// @brief Field currentState, offset: 0xac, size: 0x6c, def value: None
  ::GlobalNamespace::__OVRPlugin__ControllerState6 ___currentState;

  /// @brief Field shouldApplyDeadzone, offset: 0x118, size: 0x1, def value: None
  bool ___shouldApplyDeadzone;

  /// @brief Field HapticsPcmSamplesConsumedCache, offset: 0x120, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___HapticsPcmSamplesConsumedCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerBase, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___controllerType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___buttonMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___touchMap) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___nearTouchMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___axis1DMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___axis2DMap) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___previousState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___currentState) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___shouldApplyDeadzone) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRInput__OVRControllerBase, ___HapticsPcmSamplesConsumedCache) == 0x120, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerTouch
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerTouch*
class CORDL_TYPE __OVRInput__OVRControllerTouch : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x2829d24, size 0x4c, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x2829d70, size 0x2c, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x2829c54, size 0x68, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x2829cf8, size 0x2c, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x2829cbc, size 0x3c, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x2829d9c, size 0x1014, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerTouch* New_ctor();

  /// @brief Method .ctor, addr 0x2822db8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerTouch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerTouch(__OVRInput__OVRControllerTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerTouch(__OVRInput__OVRControllerTouch const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerLTouch
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerLTouch*
class CORDL_TYPE __OVRInput__OVRControllerLTouch : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282aea4, size 0x48, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282aeec, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282add0, size 0x78, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282ae7c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282ae48, size 0x34, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x282af14, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerLTouch* New_ctor();

  /// @brief Method .ctor, addr 0x282adb0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerLTouch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerLTouch(__OVRInput__OVRControllerLTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerLTouch(__OVRInput__OVRControllerLTouch const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerLTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerRTouch
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerRTouch*
class CORDL_TYPE __OVRInput__OVRControllerRTouch : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b010, size 0x48, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b058, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282af3c, size 0x78, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282afe8, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282afb4, size 0x34, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x282b080, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerRTouch* New_ctor();

  /// @brief Method .ctor, addr 0x282af1c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerRTouch();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRTouch", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerRTouch(__OVRInput__OVRControllerRTouch&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRTouch", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerRTouch(__OVRInput__OVRControllerRTouch const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerRTouch, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerHands
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerHands*
class CORDL_TYPE __OVRInput__OVRControllerHands : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b13c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b164, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282b0a8, size 0x4c, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282b11c, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282b0f4, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x282b184, size 0x14, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerHands* New_ctor();

  /// @brief Method .ctor, addr 0x282b088, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerHands();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerHands", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerHands(__OVRInput__OVRControllerHands&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerHands", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerHands(__OVRInput__OVRControllerHands const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerHands, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerLHand
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerLHand*
class CORDL_TYPE __OVRInput__OVRControllerLHand : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b24c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b274, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282b1b8, size 0x4c, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282b22c, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282b204, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x282b294, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerLHand* New_ctor();

  /// @brief Method .ctor, addr 0x282b198, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerLHand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerLHand(__OVRInput__OVRControllerLHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerLHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerLHand(__OVRInput__OVRControllerLHand const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerLHand, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerRHand
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerRHand*
class CORDL_TYPE __OVRInput__OVRControllerRHand : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b350, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b378, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282b2bc, size 0x4c, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282b330, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282b308, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  /// @brief Method GetBatteryPercentRemaining, addr 0x282b398, size 0x8, virtual true, abstract: false, final false
  inline uint8_t GetBatteryPercentRemaining();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerRHand* New_ctor();

  /// @brief Method .ctor, addr 0x282b29c, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerRHand();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerRHand(__OVRInput__OVRControllerRHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerRHand(__OVRInput__OVRControllerRHand const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerRHand, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerRemote
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerRemote*
class CORDL_TYPE __OVRInput__OVRControllerRemote : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b464, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b48c, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282b3c0, size 0x5c, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282b444, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282b41c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerRemote* New_ctor();

  /// @brief Method .ctor, addr 0x282b3a0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerRemote();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRemote", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerRemote(__OVRInput__OVRControllerRemote&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerRemote", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerRemote(__OVRInput__OVRControllerRemote const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerRemote, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerGamepadPC
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerGamepadPC*
class CORDL_TYPE __OVRInput__OVRControllerGamepadPC : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b584, size 0x30, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b5b4, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282b4cc, size 0x70, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282b564, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282b53c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC* New_ctor();

  /// @brief Method .ctor, addr 0x282b4ac, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerGamepadPC();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadPC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerGamepadPC(__OVRInput__OVRControllerGamepadPC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadPC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerGamepadPC(__OVRInput__OVRControllerGamepadPC const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRControllerGamepadAndroid
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput::OVRControllerGamepadAndroid*
class CORDL_TYPE __OVRInput__OVRControllerGamepadAndroid : public ::GlobalNamespace::__OVRInput__OVRControllerBase {
public:
  // Declarations
  /// @brief Method ConfigureAxis1DMap, addr 0x282b6b4, size 0x30, virtual true, abstract: false, final false
  inline void ConfigureAxis1DMap();

  /// @brief Method ConfigureAxis2DMap, addr 0x282b6e4, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureAxis2DMap();

  /// @brief Method ConfigureButtonMap, addr 0x282b5fc, size 0x70, virtual true, abstract: false, final false
  inline void ConfigureButtonMap();

  /// @brief Method ConfigureNearTouchMap, addr 0x282b694, size 0x20, virtual true, abstract: false, final false
  inline void ConfigureNearTouchMap();

  /// @brief Method ConfigureTouchMap, addr 0x282b66c, size 0x28, virtual true, abstract: false, final false
  inline void ConfigureTouchMap();

  static inline ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid* New_ctor();

  /// @brief Method .ctor, addr 0x282b5dc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRInput__OVRControllerGamepadAndroid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadAndroid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRInput__OVRControllerGamepadAndroid(__OVRInput__OVRControllerGamepadAndroid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRInput__OVRControllerGamepadAndroid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRInput__OVRControllerGamepadAndroid(__OVRInput__OVRControllerGamepadAndroid const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid, 0x128>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRInput
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRInput*
class CORDL_TYPE OVRInput : public ::System::Object {
public:
  // Declarations
  using Axis1D = ::GlobalNamespace::__OVRInput__Axis1D;

  using Axis2D = ::GlobalNamespace::__OVRInput__Axis2D;

  using Button = ::GlobalNamespace::__OVRInput__Button;

  using Controller = ::GlobalNamespace::__OVRInput__Controller;

  using ControllerInHandState = ::GlobalNamespace::__OVRInput__ControllerInHandState;

  using Hand = ::GlobalNamespace::__OVRInput__Hand;

  using Handedness = ::GlobalNamespace::__OVRInput__Handedness;

  using HapticInfo = ::GlobalNamespace::__OVRInput__HapticInfo;

  using HapticsAmplitudeEnvelopeVibration = ::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration;

  using HapticsLocation = ::GlobalNamespace::__OVRInput__HapticsLocation;

  using HapticsPcmVibration = ::GlobalNamespace::__OVRInput__HapticsPcmVibration;

  using InputDeviceShowState = ::GlobalNamespace::__OVRInput__InputDeviceShowState;

  using InteractionProfile = ::GlobalNamespace::__OVRInput__InteractionProfile;

  using NearTouch = ::GlobalNamespace::__OVRInput__NearTouch;

  using OVRControllerBase = ::GlobalNamespace::__OVRInput__OVRControllerBase;

  using OVRControllerGamepadAndroid = ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid;

  using OVRControllerGamepadPC = ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC;

  using OVRControllerHands = ::GlobalNamespace::__OVRInput__OVRControllerHands;

  using OVRControllerLHand = ::GlobalNamespace::__OVRInput__OVRControllerLHand;

  using OVRControllerLTouch = ::GlobalNamespace::__OVRInput__OVRControllerLTouch;

  using OVRControllerRHand = ::GlobalNamespace::__OVRInput__OVRControllerRHand;

  using OVRControllerRTouch = ::GlobalNamespace::__OVRInput__OVRControllerRTouch;

  using OVRControllerRemote = ::GlobalNamespace::__OVRInput__OVRControllerRemote;

  using OVRControllerTouch = ::GlobalNamespace::__OVRInput__OVRControllerTouch;

  using OpenVRButton = ::GlobalNamespace::__OVRInput__OpenVRButton;

  using OpenVRController = ::GlobalNamespace::__OVRInput__OpenVRController;

  using OpenVRControllerDetails = ::GlobalNamespace::__OVRInput__OpenVRControllerDetails;

  using RawAxis1D = ::GlobalNamespace::__OVRInput__RawAxis1D;

  using RawAxis2D = ::GlobalNamespace::__OVRInput__RawAxis2D;

  using RawButton = ::GlobalNamespace::__OVRInput__RawButton;

  using RawNearTouch = ::GlobalNamespace::__OVRInput__RawNearTouch;

  using RawTouch = ::GlobalNamespace::__OVRInput__RawTouch;

  using Touch = ::GlobalNamespace::__OVRInput__Touch;

  /// @brief Field AXIS_AS_BUTTON_THRESHOLD, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AXIS_AS_BUTTON_THRESHOLD, put = setStaticF_AXIS_AS_BUTTON_THRESHOLD)) float_t AXIS_AS_BUTTON_THRESHOLD;

  /// @brief Field AXIS_DEADZONE_THRESHOLD, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_AXIS_DEADZONE_THRESHOLD, put = setStaticF_AXIS_DEADZONE_THRESHOLD)) float_t AXIS_DEADZONE_THRESHOLD;

  /// @brief Field HAPTIC_VIBRATION_DURATION_SECONDS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS, put = setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS)) float_t HAPTIC_VIBRATION_DURATION_SECONDS;

  /// @brief Field NUM_HAPTIC_CHANNELS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_NUM_HAPTIC_CHANNELS, put = setStaticF_NUM_HAPTIC_CHANNELS)) int32_t NUM_HAPTIC_CHANNELS;

  /// @brief Field OPENVR_MAX_HAPTIC_AMPLITUDE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE, put = setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE)) float_t OPENVR_MAX_HAPTIC_AMPLITUDE;

  /// @brief Field OPENVR_TOUCH_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_TOUCH_NAME, put = setStaticF_OPENVR_TOUCH_NAME))::StringW OPENVR_TOUCH_NAME;

  /// @brief Field OPENVR_VIVE_CONTROLLER_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_VIVE_CONTROLLER_NAME, put = setStaticF_OPENVR_VIVE_CONTROLLER_NAME))::StringW OPENVR_VIVE_CONTROLLER_NAME;

  /// @brief Field OPENVR_WINDOWSMR_CONTROLLER_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME, put = setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME))::StringW OPENVR_WINDOWSMR_CONTROLLER_NAME;

  /// @brief Field _pluginSupportsActiveController, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__pluginSupportsActiveController, put = setStaticF__pluginSupportsActiveController)) bool _pluginSupportsActiveController;

  /// @brief Field _pluginSupportsActiveControllerCached, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__pluginSupportsActiveControllerCached, put = setStaticF__pluginSupportsActiveControllerCached)) bool _pluginSupportsActiveControllerCached;

  /// @brief Field _pluginSupportsActiveControllerMinVersion, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__pluginSupportsActiveControllerMinVersion,
                             put = setStaticF__pluginSupportsActiveControllerMinVersion))::System::Version* _pluginSupportsActiveControllerMinVersion;

  /// @brief Field activeControllerType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_activeControllerType, put = setStaticF_activeControllerType))::GlobalNamespace::__OVRInput__Controller activeControllerType;

  /// @brief Field connectedControllerTypes, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_connectedControllerTypes, put = setStaticF_connectedControllerTypes))::GlobalNamespace::__OVRInput__Controller connectedControllerTypes;

  /// @brief Field controllers, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_controllers, put = setStaticF_controllers))::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* controllers;

  /// @brief Field fixedUpdateCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_fixedUpdateCount, put = setStaticF_fixedUpdateCount)) int32_t fixedUpdateCount;

  /// @brief Field hapticInfos, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hapticInfos,
                             put = setStaticF_hapticInfos))::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> hapticInfos;

  /// @brief Field openVRControllerDetails, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_openVRControllerDetails,
                             put = setStaticF_openVRControllerDetails))::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails,
                                                                                ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> openVRControllerDetails;

  /// @brief Field stepType, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_stepType, put = setStaticF_stepType))::GlobalNamespace::__OVRPlugin__Step stepType;

  /// @brief Method AreHandPosesGeneratedByControllerData, addr 0x2823f68, size 0x94, virtual false, abstract: false, final false
  static inline bool AreHandPosesGeneratedByControllerData(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRInput__Hand hand);

  /// @brief Method CalculateAbsMax, addr 0x2827a60, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalculateAbsMax(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b);

  /// @brief Method CalculateAbsMax, addr 0x28274cc, size 0x24, virtual false, abstract: false, final false
  static inline float_t CalculateAbsMax(float_t a, float_t b);

  /// @brief Method CalculateDeadzone, addr 0x2827928, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 CalculateDeadzone(::UnityEngine::Vector2 a, float_t deadzone);

  /// @brief Method CalculateDeadzone, addr 0x282747c, size 0x50, virtual false, abstract: false, final false
  static inline float_t CalculateDeadzone(float_t a, float_t deadzone);

  /// @brief Method DisableSimultaneousHandsAndControllers, addr 0x2824050, size 0x54, virtual false, abstract: false, final false
  static inline bool DisableSimultaneousHandsAndControllers();

  /// @brief Method EnableSimultaneousHandsAndControllers, addr 0x2823ffc, size 0x54, virtual false, abstract: false, final false
  static inline bool EnableSimultaneousHandsAndControllers();

  /// @brief Method FixedUpdate, addr 0x2823aa4, size 0x10c, virtual false, abstract: false, final false
  static inline void FixedUpdate();

  /// @brief Method Get, addr 0x28278a8, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::__OVRInput__RawAxis2D rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x28274f0, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 Get(::GlobalNamespace::__OVRInput__Axis2D virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x28239d4, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x2826838, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x2823a3c, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x28259ec, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x2826688, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x2826060, size 0x68, virtual false, abstract: false, final false
  static inline bool Get(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x28273fc, size 0x68, virtual false, abstract: false, final false
  static inline float_t Get(::GlobalNamespace::__OVRInput__RawAxis1D rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method Get, addr 0x2826d18, size 0x68, virtual false, abstract: false, final false
  static inline float_t Get(::GlobalNamespace::__OVRInput__Axis1D virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetActiveController, addr 0x2827b44, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRInput__Controller GetActiveController();

  /// @brief Method GetActiveControllerForHand, addr 0x2824194, size 0xfc, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRInput__Controller GetActiveControllerForHand(::GlobalNamespace::__OVRInput__Handedness handedness);

  /// @brief Method GetConnectedControllers, addr 0x2827a88, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRInput__Controller GetConnectedControllers();

  /// @brief Method GetControllerBatteryPercentRemaining, addr 0x28287bc, size 0x128, virtual false, abstract: false, final false
  static inline uint8_t GetControllerBatteryPercentRemaining(::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetControllerIsInHandState, addr 0x28240a4, size 0xf0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRInput__ControllerInHandState GetControllerIsInHandState(::GlobalNamespace::__OVRInput__Hand hand);

  /// @brief Method GetControllerOrientationTracked, addr 0x2823c08, size 0xd8, virtual false, abstract: false, final false
  static inline bool GetControllerOrientationTracked(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerOrientationValid, addr 0x2823ce0, size 0xd8, virtual false, abstract: false, final false
  static inline bool GetControllerOrientationValid(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerPositionTracked, addr 0x2823db8, size 0xd8, virtual false, abstract: false, final false
  static inline bool GetControllerPositionTracked(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerPositionValid, addr 0x2823e90, size 0xd8, virtual false, abstract: false, final false
  static inline bool GetControllerPositionValid(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetControllerSampleRateHz, addr 0x2828694, size 0x128, virtual false, abstract: false, final false
  static inline float_t GetControllerSampleRateHz(::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetCurrentInteractionProfile, addr 0x2823bb0, size 0x58, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRInput__InteractionProfile GetCurrentInteractionProfile(::GlobalNamespace::__OVRInput__Hand hand);

  /// @brief Method GetDominantHand, addr 0x282599c, size 0x50, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRInput__Handedness GetDominantHand();

  /// @brief Method GetDown, addr 0x2825dc8, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown, addr 0x2826a80, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown, addr 0x28263f0, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown, addr 0x2825c00, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown, addr 0x28268b8, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetDown, addr 0x2826228, size 0x68, virtual false, abstract: false, final false
  static inline bool GetDown(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetLocalControllerAcceleration, addr 0x2824a2c, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAcceleration(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerAngularAcceleration, addr 0x28253d0, size 0x23c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAngularAcceleration(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerAngularVelocity, addr 0x2825194, size 0x23c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerAngularVelocity(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerPosition, addr 0x2824290, size 0x560, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerPosition(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerRotation, addr 0x2824c5c, size 0x538, virtual false, abstract: false, final false
  static inline ::UnityEngine::Quaternion GetLocalControllerRotation(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetLocalControllerStatesWithoutPrediction, addr 0x282560c, size 0x390, virtual false, abstract: false, final false
  static inline bool GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::__OVRInput__Controller controllerType, ByRef<::UnityEngine::Vector3> position,
                                                               ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3> velocity, ByRef<::UnityEngine::Vector3> angularVelocity);

  /// @brief Method GetLocalControllerVelocity, addr 0x28247f0, size 0x23c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetLocalControllerVelocity(::GlobalNamespace::__OVRInput__Controller controllerType);

  /// @brief Method GetOpenVRStringProperty, addr 0x2827db0, size 0x150, virtual false, abstract: false, final false
  static inline ::StringW GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId);

  /// @brief Method GetResolvedAxis1D, addr 0x2826d80, size 0x67c, virtual false, abstract: false, final false
  static inline float_t GetResolvedAxis1D(::GlobalNamespace::__OVRInput__Axis1D virtualMask, ::GlobalNamespace::__OVRInput__RawAxis1D rawMask,
                                          ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedAxis2D, addr 0x2827558, size 0x350, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetResolvedAxis2D(::GlobalNamespace::__OVRInput__Axis2D virtualMask, ::GlobalNamespace::__OVRInput__RawAxis2D rawMask,
                                                         ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedButton, addr 0x2825a54, size 0x148, virtual false, abstract: false, final false
  static inline bool GetResolvedButton(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedButtonDown, addr 0x2825c68, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedButtonDown(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask,
                                           ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedButtonUp, addr 0x2825e98, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedButtonUp(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedNearTouch, addr 0x28266f0, size 0x148, virtual false, abstract: false, final false
  static inline bool GetResolvedNearTouch(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                          ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedNearTouchDown, addr 0x2826920, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedNearTouchDown(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                              ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedNearTouchUp, addr 0x2826b50, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedNearTouchUp(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                            ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedTouch, addr 0x28260c8, size 0x148, virtual false, abstract: false, final false
  static inline bool GetResolvedTouch(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedTouchDown, addr 0x2826290, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedTouchDown(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetResolvedTouchUp, addr 0x28264c0, size 0x160, virtual false, abstract: false, final false
  static inline bool GetResolvedTouchUp(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp, addr 0x2825ff8, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp, addr 0x2826cb0, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp, addr 0x2826620, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp, addr 0x2825e30, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp, addr 0x2826ae8, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method GetUp, addr 0x2826458, size 0x68, virtual false, abstract: false, final false
  static inline bool GetUp(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method InitHapticInfo, addr 0x2822dd4, size 0x140, virtual false, abstract: false, final false
  static inline void InitHapticInfo();

  /// @brief Method IsControllerConnected, addr 0x2827ae0, size 0x64, virtual false, abstract: false, final false
  static inline bool IsControllerConnected(::GlobalNamespace::__OVRInput__Controller controller);

  /// @brief Method IsValidOpenVRDevice, addr 0x2828024, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValidOpenVRDevice(uint32_t deviceId);

  /// @brief Method PlayHapticImpulse, addr 0x2827f00, size 0x11c, virtual false, abstract: false, final false
  static inline void PlayHapticImpulse(float_t amplitude, ::UnityEngine::XR::XRNode deviceNode);

  /// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0x28283e8, size 0x150, virtual false, abstract: false, final false
  static inline void SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetControllerHapticsPcm, addr 0x2828538, size 0x15c, virtual false, abstract: false, final false
  static inline int32_t SetControllerHapticsPcm(::GlobalNamespace::__OVRInput__HapticsPcmVibration hapticsVibration, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetControllerLocalizedVibration, addr 0x282820c, size 0x1dc, virtual false, abstract: false, final false
  static inline void SetControllerLocalizedVibration(::GlobalNamespace::__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude,
                                                     ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetControllerVibration, addr 0x2828030, size 0x1dc, virtual false, abstract: false, final false
  static inline void SetControllerVibration(float_t frequency, float_t amplitude, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method SetOpenVRLocalPose, addr 0x2827ca0, size 0x110, virtual false, abstract: false, final false
  static inline void SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot);

  /// @brief Method ShouldResolveController, addr 0x2825b9c, size 0x4c, virtual false, abstract: false, final false
  static inline bool ShouldResolveController(::GlobalNamespace::__OVRInput__Controller controllerType, ::GlobalNamespace::__OVRInput__Controller controllerMask);

  /// @brief Method StartVibration, addr 0x2827b9c, size 0x104, virtual false, abstract: false, final false
  static inline void StartVibration(float_t amplitude, float_t duration, ::UnityEngine::XR::XRNode controllerNode);

  /// @brief Method Update, addr 0x2822f14, size 0x544, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method UpdateXRControllerHaptics, addr 0x28237f0, size 0x1e4, virtual false, abstract: false, final false
  static inline void UpdateXRControllerHaptics();

  /// @brief Method UpdateXRControllerNodeIds, addr 0x2823458, size 0x398, virtual false, abstract: false, final false
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

  static inline ::GlobalNamespace::__OVRInput__Controller getStaticF_activeControllerType();

  static inline ::GlobalNamespace::__OVRInput__Controller getStaticF_connectedControllerTypes();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* getStaticF_controllers();

  static inline int32_t getStaticF_fixedUpdateCount();

  static inline ::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> getStaticF_hapticInfos();

  static inline ::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> getStaticF_openVRControllerDetails();

  static inline ::GlobalNamespace::__OVRPlugin__Step getStaticF_stepType();

  /// @brief Method get_pluginSupportsActiveController, addr 0x28227d0, size 0x9c, virtual false, abstract: false, final false
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

  static inline void setStaticF_activeControllerType(::GlobalNamespace::__OVRInput__Controller value);

  static inline void setStaticF_connectedControllerTypes(::GlobalNamespace::__OVRInput__Controller value);

  static inline void setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* value);

  static inline void setStaticF_fixedUpdateCount(int32_t value);

  static inline void setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> value);

  static inline void setStaticF_openVRControllerDetails(::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> value);

  static inline void setStaticF_stepType(::GlobalNamespace::__OVRPlugin__Step value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRInput, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Axis1D, "", "OVRInput/Axis1D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Axis2D, "", "OVRInput/Axis2D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Button, "", "OVRInput/Button");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Controller, "", "OVRInput/Controller");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__ControllerInHandState, "", "OVRInput/ControllerInHandState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Hand, "", "OVRInput/Hand");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Handedness, "", "OVRInput/Handedness");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticsLocation, "", "OVRInput/HapticsLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__InputDeviceShowState, "", "OVRInput/InputDeviceShowState");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__InteractionProfile, "", "OVRInput/InteractionProfile");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__NearTouch, "", "OVRInput/NearTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OpenVRButton, "", "OVRInput/OpenVRButton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OpenVRController, "", "OVRInput/OpenVRController");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawAxis1D, "", "OVRInput/RawAxis1D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawAxis2D, "", "OVRInput/RawAxis2D");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawButton, "", "OVRInput/RawButton");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawNearTouch, "", "OVRInput/RawNearTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__RawTouch, "", "OVRInput/RawTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__Touch, "", "OVRInput/Touch");
NEED_NO_BOX(::GlobalNamespace::OVRInput);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput*, "", "OVRInput");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__HapticInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticInfo*, "", "OVRInput/HapticInfo");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase*, "", "OVRInput/OVRControllerBase");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis1DMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*, "", "OVRInput/OVRControllerBase/VirtualButtonMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*, "", "OVRInput/OVRControllerBase/VirtualNearTouchMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*, "", "OVRInput/OVRControllerBase/VirtualTouchMap");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*, "", "OVRInput/OVRControllerGamepadAndroid");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerGamepadPC);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*, "", "OVRInput/OVRControllerGamepadPC");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerHands);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerHands*, "", "OVRInput/OVRControllerHands");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerLHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerLHand*, "", "OVRInput/OVRControllerLHand");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerLTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerLTouch*, "", "OVRInput/OVRControllerLTouch");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerRHand);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerRHand*, "", "OVRInput/OVRControllerRHand");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerRTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerRTouch*, "", "OVRInput/OVRControllerRTouch");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerRemote);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerRemote*, "", "OVRInput/OVRControllerRemote");
NEED_NO_BOX(::GlobalNamespace::__OVRInput__OVRControllerTouch);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OVRControllerTouch*, "", "OVRInput/OVRControllerTouch");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, "", "OVRInput/HapticsAmplitudeEnvelopeVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__HapticsPcmVibration, "", "OVRInput/HapticsPcmVibration");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRInput__OpenVRControllerDetails, "", "OVRInput/OpenVRControllerDetails");
