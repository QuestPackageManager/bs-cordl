#pragma once
// IWYU pragma private; include "HMUI/IColorStyledComponent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
CORDL_MODULE_EXPORT(IColorStyledComponent)
namespace GlobalNamespace {
struct GradientDirection;
}
namespace GlobalNamespace {
class IReadOnlyColorStyle;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace HMUI {
class IColorStyledComponent;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IColorStyledComponent);
// Dependencies
namespace HMUI {
// Is value type: false
// CS Name: HMUI.IColorStyledComponent
class CORDL_TYPE IColorStyledComponent {
public:
  // Declarations
  __declspec(property(get = get_colorStyle)) ::GlobalNamespace::IReadOnlyColorStyle* colorStyle;

  /// @brief Method UpdateColorStyle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateColorStyle(::UnityEngine::Color color, float_t globalLightTintIntensity, bool gradient, ::GlobalNamespace::GradientDirection gradientDirection, ::UnityEngine::Color color0,
                               ::UnityEngine::Color color1);

  /// @brief Method UpdateColorStyle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateColorStyle(::GlobalNamespace::IReadOnlyColorStyle* colorStyle);

  /// @brief Method get_colorStyle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::IReadOnlyColorStyle* get_colorStyle();

  // Ctor Parameters [CppParam { name: "", ty: "IColorStyledComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IColorStyledComponent(IColorStyledComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19148 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
NEED_NO_BOX(::HMUI::IColorStyledComponent);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IColorStyledComponent*, "HMUI", "IColorStyledComponent");
