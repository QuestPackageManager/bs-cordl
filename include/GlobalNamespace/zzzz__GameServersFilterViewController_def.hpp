#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(GameServersFilterViewController)
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace HMUI {
class ToggleBinder;
}
namespace GlobalNamespace {
class GameplayModifiersDropdown;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersFilterViewController);
// Type: ::GameServersFilterViewController
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 209, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5714))
// CS Name: ::GameServersFilterViewController*
class CORDL_TYPE GameServersFilterViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _filterByDifficultyToggle, offset 0x70, size 0x8
  __declspec(property(get = __get__filterByDifficultyToggle, put = __set__filterByDifficultyToggle))::UnityEngine::UI::Toggle* _filterByDifficultyToggle;

  /// @brief Field _filterByDifficultyButton, offset 0x78, size 0x8
  __declspec(property(get = __get__filterByDifficultyButton, put = __set__filterByDifficultyButton))::UnityEngine::UI::Button* _filterByDifficultyButton;

  /// @brief Field _beatmapDifficultyDropdown, offset 0x80, size 0x8
  __declspec(property(get = __get__beatmapDifficultyDropdown, put = __set__beatmapDifficultyDropdown))::GlobalNamespace::BeatmapDifficultyDropdown* _beatmapDifficultyDropdown;

  /// @brief Field _filterByModifiersToggle, offset 0x88, size 0x8
  __declspec(property(get = __get__filterByModifiersToggle, put = __set__filterByModifiersToggle))::UnityEngine::UI::Toggle* _filterByModifiersToggle;

  /// @brief Field _filterByModifiersButton, offset 0x90, size 0x8
  __declspec(property(get = __get__filterByModifiersButton, put = __set__filterByModifiersButton))::UnityEngine::UI::Button* _filterByModifiersButton;

  /// @brief Field _gameplayModifiersDropdown, offset 0x98, size 0x8
  __declspec(property(get = __get__gameplayModifiersDropdown, put = __set__gameplayModifiersDropdown))::GlobalNamespace::GameplayModifiersDropdown* _gameplayModifiersDropdown;

  /// @brief Field _filterBySongsToggle, offset 0xa0, size 0x8
  __declspec(property(get = __get__filterBySongsToggle, put = __set__filterBySongsToggle))::UnityEngine::UI::Toggle* _filterBySongsToggle;

  /// @brief Field _filterBySongsButton, offset 0xa8, size 0x8
  __declspec(property(get = __get__filterBySongsButton, put = __set__filterBySongsButton))::UnityEngine::UI::Button* _filterBySongsButton;

  /// @brief Field _songPacksDropdown, offset 0xb0, size 0x8
  __declspec(property(get = __get__songPacksDropdown, put = __set__songPacksDropdown))::GlobalNamespace::SongPacksDropdown* _songPacksDropdown;

  /// @brief Field _showFullToggle, offset 0xb8, size 0x8
  __declspec(property(get = __get__showFullToggle, put = __set__showFullToggle))::UnityEngine::UI::Toggle* _showFullToggle;

  /// @brief Field _showPasswordProtectedToggle, offset 0xc0, size 0x8
  __declspec(property(get = __get__showPasswordProtectedToggle, put = __set__showPasswordProtectedToggle))::UnityEngine::UI::Toggle* _showPasswordProtectedToggle;

  /// @brief Field _toggleBinder, offset 0xc8, size 0x8
  __declspec(property(get = __get__toggleBinder, put = __set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field _showInternetGames, offset 0xd0, size 0x1
  __declspec(property(get = __get__showInternetGames, put = __set__showInternetGames)) bool _showInternetGames;

  __declspec(property(get = get_gameServersFilter))::GlobalNamespace::GameServersFilter* gameServersFilter;

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByDifficultyToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByDifficultyToggle() const;

  constexpr void __set__filterByDifficultyToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Button*& __get__filterByDifficultyButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__filterByDifficultyButton() const;

  constexpr void __set__filterByDifficultyButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::BeatmapDifficultyDropdown*& __get__beatmapDifficultyDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDifficultyDropdown*> const& __get__beatmapDifficultyDropdown() const;

  constexpr void __set__beatmapDifficultyDropdown(::GlobalNamespace::BeatmapDifficultyDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterByModifiersToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterByModifiersToggle() const;

  constexpr void __set__filterByModifiersToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Button*& __get__filterByModifiersButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__filterByModifiersButton() const;

  constexpr void __set__filterByModifiersButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::GameplayModifiersDropdown*& __get__gameplayModifiersDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiersDropdown*> const& __get__gameplayModifiersDropdown() const;

  constexpr void __set__gameplayModifiersDropdown(::GlobalNamespace::GameplayModifiersDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__filterBySongsToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__filterBySongsToggle() const;

  constexpr void __set__filterBySongsToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Button*& __get__filterBySongsButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> const& __get__filterBySongsButton() const;

  constexpr void __set__filterBySongsButton(::UnityEngine::UI::Button* value);

  constexpr ::GlobalNamespace::SongPacksDropdown*& __get__songPacksDropdown();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPacksDropdown*> const& __get__songPacksDropdown() const;

  constexpr void __set__songPacksDropdown(::GlobalNamespace::SongPacksDropdown* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__showFullToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__showFullToggle() const;

  constexpr void __set__showFullToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::UnityEngine::UI::Toggle*& __get__showPasswordProtectedToggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& __get__showPasswordProtectedToggle() const;

  constexpr void __set__showPasswordProtectedToggle(::UnityEngine::UI::Toggle* value);

  constexpr ::HMUI::ToggleBinder*& __get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __get__toggleBinder() const;

  constexpr void __set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr bool& __get__showInternetGames();

  constexpr bool const& __get__showInternetGames() const;

  constexpr void __set__showInternetGames(bool value);

  /// @brief Method get_gameServersFilter addr 0x22cd314 size 0x10c virtual false final false
  inline ::GlobalNamespace::GameServersFilter* get_gameServersFilter();

  /// @brief Method SetupGameServersFilter addr 0x22cd420 size 0x4 virtual false final false
  inline void SetupGameServersFilter(::GlobalNamespace::GameServersFilter* gameServersFilter);

  /// @brief Method DidActivate addr 0x22cd548 size 0x15c virtual true final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method OnDestroy addr 0x22cd6a4 size 0x28 virtual true final false
  inline void OnDestroy();

  /// @brief Method Refresh addr 0x22cd424 size 0x124 virtual false final false
  inline void Refresh(::GlobalNamespace::GameServersFilter* currentFilter);

  static inline ::GlobalNamespace::GameServersFilterViewController* New_ctor();

  /// @brief Method .ctor addr 0x22cd6cc size 0x68 virtual false final false
  inline void _ctor();

  /// @brief Method <DidActivate>b__16_0 addr 0x22cd734 size 0x20 virtual false final false
  inline void _DidActivate_b__16_0(bool isOn);

  /// @brief Method <DidActivate>b__16_1 addr 0x22cd754 size 0x20 virtual false final false
  inline void _DidActivate_b__16_1(bool isOn);

  /// @brief Method <DidActivate>b__16_2 addr 0x22cd774 size 0x20 virtual false final false
  inline void _DidActivate_b__16_2(bool isOn);

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilterViewController(GameServersFilterViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilterViewController(GameServersFilterViewController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilterViewController();

public:
  /// @brief Field _filterByDifficultyToggle, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByDifficultyToggle;

  /// @brief Field _filterByDifficultyButton, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____filterByDifficultyButton;

  /// @brief Field _beatmapDifficultyDropdown, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDifficultyDropdown* ____beatmapDifficultyDropdown;

  /// @brief Field _filterByModifiersToggle, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterByModifiersToggle;

  /// @brief Field _filterByModifiersButton, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____filterByModifiersButton;

  /// @brief Field _gameplayModifiersDropdown, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiersDropdown* ____gameplayModifiersDropdown;

  /// @brief Field _filterBySongsToggle, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____filterBySongsToggle;

  /// @brief Field _filterBySongsButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UI::Button* ____filterBySongsButton;

  /// @brief Field _songPacksDropdown, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::SongPacksDropdown* ____songPacksDropdown;

  /// @brief Field _showFullToggle, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____showFullToggle;

  /// @brief Field _showPasswordProtectedToggle, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle* ____showPasswordProtectedToggle;

  /// @brief Field _toggleBinder, offset: 0xc8, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _showInternetGames, offset: 0xd0, size: 0x1, def value: None
  bool ____showInternetGames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersFilterViewController, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersFilterViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilterViewController*, "", "GameServersFilterViewController");
