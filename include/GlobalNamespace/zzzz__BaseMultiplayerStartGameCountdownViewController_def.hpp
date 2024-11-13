#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseMultiplayerStartGameCountdownViewController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
CORDL_MODULE_EXPORT(BaseMultiplayerStartGameCountdownViewController)
namespace GlobalNamespace {
class BeatmapSelectionView;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace HMUI {
class ToggleBinder;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UI {
class Toggle;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseMultiplayerStartGameCountdownViewController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController);
// Type: ::BaseMultiplayerStartGameCountdownViewController
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BaseMultiplayerStartGameCountdownViewController*
class CORDL_TYPE BaseMultiplayerStartGameCountdownViewController : public ::HMUI::ViewController {
public:
  // Declarations
  /// @brief Field _beatmapSelectionView, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapSelectionView, put = __cordl_internal_set__beatmapSelectionView)) ::UnityW<::GlobalNamespace::BeatmapSelectionView> _beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__modifiersSelectionView, put = __cordl_internal_set__modifiersSelectionView)) ::UnityW<::GlobalNamespace::ModifiersSelectionView>
      _modifiersSelectionView;

  /// @brief Field _spectateToggle, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__spectateToggle, put = __cordl_internal_set__spectateToggle)) ::UnityW<::UnityEngine::UI::Toggle> _spectateToggle;

  /// @brief Field _toggleBinder, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__toggleBinder, put = __cordl_internal_set__toggleBinder)) ::HMUI::ToggleBinder* _toggleBinder;

  /// @brief Field playerActiveStateChangedEvent, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_playerActiveStateChangedEvent, put = __cordl_internal_set_playerActiveStateChangedEvent)) ::System::Action_1<bool>* playerActiveStateChangedEvent;

  /// @brief Method DidActivate, addr 0x3bb743c, size 0x98, virtual true, abstract: false, final false
  inline void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

  /// @brief Method DidDeactivate, addr 0x3bb74d4, size 0x1c, virtual true, abstract: false, final false
  inline void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);

  static inline ::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bb74f0, size 0x1c, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetLevelGameplaySetupData, addr 0x3bb7218, size 0x164, virtual false, abstract: false, final false
  inline void SetLevelGameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData* levelGameplaySetupData);

  /// @brief Method SetLobbyPlayerData, addr 0x3bb737c, size 0xc0, virtual true, abstract: false, final false
  inline void SetLobbyPlayerData(::GlobalNamespace::ILobbyPlayerData* lobbyPlayerData);

  /// @brief Method <DidActivate>b__9_0, addr 0x3bb756c, size 0x24, virtual false, abstract: false, final false
  inline void _DidActivate_b__9_0(bool value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView> const& __cordl_internal_get__beatmapSelectionView() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapSelectionView>& __cordl_internal_get__beatmapSelectionView();

  constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView> const& __cordl_internal_get__modifiersSelectionView() const;

  constexpr ::UnityW<::GlobalNamespace::ModifiersSelectionView>& __cordl_internal_get__modifiersSelectionView();

  constexpr ::UnityW<::UnityEngine::UI::Toggle> const& __cordl_internal_get__spectateToggle() const;

  constexpr ::UnityW<::UnityEngine::UI::Toggle>& __cordl_internal_get__spectateToggle();

  constexpr ::HMUI::ToggleBinder*& __cordl_internal_get__toggleBinder();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& __cordl_internal_get__toggleBinder() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_playerActiveStateChangedEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_playerActiveStateChangedEvent() const;

  constexpr void __cordl_internal_set__beatmapSelectionView(::UnityW<::GlobalNamespace::BeatmapSelectionView> value);

  constexpr void __cordl_internal_set__modifiersSelectionView(::UnityW<::GlobalNamespace::ModifiersSelectionView> value);

  constexpr void __cordl_internal_set__spectateToggle(::UnityW<::UnityEngine::UI::Toggle> value);

  constexpr void __cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value);

  constexpr void __cordl_internal_set_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x3bb750c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_playerActiveStateChangedEvent, addr 0x3bb70b8, size 0xb0, virtual false, abstract: false, final false
  inline void add_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

  /// @brief Method remove_playerActiveStateChangedEvent, addr 0x3bb7168, size 0xb0, virtual false, abstract: false, final false
  inline void remove_playerActiveStateChangedEvent(::System::Action_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseMultiplayerStartGameCountdownViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseMultiplayerStartGameCountdownViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseMultiplayerStartGameCountdownViewController(BaseMultiplayerStartGameCountdownViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseMultiplayerStartGameCountdownViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseMultiplayerStartGameCountdownViewController(BaseMultiplayerStartGameCountdownViewController const&) = delete;

  /// @brief Field _beatmapSelectionView, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapSelectionView> ____beatmapSelectionView;

  /// @brief Field _modifiersSelectionView, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ModifiersSelectionView> ____modifiersSelectionView;

  /// @brief Field _spectateToggle, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Toggle> ____spectateToggle;

  /// @brief Field playerActiveStateChangedEvent, offset: 0x90, size: 0x8, def value: None
  ::System::Action_1<bool>* ___playerActiveStateChangedEvent;

  /// @brief Field _toggleBinder, offset: 0x98, size: 0x8, def value: None
  ::HMUI::ToggleBinder* ____toggleBinder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4901 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, 0xa0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, ____beatmapSelectionView) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, ____modifiersSelectionView) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, ____spectateToggle) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, ___playerActiveStateChangedEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController, ____toggleBinder) == 0x98, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseMultiplayerStartGameCountdownViewController*, "", "BaseMultiplayerStartGameCountdownViewController");
