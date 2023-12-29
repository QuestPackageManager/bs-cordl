#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorPickerButtonController)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5514))
// CS Name: ::ColorPickerButtonController*
class CORDL_TYPE ColorPickerButtonController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x18, size 0x8
  __declspec(property(get = __get__button, put = __set__button))::UnityEngine::UI::Button* _button;

  /// @brief Field _colorImage, offset 0x20, size 0x8
  __declspec(property(get = __get__colorImage, put = __set__colorImage))::UnityEngine::UI::Image* _colorImage;

  __declspec(property(get = get_button))::UnityEngine::UI::Button* button;

  constexpr ::UnityEngine::UI::Button*& __get__button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__button() const;

  constexpr void __set__button(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Image*& __get__colorImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__colorImage() const;

  constexpr void __set__colorImage(::UnityEngine::UI::Image* value);

  /// @brief Method get_button addr 0x2135084 size 0x8 virtual false final false
  inline ::UnityEngine::UI::Button* get_button();

  /// @brief Method SetColor addr 0x213508c size 0x28 virtual false final false
  inline void SetColor(::UnityEngine::Color color);

  static inline ::GlobalNamespace::ColorPickerButtonController* New_ctor();

  /// @brief Method .ctor addr 0x21350b4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPickerButtonController(ColorPickerButtonController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPickerButtonController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPickerButtonController(ColorPickerButtonController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPickerButtonController();

public:
  /// @brief Field _button, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____button;

  /// @brief Field _colorImage, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____colorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorPickerButtonController, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorPickerButtonController, ____button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorPickerButtonController, ____colorImage) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorPickerButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorPickerButtonController*, "", "ColorPickerButtonController");
