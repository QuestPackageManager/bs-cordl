#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelScaleMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelScaleMode)
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelScaleMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelScaleMode);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelScaleMode
struct CORDL_TYPE PanelScaleMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PanelScaleMode_Unwrapped
  enum struct __PanelScaleMode_Unwrapped : int32_t {
    __E_ConstantPixelSize = static_cast<int32_t>(0x0),
    __E_ConstantPhysicalSize = static_cast<int32_t>(0x1),
    __E_ScaleWithScreenSize = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PanelScaleMode_Unwrapped() const noexcept {
    return static_cast<__PanelScaleMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelScaleMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PanelScaleMode(int32_t value__) noexcept;

  /// @brief Field ConstantPhysicalSize value: I32(1)
  static ::UnityEngine::UIElements::PanelScaleMode const ConstantPhysicalSize;

  /// @brief Field ConstantPixelSize value: I32(0)
  static ::UnityEngine::UIElements::PanelScaleMode const ConstantPixelSize;

  /// @brief Field ScaleWithScreenSize value: I32(2)
  static ::UnityEngine::UIElements::PanelScaleMode const ScaleWithScreenSize;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5959 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelScaleMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelScaleMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelScaleMode, "UnityEngine.UIElements", "PanelScaleMode");
