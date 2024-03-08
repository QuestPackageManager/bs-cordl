#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(StandardLevelBuyView)
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class LevelBar;
}
namespace GlobalNamespace {
class PlayerData;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelBuyView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelBuyView);
// Type: ::StandardLevelBuyView
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StandardLevelBuyView*
class CORDL_TYPE StandardLevelBuyView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _beatmapLevel, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel, put = __cordl_internal_set__beatmapLevel))::GlobalNamespace::BeatmapLevel* _beatmapLevel;

  /// @brief Field _buyButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buyButton, put = __cordl_internal_set__buyButton))::UnityW<::UnityEngine::UI::Button> _buyButton;

  /// @brief Field _favoriteToggle, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__favoriteToggle, put = __cordl_internal_set__favoriteToggle))::UnityW<::UnityEngine::UI::Toggle> _favoriteToggle;

  /// @brief Field _levelBar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelBar, put = __cordl_internal_set__levelBar))::UnityW<::GlobalNamespace::LevelBar> _levelBar;

  /// @brief Field _playerData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerData, put = __cordl_internal_set__playerData))::GlobalNamespace::PlayerData* _playerData;

  /// @brief Field _toggleBinder, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder))::HMUI::ToggleBinder* _toggleBinder;

  __declspec(property(get = get_buyButton))::UnityW<::UnityEngine::UI::Button> buyButton;

  /// @brief Field didFavoriteToggleChangeEvent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didFavoriteToggleChangeEvent,
                      put = __cordl_internal_set_didFavoriteToggleChangeEvent))::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* didFavoriteToggleChangeEvent;

  /// @brief Method Awake, addr 0x244b658, size 0xc4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::StandardLevelBuyView* New_ctor();

  /// @brief Method OnDestroy, addr 0x244b71c, size 0x14, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshFavouriteToggle, addr 0x244b764, size 0x3c, virtual false, abstract: false, final false
  inline void RefreshFavouriteToggle();

  /// @brief Method SetContent, addr 0x244b730, size 0x34, virtual false, abstract: false, final false
  inline void SetContent(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::PlayerData* playerData);

  /// @brief Method <Awake>b__11_0, addr 0x244b7a8, size 0x30, virtual false, abstract: false, final false
  inline void _Awake_b__11_0(bool on);

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get__beatmapLevel() const;

  constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__buyButton() const;

  constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__buyButton();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__favoriteToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__favoriteToggle();

  constexpr ::UnityW<::GlobalNamespace::LevelBar> const& __cordl_internal_get__levelBar() const;

  constexpr ::UnityW<::GlobalNamespace::LevelBar>& __cordl_internal_get__levelBar();

  constexpr ::GlobalNamespace::PlayerData*& __cordl_internal_get__playerData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& __cordl_internal_get__playerData() const;

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*& __cordl_internal_get_didFavoriteToggleChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>*> const& __cordl_internal_get_didFavoriteToggleChangeEvent() const;

  constexpr void __cordl_internal_set__beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__buyButton(::UnityW<::UnityEngine::UI::Button> value);

  constexpr void __cordl_internal_set__favoriteToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value);

  constexpr void __cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method .ctor, addr 0x244b7a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFavoriteToggleChangeEvent, addr 0x244b4f0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

  /// @brief Method get_buyButton, addr 0x244b650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Button> get_buyButton();

  /// @brief Method remove_didFavoriteToggleChangeEvent, addr 0x244b5a0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFavoriteToggleChangeEvent(::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelBuyView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelBuyView(StandardLevelBuyView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelBuyView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelBuyView(StandardLevelBuyView const&) = delete;

  /// @brief Field _levelBar, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelBar> ____levelBar;

  /// @brief Field _buyButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Button> ____buyButton;

  /// @brief Field _favoriteToggle, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____favoriteToggle;

  /// @brief Field didFavoriteToggleChangeEvent, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::UnityEngine::UI::Toggle>>* ___didFavoriteToggleChangeEvent;

  /// @brief Field _toggleBinder, offset: 0x38, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief Field _beatmapLevel, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel;

  /// @brief Field _playerData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerData* ____playerData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelBuyView, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____levelBar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____buyButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____favoriteToggle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ___didFavoriteToggleChangeEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____toggleBinder) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____beatmapLevel) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelBuyView, ____playerData) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyView*, "", "StandardLevelBuyView");
