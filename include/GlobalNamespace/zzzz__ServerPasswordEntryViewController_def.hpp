#pragma once
// IWYU pragma private; include "GlobalNamespace/ServerPasswordEntryViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServerPasswordEntryViewController)
namespace GlobalNamespace {
class INetworkPlayer;
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
// Forward declare root types
namespace GlobalNamespace {
class ServerPasswordEntryViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ServerPasswordEntryViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ServerPasswordEntryViewController
class CORDL_TYPE ServerPasswordEntryViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _passwordInput, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__passwordInput, put = __cordl_internal_set__passwordInput)) ::UnityW<::HMUI::InputFieldView> _passwordInput;

  /// @brief Field _selectedNetworkPlayer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedNetworkPlayer, put = __cordl_internal_set__selectedNetworkPlayer)) ::GlobalNamespace::INetworkPlayer* _selectedNetworkPlayer;

  /// @brief Field _uiKeyboard, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__uiKeyboard, put = __cordl_internal_set__uiKeyboard)) ::UnityW<::HMUI::UIKeyboard> _uiKeyboard;

  /// @brief Field didFinishEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent, put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>* didFinishEvent;

  /// @brief Method DidActivate, addr 0x3b6e3d8, size 0xc0, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3b6e498, size 0xb0, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  /// @brief Method HandleJoinClicked, addr 0x3b6e548, size 0x3c, virtual false, abstract: false, final false
  inline void HandleJoinClicked();

  /// @brief Method HandleUIKeyboardOkButtonWasPressed, addr 0x3b6e584, size 0x3c, virtual false, abstract: false, final false
  inline void HandleUIKeyboardOkButtonWasPressed();

  static inline ::GlobalNamespace::ServerPasswordEntryViewController* New_ctor();

  /// @brief Method Setup, addr 0x3b6e3d0, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::INetworkPlayer* selectedPlayer);

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__passwordInput() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__passwordInput();

  constexpr ::GlobalNamespace::INetworkPlayer* const& __cordl_internal_get__selectedNetworkPlayer() const;

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get__selectedNetworkPlayer();

  constexpr ::UnityW<::HMUI::UIKeyboard> const& __cordl_internal_get__uiKeyboard() const;

  constexpr ::UnityW<::HMUI::UIKeyboard>& __cordl_internal_get__uiKeyboard();

  constexpr ::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__passwordInput(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__selectedNetworkPlayer(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set__uiKeyboard(::UnityW<::HMUI::UIKeyboard> value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>* value);

  /// @brief Method .ctor, addr 0x3b6e5c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b6e270, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3b6e320, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerPasswordEntryViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerPasswordEntryViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerPasswordEntryViewController(ServerPasswordEntryViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerPasswordEntryViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerPasswordEntryViewController(ServerPasswordEntryViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5385 };

  /// @brief Field _passwordInput, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____passwordInput;

  /// @brief Field _uiKeyboard, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::HMUI::UIKeyboard> ____uiKeyboard;

  /// @brief Field didFinishEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::INetworkPlayer*, ::StringW>* ___didFinishEvent;

  /// @brief Field _selectedNetworkPlayer, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* ____selectedNetworkPlayer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ServerPasswordEntryViewController, ____passwordInput) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPasswordEntryViewController, ____uiKeyboard) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPasswordEntryViewController, ___didFinishEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ServerPasswordEntryViewController, ____selectedNetworkPlayer) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ServerPasswordEntryViewController, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ServerPasswordEntryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ServerPasswordEntryViewController*, "", "ServerPasswordEntryViewController");
