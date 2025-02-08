#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerBrowserViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GameServerBrowserViewController)
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace GlobalNamespace {
class GameServersListTableView;
}
namespace GlobalNamespace {
class LoadingControl;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerBrowserViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerBrowserViewController
class CORDL_TYPE GameServerBrowserViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _createServerButton, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerButton, put = __cordl_internal_set__createServerButton)) ::UnityW<::UnityEngine::UI::Button> _createServerButton;

  /// @brief Field _filterServersButton, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__filterServersButton, put = __cordl_internal_set__filterServersButton)) ::UnityW<::UnityEngine::UI::Button> _filterServersButton;

  /// @brief Field _filterText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__filterText, put = __cordl_internal_set__filterText)) ::UnityW<::GlobalNamespace::GameServersFilterText> _filterText;

  /// @brief Field _gameServersListTableView, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServersListTableView, put = __cordl_internal_set__gameServersListTableView)) ::UnityW<::GlobalNamespace::GameServersListTableView>
      _gameServersListTableView;

  /// @brief Field _mainLoadingControl, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__mainLoadingControl, put = __cordl_internal_set__mainLoadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _mainLoadingControl;

  /// @brief Field _smallLoadingControl, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__smallLoadingControl, put = __cordl_internal_set__smallLoadingControl)) ::UnityW<::GlobalNamespace::LoadingControl> _smallLoadingControl;

  static inline ::GlobalNamespace::GameServerBrowserViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createServerButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createServerButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__filterServersButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__filterServersButton();

  constexpr ::UnityW<::GlobalNamespace::GameServersFilterText> const& __cordl_internal_get__filterText() const;

  constexpr ::UnityW<::GlobalNamespace::GameServersFilterText>& __cordl_internal_get__filterText();

  constexpr ::UnityW<::GlobalNamespace::GameServersListTableView> const& __cordl_internal_get__gameServersListTableView() const;

  constexpr ::UnityW<::GlobalNamespace::GameServersListTableView>& __cordl_internal_get__gameServersListTableView();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__mainLoadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__mainLoadingControl();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__smallLoadingControl() const;

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__smallLoadingControl();

  constexpr void __cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__filterServersButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__filterText(::UnityW<::GlobalNamespace::GameServersFilterText> value);

  constexpr void __cordl_internal_set__gameServersListTableView(::UnityW<::GlobalNamespace::GameServersListTableView> value);

  constexpr void __cordl_internal_set__mainLoadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr void __cordl_internal_set__smallLoadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  /// @brief Method .ctor, addr 0x3b7206c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerBrowserViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerBrowserViewController(GameServerBrowserViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerBrowserViewController(GameServerBrowserViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5377 };

  /// @brief Field _filterServersButton, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____filterServersButton;

  /// @brief Field _filterText, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServersFilterText> ____filterText;

  /// @brief Field _createServerButton, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createServerButton;

  /// @brief Field _gameServersListTableView, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServersListTableView> ____gameServersListTableView;

  /// @brief Field _mainLoadingControl, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____mainLoadingControl;

  /// @brief Field _smallLoadingControl, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____smallLoadingControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____filterServersButton) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____filterText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____createServerButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____gameServersListTableView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____mainLoadingControl) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____smallLoadingControl) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserViewController, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserViewController*, "", "GameServerBrowserViewController");
