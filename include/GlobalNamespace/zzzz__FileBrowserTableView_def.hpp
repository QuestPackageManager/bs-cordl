#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FileBrowserTableView)
namespace GlobalNamespace {
class FileBrowserItem;
}
namespace GlobalNamespace {
class FileBrowserTableCell;
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
class FileBrowserTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FileBrowserTableView);
// Type: ::FileBrowserTableView
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4786))
// CS Name: ::FileBrowserTableView*
class CORDL_TYPE FileBrowserTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView))::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::FileBrowserTableCell> _cellPrefab;

  /// @brief Field _cellHeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field didSelectRow, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectRow,
                      put = __cordl_internal_set_didSelectRow))::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* didSelectRow;

  /// @brief Field _items, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items))::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> _items;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr ::UnityW<::GlobalNamespace::FileBrowserTableCell>& __cordl_internal_get__cellPrefab();

  constexpr ::UnityW<::GlobalNamespace::FileBrowserTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::FileBrowserTableCell> value);

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*& __cordl_internal_get_didSelectRow();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*> const&
  __cordl_internal_get_didSelectRow() const;

  constexpr void __cordl_internal_set_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* value);

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*>& __cordl_internal_get__items();

  constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> const& __cordl_internal_get__items() const;

  constexpr void __cordl_internal_set__items(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> value);

  /// @brief Method add_didSelectRow, addr 0x23e022c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* value);

  /// @brief Method remove_didSelectRow, addr 0x23e02dc, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* value);

  /// @brief Method Init, addr 0x23e038c, size 0x108, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> items);

  /// @brief Method SetItems, addr 0x23e0494, size 0x44, virtual false, abstract: false, final false
  inline void SetItems(::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> items);

  /// @brief Method SelectAndScrollRowToItemWithPath, addr 0x23e04d8, size 0x94, virtual false, abstract: false, final false
  inline bool SelectAndScrollRowToItemWithPath(::StringW folderPath);

  /// @brief Method CellSize, addr 0x23e05b8, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x23e05c0, size 0x18, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx, addr 0x23e05d8, size 0x178, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method HandleDidSelectRowEvent, addr 0x23e0750, size 0x50, virtual false, abstract: false, final false
  inline void HandleDidSelectRowEvent(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method SelectAndScrollRow, addr 0x23e056c, size 0x4c, virtual false, abstract: false, final false
  inline void SelectAndScrollRow(int32_t row);

  /// @brief Method ClearSelection, addr 0x23e07a0, size 0x5c, virtual false, abstract: false, final false
  inline void ClearSelection(bool animated, bool scrollToRow0);

  static inline ::GlobalNamespace::FileBrowserTableView* New_ctor();

  /// @brief Method .ctor, addr 0x23e07fc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileBrowserTableView(FileBrowserTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileBrowserTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileBrowserTableView(FileBrowserTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileBrowserTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FileBrowserTableCell> ____cellPrefab;

  /// @brief Field _cellHeight, offset: 0x28, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field didSelectRow, offset: 0x30, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* ___didSelectRow;

  /// @brief Field _items, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::FileBrowserItem*, ::Array<::GlobalNamespace::FileBrowserItem*>*> ____items;

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"Cell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FileBrowserTableView, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableView, ____tableView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableView, ____cellPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableView, ____cellHeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableView, ___didSelectRow) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FileBrowserTableView, ____items) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FileBrowserTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FileBrowserTableView*, "", "FileBrowserTableView");
