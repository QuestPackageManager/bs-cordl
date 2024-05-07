#pragma once
// IWYU pragma private; include "GlobalNamespace/JoiningLobbyViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(JoiningLobbyViewController)
namespace GlobalNamespace {
class LoadingControl;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class JoiningLobbyViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::JoiningLobbyViewController);
// Type: ::JoiningLobbyViewController
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::JoiningLobbyViewController*
class CORDL_TYPE JoiningLobbyViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _cancelJoiningButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__cancelJoiningButton, put = __cordl_internal_set__cancelJoiningButton))::UnityW<::UnityEngine::UI::Button> _cancelJoiningButton;

  /// @brief Field _loadingControl, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__loadingControl, put = __cordl_internal_set__loadingControl))::UnityW<::GlobalNamespace::LoadingControl> _loadingControl;

  /// @brief Field _text, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text))::StringW _text;

  /// @brief Field didCancelEvent, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_didCancelEvent, put = __cordl_internal_set_didCancelEvent))::System::Action* didCancelEvent;

  /// @brief Method DidActivate, addr 0x265222c, size 0xc8, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method HideLoading, addr 0x26521ec, size 0x40, virtual false, abstract: false, final false
  inline void HideLoading();

  /// @brief Method Init, addr 0x26521b8, size 0x34, virtual false, abstract: false, final false
  inline void Init(::StringW text);

  static inline ::GlobalNamespace::JoiningLobbyViewController* New_ctor();

  /// @brief Method <DidActivate>b__8_0, addr 0x26522fc, size 0x1c, virtual false, abstract: false, final false
  inline void _DidActivate_b__8_0();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__cancelJoiningButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__cancelJoiningButton();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__loadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__loadingControl();

  constexpr ::StringW const& __cordl_internal_get__text() const;

  constexpr ::StringW& __cordl_internal_get__text();

  constexpr ::System::Action*& __cordl_internal_get_didCancelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didCancelEvent() const;

  constexpr void __cordl_internal_set__cancelJoiningButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__loadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__text(::StringW value);

  constexpr void __cordl_internal_set_didCancelEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26522f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didCancelEvent, addr 0x2652080, size 0x9c, virtual false, abstract: false, final false
  inline void add_didCancelEvent(::System::Action* value);

  /// @brief Method remove_didCancelEvent, addr 0x265211c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didCancelEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JoiningLobbyViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JoiningLobbyViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JoiningLobbyViewController(JoiningLobbyViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JoiningLobbyViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JoiningLobbyViewController(JoiningLobbyViewController const&) = delete;

  /// @brief Field _cancelJoiningButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____cancelJoiningButton;

  /// @brief Field _loadingControl, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____loadingControl;

  /// @brief Field _text, offset: 0x80, size: 0x8, def value: None
  ::StringW ____text;

  /// @brief Field didCancelEvent, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___didCancelEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::JoiningLobbyViewController, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::JoiningLobbyViewController, ____cancelJoiningButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoiningLobbyViewController, ____loadingControl) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoiningLobbyViewController, ____text) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::JoiningLobbyViewController, ___didCancelEvent) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::JoiningLobbyViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoiningLobbyViewController*, "", "JoiningLobbyViewController");
