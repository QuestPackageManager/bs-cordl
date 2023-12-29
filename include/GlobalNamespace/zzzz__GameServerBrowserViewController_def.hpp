#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GameServerBrowserViewController)
namespace GlobalNamespace {
class GameServersFilterText;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class GameServersListTableView;
}
namespace GlobalNamespace {
class LoadingControl;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerBrowserViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerBrowserViewController);
// Type: ::GameServerBrowserViewController
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5812))
// CS Name: ::GameServerBrowserViewController*
class CORDL_TYPE GameServerBrowserViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _filterServersButton, offset 0x70, size 0x8
  __declspec(property(get = __get__filterServersButton, put = __set__filterServersButton))::UnityEngine::UI::Button* _filterServersButton;

  /// @brief Field _filterText, offset 0x78, size 0x8
  __declspec(property(get = __get__filterText, put = __set__filterText))::GlobalNamespace::GameServersFilterText* _filterText;

  /// @brief Field _canBeInvitedOnLocalNetworkToggle, offset 0x80, size 0x8
  __declspec(property(get = __get__canBeInvitedOnLocalNetworkToggle, put = __set__canBeInvitedOnLocalNetworkToggle))::UnityEngine::UI::Toggle* _canBeInvitedOnLocalNetworkToggle;

  /// @brief Field _createServerButton, offset 0x88, size 0x8
  __declspec(property(get = __get__createServerButton, put = __set__createServerButton))::UnityEngine::UI::Button* _createServerButton;

  /// @brief Field _gameServersListTableView, offset 0x90, size 0x8
  __declspec(property(get = __get__gameServersListTableView, put = __set__gameServersListTableView))::GlobalNamespace::GameServersListTableView* _gameServersListTableView;

  /// @brief Field _mainLoadingControl, offset 0x98, size 0x8
  __declspec(property(get = __get__mainLoadingControl, put = __set__mainLoadingControl))::GlobalNamespace::LoadingControl* _mainLoadingControl;

  /// @brief Field _smallLoadingControl, offset 0xa0, size 0x8
  __declspec(property(get = __get__smallLoadingControl, put = __set__smallLoadingControl))::GlobalNamespace::LoadingControl* _smallLoadingControl;

  constexpr ::UnityEngine::UI::Button*& __get__filterServersButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__filterServersButton() const;

  constexpr void __set__filterServersButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::GameServersFilterText*& __get__filterText();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersFilterText*> const& __get__filterText() const;

  constexpr void __set__filterText(::GlobalNamespace::GameServersFilterText* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__canBeInvitedOnLocalNetworkToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__canBeInvitedOnLocalNetworkToggle() const;

  constexpr void __set__canBeInvitedOnLocalNetworkToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Button*& __get__createServerButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__createServerButton() const;

  constexpr void __set__createServerButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::GameServersListTableView*& __get__gameServersListTableView();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServersListTableView*> const& __get__gameServersListTableView() const;

  constexpr void __set__gameServersListTableView(::GlobalNamespace::GameServersListTableView* value);

  constexpr ::GlobalNamespace::LoadingControl*& __get__mainLoadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__mainLoadingControl() const;

  constexpr void __set__mainLoadingControl(::GlobalNamespace::LoadingControl* value);

  constexpr ::GlobalNamespace::LoadingControl*& __get__smallLoadingControl();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LoadingControl*> const& __get__smallLoadingControl() const;

  constexpr void __set__smallLoadingControl(::GlobalNamespace::LoadingControl* value);

  static inline ::GlobalNamespace::GameServerBrowserViewController* New_ctor();

  /// @brief Method .ctor addr 0x218a8e0 size 0x8 virtual false final false
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
  ::UnityEngine::UI::Button* ____filterServersButton;

  /// @brief Field _filterText, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::GameServersFilterText* ____filterText;

  /// @brief Field _canBeInvitedOnLocalNetworkToggle, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____canBeInvitedOnLocalNetworkToggle;

  /// @brief Field _createServerButton, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____createServerButton;

  /// @brief Field _gameServersListTableView, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::GameServersListTableView* ____gameServersListTableView;

  /// @brief Field _mainLoadingControl, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____mainLoadingControl;

  /// @brief Field _smallLoadingControl, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::LoadingControl* ____smallLoadingControl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerBrowserViewController, 0xa8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____filterServersButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____filterText) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____canBeInvitedOnLocalNetworkToggle) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____createServerButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____gameServersListTableView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____mainLoadingControl) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerBrowserViewController, ____smallLoadingControl) == 0xa0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerBrowserViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerBrowserViewController*, "", "GameServerBrowserViewController");
