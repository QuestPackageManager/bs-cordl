#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(EditColorSchemeController)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace GlobalNamespace {
class ColorSchemeColorsToggleGroup;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class HSVPanelController;
}
namespace GlobalNamespace {
class PreviousColorPanelController;
}
namespace GlobalNamespace {
class RGBPanelController;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
template <typename T> class Action_1;
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
class EditColorSchemeController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditColorSchemeController);
// Type: ::EditColorSchemeController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5413))
// CS Name: ::EditColorSchemeController*
class CORDL_TYPE EditColorSchemeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorSchemeColorsToggleGroup, offset 0x18, size 0x8
  __declspec(property(get = __get__colorSchemeColorsToggleGroup, put = __set__colorSchemeColorsToggleGroup))::GlobalNamespace::ColorSchemeColorsToggleGroup* _colorSchemeColorsToggleGroup;

  /// @brief Field _rgbPanelController, offset 0x20, size 0x8
  __declspec(property(get = __get__rgbPanelController, put = __set__rgbPanelController))::GlobalNamespace::RGBPanelController* _rgbPanelController;

  /// @brief Field _hsvPanelController, offset 0x28, size 0x8
  __declspec(property(get = __get__hsvPanelController, put = __set__hsvPanelController))::GlobalNamespace::HSVPanelController* _hsvPanelController;

  /// @brief Field _previousColorPanelController, offset 0x30, size 0x8
  __declspec(property(get = __get__previousColorPanelController, put = __set__previousColorPanelController))::GlobalNamespace::PreviousColorPanelController* _previousColorPanelController;

  /// @brief Field _closeButton, offset 0x38, size 0x8
  __declspec(property(get = __get__closeButton, put = __set__closeButton))::UnityEngine::UI::Button* _closeButton;

  /// @brief Field didFinishEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action* didFinishEvent;

  /// @brief Field didChangeColorSchemeEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_didChangeColorSchemeEvent, put = __set_didChangeColorSchemeEvent))::System::Action_1<::GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent;

  /// @brief Field _buttonBinder, offset 0x50, size 0x8
  __declspec(property(get = __get__buttonBinder, put = __set__buttonBinder))::HMUI::ButtonBinder* _buttonBinder;

  constexpr ::GlobalNamespace::ColorSchemeColorsToggleGroup*& __get__colorSchemeColorsToggleGroup();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemeColorsToggleGroup*> const& __get__colorSchemeColorsToggleGroup() const;

  constexpr void __set__colorSchemeColorsToggleGroup(::GlobalNamespace::ColorSchemeColorsToggleGroup* value);

  constexpr ::GlobalNamespace::RGBPanelController*& __get__rgbPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RGBPanelController*> const& __get__rgbPanelController() const;

  constexpr void __set__rgbPanelController(::GlobalNamespace::RGBPanelController* value);

  constexpr ::GlobalNamespace::HSVPanelController*& __get__hsvPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HSVPanelController*> const& __get__hsvPanelController() const;

  constexpr void __set__hsvPanelController(::GlobalNamespace::HSVPanelController* value);

  constexpr ::GlobalNamespace::PreviousColorPanelController*& __get__previousColorPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviousColorPanelController*> const& __get__previousColorPanelController() const;

  constexpr void __set__previousColorPanelController(::GlobalNamespace::PreviousColorPanelController* value);

  constexpr ::UnityEngine::UI::Button*& __get__closeButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__closeButton() const;

  constexpr void __set__closeButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action* value);

  constexpr ::System::Action_1<::GlobalNamespace::ColorScheme*>*& __get_didChangeColorSchemeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::ColorScheme*>*> const& __get_didChangeColorSchemeEvent() const;

  constexpr void __set_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr ::HMUI::ButtonBinder*& __get__buttonBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& __get__buttonBinder() const;

  constexpr void __set__buttonBinder(::HMUI::ButtonBinder* value);

  /// @brief Method add_didFinishEvent, addr 0x22760ec, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didFinishEvent, addr 0x2276474, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

  /// @brief Method add_didChangeColorSchemeEvent, addr 0x2276188, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);

  /// @brief Method remove_didChangeColorSchemeEvent, addr 0x2276510, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);

  /// @brief Method SetColorScheme, addr 0x2276c00, size 0x18, virtual false, abstract: false, final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method Start, addr 0x2276cbc, size 0x290, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2276f4c, size 0x1d8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleColorSchemeColorsToggleGroupSelectedColorDidChange, addr 0x2277124, size 0x80, virtual false, abstract: false, final false
  inline void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(::UnityEngine::Color color);

  /// @brief Method HandleRGBPanelControllerColorDidChange, addr 0x22771a4, size 0xd4, virtual false, abstract: false, final false
  inline void HandleRGBPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandleHSVPanelControllerColorDidChange, addr 0x2277278, size 0xd4, virtual false, abstract: false, final false
  inline void HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandlePreviousColorPanelControllerColorWasSelected, addr 0x227734c, size 0xbc, virtual false, abstract: false, final false
  inline void HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color);

  static inline ::GlobalNamespace::EditColorSchemeController* New_ctor();

  /// @brief Method .ctor, addr 0x2277408, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__13_0, addr 0x2277410, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__13_0();

  // Ctor Parameters [CppParam { name: "", ty: "EditColorSchemeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditColorSchemeController(EditColorSchemeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditColorSchemeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditColorSchemeController(EditColorSchemeController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditColorSchemeController();

public:
  /// @brief Field _colorSchemeColorsToggleGroup, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemeColorsToggleGroup* ____colorSchemeColorsToggleGroup;

  /// @brief Field _rgbPanelController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RGBPanelController* ____rgbPanelController;

  /// @brief Field _hsvPanelController, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::HSVPanelController* ____hsvPanelController;

  /// @brief Field _previousColorPanelController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::PreviousColorPanelController* ____previousColorPanelController;

  /// @brief Field _closeButton, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____closeButton;

  /// @brief Field didFinishEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  /// @brief Field didChangeColorSchemeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ColorScheme*>* ___didChangeColorSchemeEvent;

  /// @brief Field _buttonBinder, offset: 0x50, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditColorSchemeController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____colorSchemeColorsToggleGroup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____rgbPanelController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____hsvPanelController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____previousColorPanelController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____closeButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ___didFinishEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ___didChangeColorSchemeEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____buttonBinder) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditColorSchemeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditColorSchemeController*, "", "EditColorSchemeController");
