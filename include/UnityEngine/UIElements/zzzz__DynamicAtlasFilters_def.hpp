#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlasFilters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasFilters)
// Forward declare root types
namespace UnityEngine::UIElements {
struct DynamicAtlasFilters;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DynamicAtlasFilters);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.DynamicAtlasFilters
struct CORDL_TYPE DynamicAtlasFilters {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DynamicAtlasFilters_Unwrapped
  enum struct __DynamicAtlasFilters_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Readability = static_cast<int32_t>(0x1),
    __E_Size = static_cast<int32_t>(0x2),
    __E_Format = static_cast<int32_t>(0x4),
    __E_ColorSpace = static_cast<int32_t>(0x8),
    __E_FilterMode = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DynamicAtlasFilters_Unwrapped() const noexcept {
    return static_cast<__DynamicAtlasFilters_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlasFilters();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DynamicAtlasFilters(int32_t value__) noexcept;

  /// @brief Field ColorSpace value: I32(8)
  static ::UnityEngine::UIElements::DynamicAtlasFilters const ColorSpace;

  /// @brief Field FilterMode value: I32(16)
  static ::UnityEngine::UIElements::DynamicAtlasFilters const FilterMode;

  /// @brief Field Format value: I32(4)
  static ::UnityEngine::UIElements::DynamicAtlasFilters const Format;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::DynamicAtlasFilters const None;

  /// @brief Field Readability value: I32(1)
  static ::UnityEngine::UIElements::DynamicAtlasFilters const Readability;

  /// @brief Field Size value: I32(2)
  static ::UnityEngine::UIElements::DynamicAtlasFilters const Size;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5450 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasFilters, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasFilters, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasFilters, "UnityEngine.UIElements", "DynamicAtlasFilters");
