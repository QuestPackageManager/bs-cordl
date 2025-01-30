#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaOverflow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaOverflow)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaOverflow);
// Dependencies
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaOverflow
struct CORDL_TYPE YogaOverflow {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaOverflow_Unwrapped
  enum struct __YogaOverflow_Unwrapped : int32_t {
    __E_Visible = static_cast<int32_t>(0x0),
    __E_Hidden = static_cast<int32_t>(0x1),
    __E_Scroll = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaOverflow_Unwrapped() const noexcept {
    return static_cast<__YogaOverflow_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaOverflow();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaOverflow(int32_t value__) noexcept;

  /// @brief Field Hidden value: I32(1)
  static ::UnityEngine::Yoga::YogaOverflow const Hidden;

  /// @brief Field Scroll value: I32(2)
  static ::UnityEngine::Yoga::YogaOverflow const Scroll;

  /// @brief Field Visible value: I32(0)
  static ::UnityEngine::Yoga::YogaOverflow const Visible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5440 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaOverflow, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaOverflow, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaOverflow, "UnityEngine.Yoga", "YogaOverflow");
