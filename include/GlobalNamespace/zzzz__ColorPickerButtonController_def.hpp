#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::GlobalNamespace::ColorPickerButtonController);
// Type: ::ColorPickerButtonController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorPickerButtonController*
class CORDL_TYPE ColorPickerButtonController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::UnityEngine::UI::Button> _button;

  /// @brief Field _colorImage, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorImage, put = __cordl_internal_set__colorImage))::UnityW<::UnityEngine::UI::Image> _colorImage;

  __declspec(property(get = get_button))::UnityW<::UnityEngine::UI::Button> button;

  static inline ::GlobalNamespace::ColorPickerButtonController* New_ctor();

  /// @brief Method SetColor, addr 0x2663070, size 0x28, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__button();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__colorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__colorImage();

  constexpr void __cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__colorImage(::UnityW<::UnityEngine::UI::Image> value);

  /// @brief Method .ctor, addr 0x2663098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_button, addr 0x2663068, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _button, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____button;

  /// @brief Field _colorImage, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____colorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorPickerButtonController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorPickerButtonController, ____button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorPickerButtonController, ____colorImage) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorPickerButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorPickerButtonController*, "", "ColorPickerButtonController");
