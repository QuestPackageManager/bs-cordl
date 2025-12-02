#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutConfigData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LayoutConfigData)
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutConfigData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutConfigData);
// Dependencies
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutConfigData
struct CORDL_TYPE LayoutConfigData {
public:
  // Declarations
  /// @brief Method get_Default, addr 0x6aca8dc, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Layout::LayoutConfigData get_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutConfigData();

  // Ctor Parameters [CppParam { name: "PointScaleFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "ShouldLog", ty: "bool", modifiers: "", def_value: None }]
  constexpr LayoutConfigData(float_t PointScaleFactor, bool ShouldLog) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5411 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field PointScaleFactor, offset: 0x0, size: 0x4, def value: None
  float_t PointScaleFactor;

  /// @brief Field ShouldLog, offset: 0x4, size: 0x1, def value: None
  bool ShouldLog;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfigData, PointScaleFactor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutConfigData, ShouldLog) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutConfigData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutConfigData, "UnityEngine.UIElements.Layout", "LayoutConfigData");
