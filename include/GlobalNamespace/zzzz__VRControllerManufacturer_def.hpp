#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllerManufacturer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRControllerManufacturer)
// Forward declare root types
namespace GlobalNamespace {
struct VRControllerManufacturer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::VRControllerManufacturer);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: VRControllerManufacturer
struct CORDL_TYPE VRControllerManufacturer {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VRControllerManufacturer_Unwrapped
  enum struct __VRControllerManufacturer_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_HTC = static_cast<int32_t>(0x1),
    __E_Oculus = static_cast<int32_t>(0x2),
    __E_Valve = static_cast<int32_t>(0x3),
    __E_Microsoft = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VRControllerManufacturer_Unwrapped() const noexcept {
    return static_cast<__VRControllerManufacturer_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllerManufacturer();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VRControllerManufacturer(int32_t value__) noexcept;

  /// @brief Field HTC value: I32(1)
  static ::GlobalNamespace::VRControllerManufacturer const HTC;

  /// @brief Field Microsoft value: I32(4)
  static ::GlobalNamespace::VRControllerManufacturer const Microsoft;

  /// @brief Field Oculus value: I32(2)
  static ::GlobalNamespace::VRControllerManufacturer const Oculus;

  /// @brief Field Unknown value: I32(0)
  static ::GlobalNamespace::VRControllerManufacturer const Unknown;

  /// @brief Field Valve value: I32(3)
  static ::GlobalNamespace::VRControllerManufacturer const Valve;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20320 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRControllerManufacturer, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllerManufacturer, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllerManufacturer, "", "VRControllerManufacturer");
