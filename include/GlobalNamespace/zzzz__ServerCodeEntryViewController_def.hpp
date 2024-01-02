#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerCodeEntryViewController)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace HMUI {
class UIKeyboard;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class InputFieldView;
}
namespace HMUI {
class InputFieldViewChangeBinder;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerCodeEntryViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerCodeEntryViewController);
// Type: ::ServerCodeEntryViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5722))
// CS Name: ::ServerCodeEntryViewController*
class CORDL_TYPE ServerCodeEntryViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _uiKeyboard, offset 0x70, size 0x8
  __declspec(property(get = __get__uiKeyboard, put = __set__uiKeyboard))::HMUI::UIKeyboard* _uiKeyboard;

  /// @brief Field _codeInputField, offset 0x78, size 0x8
  __declspec(property(get = __get__codeInputField, put = __set__codeInputField))::HMUI::InputFieldView* _codeInputField;

  /// @brief Field _joinButton, offset 0x80, size 0x8
  __declspec(property(get = __get__joinButton, put = __set__joinButton))::UnityEngine::UI::Button* _joinButton;

  /// @brief Field _cancelButton, offset 0x88, size 0x8
  __declspec(property(get = __get__cancelButton, put = __set__cancelButton))::UnityEngine::UI::Button* _cancelButton;

  /// @brief Field didFinishEvent, offset 0x90, size 0x8
  __declspec(property(get = __get_didFinishEvent, put = __set_didFinishEvent))::System::Action_2<bool, ::StringW>* didFinishEvent;

  /// @brief Field _inputFieldViewChangeBinder, offset 0x98, size 0x8
  __declspec(property(get = __get__inputFieldViewChangeBinder, put = __set__inputFieldViewChangeBinder))::HMUI::InputFieldViewChangeBinder* _inputFieldViewChangeBinder;

  constexpr ::HMUI::UIKeyboard*& __get__uiKeyboard();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::UIKeyboard*> const& __get__uiKeyboard() const;

  constexpr void __set__uiKeyboard(::HMUI::UIKeyboard* value);

  constexpr ::HMUI::InputFieldView*& __get__codeInputField();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& __get__codeInputField() const;

  constexpr void __set__codeInputField(::HMUI::InputFieldView* value);

  constexpr ::UnityEngine::UI::Button*& __get__joinButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__joinButton() const;

  constexpr void __set__joinButton(::UnityEngine::UI::Button* value);

  constexpr ::UnityEngine::UI::Button*& __get__cancelButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__cancelButton() const;

  constexpr void __set__cancelButton(::UnityEngine::UI::Button* value);

  constexpr ::System::Action_2<bool, ::StringW>*& __get_didFinishEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<bool, ::StringW>*> const& __get_didFinishEvent() const;

  constexpr void __set_didFinishEvent(::System::Action_2<bool, ::StringW>* value);

  constexpr ::HMUI::InputFieldViewChangeBinder*& __get__inputFieldViewChangeBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldViewChangeBinder*> const& __get__inputFieldViewChangeBinder() const;

  constexpr void __set__inputFieldViewChangeBinder(::HMUI::InputFieldViewChangeBinder* value);

  /// @brief Method add_didFinishEvent, addr 0x22d0244, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<bool, ::StringW>* value);

  /// @brief Method remove_didFinishEvent, addr 0x22d02f4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<bool, ::StringW>* value);

  /// @brief Method DidActivate, addr 0x22d03a4, size 0x1b0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x22d0554, size 0x30, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleInputFieldChanged, addr 0x22d0584, size 0x38, virtual false, abstract: false, final false
  inline void HandleInputFieldChanged(::HMUI::InputFieldView* obj);

  /// @brief Method OnDestroy, addr 0x22d05bc, size 0x28, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleJoinButtonPressed, addr 0x22d05e4, size 0x3c, virtual false, abstract: false, final false
  inline void HandleJoinButtonPressed();

  /// @brief Method HandleCancelButtonPressed, addr 0x22d0620, size 0x24, virtual false, abstract: false, final false
  inline void HandleCancelButtonPressed();

  static inline ::GlobalNamespace::ServerCodeEntryViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22d0644, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeEntryViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerCodeEntryViewController(ServerCodeEntryViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerCodeEntryViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerCodeEntryViewController(ServerCodeEntryViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerCodeEntryViewController();

public:
  /// @brief Field _uiKeyboard, offset: 0x70, size: 0x8, def value: None
  ::HMUI::UIKeyboard* ____uiKeyboard;

  /// @brief Field _codeInputField, offset: 0x78, size: 0x8, def value: None
  ::HMUI::InputFieldView* ____codeInputField;

  /// @brief Field _joinButton, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____joinButton;

  /// @brief Field _cancelButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____cancelButton;

  /// @brief Field didFinishEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<bool, ::StringW>* ___didFinishEvent;

  /// @brief Field _inputFieldViewChangeBinder, offset: 0x98, size: 0x8, def value: None
  ::HMUI::InputFieldViewChangeBinder* ____inputFieldViewChangeBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerCodeEntryViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____uiKeyboard) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____codeInputField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____joinButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____cancelButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ___didFinishEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerCodeEntryViewController, ____inputFieldViewChangeBinder) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerCodeEntryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerCodeEntryViewController*, "", "ServerCodeEntryViewController");
