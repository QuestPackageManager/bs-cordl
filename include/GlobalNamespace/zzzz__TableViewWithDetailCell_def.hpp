#pragma once
// IWYU pragma private; include "GlobalNamespace/TableViewWithDetailCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TableViewWithDetailCell)
namespace GlobalNamespace {
class TableViewWithDetailCell_IDataSource;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class TableViewWithDetailCell;
}
namespace GlobalNamespace {
class TableViewWithDetailCell_IDataSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TableViewWithDetailCell);
MARK_REF_PTR_T(::GlobalNamespace::TableViewWithDetailCell_IDataSource);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: TableViewWithDetailCell/IDataSource
class CORDL_TYPE TableViewWithDetailCell_IDataSource {
public:
  // Declarations
  /// @brief Method CellForContent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> CellForContent(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t idx, bool detailOpened);

  /// @brief Method CellForDetail, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> CellForDetail(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t contentIdx);

  /// @brief Method CellSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t NumberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "TableViewWithDetailCell_IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableViewWithDetailCell_IDataSource(TableViewWithDetailCell_IDataSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Dependencies HMUI.TableView, HMUI.TableView::IDataSource
namespace GlobalNamespace {
// Is value type: false
// CS Name: TableViewWithDetailCell
class CORDL_TYPE TableViewWithDetailCell : public ::HMUI::TableView {
public:
  // Declarations
  using IDataSource = ::GlobalNamespace::TableViewWithDetailCell_IDataSource;

  /// @brief Field _dataSource, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource)) ::GlobalNamespace::TableViewWithDetailCell_IDataSource* _dataSource;

  /// @brief Field _selectedId, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get__selectedId, put = __cordl_internal_set__selectedId)) int32_t _selectedId;

  __declspec(property(get = get_dataSource, put = set_dataSource)) ::GlobalNamespace::TableViewWithDetailCell_IDataSource* dataSource;

  /// @brief Field didDeselectContentCellEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeselectContentCellEvent,
                      put = __cordl_internal_set_didDeselectContentCellEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* didDeselectContentCellEvent;

  /// @brief Field didSelectContentCellEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectContentCellEvent,
                      put = __cordl_internal_set_didSelectContentCellEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* didSelectContentCellEvent;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x39e2bbc, size 0x1e0, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x39e2a68, size 0xa0, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method DidSelectCellWithIdx, addr 0x39e2e00, size 0x130, virtual true, abstract: false, final false
  inline void DidSelectCellWithIdx(int32_t idx);

  static inline ::GlobalNamespace::TableViewWithDetailCell* New_ctor();

  /// @brief Method NumberOfCells, addr 0x39e2b08, size 0xb4, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method ReloadData, addr 0x39e2d9c, size 0x28, virtual true, abstract: false, final false
  inline void ReloadData();

  /// @brief Method ReloadData, addr 0x39e2dc4, size 0x3c, virtual false, abstract: false, final false
  inline void ReloadData(int32_t currentNewIndex);

  constexpr ::GlobalNamespace::TableViewWithDetailCell_IDataSource* const& __cordl_internal_get__dataSource() const;

  constexpr ::GlobalNamespace::TableViewWithDetailCell_IDataSource*& __cordl_internal_get__dataSource();

  constexpr int32_t const& __cordl_internal_get__selectedId() const;

  constexpr int32_t& __cordl_internal_get__selectedId();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* const& __cordl_internal_get_didDeselectContentCellEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*& __cordl_internal_get_didDeselectContentCellEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* const& __cordl_internal_get_didSelectContentCellEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*& __cordl_internal_get_didSelectContentCellEvent();

  constexpr void __cordl_internal_set__dataSource(::GlobalNamespace::TableViewWithDetailCell_IDataSource* value);

  constexpr void __cordl_internal_set__selectedId(int32_t value);

  constexpr void __cordl_internal_set_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  constexpr void __cordl_internal_set_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method .ctor, addr 0x39e2f30, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didDeselectContentCellEvent, addr 0x39e28d8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method add_didSelectContentCellEvent, addr 0x39e2778, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method get_dataSource, addr 0x39e2a38, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::TableViewWithDetailCell_IDataSource* get_dataSource();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

  /// @brief Method remove_didDeselectContentCellEvent, addr 0x39e2988, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method remove_didSelectContentCellEvent, addr 0x39e2828, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value);

  /// @brief Method set_dataSource, addr 0x39e2a40, size 0x28, virtual false, abstract: false, final false
  inline void set_dataSource(::GlobalNamespace::TableViewWithDetailCell_IDataSource* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16011 };

  /// @brief Field didSelectContentCellEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* ___didSelectContentCellEvent;

  /// @brief Field didDeselectContentCellEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* ___didDeselectContentCellEvent;

  /// @brief Field _dataSource, offset: 0xd8, size: 0x8, def value: None
  ::GlobalNamespace::TableViewWithDetailCell_IDataSource* ____dataSource;

  /// @brief Field _selectedId, offset: 0xe0, size: 0x4, def value: None
  int32_t ____selectedId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ___didSelectContentCellEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ___didDeselectContentCellEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ____dataSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TableViewWithDetailCell, ____selectedId) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TableViewWithDetailCell, 0xe8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TableViewWithDetailCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TableViewWithDetailCell*, "", "TableViewWithDetailCell");
NEED_NO_BOX(::GlobalNamespace::TableViewWithDetailCell_IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TableViewWithDetailCell_IDataSource*, "", "TableViewWithDetailCell/IDataSource");
