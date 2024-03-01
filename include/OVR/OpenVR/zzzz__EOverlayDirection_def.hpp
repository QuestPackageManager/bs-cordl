#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EOverlayDirection)
// Forward declare root types
namespace OVR::OpenVR {
struct EOverlayDirection;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EOverlayDirection);
// Type: OVR.OpenVR::EOverlayDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::EOverlayDirection
struct CORDL_TYPE EOverlayDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EOverlayDirection_Unwrapped
  enum struct __EOverlayDirection_Unwrapped : int32_t {
    __E_Up = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Left = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x3),
    __E_Count = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EOverlayDirection_Unwrapped() const noexcept {
    return static_cast<__EOverlayDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__EOverlayDirection_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EOverlayDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EOverlayDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Count value: static_cast<int32_t>(0x4)
  static ::OVR::OpenVR::EOverlayDirection const Count;

  /// @brief Field Down value: static_cast<int32_t>(0x1)
  static ::OVR::OpenVR::EOverlayDirection const Down;

  /// @brief Field Left value: static_cast<int32_t>(0x2)
  static ::OVR::OpenVR::EOverlayDirection const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x3)
  static ::OVR::OpenVR::EOverlayDirection const Right;

  /// @brief Field Up value: static_cast<int32_t>(0x0)
  static ::OVR::OpenVR::EOverlayDirection const Up;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EOverlayDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::EOverlayDirection, value__) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EOverlayDirection, "OVR.OpenVR", "EOverlayDirection");
