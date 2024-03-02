#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TableViewWithDetailCell)
namespace GlobalNamespace {
class __TableViewWithDetailCell__IDataSource;
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
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TableViewWithDetailCell;
}
namespace GlobalNamespace {
class __TableViewWithDetailCell__IDataSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TableViewWithDetailCell);
MARK_REF_PTR_T(::GlobalNamespace::__TableViewWithDetailCell__IDataSource);
// Type: ::IDataSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TableViewWithDetailCell::IDataSource*
class CORDL_TYPE __TableViewWithDetailCell__IDataSource {
public:
  // Declarations
  /// @brief Method CellForContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::HMUI::TableCell> CellForContent(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t idx, bool detailOpened);

  /// @brief Method CellForDetail, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::HMUI::TableCell> CellForDetail(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t contentIdx);

  /// @brief Method CellSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t NumberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "__TableViewWithDetailCell__IDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TableViewWithDetailCell__IDataSource(__TableViewWithDetailCell__IDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TableViewWithDetailCell__IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TableViewWithDetailCell__IDataSource(__TableViewWithDetailCell__IDataSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::TableViewWithDetailCell
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TableViewWithDetailCell*
class CORDL_TYPE TableViewWithDetailCell : public ::HMUI::TableView {
public:
  // Declarations
  using IDataSource = ::GlobalNamespace::__TableViewWithDetailCell__IDataSource;

  /// @brief Field _dataSource, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource))::GlobalNamespace::__TableViewWithDetailCell__IDataSource* _dataSource;

  /// @brief Field _selectedId, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedId, put = __cordl_internal_set__selectedId)) int32_t _selectedId;

  __declspec(property(get = get_dataSource, put = set_dataSource))::GlobalNamespace::__TableViewWithDetailCell__IDataSource* dataSource;

  /// @brief Field didDeselectContentCellEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeselectContentCellEvent,
                      put = __cordl_internal_set_didDeselectContentCellEvent))::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* didDeselectContentCellEvent;

  /// @brief Field didSelectContentCellEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectContentCellEvent,
                      put = __cordl_internal_set_didSelectContentCellEvent))::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* didSelectContentCellEvent;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x22786e4, size 0x1e0, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x2278590, size 0xa0, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method DidSelectCellWithIdx, addr 0x2278928, size 0x130, virtual true, abstract: false, final false
  inline void DidSelectCellWithIdx(int32_t idx);

  static inline ::GlobalNamespace::TableViewWithDetailCell* New_ctor();

  /// @brief Method NumberOfCells, addr 0x2278630, size 0xb4, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method ReloadData, addr 0x22788c4, size 0x28, virtual true, abstract: false, final false
  inline void ReloadData();

  /// @brief Method ReloadData, addr 0x22788ec, size 0x3c, virtual false, abstract: false, final false
  inline void ReloadData(int32_t currentNewIndex);

  constexpr ::GlobalNamespace::__TableViewWithDetailCell__IDataSource*& __cordl_internal_get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*> const& __cordl_internal_get__dataSource() const;

  constexpr int32_t const& __cordl_internal_get__selectedId() const;

  constexpr int32_t& __cordl_internal_get__selectedId();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*& __cordl_internal_get_didDeselectContentCellEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*> const& __cordl_internal_get_didDeselectContentCellEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*& __cordl_internal_get_didSelectContentCellEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*> const& __cordl_internal_get_didSelectContentCellEvent() const;

  constexpr void __cordl_internal_set__dataSource(::GlobalNamespace::__TableViewWithDetailCell__IDataSource* value);

  constexpr void __cordl_internal_set__selectedId(int32_t value);

  constexpr void __cordl_internal_set_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  constexpr void __cordl_internal_set_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method .ctor, addr 0x2278a58, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didDeselectContentCellEvent, addr 0x2278404, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method add_didSelectContentCellEvent, addr 0x22782a4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method get_dataSource, addr 0x2278564, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__TableViewWithDetailCell__IDataSource* get_dataSource();

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

  /// @brief Method remove_didDeselectContentCellEvent, addr 0x22784b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method remove_didSelectContentCellEvent, addr 0x2278354, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method set_dataSource, addr 0x227856c, size 0x24, virtual false, abstract: false, final false
  inline void set_dataSource(::GlobalNamespace::__TableViewWithDetailCell__IDataSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableViewWithDetailCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableViewWithDetailCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableViewWithDetailCell(TableViewWithDetailCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableViewWithDetailCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableViewWithDetailCell(TableViewWithDetailCell const&) = delete;

  /// @brief Field didSelectContentCellEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* ___didSelectContentCellEvent;

  /// @brief Field didDeselectContentCellEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* ___didDeselectContentCellEvent;

  /// @brief Field _dataSource, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::__TableViewWithDetailCell__IDataSource* ____dataSource;

  /// @brief Field _selectedId, offset: 0xc0, size: 0x4, def value: None
  int32_t ____selectedId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TableViewWithDetailCell, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ___didSelectContentCellEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ___didDeselectContentCellEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ____dataSource) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ____selectedId) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TableViewWithDetailCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TableViewWithDetailCell*, "", "TableViewWithDetailCell");
NEED_NO_BOX(::GlobalNamespace::__TableViewWithDetailCell__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TableViewWithDetailCell__IDataSource*, "", "TableViewWithDetailCell/IDataSource");
