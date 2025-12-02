#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStepValuePicker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ColorStepValuePicker)
namespace HMUI {
class ImageView;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorStepValuePicker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorStepValuePicker);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorStepValuePicker
class CORDL_TYPE ColorStepValuePicker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _decButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__decButton, put = __cordl_internal_set__decButton)) ::UnityW<::UnityEngine::UI::Button> _decButton;

  /// @brief Field _incButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__incButton, put = __cordl_internal_set__incButton)) ::UnityW<::UnityEngine::UI::Button> _incButton;

  /// @brief Field _valueImage, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__valueImage, put = __cordl_internal_set__valueImage)) ::UnityW<::HMUI::ImageView> _valueImage;

  __declspec(property(get = get_color, put = set_color)) ::UnityEngine::Color color;

  __declspec(property(put = set_decButtonInteractable)) bool decButtonInteractable;

  /// @brief Field decButtonWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_decButtonWasPressedEvent, put = __cordl_internal_set_decButtonWasPressedEvent)) ::System::Action* decButtonWasPressedEvent;

  __declspec(property(put = set_incButtonInteractable)) bool incButtonInteractable;

  /// @brief Field incButtonWasPressedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_incButtonWasPressedEvent, put = __cordl_internal_set_incButtonWasPressedEvent)) ::System::Action* incButtonWasPressedEvent;

  /// @brief Method DecButtonPressed, addr 0x581918c, size 0x1c, virtual false, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method IncButtonPressed, addr 0x5819170, size 0x1c, virtual false, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::ColorStepValuePicker* New_ctor();

  /// @brief Method OnDisable, addr 0x581901c, size 0x154, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5818ec8, size 0x154, virtual true, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__decButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__decButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__incButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__incButton();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__valueImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__valueImage();

  constexpr ::System::Action* const& __cordl_internal_get_decButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_decButtonWasPressedEvent();

  constexpr ::System::Action* const& __cordl_internal_get_incButtonWasPressedEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_incButtonWasPressedEvent();

  constexpr void __cordl_internal_set__decButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__incButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__valueImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set_decButtonWasPressedEvent(::System::Action* value);

  constexpr void __cordl_internal_set_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x58191a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_decButtonWasPressedEvent, addr 0x5818ba0, size 0xac, virtual false, abstract: false, final false
  inline void add_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_incButtonWasPressedEvent, addr 0x5818cf8, size 0xac, virtual false, abstract: false, final false
  inline void add_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method get_color, addr 0x5818e50, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method remove_decButtonWasPressedEvent, addr 0x5818c4c, size 0xac, virtual false, abstract: false, final false
  inline void remove_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_incButtonWasPressedEvent, addr 0x5818da4, size 0xac, virtual false, abstract: false, final false
  inline void remove_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method set_color, addr 0x5818e70, size 0x20, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_decButtonInteractable, addr 0x5818e90, size 0x1c, virtual false, abstract: false, final false
  inline void set_decButtonInteractable(bool value);

  /// @brief Method set_incButtonInteractable, addr 0x5818eac, size 0x1c, virtual false, abstract: false, final false
  inline void set_incButtonInteractable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorStepValuePicker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorStepValuePicker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorStepValuePicker(ColorStepValuePicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorStepValuePicker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorStepValuePicker(ColorStepValuePicker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22916 };

  /// @brief Field _decButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____decButton;

  /// @brief Field _incButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____incButton;

  /// @brief Field _valueImage, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____valueImage;

  /// @brief Field decButtonWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___decButtonWasPressedEvent;

  /// @brief Field incButtonWasPressedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___incButtonWasPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ____decButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ____incButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ____valueImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ___decButtonWasPressedEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ___incButtonWasPressedEvent) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorStepValuePicker, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorStepValuePicker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorStepValuePicker*, "", "ColorStepValuePicker");
