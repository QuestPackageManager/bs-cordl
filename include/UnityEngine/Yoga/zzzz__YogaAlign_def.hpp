#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaAlign.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaAlign)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaAlign;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaAlign);
// Dependencies
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaAlign
struct CORDL_TYPE YogaAlign {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaAlign_Unwrapped
  enum struct __YogaAlign_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_FlexStart = static_cast<int32_t>(0x1),
    __E_Center = static_cast<int32_t>(0x2),
    __E_FlexEnd = static_cast<int32_t>(0x3),
    __E_Stretch = static_cast<int32_t>(0x4),
    __E_Baseline = static_cast<int32_t>(0x5),
    __E_SpaceBetween = static_cast<int32_t>(0x6),
    __E_SpaceAround = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaAlign_Unwrapped() const noexcept {
    return static_cast<__YogaAlign_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaAlign();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaAlign(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::Yoga::YogaAlign const Auto;

  /// @brief Field Baseline value: I32(5)
  static ::UnityEngine::Yoga::YogaAlign const Baseline;

  /// @brief Field Center value: I32(2)
  static ::UnityEngine::Yoga::YogaAlign const Center;

  /// @brief Field FlexEnd value: I32(3)
  static ::UnityEngine::Yoga::YogaAlign const FlexEnd;

  /// @brief Field FlexStart value: I32(1)
  static ::UnityEngine::Yoga::YogaAlign const FlexStart;

  /// @brief Field SpaceAround value: I32(7)
  static ::UnityEngine::Yoga::YogaAlign const SpaceAround;

  /// @brief Field SpaceBetween value: I32(6)
  static ::UnityEngine::Yoga::YogaAlign const SpaceBetween;

  /// @brief Field Stretch value: I32(4)
  static ::UnityEngine::Yoga::YogaAlign const Stretch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5429 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaAlign, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaAlign, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaAlign, "UnityEngine.Yoga", "YogaAlign");
