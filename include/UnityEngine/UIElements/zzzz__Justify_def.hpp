#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Justify.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Justify)
// Forward declare root types
namespace UnityEngine::UIElements {
struct Justify;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Justify);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Justify
struct CORDL_TYPE Justify {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Justify_Unwrapped
  enum struct __Justify_Unwrapped : int32_t {
    __E_FlexStart = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_FlexEnd = static_cast<int32_t>(0x2),
    __E_SpaceBetween = static_cast<int32_t>(0x3),
    __E_SpaceAround = static_cast<int32_t>(0x4),
    __E_SpaceEvenly = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Justify_Unwrapped() const noexcept {
    return static_cast<__Justify_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Justify();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Justify(int32_t value__) noexcept;

  /// @brief Field Center value: I32(1)
  static ::UnityEngine::UIElements::Justify const Center;

  /// @brief Field FlexEnd value: I32(2)
  static ::UnityEngine::UIElements::Justify const FlexEnd;

  /// @brief Field FlexStart value: I32(0)
  static ::UnityEngine::UIElements::Justify const FlexStart;

  /// @brief Field SpaceAround value: I32(4)
  static ::UnityEngine::UIElements::Justify const SpaceAround;

  /// @brief Field SpaceBetween value: I32(3)
  static ::UnityEngine::UIElements::Justify const SpaceBetween;

  /// @brief Field SpaceEvenly value: I32(5)
  static ::UnityEngine::UIElements::Justify const SpaceEvenly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Justify, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Justify, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Justify, "UnityEngine.UIElements", "Justify");
