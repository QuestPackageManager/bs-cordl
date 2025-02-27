#pragma once
// IWYU pragma private; include "UnityEngine/Yoga/YogaJustify.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YogaJustify)
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaJustify;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Yoga::YogaJustify);
// Dependencies
namespace UnityEngine::Yoga {
// Is value type: true
// CS Name: UnityEngine.Yoga.YogaJustify
struct CORDL_TYPE YogaJustify {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __YogaJustify_Unwrapped
  enum struct __YogaJustify_Unwrapped : int32_t {
    __E_FlexStart = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_FlexEnd = static_cast<int32_t>(0x2),
    __E_SpaceBetween = static_cast<int32_t>(0x3),
    __E_SpaceAround = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __YogaJustify_Unwrapped() const noexcept {
    return static_cast<__YogaJustify_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr YogaJustify();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr YogaJustify(int32_t value__) noexcept;

  /// @brief Field Center value: I32(1)
  static ::UnityEngine::Yoga::YogaJustify const Center;

  /// @brief Field FlexEnd value: I32(2)
  static ::UnityEngine::Yoga::YogaJustify const FlexEnd;

  /// @brief Field FlexStart value: I32(0)
  static ::UnityEngine::Yoga::YogaJustify const FlexStart;

  /// @brief Field SpaceAround value: I32(4)
  static ::UnityEngine::Yoga::YogaJustify const SpaceAround;

  /// @brief Field SpaceBetween value: I32(3)
  static ::UnityEngine::Yoga::YogaJustify const SpaceBetween;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5437 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Yoga::YogaJustify, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::YogaJustify, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaJustify, "UnityEngine.Yoga", "YogaJustify");
