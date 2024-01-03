#pragma once
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
// Type: ::ColorStepValuePicker
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16145))
// CS Name: ::ColorStepValuePicker*
class CORDL_TYPE ColorStepValuePicker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _decButton, offset 0x18, size 0x8
  __declspec(property(get = __get__decButton, put = __set__decButton))::UnityEngine::UI::Button* _decButton;

  /// @brief Field _incButton, offset 0x20, size 0x8
  __declspec(property(get = __get__incButton, put = __set__incButton))::UnityEngine::UI::Button* _incButton;

  /// @brief Field _valueImage, offset 0x28, size 0x8
  __declspec(property(get = __get__valueImage, put = __set__valueImage))::HMUI::ImageView* _valueImage;

  /// @brief Field decButtonWasPressedEvent, offset 0x30, size 0x8
  __declspec(property(get = __get_decButtonWasPressedEvent, put = __set_decButtonWasPressedEvent))::System::Action* decButtonWasPressedEvent;

  /// @brief Field incButtonWasPressedEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_incButtonWasPressedEvent, put = __set_incButtonWasPressedEvent))::System::Action* incButtonWasPressedEvent;

  __declspec(property(get = get_color, put = set_color))::UnityEngine::Color color;

  __declspec(property(put = set_decButtonInteractable)) bool decButtonInteractable;

  __declspec(property(put = set_incButtonInteractable)) bool incButtonInteractable;

  constexpr ::UnityEngine::UI::Button*& __get__decButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__decButton() const;

  constexpr void __set__decButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__incButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__incButton() const;

  constexpr void __set__incButton(::UnityEngine::UI::Button* value);

  constexpr ::HMUI::ImageView*& __get__valueImage();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ImageView*> const& __get__valueImage() const;

  constexpr void __set__valueImage(::HMUI::ImageView* value);

  constexpr ::System::Action*& __get_decButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_decButtonWasPressedEvent() const;

  constexpr void __set_decButtonWasPressedEvent(::System::Action* value);

  constexpr ::System::Action*& __get_incButtonWasPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_incButtonWasPressedEvent() const;

  constexpr void __set_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_decButtonWasPressedEvent, addr 0x23e42a0, size 0x9c, virtual false, abstract: false, final false
  inline void add_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_decButtonWasPressedEvent, addr 0x23e433c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_decButtonWasPressedEvent(::System::Action* value);

  /// @brief Method add_incButtonWasPressedEvent, addr 0x23e43d8, size 0x9c, virtual false, abstract: false, final false
  inline void add_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method remove_incButtonWasPressedEvent, addr 0x23e4474, size 0x9c, virtual false, abstract: false, final false
  inline void remove_incButtonWasPressedEvent(::System::Action* value);

  /// @brief Method get_color, addr 0x23e4510, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method set_color, addr 0x23e4534, size 0x24, virtual false, abstract: false, final false
  inline void set_color(::UnityEngine::Color value);

  /// @brief Method set_decButtonInteractable, addr 0x23e4558, size 0x20, virtual false, abstract: false, final false
  inline void set_decButtonInteractable(bool value);

  /// @brief Method set_incButtonInteractable, addr 0x23e4578, size 0x20, virtual false, abstract: false, final false
  inline void set_incButtonInteractable(bool value);

  /// @brief Method OnEnable, addr 0x23e4598, size 0xf0, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x23e4688, size 0xf0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method IncButtonPressed, addr 0x23e4778, size 0x1c, virtual false, abstract: false, final false
  inline void IncButtonPressed();

  /// @brief Method DecButtonPressed, addr 0x23e4794, size 0x1c, virtual false, abstract: false, final false
  inline void DecButtonPressed();

  static inline ::GlobalNamespace::ColorStepValuePicker* New_ctor();

  /// @brief Method .ctor, addr 0x23e47b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorStepValuePicker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorStepValuePicker(ColorStepValuePicker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorStepValuePicker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorStepValuePicker(ColorStepValuePicker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorStepValuePicker();

public:
  /// @brief Field _decButton, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____decButton;

  /// @brief Field _incButton, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____incButton;

  /// @brief Field _valueImage, offset: 0x28, size: 0x8, def value: None
  ::HMUI::ImageView* ____valueImage;

  /// @brief Field decButtonWasPressedEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action* ___decButtonWasPressedEvent;

  /// @brief Field incButtonWasPressedEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action* ___incButtonWasPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorStepValuePicker, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ____decButton) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ____incButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ____valueImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ___decButtonWasPressedEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStepValuePicker, ___incButtonWasPressedEvent) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorStepValuePicker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorStepValuePicker*, "", "ColorStepValuePicker");
