#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PS4ApplicationCategory)
// Forward declare root types
namespace GlobalNamespace {
struct PS4ApplicationCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PS4ApplicationCategory);
// Type: ::PS4ApplicationCategory
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PS4ApplicationCategory
struct CORDL_TYPE PS4ApplicationCategory {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PS4ApplicationCategory_Unwrapped
  enum struct __PS4ApplicationCategory_Unwrapped : int32_t {
    __E_Application = static_cast<int32_t>(0x0),
    __E_Patch = static_cast<int32_t>(0x1),
    __E_Remaster = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PS4ApplicationCategory_Unwrapped() const noexcept {
    return static_cast<__PS4ApplicationCategory_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4ApplicationCategory();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PS4ApplicationCategory(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Application value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::PS4ApplicationCategory const Application;

  /// @brief Field Patch value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::PS4ApplicationCategory const Patch;

  /// @brief Field Remaster value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::PS4ApplicationCategory const Remaster;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4ApplicationCategory, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4ApplicationCategory, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4ApplicationCategory, "", "PS4ApplicationCategory");
