#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRControllerAxisType)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRControllerAxisType);
// Type: OVR.OpenVR::EVRControllerAxisType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EVRControllerAxisType
struct CORDL_TYPE EVRControllerAxisType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRControllerAxisType_Unwrapped
  enum struct __EVRControllerAxisType_Unwrapped : int32_t {
    __E_k_eControllerAxis_None = static_cast<int32_t>(0x0),
    __E_k_eControllerAxis_TrackPad = static_cast<int32_t>(0x1),
    __E_k_eControllerAxis_Joystick = static_cast<int32_t>(0x2),
    __E_k_eControllerAxis_Trigger = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRControllerAxisType_Unwrapped() const noexcept {
    return static_cast<__EVRControllerAxisType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRControllerAxisType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRControllerAxisType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field k_eControllerAxis_Joystick value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_Joystick;

  /// @brief Field k_eControllerAxis_None value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_None;

  /// @brief Field k_eControllerAxis_TrackPad value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_TrackPad;

  /// @brief Field k_eControllerAxis_Trigger value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::EVRControllerAxisType const k_eControllerAxis_Trigger;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRControllerAxisType, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EVRControllerAxisType, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRControllerAxisType, "OVR.OpenVR", "EVRControllerAxisType");
