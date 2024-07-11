#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerResultsViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(MultiplayerResultsViewController)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class ResultsTableView;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsViewController);
// Type: ::MultiplayerResultsViewController
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerResultsViewController*
class CORDL_TYPE MultiplayerResultsViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _backToLobbyButton, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__backToLobbyButton, put = __cordl_internal_set__backToLobbyButton))::UnityW<::UnityEngine::UI::Button> _backToLobbyButton;

  /// @brief Field _backToMenuButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__backToMenuButton, put = __cordl_internal_set__backToMenuButton))::UnityW<::UnityEngine::UI::Button> _backToMenuButton;

  /// @brief Field _levelBar, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar))::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _levelClearedGO, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__levelClearedGO, put = __cordl_internal_set__levelClearedGO))::UnityW<::UnityEngine::GameObject> _levelClearedGO;

  /// @brief Field _levelFailedGO, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__levelFailedGO, put = __cordl_internal_set__levelFailedGO))::UnityW<::UnityEngine::GameObject> _levelFailedGO;

  /// @brief Field _levelResultsGO, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__levelResultsGO, put = __cordl_internal_set__levelResultsGO))::UnityW<::UnityEngine::GameObject> _levelResultsGO;

  /// @brief Field _resultsTableView, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__resultsTableView, put = __cordl_internal_set__resultsTableView))::UnityW<::GlobalNamespace::ResultsTableView> _resultsTableView;

  /// @brief Field backToLobbyPressedEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_backToLobbyPressedEvent,
                      put = __cordl_internal_set_backToLobbyPressedEvent))::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* backToLobbyPressedEvent;

  /// @brief Field backToMenuPressedEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_backToMenuPressedEvent,
                      put = __cordl_internal_set_backToMenuPressedEvent))::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* backToMenuPressedEvent;

  /// @brief Method BackToLobbyPressed, addr 0x2681de4, size 0x20, virtual false, abstract: false, final false
  inline void BackToLobbyPressed();

  /// @brief Method BackToMenuPressed, addr 0x2681e04, size 0x20, virtual false, abstract: false, final false
  inline void BackToMenuPressed();

  /// @brief Method DidActivate, addr 0x2681cdc, size 0x108, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method Init, addr 0x2681b48, size 0x194, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData, ::GlobalNamespace::BeatmapKey beatmapKey, bool showBackToLobbyButton, bool showBackToMenuButton);

  static inline ::GlobalNamespace::MultiplayerResultsViewController* New_ctor();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__backToLobbyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__backToLobbyButton();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__backToMenuButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__backToMenuButton();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__levelClearedGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__levelClearedGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__levelFailedGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__levelFailedGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__levelResultsGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__levelResultsGO();

  constexpr ::UnityW<::GlobalNamespace::ResultsTableView> const& __cordl_internal_get__resultsTableView() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsTableView>& __cordl_internal_get__resultsTableView();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*& __cordl_internal_get_backToLobbyPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*> const& __cordl_internal_get_backToLobbyPressedEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*& __cordl_internal_get_backToMenuPressedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>*> const& __cordl_internal_get_backToMenuPressedEvent() const;

  constexpr void __cordl_internal_set__backToLobbyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__backToMenuButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__levelClearedGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__levelFailedGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__levelResultsGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__resultsTableView(::UnityW<::GlobalNamespace::ResultsTableView> value);

  constexpr void __cordl_internal_set_backToLobbyPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value);

  constexpr void __cordl_internal_set_backToMenuPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value);

  /// @brief Method .ctor, addr 0x2681e24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_backToLobbyPressedEvent, addr 0x2681888, size 0xb0, virtual false, abstract: false, final false
  inline void add_backToLobbyPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value);

  /// @brief Method add_backToMenuPressedEvent, addr 0x26819e8, size 0xb0, virtual false, abstract: false, final false
  inline void add_backToMenuPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value);

  /// @brief Method remove_backToLobbyPressedEvent, addr 0x2681938, size 0xb0, virtual false, abstract: false, final false
  inline void remove_backToLobbyPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value);

  /// @brief Method remove_backToMenuPressedEvent, addr 0x2681a98, size 0xb0, virtual false, abstract: false, final false
  inline void remove_backToMenuPressedEvent(::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsViewController(MultiplayerResultsViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsViewController(MultiplayerResultsViewController const&) = delete;

  /// @brief Field _levelClearedGO, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____levelClearedGO;

  /// @brief Field _levelFailedGO, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____levelFailedGO;

  /// @brief Field _levelResultsGO, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____levelResultsGO;

  /// @brief Field _levelBar, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _resultsTableView, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsTableView> ____resultsTableView;

  /// @brief Field _backToLobbyButton, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____backToLobbyButton;

  /// @brief Field _backToMenuButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____backToMenuButton;

  /// @brief Field backToLobbyPressedEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* ___backToLobbyPressedEvent;

  /// @brief Field backToMenuPressedEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::MultiplayerResultsViewController>>* ___backToMenuPressedEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsViewController, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____levelClearedGO) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____levelFailedGO) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____levelResultsGO) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____levelBar) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____resultsTableView) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____backToLobbyButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ____backToMenuButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ___backToLobbyPressedEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsViewController, ___backToMenuPressedEvent) == 0xb0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsViewController*, "", "MultiplayerResultsViewController");
