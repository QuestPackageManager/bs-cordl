#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasFiltersInternal)
// Forward declare root types
namespace UnityEngine::UIElements {
struct DynamicAtlasFiltersInternal;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::DynamicAtlasFiltersInternal);
// Type: UnityEngine.UIElements::DynamicAtlasFiltersInternal
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::DynamicAtlasFiltersInternal
struct CORDL_TYPE DynamicAtlasFiltersInternal {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DynamicAtlasFiltersInternal_Unwrapped
  enum struct __DynamicAtlasFiltersInternal_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Readability = static_cast<int32_t>(0x1),
    __E_Size = static_cast<int32_t>(0x2),
    __E_Format = static_cast<int32_t>(0x4),
    __E_ColorSpace = static_cast<int32_t>(0x8),
    __E_FilterMode = static_cast<int32_t>(0x10),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DynamicAtlasFiltersInternal_Unwrapped() const noexcept {
    return static_cast<__DynamicAtlasFiltersInternal_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<__DynamicAtlasFiltersInternal_Unwrapped>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlasFiltersInternal();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DynamicAtlasFiltersInternal(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColorSpace value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const ColorSpace;

  /// @brief Field FilterMode value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const FilterMode;

  /// @brief Field Format value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const Format;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const None;

  /// @brief Field Readability value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const Readability;

  /// @brief Field Size value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::DynamicAtlasFiltersInternal const Size;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasFiltersInternal, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasFiltersInternal, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasFiltersInternal, "UnityEngine.UIElements", "DynamicAtlasFiltersInternal");
