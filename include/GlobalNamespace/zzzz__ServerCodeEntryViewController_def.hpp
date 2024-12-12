#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerCodeEntryViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerCodeEntryViewController)
namespace HMUI {
class InputFieldViewChangeBinder;
}
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class UIKeyboard;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerCodeEntryViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerCodeEntryViewController
class CORDL_TYPE ServerCodeEntryViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _cancelButton, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelButton, put = __cordl_internal_set__cancelButton)) ::UnityW<::UnityEngine::UI::Button> _cancelButton;

  /// @brief Field _codeInputField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__codeInputField, put = __cordl_internal_set__codeInputField)) ::UnityW<::HMUI::InputFieldView> _codeInputField;

  /// @brief Field _inputFieldViewChangeBinder, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFieldViewChangeBinder, put = __cordl_internal_set__inputFieldViewChangeBinder)) ::HMUI::InputFieldViewChangeBinder* _inputFieldViewChangeBinder;

  /// @brief Field _joinButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__joinButton, put = __cordl_internal_set__joinButton)) ::UnityW<::UnityEngine::UI::Button> _joinButton;

  /// @brief Field _uiKeyboard, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboard, put = __cordl_internal_set__uiKeyboard)) ::UnityW<::HMUI::UIKeyboard> _uiKeyboard;

  /// @brief Field didFinishEvent, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<bool, ::StringW>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3b6cca0, size 0x1a4, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b6ce44, size 0x30, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleCancelButtonPressed, addr 0x3b6cf10, size 0x24, virtual false, abstract: false, final false
  inline void HandleCancelButtonPressed();

  /// @brief Method HandleInputFieldChanged, addr 0x3b6ce74, size 0x38, virtual false, abstract: false, final false
  inline void HandleInputFieldChanged(::HMUI::InputFieldView* obj);

  /// @brief Method HandleJoinButtonPressed, addr 0x3b6ced4, size 0x3c, virtual false, abstract: false, final false
  inline void HandleJoinButtonPressed();

  static inline ::GlobalNamespace::ServerCodeEntryViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b6ceac, size 0x28, virtual true, abstract: false, final false
  inline void OnDestroy();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelButton();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__codeInputField() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__codeInputField();

  constexpr ::HMUI::InputFieldViewChangeBinder* const& __cordl_internal_get__inputFieldViewChangeBinder() const;

  constexpr ::HMUI::InputFieldViewChangeBinder*& __cordl_internal_get__inputFieldViewChangeBinder();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__joinButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__joinButton();

  constexpr ::UnityW<::HMUI::UIKeyboard> const& __cordl_internal_get__uiKeyboard() const;

  constexpr ::UnityW<::HMUI::UIKeyboard>& __cordl_internal_get__uiKeyboard();

  constexpr ::System::Action_2<bool, ::StringW>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<bool, ::StringW>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__codeInputField(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__inputFieldViewChangeBinder(::HMUI::InputFieldViewChangeBinder* value);

  constexpr void __cordl_internal_set__joinButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__uiKeyboard(::UnityW<::HMUI::UIKeyboard> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<bool, ::StringW>* value);

  /// @brief Method .ctor, addr 0x3b6cf34, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b6cb40, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<bool, ::StringW>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3b6cbf0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<bool, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCodeEntryViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeEntryViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCodeEntryViewController(ServerCodeEntryViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeEntryViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCodeEntryViewController(ServerCodeEntryViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5380 };

  /// @brief Field _uiKeyboard, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> ____uiKeyboard;

  /// @brief Field _codeInputField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____codeInputField;

  /// @brief Field _joinButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____joinButton;

  /// @brief Field _cancelButton, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelButton;

  /// @brief Field didFinishEvent, offset: 0x98, size: 0x8, def value: None
  ::System::Action_2<bool, ::StringW>* ___didFinishEvent;

  /// @brief Field _inputFieldViewChangeBinder, offset: 0xa0, size: 0x8, def value: None
  ::HMUI::InputFieldViewChangeBinder* ____inputFieldViewChangeBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____uiKeyboard) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____codeInputField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____joinButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____cancelButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ___didFinishEvent) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____inputFieldViewChangeBinder) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerCodeEntryViewController, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerCodeEntryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerCodeEntryViewController*, "", "ServerCodeEntryViewController");
