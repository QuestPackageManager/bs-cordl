#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/AvatarEditor/EditAvatarColorViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(EditAvatarColorViewController)
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace GlobalNamespace {
class HSVPanelController;
}
namespace GlobalNamespace {
class PreviousColorPanelController;
}
namespace HMUI {
class ButtonBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
class EditAvatarColorViewController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController);
// Dependencies HMUI.ViewController, UnityEngine.Color
namespace BeatSaber::BeatAvatarAdapter::AvatarEditor {
// Is value type: false
// CS Name: BeatSaber.BeatAvatarAdapter.AvatarEditor.EditAvatarColorViewController
class CORDL_TYPE EditAvatarColorViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _applyButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__applyButton, put = __cordl_internal_set__applyButton)) ::UnityW<::UnityEngine::UI::Button> _applyButton;

  /// @brief Field _buttonBinder, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__buttonBinder, put = __cordl_internal_set__buttonBinder)) ::HMUI::ButtonBinder* _buttonBinder;

  /// @brief Field _cancelButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _colorCallback, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__colorCallback, put = __cordl_internal_set__colorCallback)) ::System::Action_1<::UnityEngine::Color>* _colorCallback;

  /// @brief Field _colorChanged, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__colorChanged, put = __cordl_internal_set__colorChanged)) bool _colorChanged;

  /// @brief Field _hsvPanelController, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__hsvPanelController, put = __cordl_internal_set__hsvPanelController)) ::UnityW<::GlobalNamespace::HSVPanelController> _hsvPanelController;

  /// @brief Field _initialColor, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get__initialColor, put = __cordl_internal_set__initialColor)) ::UnityEngine::Color _initialColor;

  /// @brief Field _previousColorPanelController, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__previousColorPanelController, put = __cordl_internal_set__previousColorPanelController)) ::UnityW<::GlobalNamespace::PreviousColorPanelController>
      _previousColorPanelController;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Field didChangeColorEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeColorEvent, put = __cordl_internal_set_didChangeColorEvent)) ::System::Action_1<::UnityEngine::Color>* didChangeColorEvent;

  /// @brief Field didFinishEvent, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_1<bool>* didFinishEvent;

  /// @brief Method ChangeColor, addr 0x2255650, size 0x94, virtual false, abstract: false, final false
  inline void ChangeColor(::UnityEngine::Color color);

  /// @brief Method HandleApplyButtonWasPressed, addr 0x22557b8, size 0x20, virtual false, abstract: false, final false
  inline void HandleApplyButtonWasPressed();

  /// @brief Method HandleCancelButtonWasPressed, addr 0x225575c, size 0x5c, virtual false, abstract: false, final false
  inline void HandleCancelButtonWasPressed();

  /// @brief Method HandleHSVPanelControllerColorDidChange, addr 0x22555e0, size 0x70, virtual false, abstract: false, final false
  inline void HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandlePreviousColorPanelControllerColorWasSelected, addr 0x22556e4, size 0x78, virtual false, abstract: false, final false
  inline void HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color);

  static inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x2255480, size 0x160, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetColor, addr 0x224fbe0, size 0x68, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method SetColorCallback, addr 0x22552c8, size 0x8, virtual false, abstract: false, final false
  inline void SetColorCallback(::System::Action_1<::UnityEngine::Color>* colorCallback);

  /// @brief Method Start, addr 0x22552d0, size 0x1b0, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__applyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__applyButton();

  constexpr ::HMUI::ButtonBinder* const& __cordl_internal_get__buttonBinder() const;

  constexpr ::HMUI::ButtonBinder*& __cordl_internal_get__buttonBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get__colorCallback() const;

  constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get__colorCallback();

  constexpr bool const& __cordl_internal_get__colorChanged() const;

  constexpr bool& __cordl_internal_get__colorChanged();

  constexpr ::UnityW<::GlobalNamespace::HSVPanelController> const& __cordl_internal_get__hsvPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::HSVPanelController>& __cordl_internal_get__hsvPanelController();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__initialColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__initialColor();

  constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController> const& __cordl_internal_get__previousColorPanelController() const;

  constexpr ::UnityW<::GlobalNamespace::PreviousColorPanelController>& __cordl_internal_get__previousColorPanelController();

  constexpr ::System::Action_1<::UnityEngine::Color>* const& __cordl_internal_get_didChangeColorEvent() const;

  constexpr ::System::Action_1<::UnityEngine::Color>*& __cordl_internal_get_didChangeColorEvent();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__applyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value);

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__colorCallback(::System::Action_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set__colorChanged(bool value);

  constexpr void __cordl_internal_set__hsvPanelController(::UnityW<::GlobalNamespace::HSVPanelController> value);

  constexpr void __cordl_internal_set__initialColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__previousColorPanelController(::UnityW<::GlobalNamespace::PreviousColorPanelController> value);

  constexpr void __cordl_internal_set_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x22557d8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeColorEvent, addr 0x224eea4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method add_didFinishEvent, addr 0x224ef54, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method get_color, addr 0x224fdf4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method remove_didChangeColorEvent, addr 0x224f940, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method remove_didFinishEvent, addr 0x224f9f0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditAvatarColorViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarColorViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditAvatarColorViewController(EditAvatarColorViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditAvatarColorViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditAvatarColorViewController(EditAvatarColorViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17724 };

  /// @brief Field _hsvPanelController, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HSVPanelController> ____hsvPanelController;

  /// @brief Field _previousColorPanelController, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PreviousColorPanelController> ____previousColorPanelController;

  /// @brief Field _cancelButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field _applyButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____applyButton;

  /// @brief Field didChangeColorEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___didChangeColorEvent;

  /// @brief Field didFinishEvent, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didFinishEvent;

  /// @brief Field _colorCallback, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ____colorCallback;

  /// @brief Field _initialColor, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Color ____initialColor;

  /// @brief Field _colorChanged, offset: 0xc0, size: 0x1, def value: None
  bool ____colorChanged;

  /// @brief Field _buttonBinder, offset: 0xc8, size: 0x8, def value: None
  ::HMUI::ButtonBinder* ____buttonBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____hsvPanelController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____previousColorPanelController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____cancelButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____applyButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ___didChangeColorEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ___didFinishEvent) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____colorCallback) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____initialColor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____colorChanged) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, ____buttonBinder) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController, 0xd0>, "Size mismatch!");

} // namespace BeatSaber::BeatAvatarAdapter::AvatarEditor
NEED_NO_BOX(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*, "BeatSaber.BeatAvatarAdapter.AvatarEditor", "EditAvatarColorViewController");
