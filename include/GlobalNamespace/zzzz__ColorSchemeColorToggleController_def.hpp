#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSchemeColorToggleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorSchemeColorToggleController)
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeColorToggleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeColorToggleController);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSchemeColorToggleController
class CORDL_TYPE ColorSchemeColorToggleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorGraphics, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorGraphics,
                      put = __cordl_internal_set__colorGraphics)) ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*>
      _colorGraphics;

  /// @brief Field _toggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle)) ::UnityW<::UnityEngine::UI::Toggle> _toggle;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(get = get_toggle)) ::UnityW<::UnityEngine::UI::Toggle> toggle;

  static inline ::GlobalNamespace::ColorSchemeColorToggleController* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> const& __cordl_internal_get__colorGraphics() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*>& __cordl_internal_get__colorGraphics();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__toggle();

  constexpr void __cordl_internal_set__colorGraphics(::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value);

  /// @brief Method .ctor, addr 0x3c06e08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x3c066a4, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_toggle, addr 0x3c06e00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Toggle> get_toggle();

  /// @brief Method set_color, addr 0x3c066f4, size 0x98, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeColorToggleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeColorToggleController(ColorSchemeColorToggleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeColorToggleController(ColorSchemeColorToggleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4740 };

  /// @brief Field _colorGraphics, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>, ::Array<::UnityW<::UnityEngine::UI::Graphic>>*> ____colorGraphics;

  /// @brief Field _toggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorSchemeColorToggleController, ____colorGraphics) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorToggleController, ____toggle) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeColorToggleController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeColorToggleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeColorToggleController*, "", "ColorSchemeColorToggleController");
