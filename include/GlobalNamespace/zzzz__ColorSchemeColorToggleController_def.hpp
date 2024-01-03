#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ColorSchemeColorToggleController)
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Graphic;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemeColorToggleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemeColorToggleController);
// Type: ::ColorSchemeColorToggleController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5409))
// CS Name: ::ColorSchemeColorToggleController*
class CORDL_TYPE ColorSchemeColorToggleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorGraphics, offset 0x18, size 0x8
  __declspec(property(get = __get__colorGraphics, put = __set__colorGraphics))::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> _colorGraphics;

  /// @brief Field _toggle, offset 0x20, size 0x8
  __declspec(property(get = __get__toggle, put = __set__toggle))::UnityEngine::UI::Toggle* _toggle;

  __declspec(property(get = get_toggle))::UnityEngine::UI::Toggle* toggle;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  constexpr ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*>& __get__colorGraphics();

  constexpr ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> const& __get__colorGraphics() const;

  constexpr void __set__colorGraphics(::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> value);

  constexpr ::UnityEngine::UI::Toggle*& __get__toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__toggle() const;

  constexpr void __set__toggle(::UnityEngine::UI::Toggle* value);

  /// @brief Method get_toggle, addr 0x2275418, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Toggle* get_toggle();

  /// @brief Method get_color, addr 0x2274c8c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x2274cdc, size 0x98, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  static inline ::GlobalNamespace::ColorSchemeColorToggleController* New_ctor();

  /// @brief Method .ctor, addr 0x2275420, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemeColorToggleController(ColorSchemeColorToggleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemeColorToggleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemeColorToggleController(ColorSchemeColorToggleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeColorToggleController();

public:
  /// @brief Field _colorGraphics, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UI::Graphic*, ::Array<::UnityEngine::UI::Graphic*>*> ____colorGraphics;

  /// @brief Field _toggle, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeColorToggleController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorToggleController, ____colorGraphics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemeColorToggleController, ____toggle) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemeColorToggleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeColorToggleController*, "", "ColorSchemeColorToggleController");
