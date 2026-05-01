#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfigDataType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutConfigDataType)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutConfigDataType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutConfigDataType);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutConfigDataType
struct CORDL_TYPE LayoutConfigDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutConfigDataType_Unwrapped
  enum struct __LayoutConfigDataType_Unwrapped : int32_t {
    __E_Config = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutConfigDataType_Unwrapped() const noexcept {
    return static_cast<__LayoutConfigDataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutConfigDataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutConfigDataType(int32_t value__) noexcept;

  /// @brief Field Config value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutConfigDataType const Config;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5390 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfigDataType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutConfigDataType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutConfigDataType, "UnityEngine.UIElements.Layout", "LayoutConfigDataType");
