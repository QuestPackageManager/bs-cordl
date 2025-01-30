#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UsageHints.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UsageHints)
// Forward declare root types
namespace UnityEngine::UIElements {
struct UsageHints;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UsageHints);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.UsageHints
struct CORDL_TYPE UsageHints {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UsageHints_Unwrapped
  enum struct __UsageHints_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DynamicTransform = static_cast<int32_t>(0x1),
    __E_GroupTransform = static_cast<int32_t>(0x2),
    __E_MaskContainer = static_cast<int32_t>(0x4),
    __E_DynamicColor = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UsageHints_Unwrapped() const noexcept {
    return static_cast<__UsageHints_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UsageHints();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UsageHints(int32_t value__) noexcept;

  /// @brief Field DynamicColor value: I32(8)
  static ::UnityEngine::UIElements::UsageHints const DynamicColor;

  /// @brief Field DynamicTransform value: I32(1)
  static ::UnityEngine::UIElements::UsageHints const DynamicTransform;

  /// @brief Field GroupTransform value: I32(2)
  static ::UnityEngine::UIElements::UsageHints const GroupTransform;

  /// @brief Field MaskContainer value: I32(4)
  static ::UnityEngine::UIElements::UsageHints const MaskContainer;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::UsageHints const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6003 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UsageHints, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UsageHints, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UsageHints, "UnityEngine.UIElements", "UsageHints");
