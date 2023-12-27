#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ResultsTableView)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class ResultsTableCell;
}
namespace GlobalNamespace {
class MultiplayerPlayerResultsData;
}
// Forward declare root types
namespace GlobalNamespace {
class ResultsTableView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ResultsTableView);
// Type: ::ResultsTableView
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5807))
// CS Name: ::ResultsTableView*
class CORDL_TYPE ResultsTableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _tableView, offset 0x18, size 0x8
  __declspec(property(get = __get__tableView, put = __set__tableView))::HMUI::TableView* _tableView;

  /// @brief Field _cellPrefab, offset 0x20, size 0x8
  __declspec(property(get = __get__cellPrefab, put = __set__cellPrefab))::GlobalNamespace::ResultsTableCell* _cellPrefab;

  /// @brief Field _rowHeight, offset 0x28, size 0x4
  __declspec(property(get = __get__rowHeight, put = __set__rowHeight)) float_t _rowHeight;

  /// @brief Field _dataList, offset 0x30, size 0x8
  __declspec(property(get = __get__dataList, put = __set__dataList))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* _dataList;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr ::HMUI::TableView*& __get__tableView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::TableView*> const& __get__tableView() const;

  constexpr void __set__tableView(::HMUI::TableView* value);

  constexpr ::GlobalNamespace::ResultsTableCell*& __get__cellPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsTableCell*> const& __get__cellPrefab() const;

  constexpr void __set__cellPrefab(::GlobalNamespace::ResultsTableCell* value);

  constexpr float_t& __get__rowHeight();

  constexpr float_t const& __get__rowHeight() const;

  constexpr void __set__rowHeight(float_t value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& __get__dataList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*> const& __get__dataList() const;

  constexpr void __set__dataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* value);

  /// @brief Method CellSize addr 0x22e84dc size 0x8 virtual true final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells addr 0x22e84e4 size 0xa0 virtual true final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx addr 0x22e8584 size 0x1d0 virtual true final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method SetData addr 0x22e8754 size 0x2c virtual false final false
  inline void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* dataList);

  static inline ::GlobalNamespace::ResultsTableView* New_ctor();

  /// @brief Method .ctor addr 0x22e8780 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResultsTableView(ResultsTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResultsTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResultsTableView(ResultsTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResultsTableView();

public:
  /// @brief Field _tableView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::TableView* ____tableView;

  /// @brief Field _cellPrefab, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::ResultsTableCell* ____cellPrefab;

  /// @brief Field _rowHeight, offset: 0x28, size: 0x4, def value: None
  float_t ____rowHeight;

  /// @brief Field _dataList, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* ____dataList;

  /// @brief Field kCellIdentifier offset 0xffffffff size 0x8
  static constexpr ::ConstString kCellIdentifier{ u"Cell" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ResultsTableView, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ResultsTableView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ResultsTableView*, "", "ResultsTableView");
