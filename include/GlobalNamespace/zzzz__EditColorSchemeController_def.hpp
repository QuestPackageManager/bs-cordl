#pragma once
// IWYU pragma private; include "GlobalNamespace/EditColorSchemeController.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EditColorSchemeController
class CORDL_TYPE EditColorSchemeController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _buttonBinder, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _closeButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__closeButton, put = __cordl_internal_set__closeButton)) ::UnityW<::UnityEngine::UI::Button> _closeButton;

  /// @brief Field _colorSchemeColorsToggleGroup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemeColorsToggleGroup, put = __cordl_internal_set__colorSchemeColorsToggleGroup)) ::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup>
      _colorSchemeColorsToggleGroup;

  /// @brief Field _hsvPanelController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__hsvPanelController, put = __cordl_internal_set__hsvPanelController)) ::UnityW<::GlobalNamespace::HSVPanelController> _hsvPanelController;

  /// @brief Field _previousColorPanelController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__previousColorPanelController, put = __cordl_internal_set__previousColorPanelController)) ::UnityW<::GlobalNamespace::PreviousColorPanelController>
      _previousColorPanelController;

  /// @brief Field _rgbPanelController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rgbPanelController, put = __cordl_internal_set__rgbPanelController)) ::UnityW<::GlobalNamespace::RGBPanelController> _rgbPanelController;

  /// @brief Field didChangeColorSchemeEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeColorSchemeEvent,
                      put = __cordl_internal_set_didChangeColorSchemeEvent)) ::System::Action_1<::GlobalNamespace::ColorScheme*>* didChangeColorSchemeEvent;

  /// @brief Field didFinishEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action* didFinishEvent;

  /// @brief Method HandleColorSchemeColorsToggleGroupSelectedColorDidChange, addr 0x3bffdb8, size 0x80, virtual false, abstract: false, final false
  inline void HandleColorSchemeColorsToggleGroupSelectedColorDidChange(::UnityEngine::Color color);

  /// @brief Method HandleHSVPanelControllerColorDidChange, addr 0x3bfff0c, size 0xd4, virtual false, abstract: false, final false
  inline void HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandlePreviousColorPanelControllerColorWasSelected, addr 0x3bfffe0, size 0xbc, virtual false, abstract: false, final false
  inline void HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color);

  /// @brief Method HandleRGBPanelControllerColorDidChange, addr 0x3bffe38, size 0xd4, virtual false, abstract: false, final false
  inline void HandleRGBPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  static inline ::GlobalNamespace::EditColorSchemeController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bffbec, size 0x1cc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetColorScheme, addr 0x3bff8a8, size 0x18, virtual false, abstract: false, final false
  inline void SetColorScheme(::GlobalNamespace::ColorScheme* colorScheme);

  /// @brief Method Start, addr 0x3bff968, size 0x284, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <Start>b__13_0, addr 0x3c000a4, size 0x1c, virtual false, abstract: false, final false
  inline void _Start_b__13_0();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__closeButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__closeButton();

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup> const& __cordl_internal_get__colorSchemeColorsToggleGroup() const;

  constexpr ::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup>& __cordl_internal_get__colorSchemeColorsToggleGroup();

  constexpr ::UnityW<::GlobalNamespace::HSVPanelController> const& __cordl_internal_get__hsvPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::HSVPanelController>& __cordl_internal_get__hsvPanelController();

  constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController> const& __cordl_internal_get__previousColorPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController>& __cordl_internal_get__previousColorPanelController();

  constexpr ::UnityW<::GlobalNamespace::RGBPanelController> const& __cordl_internal_get__rgbPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::RGBPanelController>& __cordl_internal_get__rgbPanelController();

  constexpr ::System::Action_1<::GlobalNamespace::ColorScheme*>* const& __cordl_internal_get_didChangeColorSchemeEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::ColorScheme*>*& __cordl_internal_get_didChangeColorSchemeEvent();

  constexpr ::System::Action* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__colorSchemeColorsToggleGroup(::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup> value);

  constexpr void __cordl_internal_set__hsvPanelController(::UnityW<::GlobalNamespace::HSVPanelController> value);

  constexpr void __cordl_internal_set__previousColorPanelController(::UnityW<::GlobalNamespace::PreviousColorPanelController> value);

  constexpr void __cordl_internal_set__rgbPanelController(::UnityW<::GlobalNamespace::RGBPanelController> value);

  constexpr void __cordl_internal_set_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3c0009c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeColorSchemeEvent, addr 0x3bfed0c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);

  /// @brief Method add_didFinishEvent, addr 0x3bfec70, size 0x9c, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action* value);

  /// @brief Method remove_didChangeColorSchemeEvent, addr 0x3bff0f4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeColorSchemeEvent(::System::Action_1<::GlobalNamespace::ColorScheme*>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3bff058, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditColorSchemeController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditColorSchemeController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditColorSchemeController(EditColorSchemeController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditColorSchemeController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditColorSchemeController(EditColorSchemeController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4744 };

  /// @brief Field _colorSchemeColorsToggleGroup, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ColorSchemeColorsToggleGroup> ____colorSchemeColorsToggleGroup;

  /// @brief Field _rgbPanelController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RGBPanelController> ____rgbPanelController;

  /// @brief Field _hsvPanelController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HSVPanelController> ____hsvPanelController;

  /// @brief Field _previousColorPanelController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PreviousColorPanelController> ____previousColorPanelController;

  /// @brief Field _closeButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____closeButton;

  /// @brief Field didFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action* ___didFinishEvent;

  /// @brief Field didChangeColorSchemeEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::ColorScheme*>* ___didChangeColorSchemeEvent;

  /// @brief Field _buttonBinder, offset: 0x58, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____colorSchemeColorsToggleGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____rgbPanelController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____hsvPanelController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____previousColorPanelController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____closeButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ___didFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ___didChangeColorSchemeEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorSchemeController, ____buttonBinder) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditColorSchemeController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditColorSchemeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditColorSchemeController*, "", "EditColorSchemeController");
