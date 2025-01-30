#pragma once
// IWYU pragma private; include "TMPro/AtlasPopulationMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AtlasPopulationMode)
// Forward declare root types
namespace TMPro {
struct AtlasPopulationMode;
}
// Write type traits
MARK_VAL_T(::TMPro::AtlasPopulationMode);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.AtlasPopulationMode
struct CORDL_TYPE AtlasPopulationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AtlasPopulationMode_Unwrapped
  enum struct __AtlasPopulationMode_Unwrapped : int32_t {
    __E_Static = static_cast<int32_t>(0x0),
    __E_Dynamic = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AtlasPopulationMode_Unwrapped() const noexcept {
    return static_cast<__AtlasPopulationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AtlasPopulationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AtlasPopulationMode(int32_t value__) noexcept;

  /// @brief Field Dynamic value: I32(1)
  static ::TMPro::AtlasPopulationMode const Dynamic;

  /// @brief Field Static value: I32(0)
  static ::TMPro::AtlasPopulationMode const Static;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14474 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::AtlasPopulationMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::AtlasPopulationMode, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::AtlasPopulationMode, "TMPro", "AtlasPopulationMode");
