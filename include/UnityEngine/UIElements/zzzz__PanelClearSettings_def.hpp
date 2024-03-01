#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PanelClearSettings)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelClearSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelClearSettings);
// Type: UnityEngine.UIElements::PanelClearSettings
// SizeInfo { instance_size: 20, native_size: 24, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::PanelClearSettings
struct CORDL_TYPE PanelClearSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelClearSettings();

  // Ctor Parameters [CppParam { name: "clearDepthStencil", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clearColor", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }]
  constexpr PanelClearSettings(bool clearDepthStencil, bool clearColor, ::UnityEngine::Color color) noexcept;

  /// @brief Field clearDepthStencil, offset: 0x0, size: 0x1, def value: None
  bool clearDepthStencil;

  /// @brief Field clearColor, offset: 0x1, size: 0x1, def value: None
  bool clearColor;

  /// @brief Field color, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelClearSettings, 0x14>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelClearSettings, clearDepthStencil) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelClearSettings, clearColor) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelClearSettings, color) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelClearSettings, "UnityEngine.UIElements", "PanelClearSettings");
