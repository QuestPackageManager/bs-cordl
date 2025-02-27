#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimeUnit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeUnit)
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimeUnit;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TimeUnit);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.TimeUnit
struct CORDL_TYPE TimeUnit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TimeUnit_Unwrapped
  enum struct __TimeUnit_Unwrapped : int32_t {
    __E_Second = static_cast<int32_t>(0x0),
    __E_Millisecond = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TimeUnit_Unwrapped() const noexcept {
    return static_cast<__TimeUnit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeUnit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TimeUnit(int32_t value__) noexcept;

  /// @brief Field Millisecond value: I32(1)
  static ::UnityEngine::UIElements::TimeUnit const Millisecond;

  /// @brief Field Second value: I32(0)
  static ::UnityEngine::UIElements::TimeUnit const Second;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6114 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TimeUnit, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimeUnit, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimeUnit, "UnityEngine.UIElements", "TimeUnit");
