#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DifficultyTableView)
namespace GlobalNamespace {
class DifficultyTableCell;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
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
class DifficultyTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DifficultyTableView);
// Type: ::DifficultyTableView
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5776))
// CS Name: ::DifficultyTableView*
class CORDL_TYPE DifficultyTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView))::UnityW<::HMUI::TableView> _tableView;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab))::UnityW<::GlobalNamespace::DifficultyTableCell> _cellPrefab;

  /// @brief Field _nonSelectableCellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__nonSelectableCellPrefab,
                      put = __cordl_internal_set__nonSelectableCellPrefab))::UnityW<::GlobalNamespace::DifficultyTableCell> _nonSelectableCellPrefab;

  /// @brief Field _cellHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cellHeight, put = __cordl_internal_set__cellHeight)) float_t _cellHeight;

  /// @brief Field didSelectRow, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectRow, put = __cordl_internal_set_didSelectRow))::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>* didSelectRow;

  /// @brief Field _difficultyBeatmaps, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__difficultyBeatmaps,
                      put = __cordl_internal_set__difficultyBeatmaps))::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*> _difficultyBeatmaps;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  constexpr ::UnityW<::GlobalNamespace::DifficultyTableCell>& __cordl_internal_get__cellPrefab();

  constexpr ::UnityW<::GlobalNamespace::DifficultyTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::DifficultyTableCell> value);

  constexpr ::UnityW<::GlobalNamespace::DifficultyTableCell>& __cordl_internal_get__nonSelectableCellPrefab();

  constexpr ::UnityW<::GlobalNamespace::DifficultyTableCell> const& __cordl_internal_get__nonSelectableCellPrefab() const;

  constexpr void __cordl_internal_set__nonSelectableCellPrefab(::UnityW<::GlobalNamespace::DifficultyTableCell> value);

  constexpr float_t& __cordl_internal_get__cellHeight();

  constexpr float_t const& __cordl_internal_get__cellHeight() const;

  constexpr void __cordl_internal_set__cellHeight(float_t value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>*& __cordl_internal_get_didSelectRow();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>*> const& __cordl_internal_get_didSelectRow() const;

  constexpr void __cordl_internal_set_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>* value);

  constexpr ::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*>& __cordl_internal_get__difficultyBeatmaps();

  constexpr ::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*> const& __cordl_internal_get__difficultyBeatmaps() const;

  constexpr void __cordl_internal_set__difficultyBeatmaps(::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*> value);

  /// @brief Method add_didSelectRow, addr 0x22e03ec, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>* value);

  /// @brief Method remove_didSelectRow, addr 0x22e049c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>* value);

  /// @brief Method Init, addr 0x22e054c, size 0xec, virtual false, abstract: false, final false
  inline void Init(::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method SetDifficultyBeatmaps, addr 0x22e0638, size 0x28, virtual false, abstract: false, final false
  inline void SetDifficultyBeatmaps(::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*> difficultyBeatmaps);

  /// @brief Method CellSize, addr 0x22e0660, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x22e0668, size 0x20, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx, addr 0x22e0688, size 0x354, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method HandleDidSelectRowEvent, addr 0x22e09dc, size 0x54, virtual false, abstract: false, final false
  inline void HandleDidSelectRowEvent(::HMUI::TableView* tableView, int32_t row);

  /// @brief Method SelectRow, addr 0x22e0a30, size 0x20, virtual false, abstract: false, final false
  inline void SelectRow(int32_t row, bool callbackTable);

  /// @brief Method SelectRow, addr 0x22e0a50, size 0x84, virtual false, abstract: false, final false
  inline void SelectRow(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, bool callbackTable);

  /// @brief Method ClearSelection, addr 0x22e0ad4, size 0x1c, virtual false, abstract: false, final false
  inline void ClearSelection();

  static inline ::GlobalNamespace::DifficultyTableView* New_ctor();

  /// @brief Method .ctor, addr 0x22e0af0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyTableView(DifficultyTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyTableView(DifficultyTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DifficultyTableCell> ____cellPrefab;

  /// @brief Field _nonSelectableCellPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DifficultyTableCell> ____nonSelectableCellPrefab;

  /// @brief Field _cellHeight, offset: 0x30, size: 0x4, def value: None
  float_t ____cellHeight;

  /// @brief Field didSelectRow, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::DifficultyTableView>, int32_t>* ___didSelectRow;

  /// @brief Field _difficultyBeatmaps, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::IDifficultyBeatmap*, ::Array<::GlobalNamespace::IDifficultyBeatmap*>*> ____difficultyBeatmaps;

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"Cell" };

  /// @brief Field kNonSelectableCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kNonSelectableCellIdentifier{ u"NonSelectableCell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyTableView, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableView, ____tableView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableView, ____cellPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableView, ____nonSelectableCellPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableView, ____cellHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableView, ___didSelectRow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyTableView, ____difficultyBeatmaps) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyTableView*, "", "DifficultyTableView");
