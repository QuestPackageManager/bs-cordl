#pragma once
// IWYU pragma private; include "GlobalNamespace/ResultsTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResultsTableView)
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
namespace GlobalNamespace {
class ResultsTableCell;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView_IDataSource;
}
namespace HMUI {
class TableView;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsTableView);
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ResultsTableView
class CORDL_TYPE ResultsTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cellPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cellPrefab, put = __cordl_internal_set__cellPrefab)) ::UnityW<::GlobalNamespace::ResultsTableCell> _cellPrefab;

  /// @brief Field _dataList, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__dataList,
                      put = __cordl_internal_set__dataList)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* _dataList;

  /// @brief Field _rowHeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rowHeight, put = __cordl_internal_set__rowHeight)) float_t _rowHeight;

  /// @brief Field _tableView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__tableView, put = __cordl_internal_set__tableView)) ::UnityW<::HMUI::TableView> _tableView;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x56e7ee0, size 0x1e4, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x56e7e34, size 0x8, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  static inline ::GlobalNamespace::ResultsTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x56e7e3c, size 0xa4, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method SetData, addr 0x56e80c4, size 0x30, virtual false, abstract: false, final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);

  constexpr ::UnityW<::GlobalNamespace::ResultsTableCell> const& __cordl_internal_get__cellPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::ResultsTableCell>& __cordl_internal_get__cellPrefab();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* const& __cordl_internal_get__dataList() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& __cordl_internal_get__dataList();

  constexpr float_t const& __cordl_internal_get__rowHeight() const;

  constexpr float_t& __cordl_internal_get__rowHeight();

  constexpr ::UnityW<::HMUI::TableView> const& __cordl_internal_get__tableView() const;

  constexpr ::UnityW<::HMUI::TableView>& __cordl_internal_get__tableView();

  constexpr void __cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::ResultsTableCell> value);

  constexpr void __cordl_internal_set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value);

  constexpr void __cordl_internal_set__rowHeight(float_t value);

  constexpr void __cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value);

  /// @brief Method .ctor, addr 0x56e80f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsTableView(ResultsTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsTableView(ResultsTableView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6582 };

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"Cell" };

  /// @brief Field _tableView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::TableView> ____tableView;

  /// @brief Field _cellPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ResultsTableCell> ____cellPrefab;

  /// @brief Field _rowHeight, offset: 0x30, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _dataList, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* ____dataList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResultsTableView, ____tableView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableView, ____cellPrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableView, ____rowHeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResultsTableView, ____dataList) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsTableView, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableView*, "", "ResultsTableView");
