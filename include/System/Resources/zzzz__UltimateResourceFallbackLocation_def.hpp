#pragma once
// IWYU pragma private; include "System/Resources/UltimateResourceFallbackLocation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UltimateResourceFallbackLocation)
// Forward declare root types
namespace System::Resources {
struct UltimateResourceFallbackLocation;
}
// Write type traits
MARK_VAL_T(::System::Resources::UltimateResourceFallbackLocation);
// Dependencies
namespace System::Resources {
// Is value type: true
// CS Name: System.Resources.UltimateResourceFallbackLocation
struct CORDL_TYPE UltimateResourceFallbackLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UltimateResourceFallbackLocation_Unwrapped
  enum struct __UltimateResourceFallbackLocation_Unwrapped : int32_t {
    __E_MainAssembly = static_cast<int32_t>(0x0),
    __E_Satellite = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UltimateResourceFallbackLocation_Unwrapped() const noexcept {
    return static_cast<__UltimateResourceFallbackLocation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UltimateResourceFallbackLocation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UltimateResourceFallbackLocation(int32_t value__) noexcept;

  /// @brief Field MainAssembly value: I32(0)
  static ::System::Resources::UltimateResourceFallbackLocation const MainAssembly;

  /// @brief Field Satellite value: I32(1)
  static ::System::Resources::UltimateResourceFallbackLocation const Satellite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3430 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Resources::UltimateResourceFallbackLocation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Resources::UltimateResourceFallbackLocation, 0x4>, "Size mismatch!");

} // namespace System::Resources
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::UltimateResourceFallbackLocation, "System.Resources", "UltimateResourceFallbackLocation");
