#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutSize)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutSize;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutSize);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutSize
struct CORDL_TYPE LayoutSize {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6b38284, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(float_t width, float_t height);

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutSize();

  // Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
  constexpr LayoutSize(float_t width, float_t height) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5435 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  float_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  float_t height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutSize, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutSize, height) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutSize, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutSize, "UnityEngine.UIElements.Layout", "LayoutSize");
