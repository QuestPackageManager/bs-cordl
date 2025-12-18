#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRButtonId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRButtonId)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRButtonId;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRButtonId);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRButtonId
struct CORDL_TYPE EVRButtonId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRButtonId_Unwrapped
  enum struct __EVRButtonId_Unwrapped : int32_t {
    __E_k_EButton_System = static_cast<int32_t>(0x0),
    __E_k_EButton_ApplicationMenu = static_cast<int32_t>(0x1),
    __E_k_EButton_Grip = static_cast<int32_t>(0x2),
    __E_k_EButton_DPad_Left = static_cast<int32_t>(0x3),
    __E_k_EButton_DPad_Up = static_cast<int32_t>(0x4),
    __E_k_EButton_DPad_Right = static_cast<int32_t>(0x5),
    __E_k_EButton_DPad_Down = static_cast<int32_t>(0x6),
    __E_k_EButton_A = static_cast<int32_t>(0x7),
    __E_k_EButton_ProximitySensor = static_cast<int32_t>(0x1f),
    __E_k_EButton_Axis0 = static_cast<int32_t>(0x20),
    __E_k_EButton_Axis1 = static_cast<int32_t>(0x21),
    __E_k_EButton_Axis2 = static_cast<int32_t>(0x22),
    __E_k_EButton_Axis3 = static_cast<int32_t>(0x23),
    __E_k_EButton_Axis4 = static_cast<int32_t>(0x24),
    __E_k_EButton_SteamVR_Touchpad = static_cast<int32_t>(0x20),
    __E_k_EButton_SteamVR_Trigger = static_cast<int32_t>(0x21),
    __E_k_EButton_Dashboard_Back = static_cast<int32_t>(0x2),
    __E_k_EButton_Knuckles_A = static_cast<int32_t>(0x2),
    __E_k_EButton_Knuckles_B = static_cast<int32_t>(0x1),
    __E_k_EButton_Knuckles_JoyStick = static_cast<int32_t>(0x23),
    __E_k_EButton_Max = static_cast<int32_t>(0x40),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRButtonId_Unwrapped() const noexcept {
    return static_cast<__EVRButtonId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRButtonId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRButtonId(int32_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8392 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_EButton_A value: I32(7)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_A;

  /// @brief Field k_EButton_ApplicationMenu value: I32(1)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_ApplicationMenu;

  /// @brief Field k_EButton_Axis0 value: I32(32)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis0;

  /// @brief Field k_EButton_Axis1 value: I32(33)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis1;

  /// @brief Field k_EButton_Axis2 value: I32(34)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis2;

  /// @brief Field k_EButton_Axis3 value: I32(35)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis3;

  /// @brief Field k_EButton_Axis4 value: I32(36)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Axis4;

  /// @brief Field k_EButton_DPad_Down value: I32(6)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Down;

  /// @brief Field k_EButton_DPad_Left value: I32(3)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Left;

  /// @brief Field k_EButton_DPad_Right value: I32(5)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Right;

  /// @brief Field k_EButton_DPad_Up value: I32(4)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_DPad_Up;

  /// @brief Field k_EButton_Dashboard_Back value: I32(2)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Dashboard_Back;

  /// @brief Field k_EButton_Grip value: I32(2)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Grip;

  /// @brief Field k_EButton_Knuckles_A value: I32(2)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_A;

  /// @brief Field k_EButton_Knuckles_B value: I32(1)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_B;

  /// @brief Field k_EButton_Knuckles_JoyStick value: I32(35)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Knuckles_JoyStick;

  /// @brief Field k_EButton_Max value: I32(64)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_Max;

  /// @brief Field k_EButton_ProximitySensor value: I32(31)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_ProximitySensor;

  /// @brief Field k_EButton_SteamVR_Touchpad value: I32(32)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_SteamVR_Touchpad;

  /// @brief Field k_EButton_SteamVR_Trigger value: I32(33)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_SteamVR_Trigger;

  /// @brief Field k_EButton_System value: I32(0)
  static ::OVR::OpenVR::EVRButtonId const k_EButton_System;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRButtonId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRButtonId, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRButtonId, "OVR.OpenVR", "EVRButtonId");
