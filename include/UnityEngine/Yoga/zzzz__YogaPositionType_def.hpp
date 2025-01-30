#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaPositionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaPositionType)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaPositionType);
// Dependencies
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaPositionType
struct CORDL_TYPE YogaPositionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaPositionType_Unwrapped
  enum struct __YogaPositionType_Unwrapped : int32_t {
    __E_Relative = static_cast<int32_t>(0x0),
    __E_Absolute = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaPositionType_Unwrapped() const noexcept {
    return static_cast<__YogaPositionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaPositionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaPositionType(int32_t value__) noexcept;

  /// @brief Field Absolute value: I32(1)
  static ::UnityEngine::Yoga::YogaPositionType const Absolute;

  /// @brief Field Relative value: I32(0)
  static ::UnityEngine::Yoga::YogaPositionType const Relative;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5441 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaPositionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaPositionType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaPositionType, "UnityEngine.Yoga", "YogaPositionType");
