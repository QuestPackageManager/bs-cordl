#pragma once
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
// Type: ::GameServerBrowserViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13558))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5015))
// CS Name: ::GameServerBrowserViewController*
class CORDL_TYPE GameServerBrowserViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _filterServersButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__filterServersButton, put = __cordl_internal_set__filterServersButton))::UnityW<::UnityEngine::UI::Button> _filterServersButton;

  /// @brief Field _filterText, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__filterText, put = __cordl_internal_set__filterText))::UnityW<::GlobalNamespace::GameServersFilterText> _filterText;

  /// @brief Field _createServerButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__createServerButton, put = __cordl_internal_set__createServerButton))::UnityW<::UnityEngine::UI::Button> _createServerButton;

  /// @brief Field _gameServersListTableView, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServersListTableView,
                      put = __cordl_internal_set__gameServersListTableView))::UnityW<::GlobalNamespace::GameServersListTableView> _gameServersListTableView;

  /// @brief Field _mainLoadingControl, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__mainLoadingControl, put = __cordl_internal_set__mainLoadingControl))::UnityW<::GlobalNamespace::LoadingControl> _mainLoadingControl;

  /// @brief Field _smallLoadingControl, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__smallLoadingControl, put = __cordl_internal_set__smallLoadingControl))::UnityW<::GlobalNamespace::LoadingControl> _smallLoadingControl;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__filterServersButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__filterServersButton() const;

  constexpr void __cordl_internal_set__filterServersButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::GlobalNamespace::GameServersFilterText>& __cordl_internal_get__filterText();

  constexpr ::UnityW<::GlobalNamespace::GameServersFilterText> const& __cordl_internal_get__filterText() const;

  constexpr void __cordl_internal_set__filterText(::UnityW<::GlobalNamespace::GameServersFilterText> value);

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__createServerButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__createServerButton() const;

  constexpr void __cordl_internal_set__createServerButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr ::UnityW<::GlobalNamespace::GameServersListTableView>& __cordl_internal_get__gameServersListTableView();

  constexpr ::UnityW<::GlobalNamespace::GameServersListTableView> const& __cordl_internal_get__gameServersListTableView() const;

  constexpr void __cordl_internal_set__gameServersListTableView(::UnityW<::GlobalNamespace::GameServersListTableView> value);

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__mainLoadingControl();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__mainLoadingControl() const;

  constexpr void __cordl_internal_set__mainLoadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  constexpr ::UnityW<::GlobalNamespace::LoadingControl>& __cordl_internal_get__smallLoadingControl();

  constexpr ::UnityW<::GlobalNamespace::LoadingControl> const& __cordl_internal_get__smallLoadingControl() const;

  constexpr void __cordl_internal_set__smallLoadingControl(::UnityW<::GlobalNamespace::LoadingControl> value);

  static inline ::GlobalNamespace::GameServerBrowserViewController* New_ctor();

  /// @brief Method .ctor, addr 0x22fce44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerBrowserViewController(GameServerBrowserViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerBrowserViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerBrowserViewController(GameServerBrowserViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerBrowserViewController();

public:
  /// @brief Field _filterServersButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____filterServersButton;

  /// @brief Field _filterText, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServersFilterText> ____filterText;

  /// @brief Field _createServerButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____createServerButton;

  /// @brief Field _gameServersListTableView, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServersListTableView> ____gameServersListTableView;

  /// @brief Field _mainLoadingControl, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____mainLoadingControl;

  /// @brief Field _smallLoadingControl, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LoadingControl> ____smallLoadingControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____filterServersButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____filterText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____createServerButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____gameServersListTableView) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____mainLoadingControl) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____smallLoadingControl) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserViewController*, "", "GameServerBrowserViewController");
