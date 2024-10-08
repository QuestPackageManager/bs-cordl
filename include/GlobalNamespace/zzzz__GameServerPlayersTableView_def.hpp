#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerPlayersTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerPlayersTableView)
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class GameServerPlayerTableCell;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
namespace GlobalNamespace {
class ILobbyPlayersDataModel;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayersTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayersTableView);
// Type: ::GameServerPlayersTableView
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServerPlayersTableView*
class CORDL_TYPE GameServerPlayersTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _allowSelection, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__allowSelection, put = __cordl_internal_set__allowSelection)) bool _allowSelection;

  /// @brief Field _container, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _entitlementModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementModel, put = __cordl_internal_set__entitlementModel)) ::GlobalNamespace::IEntitlementModel* _entitlementModel;

  /// @brief Field _gameServerPlayerCellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerPlayerCellPrefab, put = __cordl_internal_set__gameServerPlayerCellPrefab)) ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>
      _gameServerPlayerCellPrefab;

  /// @brief Field _gameServerPlayerCellWithoutModifiersPrefab, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerPlayerCellWithoutModifiersPrefab,
                      put = __cordl_internal_set__gameServerPlayerCellWithoutModifiersPrefab)) ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>
      _gameServerPlayerCellWithoutModifiersPrefab;

  /// @brief Field _gameServerPlayerCellWithoutSongsPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerPlayerCellWithoutSongsPrefab,
                      put = __cordl_internal_set__gameServerPlayerCellWithoutSongsPrefab)) ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>
      _gameServerPlayerCellWithoutSongsPrefab;

  /// @brief Field _hasKickPermissions, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__hasKickPermissions, put = __cordl_internal_set__hasKickPermissions)) bool _hasKickPermissions;

  /// @brief Field _initialized, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _lobbyPlayersDataModel, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__lobbyPlayersDataModel, put = __cordl_internal_set__lobbyPlayersDataModel)) ::GlobalNamespace::ILobbyPlayersDataModel* _lobbyPlayersDataModel;

  /// @brief Field _selectedPlayer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedPlayer, put = __cordl_internal_set__selectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _selectedPlayer;

  /// @brief Field _showModifierSelection, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get__showModifierSelection, put = __cordl_internal_set__showModifierSelection)) bool _showModifierSelection;

  /// @brief Field _showSongSelection, offset 0x7b, size 0x1
  __declspec(property(get = __cordl_internal_get__showSongSelection, put = __cordl_internal_set__showSongSelection)) bool _showSongSelection;

  /// @brief Field _sortedConnectedPlayers, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__sortedConnectedPlayers,
                      put = __cordl_internal_set__sortedConnectedPlayers)) ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* _sortedConnectedPlayers;

  /// @brief Field _tableHeaderModifiersGo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__tableHeaderModifiersGo, put = __cordl_internal_set__tableHeaderModifiersGo)) ::UnityW<::UnityEngine::GameObject> _tableHeaderModifiersGo;

  /// @brief Field _tableHeaderSongGo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tableHeaderSongGo, put = __cordl_internal_set__tableHeaderSongGo)) ::UnityW<::UnityEngine::GameObject> _tableHeaderSongGo;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  __declspec(property(get = get_currentCellId)) ::StringW currentCellId;

  /// @brief Field kickPlayerEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_kickPlayerEvent, put = __cordl_internal_set_kickPlayerEvent)) ::System::Action_1<::StringW>* kickPlayerEvent;

  /// @brief Field selectSuggestedGameplayModifiersEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_selectSuggestedGameplayModifiersEvent,
                      put = __cordl_internal_set_selectSuggestedGameplayModifiersEvent)) ::System::Action_1<::GlobalNamespace::GameplayModifiers*>* selectSuggestedGameplayModifiersEvent;

  /// @brief Field selectSuggestedLevelEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_selectSuggestedLevelEvent,
                      put = __cordl_internal_set_selectSuggestedLevelEvent)) ::System::Action_1<::GlobalNamespace::BeatmapKey>* selectSuggestedLevelEvent;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x3a8e624, size 0x4f0, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x3a8e4b0, size 0xc, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method GetCurrentPrefab, addr 0x3a8e588, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> GetCurrentPrefab();

  /// @brief Method HandleCellKickPlayer, addr 0x3a8f208, size 0xfc, virtual false, abstract: false, final false
  inline void HandleCellKickPlayer(int32_t idx);

  /// @brief Method HandleCellUseBeatmap, addr 0x3a8ec7c, size 0x338, virtual false, abstract: false, final false
  inline void HandleCellUseBeatmap(int32_t idx);

  /// @brief Method HandleCellUseModifiers, addr 0x3a8efb4, size 0x254, virtual false, abstract: false, final false
  inline void HandleCellUseModifiers(int32_t idx);

  /// @brief Method Init, addr 0x3a8f3c0, size 0x44, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GameServerPlayersTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x3a8e4bc, size 0x48, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method SetData, addr 0x3a8f304, size 0xbc, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* sortedPlayers, ::GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel,
                      bool hasKickPermissions, bool allowSelection, bool showSongSelection, bool showModifierSelection, bool clearSelection);

  /// @brief Method TryGetLobbyPlayerData, addr 0x3a8eb14, size 0x168, virtual false, abstract: false, final false
  inline bool TryGetLobbyPlayerData(int32_t idx, ByRef<::GlobalNamespace::IConnectedPlayer*> player, ByRef<::GlobalNamespace::ILobbyPlayerData*> playerData);

  constexpr bool const& __cordl_internal_get__allowSelection() const;

  constexpr bool& __cordl_internal_get__allowSelection();

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get__container() const;

  constexpr ::GlobalNamespace::IEntitlementModel*& __cordl_internal_get__entitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IEntitlementModel*> const& __cordl_internal_get__entitlementModel() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> const& __cordl_internal_get__gameServerPlayerCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>& __cordl_internal_get__gameServerPlayerCellPrefab();

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> const& __cordl_internal_get__gameServerPlayerCellWithoutModifiersPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>& __cordl_internal_get__gameServerPlayerCellWithoutModifiersPrefab();

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> const& __cordl_internal_get__gameServerPlayerCellWithoutSongsPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerPlayerTableCell>& __cordl_internal_get__gameServerPlayerCellWithoutSongsPrefab();

  constexpr bool const& __cordl_internal_get__hasKickPermissions() const;

  constexpr bool& __cordl_internal_get__hasKickPermissions();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::GlobalNamespace::ILobbyPlayersDataModel*& __cordl_internal_get__lobbyPlayersDataModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyPlayersDataModel*> const& __cordl_internal_get__lobbyPlayersDataModel() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__selectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __cordl_internal_get__selectedPlayer() const;

  constexpr bool const& __cordl_internal_get__showModifierSelection() const;

  constexpr bool& __cordl_internal_get__showModifierSelection();

  constexpr bool const& __cordl_internal_get__showSongSelection() const;

  constexpr bool& __cordl_internal_get__showSongSelection();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*& __cordl_internal_get__sortedConnectedPlayers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>*> const& __cordl_internal_get__sortedConnectedPlayers() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__tableHeaderModifiersGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__tableHeaderModifiersGo();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__tableHeaderSongGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__tableHeaderSongGo();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_kickPlayerEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::StringW>*> const& __cordl_internal_get_kickPlayerEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::GameplayModifiers*>*& __cordl_internal_get_selectSuggestedGameplayModifiersEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::GameplayModifiers*>*> const& __cordl_internal_get_selectSuggestedGameplayModifiersEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::BeatmapKey>*& __cordl_internal_get_selectSuggestedLevelEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::BeatmapKey>*> const& __cordl_internal_get_selectSuggestedLevelEvent() const;

  constexpr void __cordl_internal_set__allowSelection(bool value);

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__entitlementModel(::GlobalNamespace::IEntitlementModel* value);

  constexpr void __cordl_internal_set__gameServerPlayerCellPrefab(::UnityW<::GlobalNamespace::GameServerPlayerTableCell> value);

  constexpr void __cordl_internal_set__gameServerPlayerCellWithoutModifiersPrefab(::UnityW<::GlobalNamespace::GameServerPlayerTableCell> value);

  constexpr void __cordl_internal_set__gameServerPlayerCellWithoutSongsPrefab(::UnityW<::GlobalNamespace::GameServerPlayerTableCell> value);

  constexpr void __cordl_internal_set__hasKickPermissions(bool value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__lobbyPlayersDataModel(::GlobalNamespace::ILobbyPlayersDataModel* value);

  constexpr void __cordl_internal_set__selectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__showModifierSelection(bool value);

  constexpr void __cordl_internal_set__showSongSelection(bool value);

  constexpr void __cordl_internal_set__sortedConnectedPlayers(::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* value);

  constexpr void __cordl_internal_set__tableHeaderModifiersGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__tableHeaderSongGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr void __cordl_internal_set_kickPlayerEvent(::System::Action_1<::StringW>* value);

  constexpr void __cordl_internal_set_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  constexpr void __cordl_internal_set_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value);

  /// @brief Method .ctor, addr 0x3a8f404, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_kickPlayerEvent, addr 0x3a8e350, size 0xb0, virtual false, abstract: false, final false
  inline void add_kickPlayerEvent(::System::Action_1<::StringW>* value);

  /// @brief Method add_selectSuggestedGameplayModifiersEvent, addr 0x3a8e1f0, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method add_selectSuggestedLevelEvent, addr 0x3a8e090, size 0xb0, virtual false, abstract: false, final false
  inline void add_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value);

  /// @brief Method get_currentCellId, addr 0x3a8e504, size 0x84, virtual false, abstract: false, final false
  inline ::StringW get_currentCellId();

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

  /// @brief Method remove_kickPlayerEvent, addr 0x3a8e400, size 0xb0, virtual false, abstract: false, final false
  inline void remove_kickPlayerEvent(::System::Action_1<::StringW>* value);

  /// @brief Method remove_selectSuggestedGameplayModifiersEvent, addr 0x3a8e2a0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectSuggestedGameplayModifiersEvent(::System::Action_1<::GlobalNamespace::GameplayModifiers*>* value);

  /// @brief Method remove_selectSuggestedLevelEvent, addr 0x3a8e140, size 0xb0, virtual false, abstract: false, final false
  inline void remove_selectSuggestedLevelEvent(::System::Action_1<::GlobalNamespace::BeatmapKey>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerPlayersTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayersTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerPlayersTableView(GameServerPlayersTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayersTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerPlayersTableView(GameServerPlayersTableView const&) = delete;

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _gameServerPlayerCellPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> ____gameServerPlayerCellPrefab;

  /// @brief Field _gameServerPlayerCellWithoutSongsPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> ____gameServerPlayerCellWithoutSongsPrefab;

  /// @brief Field _gameServerPlayerCellWithoutModifiersPrefab, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerPlayerTableCell> ____gameServerPlayerCellWithoutModifiersPrefab;

  /// @brief Field _tableHeaderSongGo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____tableHeaderSongGo;

  /// @brief Field _tableHeaderModifiersGo, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____tableHeaderModifiersGo;

  /// @brief Field _container, offset: 0x50, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _entitlementModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* ____entitlementModel;

  /// @brief Field selectSuggestedLevelEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::BeatmapKey>* ___selectSuggestedLevelEvent;

  /// @brief Field selectSuggestedGameplayModifiersEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::GameplayModifiers*>* ___selectSuggestedGameplayModifiersEvent;

  /// @brief Field kickPlayerEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::StringW>* ___kickPlayerEvent;

  /// @brief Field _initialized, offset: 0x78, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _hasKickPermissions, offset: 0x79, size: 0x1, def value: None
  bool ____hasKickPermissions;

  /// @brief Field _allowSelection, offset: 0x7a, size: 0x1, def value: None
  bool ____allowSelection;

  /// @brief Field _showSongSelection, offset: 0x7b, size: 0x1, def value: None
  bool ____showSongSelection;

  /// @brief Field _showModifierSelection, offset: 0x7c, size: 0x1, def value: None
  bool ____showModifierSelection;

  /// @brief Field _selectedPlayer, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____selectedPlayer;

  /// @brief Field _sortedConnectedPlayers, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::IConnectedPlayer*>* ____sortedConnectedPlayers;

  /// @brief Field _lobbyPlayersDataModel, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::ILobbyPlayersDataModel* ____lobbyPlayersDataModel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4951 };

  /// @brief Field kCellId offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellId{ u"Cell" };

  /// @brief Field kNoModifiersCellId offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoModifiersCellId{ u"NoModifierCell" };

  /// @brief Field kNoSongsCellId offset 0xffffffff size 0x8
  static constexpr ::ConstString kNoSongsCellId{ u"NoSongCell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayersTableView, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____tableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____gameServerPlayerCellPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____gameServerPlayerCellWithoutSongsPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____gameServerPlayerCellWithoutModifiersPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____tableHeaderSongGo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____tableHeaderModifiersGo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____container) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____entitlementModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ___selectSuggestedLevelEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ___selectSuggestedGameplayModifiersEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ___kickPlayerEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____initialized) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____hasKickPermissions) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____allowSelection) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____showSongSelection) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____showModifierSelection) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____selectedPlayer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____sortedConnectedPlayers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayersTableView, ____lobbyPlayersDataModel) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayersTableView*, "", "GameServerPlayersTableView");
