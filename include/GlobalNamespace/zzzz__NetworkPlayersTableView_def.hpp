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
class LevelPackHeaderTableCell;
}
namespace GlobalNamespace {
class __NetworkPlayersTableView__CellInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
class TableCell;
}
namespace GlobalNamespace {
class NetworkPlayerOptionsTableCell;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class NetworkPlayerTableCell;
}
namespace GlobalNamespace {
struct __NetworkPlayersTableView__CellInfo__CellType;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5585))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NetworkPlayersTableView__CellInfo__CellType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayersTableView__CellInfo__CellType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Header value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const Header;

  /// @brief Field Player value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const Player;

  /// @brief Field Options value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const Options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::CellInfo
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5585)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5586))
// CS Name: ::NetworkPlayersTableView::CellInfo*
class CORDL_TYPE __NetworkPlayersTableView__CellInfo : public ::System::Object {
public:
  // Declarations
  using CellType = ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType type;

  /// @brief Field headerString, offset 0x18, size 0x8
  __declspec(property(get = __get_headerString, put = __set_headerString))::StringW headerString;

  /// @brief Field player, offset 0x20, size 0x8
  __declspec(property(get = __get_player, put = __set_player))::GlobalNamespace::INetworkPlayer* player;

  /// @brief Field lastCellInParty, offset 0x28, size 0x1
  __declspec(property(get = __get_lastCellInParty, put = __set_lastCellInParty)) bool lastCellInParty;

  constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType& __get_type();

  constexpr ::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType const& __get_type() const;

  constexpr void __set_type(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType value);

  constexpr ::StringW& __get_headerString();

  constexpr ::StringW const& __get_headerString() const;

  constexpr void __set_headerString(::StringW value);

  constexpr ::GlobalNamespace::INetworkPlayer*& __get_player();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::INetworkPlayer*> const& __get_player() const;

  constexpr void __set_player(::GlobalNamespace::INetworkPlayer* value);

  constexpr bool& __get_lastCellInParty();

  constexpr bool const& __get_lastCellInParty() const;

  constexpr void __set_lastCellInParty(bool value);

  static inline ::GlobalNamespace::__NetworkPlayersTableView__CellInfo* New_ctor();

