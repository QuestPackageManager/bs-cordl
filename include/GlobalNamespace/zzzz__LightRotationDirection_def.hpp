#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightRotationDirection)
// Forward declare root types
namespace GlobalNamespace {
struct LightRotationDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightRotationDirection);
// Type: ::LightRotationDirection
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LightRotationDirection
struct CORDL_TYPE LightRotationDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LightRotationDirection_Unwrapped
  enum struct __LightRotationDirection_Unwrapped : int32_t {
    __E_Automatic = static_cast<int32_t>(0x0),
    __E_Clockwise = static_cast<int32_t>(0x1),
    __E_Counterclockwise = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LightRotationDirection_Unwrapped() const noexcept {
    return static_cast<__LightRotationDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LightRotationDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LightRotationDirection(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Automatic value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::LightRotationDirection const Automatic;

  /// @brief Field Clockwise value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::LightRotationDirection const Clockwise;

  /// @brief Field Counterclockwise value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::LightRotationDirection const Counterclockwise;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightRotationDirection, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightRotationDirection, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightRotationDirection, "", "LightRotationDirection");
