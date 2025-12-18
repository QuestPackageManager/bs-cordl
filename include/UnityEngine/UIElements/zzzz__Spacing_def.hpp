#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Spacing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Spacing)
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Spacing;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Spacing);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Spacing
struct CORDL_TYPE Spacing {
public:
  // Declarations
  __declspec(property(get = get_horizontal)) float_t horizontal;

  __declspec(property(get = get_vertical)) float_t vertical;

  /// @brief Method .ctor, addr 0x6c0ea50, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(float_t left, float_t top, float_t right, float_t bottom);

  /// @brief Method get_horizontal, addr 0x6c0ea30, size 0x10, virtual false, abstract: false, final false
  inline float_t get_horizontal();

  /// @brief Method get_vertical, addr 0x6c0ea40, size 0x10, virtual false, abstract: false, final false
  inline float_t get_vertical();

  /// @brief Method op_Subtraction, addr 0x6c0ea5c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rect op_Subtraction(::UnityEngine::Rect r, ::UnityEngine::UIElements::Spacing a);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Spacing();

  // Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "right", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "bottom", ty: "float_t", modifiers: "", def_value: None }]
  constexpr Spacing(float_t left, float_t top, float_t right, float_t bottom) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4691 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field left, offset: 0x0, size: 0x4, def value: None
  float_t left;

  /// @brief Field top, offset: 0x4, size: 0x4, def value: None
  float_t top;

  /// @brief Field right, offset: 0x8, size: 0x4, def value: None
  float_t right;

  /// @brief Field bottom, offset: 0xc, size: 0x4, def value: None
  float_t bottom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Spacing, left) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Spacing, top) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Spacing, right) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Spacing, bottom) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Spacing, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Spacing, "UnityEngine.UIElements", "Spacing");