  /// @brief Method .ctor addr 0x22a958c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayersTableView__CellInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkPlayersTableView__CellInfo(__NetworkPlayersTableView__CellInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkPlayersTableView__CellInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkPlayersTableView__CellInfo(__NetworkPlayersTableView__CellInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkPlayersTableView__CellInfo();

public:
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

} // namespace GlobalNamespace
// Type: ::NetworkPlayersTableView
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5587))
// CS Name: ::NetworkPlayersTableView*
class CORDL_TYPE NetworkPlayersTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CellInfo = ::GlobalNamespace::__NetworkPlayersTableView__CellInfo;

  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _playerCellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__playerCellPrefab, put = __set__playerCellPrefab))::GlobalNamespace::NetworkPlayerTableCell* _playerCellPrefab;

  /// @brief Field _optionsCellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__optionsCellPrefab, put = __set__optionsCellPrefab))::GlobalNamespace::NetworkPlayerOptionsTableCell* _optionsCellPrefab;

  /// @brief Field _headerCellPrefab, offset 0x30, size 0x8
  __declspec(property(get = __get__headerCellPrefab, put = __set__headerCellPrefab))::GlobalNamespace::LevelPackHeaderTableCell* _headerCellPrefab;

  /// @brief Field _rowHeight, offset 0x38, size 0x4
  __declspec(property(get = __get__rowHeight, put = __set__rowHeight)) float_t _rowHeight;

  /// @brief Field _cellInfo, offset 0x40, size 0x8
  __declspec(property(get = __get__cellInfo, put = __set__cellInfo))::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* _cellInfo;

  /// @brief Field _selectedCellIndex, offset 0x48, size 0x4
  __declspec(property(get = __get__selectedCellIndex, put = __set__selectedCellIndex)) int32_t _selectedCellIndex;

  /// @brief Field _selectedPlayerID, offset 0x50, size 0x8
  __declspec(property(get = __get__selectedPlayerID, put = __set__selectedPlayerID))::StringW _selectedPlayerID;

  /// @brief Field _selectedCellHasOptions, offset 0x58, size 0x1
  __declspec(property(get = __get__selectedCellHasOptions, put = __set__selectedCellHasOptions)) bool _selectedCellHasOptions;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::GlobalNamespace::NetworkPlayerTableCell*& __get__playerCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerTableCell*> const& __get__playerCellPrefab() const;

  constexpr void __set__playerCellPrefab(::GlobalNamespace::NetworkPlayerTableCell* value);

  constexpr ::GlobalNamespace::NetworkPlayerOptionsTableCell*& __get__optionsCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NetworkPlayerOptionsTableCell*> const& __get__optionsCellPrefab() const;

  constexpr void __set__optionsCellPrefab(::GlobalNamespace::NetworkPlayerOptionsTableCell* value);

  constexpr ::GlobalNamespace::LevelPackHeaderTableCell*& __get__headerCellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelPackHeaderTableCell*> const& __get__headerCellPrefab() const;

  constexpr void __set__headerCellPrefab(::GlobalNamespace::LevelPackHeaderTableCell* value);

  constexpr float_t& __get__rowHeight();

  constexpr float_t const& __get__rowHeight() const;

  constexpr void __set__rowHeight(float_t value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*& __get__cellInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>*> const& __get__cellInfo() const;

  constexpr void __set__cellInfo(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkPlayersTableView__CellInfo*>* value);

  constexpr int32_t& __get__selectedCellIndex();

  constexpr int32_t const& __get__selectedCellIndex() const;

  constexpr void __set__selectedCellIndex(int32_t value);

  constexpr ::StringW& __get__selectedPlayerID();

  constexpr ::StringW const& __get__selectedPlayerID() const;

  constexpr void __set__selectedPlayerID(::StringW value);

  constexpr bool& __get__selectedCellHasOptions();

  constexpr bool const& __get__selectedCellHasOptions() const;

  constexpr void __set__selectedCellHasOptions(bool value);

  /// @brief Method CellSize addr 0x22a87f8 size 0x8 virtual true final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells addr 0x22a8800 size 0x48 virtual true final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx addr 0x22a8848 size 0x5c4 virtual true final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method AddPlayers addr 0x22a8ed4 size 0x6b8 virtual false final false
  inline void AddPlayers(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* players, ::StringW title);

  /// @brief Method SetParties addr 0x22a98e4 size 0x13c virtual false final false
  inline void SetParties(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* partyPlayers,
                         ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* otherPlayers, ::StringW myPartyTitle, ::StringW otherPlayersTitle);

  /// @brief Method HandleCellWasPressed addr 0x22a9a20 size 0x4 virtual false final false
  inline void HandleCellWasPressed(::HMUI::TableView* tableView, ::HMUI::TableCell* tableCell);

  /// @brief Method HasVisibleOptions addr 0x22a9594 size 0x350 virtual false final false
  static inline bool HasVisibleOptions(::GlobalNamespace::INetworkPlayer* player);

  static inline ::GlobalNamespace::NetworkPlayersTableView* New_ctor();

  /// @brief Method .ctor addr 0x22a9a24 size 0x8c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkPlayersTableView(NetworkPlayersTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkPlayersTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkPlayersTableView(NetworkPlayersTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkPlayersTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _playerCellPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPlayerTableCell* ____playerCellPrefab;

  /// @brief Field _optionsCellPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::NetworkPlayerOptionsTableCell* ____optionsCellPrefab;

  /// @brief Field _headerCellPrefab, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LevelPackHeaderTableCell* ____headerCellPrefab;

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

  /// @brief Field kPlayerCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kPlayerCellIdentifier{ u"PlayerCell" };

  /// @brief Field kHeaderCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kHeaderCellIdentifier{ u"HeaderCell" };

  /// @brief Field kOptionsCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kOptionsCellIdentifier{ u"OptionsCell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkPlayersTableView, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayersTableView__CellInfo__CellType, "", "NetworkPlayersTableView/CellInfo/CellType");
NEED_NO_BOX(::GlobalNamespace::NetworkPlayersTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkPlayersTableView*, "", "NetworkPlayersTableView");
NEED_NO_BOX(::GlobalNamespace::__NetworkPlayersTableView__CellInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkPlayersTableView__CellInfo*, "", "NetworkPlayersTableView/CellInfo");
