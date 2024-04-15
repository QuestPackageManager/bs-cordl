#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkPlayersTableView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPlayersTableView)
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class LevelPackHeaderTableCell;
}
namespace GlobalNamespace {
class NetworkPlayerOptionsTableCell;
}
namespace GlobalNamespace {
class NetworkPlayerTableCell;
}
namespace GlobalNamespace {
class __NetworkPlayersTableView__CellInfo;
}
namespace GlobalNamespace {
struct __NetworkPlayersTableView__CellInfo__CellType;
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
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NetworkPlayersTableView__CellInfo__CellType;
}
namespace GlobalNamespace {
class NetworkPlayersTableView;
}
namespace GlobalNamespace {
class __NetworkPlayersTableView__CellInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType);
MARK_REF_PTR_T(::GlobalNamespace::NetworkPlayersTableView);
MARK_REF_PTR_T(::GlobalNamespace::__NetworkPlayersTableView__CellInfo);
// Type: ::CellType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NetworkPlayersTableView::CellInfo::CellType
struct CORDL_TYPE __NetworkPlayersTableView__CellInfo__CellType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NetworkPlayersTableView__CellInfo__CellType_Unwrapped
  enum struct ____NetworkPlayersTableView__CellInfo__CellType_Unwrapped : int32_t {
    __E_Header = static_cast<int32_t>(0x0),
    __E_Player = static_cast<int32_t>(0x1),
    __E_Options = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NetworkPlayersTableView__CellInfo__CellType_Unwrapped() const noexcept {
    return static_cast<____NetworkPlayersTableView__CellInfo__CellType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayersTableView__CellInfo__CellType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NetworkPlayersTableView__CellInfo__CellType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Header value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const Header;

  /// @brief Field Options value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const Options;

  /// @brief Field Player value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const Player;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CellInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkPlayersTableView::CellInfo*
class CORDL_TYPE __NetworkPlayersTableView__CellInfo : public ::System::Object {
public:
  // Declarations
  using CellType = ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType;

  /// @brief Field headerString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_headerString, put = __cordl_internal_set_headerString))::StringW headerString;

  /// @brief Field lastCellInParty, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_lastCellInParty, put = __cordl_internal_set_lastCellInParty)) bool lastCellInParty;

  /// @brief Field player, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_player, put = __cordl_internal_set_player))::GlobalNamespace::INetworkPlayer* player;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType type;

  static inline ::GlobalNamespace::__NetworkPlayersTableView__CellInfo* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_headerString() const;

  constexpr ::StringW& __cordl_internal_get_headerString();

  constexpr bool const& __cordl_internal_get_lastCellInParty() const;

  constexpr bool& __cordl_internal_get_lastCellInParty();

  constexpr ::GlobalNamespace::INetworkPlayer*& __cordl_internal_get_player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __cordl_internal_get_player() const;

  constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const& __cordl_internal_get_type() const;

  constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_headerString(::StringW value);

  constexpr void __cordl_internal_set_lastCellInParty(bool value);

  constexpr void __cordl_internal_set_player(::GlobalNamespace::INetworkPlayer* value);

  constexpr void __cordl_internal_set_type(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType value);

  /// @brief Method .ctor, addr 0x253a7d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayersTableView__CellInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayersTableView__CellInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPlayersTableView__CellInfo(__NetworkPlayersTableView__CellInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayersTableView__CellInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPlayersTableView__CellInfo(__NetworkPlayersTableView__CellInfo const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType ___type;

  /// @brief Field headerString, offset: 0x18, size: 0x8, def value: None
  ::StringW ___headerString;

  /// @brief Field player, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::INetworkPlayer* ___player;

  /// @brief Field lastCellInParty, offset: 0x28, size: 0x1, def value: None
  bool ___lastCellInParty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayersTableView__CellInfo, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayersTableView__CellInfo, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayersTableView__CellInfo, ___headerString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayersTableView__CellInfo, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkPlayersTableView__CellInfo, ___lastCellInParty) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NetworkPlayersTableView
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkPlayersTableView*
class CORDL_TYPE NetworkPlayersTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CellInfo = ::GlobalNamespace::__NetworkPlayersTableView__CellInfo;

  /// @brief Field _cellInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__cellInfo,
                      put = __cordl_internal_set__cellInfo))::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* _cellInfo;

  /// @brief Field _headerCellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__headerCellPrefab, put = __cordl_internal_set__headerCellPrefab))::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> _headerCellPrefab;

  /// @brief Field _optionsCellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__optionsCellPrefab, put = __cordl_internal_set__optionsCellPrefab))::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell> _optionsCellPrefab;

  /// @brief Field _playerCellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerCellPrefab, put = __cordl_internal_set__playerCellPrefab))::UnityW<::GlobalNamespace::NetworkPlayerTableCell> _playerCellPrefab;

  /// @brief Field _rowHeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rowHeight, put = __cordl_internal_set__rowHeight)) float_t _rowHeight;

  /// @brief Field _selectedCellHasOptions, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__selectedCellHasOptions, put = __cordl_internal_set__selectedCellHasOptions)) bool _selectedCellHasOptions;

  /// @brief Field _selectedCellIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedCellIndex, put = __cordl_internal_set__selectedCellIndex)) int32_t _selectedCellIndex;

  /// @brief Field _selectedPlayerID, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedPlayerID, put = __cordl_internal_set__selectedPlayerID))::StringW _selectedPlayerID;

  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView))::UnityW<::HMUI::TableView> _tableView;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method AddPlayers, addr 0x253a11c, size 0x6b8, virtual false, abstract: false, final false
  inline void AddPlayers(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* players, ::StringW title);

  /// @brief Method CellForIdx, addr 0x2539a90, size 0x5c4, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method CellSize, addr 0x2539a40, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method HandleCellWasPressed, addr 0x253ac68, size 0x4, virtual false, abstract: false, final false
  inline void HandleCellWasPressed(::HMUI::TableView* tableView, ::HMUI::TableCell* tableCell);

  /// @brief Method HasVisibleOptions, addr 0x253a7dc, size 0x350, virtual false, abstract: false, final false
  static inline bool HasVisibleOptions(::GlobalNamespace::INetworkPlayer* player);

  static inline ::GlobalNamespace::NetworkPlayersTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x2539a48, size 0x48, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method SetParties, addr 0x253ab2c, size 0x13c, virtual false, abstract: false, final false
  inline void SetParties(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers,
                         ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers, ::StringW myPartyTitle, ::StringW otherPlayersTitle);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*& __cordl_internal_get__cellInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*> const& __cordl_internal_get__cellInfo() const;

  constexpr ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> const& __cordl_internal_get__headerCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell>& __cordl_internal_get__headerCellPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell> const& __cordl_internal_get__optionsCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell>& __cordl_internal_get__optionsCellPrefab();

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerTableCell> const& __cordl_internal_get__playerCellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkPlayerTableCell>& __cordl_internal_get__playerCellPrefab();

  constexpr float_t const& __cordl_internal_get__rowHeight() const;

  constexpr float_t& __cordl_internal_get__rowHeight();

  constexpr bool const& __cordl_internal_get__selectedCellHasOptions() const;

  constexpr bool& __cordl_internal_get__selectedCellHasOptions();

  constexpr int32_t const& __cordl_internal_get__selectedCellIndex() const;

  constexpr int32_t& __cordl_internal_get__selectedCellIndex();

  constexpr ::StringW const& __cordl_internal_get__selectedPlayerID() const;

  constexpr ::StringW& __cordl_internal_get__selectedPlayerID();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr void __cordl_internal_set__cellInfo(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* value);

  constexpr void __cordl_internal_set__headerCellPrefab(::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> value);

  constexpr void __cordl_internal_set__optionsCellPrefab(::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell> value);

  constexpr void __cordl_internal_set__playerCellPrefab(::UnityW<::GlobalNamespace::NetworkPlayerTableCell> value);

  constexpr void __cordl_internal_set__rowHeight(float_t value);

  constexpr void __cordl_internal_set__selectedCellHasOptions(bool value);

  constexpr void __cordl_internal_set__selectedCellIndex(int32_t value);

  constexpr void __cordl_internal_set__selectedPlayerID(::StringW value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  /// @brief Method .ctor, addr 0x253ac6c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayersTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayersTableView(NetworkPlayersTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayersTableView(NetworkPlayersTableView const&) = delete;

  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _playerCellPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerTableCell> ____playerCellPrefab;

  /// @brief Field _optionsCellPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkPlayerOptionsTableCell> ____optionsCellPrefab;

  /// @brief Field _headerCellPrefab, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::LevelPackHeaderTableCell> ____headerCellPrefab;

  /// @brief Field _rowHeight, offset: 0x38, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _cellInfo, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* ____cellInfo;

  /// @brief Field _selectedCellIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ____selectedCellIndex;

  /// @brief Field _selectedPlayerID, offset: 0x50, size: 0x8, def value: None
  ::StringW ____selectedPlayerID;

  /// @brief Field _selectedCellHasOptions, offset: 0x58, size: 0x1, def value: None
  bool ____selectedCellHasOptions;

  /// @brief Field kHeaderCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kHeaderCellIdentifier{ u"HeaderCell" };

  /// @brief Field kOptionsCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kOptionsCellIdentifier{ u"OptionsCell" };

  /// @brief Field kPlayerCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerCellIdentifier{ u"PlayerCell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayersTableView, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____tableView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____playerCellPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____optionsCellPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____headerCellPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____rowHeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____cellInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____selectedCellIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____selectedPlayerID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkPlayersTableView, ____selectedCellHasOptions) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, "", "NetworkPlayersTableView/CellInfo/CellType");
NEED_NO_BOX(::GlobalNamespace::NetworkPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayersTableView*, "", "NetworkPlayersTableView");
NEED_NO_BOX(::GlobalNamespace::__NetworkPlayersTableView__CellInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayersTableView__CellInfo*, "", "NetworkPlayersTableView/CellInfo");
