#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutPositionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutPositionType)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutPositionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutPositionType);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutPositionType
struct CORDL_TYPE LayoutPositionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutPositionType_Unwrapped
  enum struct __LayoutPositionType_Unwrapped : int32_t {
    __E_Relative = static_cast<int32_t>(0x0),
    __E_Absolute = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutPositionType_Unwrapped() const noexcept {
    return static_cast<__LayoutPositionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutPositionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutPositionType(int32_t value__) noexcept;

  /// @brief Field Absolute value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutPositionType const Absolute;

  /// @brief Field Relative value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutPositionType const Relative;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5434 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutPositionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutPositionType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutPositionType, "UnityEngine.UIElements.Layout", "LayoutPositionType");
