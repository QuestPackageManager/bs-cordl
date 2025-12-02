#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutJustify.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutJustify)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutJustify;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutJustify);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutJustify
struct CORDL_TYPE LayoutJustify {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LayoutJustify_Unwrapped
  enum struct __LayoutJustify_Unwrapped : int32_t {
    __E_FlexStart = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_FlexEnd = static_cast<int32_t>(0x2),
    __E_SpaceBetween = static_cast<int32_t>(0x3),
    __E_SpaceAround = static_cast<int32_t>(0x4),
    __E_SpaceEvenly = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LayoutJustify_Unwrapped() const noexcept {
    return static_cast<__LayoutJustify_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutJustify();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LayoutJustify(int32_t value__) noexcept;

  /// @brief Field Center value: I32(1)
  static ::UnityEngine::UIElements::Layout::LayoutJustify const Center;

  /// @brief Field FlexEnd value: I32(2)
  static ::UnityEngine::UIElements::Layout::LayoutJustify const FlexEnd;

  /// @brief Field FlexStart value: I32(0)
  static ::UnityEngine::UIElements::Layout::LayoutJustify const FlexStart;

  /// @brief Field SpaceAround value: I32(4)
  static ::UnityEngine::UIElements::Layout::LayoutJustify const SpaceAround;

  /// @brief Field SpaceBetween value: I32(3)
  static ::UnityEngine::UIElements::Layout::LayoutJustify const SpaceBetween;

  /// @brief Field SpaceEvenly value: I32(5)
  static ::UnityEngine::UIElements::Layout::LayoutJustify const SpaceEvenly;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5429 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutJustify, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutJustify, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutJustify, "UnityEngine.UIElements.Layout", "LayoutJustify");
