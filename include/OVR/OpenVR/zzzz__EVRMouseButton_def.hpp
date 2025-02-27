#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVRMouseButton.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVRMouseButton)
// Forward declare root types
namespace OVR::OpenVR {
struct EVRMouseButton;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVRMouseButton);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVRMouseButton
struct CORDL_TYPE EVRMouseButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVRMouseButton_Unwrapped
  enum struct __EVRMouseButton_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x1),
    __E_Right = static_cast<int32_t>(0x2),
    __E_Middle = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVRMouseButton_Unwrapped() const noexcept {
    return static_cast<__EVRMouseButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVRMouseButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVRMouseButton(int32_t value__) noexcept;

  /// @brief Field Left value: I32(1)
  static ::OVR::OpenVR::EVRMouseButton const Left;

  /// @brief Field Middle value: I32(4)
  static ::OVR::OpenVR::EVRMouseButton const Middle;

  /// @brief Field Right value: I32(2)
  static ::OVR::OpenVR::EVRMouseButton const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8912 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVRMouseButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVRMouseButton, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRMouseButton, "OVR.OpenVR", "EVRMouseButton");
