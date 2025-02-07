#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServersFilterViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GameServersFilterViewController)
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace GlobalNamespace {
class GameplayModifiersDropdown;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
namespace HMUI {
class ToggleBinder;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersFilterViewController);
// Dependencies HMUI.ViewController
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServersFilterViewController
class CORDL_TYPE GameServersFilterViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapDifficultyDropdown, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDifficultyDropdown, put = __cordl_internal_set__beatmapDifficultyDropdown)) ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>
      _beatmapDifficultyDropdown;

  /// @brief Field _filterByDifficultyButton, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByDifficultyButton, put = __cordl_internal_set__filterByDifficultyButton)) ::UnityW<::UnityEngine::UI::Button> _filterByDifficultyButton;

  /// @brief Field _filterByDifficultyToggle, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByDifficultyToggle, put = __cordl_internal_set__filterByDifficultyToggle)) ::UnityW<::UnityEngine::UI::Toggle> _filterByDifficultyToggle;

  /// @brief Field _filterByModifiersButton, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByModifiersButton, put = __cordl_internal_set__filterByModifiersButton)) ::UnityW<::UnityEngine::UI::Button> _filterByModifiersButton;

  /// @brief Field _filterByModifiersToggle, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__filterByModifiersToggle, put = __cordl_internal_set__filterByModifiersToggle)) ::UnityW<::UnityEngine::UI::Toggle> _filterByModifiersToggle;

  /// @brief Field _filterBySongsButton, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__filterBySongsButton, put = __cordl_internal_set__filterBySongsButton)) ::UnityW<::UnityEngine::UI::Button> _filterBySongsButton;

  /// @brief Field _filterBySongsToggle, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__filterBySongsToggle, put = __cordl_internal_set__filterBySongsToggle)) ::UnityW<::UnityEngine::UI::Toggle> _filterBySongsToggle;

  /// @brief Field _gameplayModifiersDropdown, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiersDropdown, put = __cordl_internal_set__gameplayModifiersDropdown)) ::UnityW<::GlobalNamespace::GameplayModifiersDropdown>
      _gameplayModifiersDropdown;

  /// @brief Field _showFullToggle, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__showFullToggle, put = __cordl_internal_set__showFullToggle)) ::UnityW<::UnityEngine::UI::Toggle> _showFullToggle;

  /// @brief Field _showInternetGames, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get__showInternetGames, put = __cordl_internal_set__showInternetGames)) bool _showInternetGames;

  /// @brief Field _showPasswordProtectedToggle, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__showPasswordProtectedToggle, put = __cordl_internal_set__showPasswordProtectedToggle)) ::UnityW<::UnityEngine::UI::Toggle>
      _showPasswordProtectedToggle;

  /// @brief Field _songPacksDropdown, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__songPacksDropdown, put = __cordl_internal_set__songPacksDropdown)) ::UnityW<::GlobalNamespace::SongPacksDropdown> _songPacksDropdown;

  /// @brief Field _toggleBinder, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  __declspec(property(get = get_gameServersFilter)) ::GlobalNamespace::GameServersFilter* gameServersFilter;

  /// @brief Method DidActivate, addr 0x3b722a8, size 0x150, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  static inline ::GlobalNamespace::GameServersFilterViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b723f8, size 0x28, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Refresh, addr 0x3b72184, size 0x124, virtual false, abstract: false, final false
  inline void Refresh(::GlobalNamespace::GameServersFilter* currentFilter);

  /// @brief Method SetupGameServersFilter, addr 0x3b72180, size 0x4, virtual false, abstract: false, final false
  inline void SetupGameServersFilter(::GlobalNamespace::GameServersFilter* gameServersFilter);

  /// @brief Method <DidActivate>b__16_0, addr 0x3b72480, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__16_0(bool isOn);

  /// @brief Method <DidActivate>b__16_1, addr 0x3b724a0, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__16_1(bool isOn);

  /// @brief Method <DidActivate>b__16_2, addr 0x3b724c0, size 0x20, virtual false, abstract: false, final false
  inline void _DidActivate_b__16_2(bool isOn);

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> const& __cordl_internal_get__beatmapDifficultyDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown>& __cordl_internal_get__beatmapDifficultyDropdown();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__filterByDifficultyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__filterByDifficultyButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByDifficultyToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByDifficultyToggle();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__filterByModifiersButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__filterByModifiersButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterByModifiersToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterByModifiersToggle();

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__filterBySongsButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__filterBySongsButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__filterBySongsToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__filterBySongsToggle();

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersDropdown> const& __cordl_internal_get__gameplayModifiersDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::GameplayModifiersDropdown>& __cordl_internal_get__gameplayModifiersDropdown();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__showFullToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__showFullToggle();

  constexpr bool const& __cordl_internal_get__showInternetGames() const;

  constexpr bool& __cordl_internal_get__showInternetGames();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__showPasswordProtectedToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__showPasswordProtectedToggle();

  constexpr ::UnityW<::GlobalNamespace::SongPacksDropdown> const& __cordl_internal_get__songPacksDropdown() const;

  constexpr ::UnityW<::GlobalNamespace::SongPacksDropdown>& __cordl_internal_get__songPacksDropdown();

  constexpr ::HMUI::ToggleBinder* const& __cordl_internal_get__toggleBinder() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr void __cordl_internal_set__beatmapDifficultyDropdown(::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> value);

  constexpr void __cordl_internal_set__filterByDifficultyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__filterByDifficultyToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterByModifiersButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__filterByModifiersToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__filterBySongsButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__filterBySongsToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__gameplayModifiersDropdown(::UnityW<::GlobalNamespace::GameplayModifiersDropdown> value);

  constexpr void __cordl_internal_set__showFullToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__showInternetGames(bool value);

  constexpr void __cordl_internal_set__showPasswordProtectedToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__songPacksDropdown(::UnityW<::GlobalNamespace::SongPacksDropdown> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  /// @brief Method .ctor, addr 0x3b72420, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameServersFilter, addr 0x3b72074, size 0x10c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameServersFilter* get_gameServersFilter();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilterViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilterViewController(GameServersFilterViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilterViewController(GameServersFilterViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5378 };

  /// @brief Field _filterByDifficultyToggle, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByDifficultyToggle;

  /// @brief Field _filterByDifficultyButton, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____filterByDifficultyButton;

  /// @brief Field _beatmapDifficultyDropdown, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapDifficultyDropdown> ____beatmapDifficultyDropdown;

  /// @brief Field _filterByModifiersToggle, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterByModifiersToggle;

  /// @brief Field _filterByModifiersButton, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____filterByModifiersButton;

  /// @brief Field _gameplayModifiersDropdown, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameplayModifiersDropdown> ____gameplayModifiersDropdown;

  /// @brief Field _filterBySongsToggle, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____filterBySongsToggle;

  /// @brief Field _filterBySongsButton, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____filterBySongsButton;

  /// @brief Field _songPacksDropdown, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SongPacksDropdown> ____songPacksDropdown;

  /// @brief Field _showFullToggle, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____showFullToggle;

  /// @brief Field _showPasswordProtectedToggle, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____showPasswordProtectedToggle;

  /// @brief Field _toggleBinder, offset: 0xd0, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _showInternetGames, offset: 0xd8, size: 0x1, def value: None
  bool ____showInternetGames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____filterByDifficultyToggle) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____filterByDifficultyButton) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____beatmapDifficultyDropdown) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____filterByModifiersToggle) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____filterByModifiersButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____gameplayModifiersDropdown) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____filterBySongsToggle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____filterBySongsButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____songPacksDropdown) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____showFullToggle) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____showPasswordProtectedToggle) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____toggleBinder) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterViewController, ____showInternetGames) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersFilterViewController, 0xe0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersFilterViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilterViewController*, "", "GameServersFilterViewController");
