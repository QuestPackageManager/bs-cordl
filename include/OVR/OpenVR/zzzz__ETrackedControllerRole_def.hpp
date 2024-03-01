#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ETrackedControllerRole)
// Forward declare root types
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::ETrackedControllerRole);
// Type: OVR.OpenVR::ETrackedControllerRole
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::ETrackedControllerRole
struct CORDL_TYPE ETrackedControllerRole {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ETrackedControllerRole_Unwrapped
  enum struct __ETrackedControllerRole_Unwrapped : int32_t {
    __E_Invalid = static_cast<int32_t>(0x0),
    __E_LeftHand = static_cast<int32_t>(0x1),
    __E_RightHand = static_cast<int32_t>(0x2),
    __E_OptOut = static_cast<int32_t>(0x3),
    __E_Max = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ETrackedControllerRole_Unwrapped() const noexcept {
    return static_cast<__ETrackedControllerRole_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__ETrackedControllerRole_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ETrackedControllerRole();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ETrackedControllerRole(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Invalid value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::ETrackedControllerRole const Invalid;

  /// @brief Field LeftHand value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::ETrackedControllerRole const LeftHand;

  /// @brief Field Max value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::ETrackedControllerRole const Max;

  /// @brief Field OptOut value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::ETrackedControllerRole const OptOut;

  /// @brief Field RightHand value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::ETrackedControllerRole const RightHand;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::ETrackedControllerRole, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::ETrackedControllerRole, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ETrackedControllerRole, "OVR.OpenVR", "ETrackedControllerRole");
