#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVREye.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EVREye)
// Forward declare root types
namespace OVR::OpenVR {
struct EVREye;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::EVREye);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.EVREye
struct CORDL_TYPE EVREye {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EVREye_Unwrapped
  enum struct __EVREye_Unwrapped : int32_t {
    __E_Eye_Left = static_cast<int32_t>(0x0),
    __E_Eye_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EVREye_Unwrapped() const noexcept {
    return static_cast<__EVREye_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EVREye();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EVREye(int32_t value__) noexcept;

  /// @brief Field Eye_Left value: I32(0)
  static ::OVR::OpenVR::EVREye const Eye_Left;

  /// @brief Field Eye_Right value: I32(1)
  static ::OVR::OpenVR::EVREye const Eye_Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8897 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::EVREye, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::EVREye, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVREye, "OVR.OpenVR", "EVREye");
