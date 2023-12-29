#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(EditColorController)
namespace GlobalNamespace {
class PreviousColorPanelController;
}
namespace GlobalNamespace {
struct ColorChangeUIEventType;
}
namespace GlobalNamespace {
class HSVPanelController;
}
namespace UnityEngine::UI {
class Button;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class EditColorController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EditColorController);
// Type: ::EditColorController
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 185, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5506))
// CS Name: ::EditColorController*
class CORDL_TYPE EditColorController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _hsvPanelController, offset 0x70, size 0x8
  __declspec(property(get = __get__hsvPanelController, put = __set__hsvPanelController))::GlobalNamespace::HSVPanelController* _hsvPanelController;

  /// @brief Field _previousColorPanelController, offset 0x78, size 0x8
  __declspec(property(get = __get__previousColorPanelController, put = __set__previousColorPanelController))::GlobalNamespace::PreviousColorPanelController* _previousColorPanelController;

  /// @brief Field _cancelButton, offset 0x80, size 0x8
  __declspec(property(get = __get__cancelButton, put = __set__cancelButton))::UnityEngine::UI::Button* _cancelButton;

  /// @brief Field _applyButton, offset 0x88, size 0x8
  __declspec(property(get = __get__applyButton, put = __set__applyButton))::UnityEngine::UI::Button* _applyButton;

  /// @brief Field didChangeColorEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_didChangeColorEvent, put = __set_didChangeColorEvent))::System::Action_1<::UnityEngine::Color>* didChangeColorEvent;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_1<bool>* didFinishEvent;

  /// @brief Field _colorCallback, offset 0xa0, size 0x8
  __declspec(property(get = __get__colorCallback, put = __set__colorCallback))::System::Action_1<::UnityEngine::Color>* _colorCallback;

  /// @brief Field _initialColor, offset 0xa8, size 0x10
  __declspec(property(get = __get__initialColor, put = __set__initialColor))::UnityEngine::Color _initialColor;

  /// @brief Field _colorChanged, offset 0xb8, size 0x1
  __declspec(property(get = __get__colorChanged, put = __set__colorChanged)) bool _colorChanged;

  constexpr ::GlobalNamespace::HSVPanelController*& __get__hsvPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HSVPanelController*> const& __get__hsvPanelController() const;

  constexpr void __set__hsvPanelController(::GlobalNamespace::HSVPanelController* value);

  constexpr ::GlobalNamespace::PreviousColorPanelController*& __get__previousColorPanelController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviousColorPanelController*> const& __get__previousColorPanelController() const;

  constexpr void __set__previousColorPanelController(::GlobalNamespace::PreviousColorPanelController* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelButton() const;

  constexpr void __set__cancelButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__applyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__applyButton() const;

  constexpr void __set__applyButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get_didChangeColorEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get_didChangeColorEvent() const;

  constexpr void __set_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::System::Action_1<bool>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_1<bool>* value);

  constexpr ::System::Action_1<::UnityEngine::Color>*& __get__colorCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Color>*> const& __get__colorCallback() const;

  constexpr void __set__colorCallback(::System::Action_1<::UnityEngine::Color>* value);

  constexpr ::UnityEngine::Color& __get__initialColor();

  constexpr ::UnityEngine::Color const& __get__initialColor() const;

  constexpr void __set__initialColor(::UnityEngine::Color value);

  constexpr bool& __get__colorChanged();

  constexpr bool const& __get__colorChanged() const;

  constexpr void __set__colorChanged(bool value);

  /// @brief Method add_didChangeColorEvent addr 0x2131ea4 size 0xb0 virtual false final false
  inline void add_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method remove_didChangeColorEvent addr 0x2131f54 size 0xb0 virtual false final false
  inline void remove_didChangeColorEvent(::System::Action_1<::UnityEngine::Color>* value);

  /// @brief Method add_didFinishEvent addr 0x2132004 size 0xb0 virtual false final false
  inline void add_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_didFinishEvent addr 0x21320b4 size 0xb0 virtual false final false
  inline void remove_didFinishEvent(::System::Action_1<bool>* value);

  /// @brief Method SetColorCallback addr 0x2132164 size 0x8 virtual false final false
  inline void SetColorCallback(::System::Action_1<::UnityEngine::Color>* colorCallback);

  /// @brief Method SetColor addr 0x213216c size 0x60 virtual false final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method DidActivate addr 0x21322bc size 0x1b8 virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate addr 0x21325d4 size 0xec virtual true final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleHSVPanelControllerColorDidChange addr 0x2132820 size 0x6c virtual false final false
  inline void HandleHSVPanelControllerColorDidChange(::UnityEngine::Color color, ::GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);

  /// @brief Method HandlePreviousColorPanelControllerColorWasSelected addr 0x2132920 size 0x68 virtual false final false
  inline void HandlePreviousColorPanelControllerColorWasSelected(::UnityEngine::Color color);

  /// @brief Method HandleCancelButtonWasPressed addr 0x2132994 size 0x58 virtual false final false
  inline void HandleCancelButtonWasPressed();

  /// @brief Method HandleApplyButtonWasPressed addr 0x21329ec size 0x20 virtual false final false
  inline void HandleApplyButtonWasPressed();

  /// @brief Method ChangeColor addr 0x213288c size 0x94 virtual false final false
  inline void ChangeColor(::UnityEngine::Color color);

  static inline ::GlobalNamespace::EditColorController* New_ctor();

  /// @brief Method .ctor addr 0x2132a0c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EditColorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EditColorController(EditColorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EditColorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EditColorController(EditColorController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EditColorController();

public:
  /// @brief Field _hsvPanelController, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::HSVPanelController* ____hsvPanelController;

  /// @brief Field _previousColorPanelController, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::PreviousColorPanelController* ____previousColorPanelController;

  /// @brief Field _cancelButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelButton;

  /// @brief Field _applyButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____applyButton;

  /// @brief Field didChangeColorEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ___didChangeColorEvent;

  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<bool>* ___didFinishEvent;

  /// @brief Field _colorCallback, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Color>* ____colorCallback;

  /// @brief Field _initialColor, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____initialColor;

  /// @brief Field _colorChanged, offset: 0xb8, size: 0x1, def value: None
  bool ____colorChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EditColorController, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____hsvPanelController) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____previousColorPanelController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____cancelButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____applyButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ___didChangeColorEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ___didFinishEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____colorCallback) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____initialColor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EditColorController, ____colorChanged) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EditColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EditColorController*, "", "EditColorController");
