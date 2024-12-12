#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaFlexDirection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaFlexDirection)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaFlexDirection);
// Dependencies
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaFlexDirection
struct CORDL_TYPE YogaFlexDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaFlexDirection_Unwrapped
  enum struct __YogaFlexDirection_Unwrapped : int32_t {
    __E_Column = static_cast<int32_t>(0x0),
    __E_ColumnReverse = static_cast<int32_t>(0x1),
    __E_Row = static_cast<int32_t>(0x2),
    __E_RowReverse = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaFlexDirection_Unwrapped() const noexcept {
    return static_cast<__YogaFlexDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaFlexDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaFlexDirection(int32_t value__) noexcept;

  /// @brief Field Column value: I32(0)
  static ::UnityEngine::Yoga::YogaFlexDirection const Column;

  /// @brief Field ColumnReverse value: I32(1)
  static ::UnityEngine::Yoga::YogaFlexDirection const ColumnReverse;

  /// @brief Field Row value: I32(2)
  static ::UnityEngine::Yoga::YogaFlexDirection const Row;

  /// @brief Field RowReverse value: I32(3)
  static ::UnityEngine::Yoga::YogaFlexDirection const RowReverse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5431 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaFlexDirection, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaFlexDirection, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaFlexDirection, "UnityEngine.Yoga", "YogaFlexDirection");
