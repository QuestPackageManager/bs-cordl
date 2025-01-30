#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServersListTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TableViewWithDetailCell_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameServersListTableView)
namespace GlobalNamespace {
class GameServerListDetailTableCell;
}
namespace GlobalNamespace {
class GameServerListTableCell;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class TableViewWithDetailCell;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersListTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersListTableView);
// Dependencies TableViewWithDetailCell::IDataSource, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServersListTableView
class CORDL_TYPE GameServersListTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _container, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  /// @brief Field _gameServerDetailCellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerDetailCellPrefab, put = __cordl_internal_set__gameServerDetailCellPrefab)) ::UnityW<::GlobalNamespace::GameServerListDetailTableCell>
      _gameServerDetailCellPrefab;

  /// @brief Field _gameServerListCellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__gameServerListCellPrefab, put = __cordl_internal_set__gameServerListCellPrefab)) ::UnityW<::GlobalNamespace::GameServerListTableCell>
      _gameServerListCellPrefab;

  /// @brief Field _gamesList, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gamesList, put = __cordl_internal_set__gamesList)) ::ArrayW<::GlobalNamespace::INetworkPlayer*, ::Array<::GlobalNamespace::INetworkPlayer*>*>
      _gamesList;

  /// @brief Field _isInitialized, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _selectedServer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedServer, put = __cordl_internal_set__selectedServer)) ::GlobalNamespace::INetworkPlayer* _selectedServer;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::GlobalNamespace::TableViewWithDetailCell> _tableView;

  /// @brief Field joinButtonPressedEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_joinButtonPressedEvent,
                      put = __cordl_internal_set_joinButtonPressedEvent)) ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* joinButtonPressedEvent;

  /// @brief Convert operator to "::GlobalNamespace::TableViewWithDetailCell_IDataSource"
  constexpr operator ::GlobalNamespace::TableViewWithDetailCell_IDataSource*() noexcept;

  /// @brief Method CellForContent, addr 0x3b04b80, size 0x164, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForContent(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t idx, bool detailOpened);

  /// @brief Method CellForDetail, addr 0x3b04ce4, size 0x1b4, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForDetail(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t contentIdx);

  /// @brief Method CellSize, addr 0x3b04a50, size 0xc, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method HandleGameServerListDetailTableCellJoinServerButtonWasPressed, addr 0x3b04fbc, size 0x24, virtual false, abstract: false, final false
  inline void HandleGameServerListDetailTableCellJoinServerButtonWasPressed();

  /// @brief Method HandleTableViewDidDeselectCellWithIdx, addr 0x3b05014, size 0x8, virtual false, abstract: false, final false
  inline void HandleTableViewDidDeselectCellWithIdx(::GlobalNamespace::TableViewWithDetailCell* arg1, int32_t arg2);

  /// @brief Method HandleTableViewDidSelectCellWithIdx, addr 0x3b04fe0, size 0x34, virtual false, abstract: false, final false
  inline void HandleTableViewDidSelectCellWithIdx(::HMUI::TableView* tableView, int32_t id);

  /// @brief Method Init, addr 0x3b04a74, size 0x10c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::GlobalNamespace::GameServersListTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x3b04a5c, size 0x18, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method OnDestroy, addr 0x3b0501c, size 0xec, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetData, addr 0x3b04e98, size 0x124, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* servers, bool clearSelection);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr ::UnityW<::GlobalNamespace::GameServerListDetailTableCell> const& __cordl_internal_get__gameServerDetailCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerListDetailTableCell>& __cordl_internal_get__gameServerDetailCellPrefab();

  constexpr ::UnityW<::GlobalNamespace::GameServerListTableCell> const& __cordl_internal_get__gameServerListCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::GameServerListTableCell>& __cordl_internal_get__gameServerListCellPrefab();

  constexpr ::ArrayW<::GlobalNamespace::INetworkPlayer*, ::Array<::GlobalNamespace::INetworkPlayer*>*> const& __cordl_internal_get__gamesList() const;

  constexpr ::ArrayW<::GlobalNamespace::INetworkPlayer*, ::Array<::GlobalNamespace::INetworkPlayer*>*>& __cordl_internal_get__gamesList();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::GlobalNamespace::INetworkPlayer* const& __cordl_internal_get__selectedServer() const;

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get__selectedServer();

  constexpr ::UnityW<::GlobalNamespace::TableViewWithDetailCell> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::GlobalNamespace::TableViewWithDetailCell>& __cordl_internal_get__tableView();

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* const& __cordl_internal_get_joinButtonPressedEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::INetworkPlayer*>*& __cordl_internal_get_joinButtonPressedEvent();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__gameServerDetailCellPrefab(::UnityW<::GlobalNamespace::GameServerListDetailTableCell> value);

  constexpr void __cordl_internal_set__gameServerListCellPrefab(::UnityW<::GlobalNamespace::GameServerListTableCell> value);

  constexpr void __cordl_internal_set__gamesList(::ArrayW<::GlobalNamespace::INetworkPlayer*, ::Array<::GlobalNamespace::INetworkPlayer*>*> value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__selectedServer(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::GlobalNamespace::TableViewWithDetailCell> value);

  constexpr void __cordl_internal_set_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Method .ctor, addr 0x3b05108, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_joinButtonPressedEvent, addr 0x3b048f0, size 0xb0, virtual false, abstract: false, final false
  inline void add_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

  /// @brief Convert to "::GlobalNamespace::TableViewWithDetailCell_IDataSource"
  constexpr ::GlobalNamespace::TableViewWithDetailCell_IDataSource* i___GlobalNamespace__TableViewWithDetailCell_IDataSource() noexcept;

  /// @brief Method remove_joinButtonPressedEvent, addr 0x3b049a0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_joinButtonPressedEvent(::System::Action_1<::GlobalNamespace::INetworkPlayer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersListTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServersListTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersListTableView(GameServersListTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersListTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersListTableView(GameServersListTableView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4978 };

  /// @brief Field kCellReuseIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellReuseIdentifier{ u"Cell" };

  /// @brief Field kDetailCellReuseIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kDetailCellReuseIdentifier{ u"DetailCell" };

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TableViewWithDetailCell> ____tableView;

  /// @brief Field _gameServerListCellPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerListTableCell> ____gameServerListCellPrefab;

  /// @brief Field _gameServerDetailCellPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameServerListDetailTableCell> ____gameServerDetailCellPrefab;

  /// @brief Field _container, offset: 0x38, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field joinButtonPressedEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::INetworkPlayer*>* ___joinButtonPressedEvent;

  /// @brief Field _isInitialized, offset: 0x48, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _gamesList, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::INetworkPlayer*, ::Array<::GlobalNamespace::INetworkPlayer*>*> ____gamesList;

  /// @brief Field _selectedServer, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* ____selectedServer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____tableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____gameServerListCellPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____gameServerDetailCellPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____container) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ___joinButtonPressedEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____isInitialized) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____gamesList) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersListTableView, ____selectedServer) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersListTableView, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersListTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersListTableView*, "", "GameServersListTableView");
