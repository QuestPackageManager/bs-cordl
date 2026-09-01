#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorPickerButtonController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorPickerButtonController)
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorPickerButtonController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColorPickerButtonController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColorPickerButtonController*, "", "ColorPickerButtonController");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorPickerButtonController
class CORDL_TYPE ColorPickerButtonController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button)) ::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _colorImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__colorImage, put = __cordl_internal_set__colorImage)) ::UnityW<::UnityEngine::UI::Image> _colorImage;

  __declspec(property(get = get_button)) ::UnityW<::UnityEngine::UI::Button> button;

  static inline ::GlobalNamespace::ColorPickerButtonController* New_ctor();

  /// @brief Method SetColor, addr 0x5a2ed10, size 0x24, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__colorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__colorImage();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__colorImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x5a2ed34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x5a2ed08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_button();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPickerButtonController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPickerButtonController(ColorPickerButtonController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPickerButtonController(ColorPickerButtonController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23336 };

  /// @brief Field _button, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _colorImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____colorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorPickerButtonController, ____button) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorPickerButtonController, ____colorImage) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColorPickerButtonController) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
