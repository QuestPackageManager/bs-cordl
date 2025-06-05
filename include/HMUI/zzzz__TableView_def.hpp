#pragma once
// IWYU pragma private; include "HMUI/TableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TableView)
namespace HMUI {
class FloatRectOffset;
}
namespace HMUI {
class ScrollView;
}
namespace HMUI {
struct SelectableCell_TransitionType;
}
namespace HMUI {
class SelectableCell;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
struct TableViewSelectionType;
}
namespace HMUI {
class TableView_CellsGroup;
}
namespace HMUI {
class TableView_IDataSource;
}
namespace HMUI {
struct TableView_ScrollPositionType;
}
namespace HMUI {
struct TableView_TableType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace UnityEngine {
struct RectTransform_Axis;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace HMUI {
struct TableView_ScrollPositionType;
}
namespace HMUI {
struct TableView_TableType;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class TableView_CellsGroup;
}
namespace HMUI {
class TableView_IDataSource;
}
// Write type traits
MARK_VAL_T(::HMUI::TableView_ScrollPositionType);
MARK_VAL_T(::HMUI::TableView_TableType);
MARK_REF_PTR_T(::HMUI::TableView);
MARK_REF_PTR_T(::HMUI::TableView_CellsGroup);
MARK_REF_PTR_T(::HMUI::TableView_IDataSource);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.TableView/TableType
struct CORDL_TYPE TableView_TableType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TableView_TableType_Unwrapped
  enum struct __TableView_TableType_Unwrapped : int32_t {
    __E_Vertical = static_cast<int32_t>(0x0),
    __E_Horizontal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TableView_TableType_Unwrapped() const noexcept {
    return static_cast<__TableView_TableType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TableView_TableType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TableView_TableType(int32_t value__) noexcept;

  /// @brief Field Horizontal value: I32(1)
  static ::HMUI::TableView_TableType const Horizontal;

  /// @brief Field Vertical value: I32(0)
  static ::HMUI::TableView_TableType const Vertical;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16120 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TableView_TableType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TableView_TableType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.TableView/ScrollPositionType
struct CORDL_TYPE TableView_ScrollPositionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TableView_ScrollPositionType_Unwrapped
  enum struct __TableView_ScrollPositionType_Unwrapped : int32_t {
    __E_Beginning = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_End = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TableView_ScrollPositionType_Unwrapped() const noexcept {
    return static_cast<__TableView_ScrollPositionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TableView_ScrollPositionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TableView_ScrollPositionType(int32_t value__) noexcept;

  /// @brief Field Beginning value: I32(0)
  static ::HMUI::TableView_ScrollPositionType const Beginning;

  /// @brief Field Center value: I32(1)
  static ::HMUI::TableView_ScrollPositionType const Center;

  /// @brief Field End value: I32(2)
  static ::HMUI::TableView_ScrollPositionType const End;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16121 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TableView_ScrollPositionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TableView_ScrollPositionType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies System.Object
namespace HMUI {
// Is value type: false
// CS Name: HMUI.TableView/CellsGroup
class CORDL_TYPE TableView_CellsGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cells, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cells, put = __cordl_internal_set__cells)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* _cells;

  /// @brief Field _reuseIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__reuseIdentifier, put = __cordl_internal_set__reuseIdentifier)) ::StringW _reuseIdentifier;

  __declspec(property(get = get_cells)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* cells;

  __declspec(property(get = get_reuseIdentifier)) ::StringW reuseIdentifier;

  static inline ::HMUI::TableView_CellsGroup* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* const& __cordl_internal_get__cells() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& __cordl_internal_get__cells();

  constexpr ::StringW const& __cordl_internal_get__reuseIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__reuseIdentifier();

  constexpr void __cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value);

  constexpr void __cordl_internal_set__reuseIdentifier(::StringW value);

  /// @brief Method .ctor, addr 0x3a02034, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cells, addr 0x3a0202c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* get_cells();

  /// @brief Method get_reuseIdentifier, addr 0x3a02024, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_reuseIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableView_CellsGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableView_CellsGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableView_CellsGroup(TableView_CellsGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableView_CellsGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableView_CellsGroup(TableView_CellsGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16122 };

  /// @brief Field _reuseIdentifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ____reuseIdentifier;

  /// @brief Field _cells, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* ____cells;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TableView_CellsGroup, ____reuseIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView_CellsGroup, ____cells) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TableView_CellsGroup, 0x20>, "Size mismatch!");

} // namespace HMUI
// Dependencies
namespace HMUI {
// Is value type: false
// CS Name: HMUI.TableView/IDataSource
class CORDL_TYPE TableView_IDataSource {
public:
  // Declarations
  /// @brief Method CellForIdx, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t CellSize(int32_t idx);

  /// @brief Method NumberOfCells, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t NumberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "TableView_IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableView_IDataSource(TableView_IDataSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16123 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Dependencies HMUI.ITableCellOwner, HMUI.TableView::TableType, HMUI.TableViewSelectionType, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.TableView
class CORDL_TYPE TableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CellsGroup = ::HMUI::TableView_CellsGroup;

  using IDataSource = ::HMUI::TableView_IDataSource;

  using ScrollPositionType = ::HMUI::TableView_ScrollPositionType;

  using TableType = ::HMUI::TableView_TableType;

  /// @brief Field _alignToCenter, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__alignToCenter, put = __cordl_internal_set__alignToCenter)) bool _alignToCenter;

  /// @brief Field _canSelectSelectedCell, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__canSelectSelectedCell, put = __cordl_internal_set__canSelectSelectedCell)) bool _canSelectSelectedCell;

  /// @brief Field _cellSize, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__cellSize, put = __cordl_internal_set__cellSize)) float_t _cellSize;

  /// @brief Field _contentTransform, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__contentTransform, put = __cordl_internal_set__contentTransform)) ::UnityW<::UnityEngine::RectTransform> _contentTransform;

  /// @brief Field _dataSource, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource)) ::HMUI::TableView_IDataSource* _dataSource;

  /// @brief Field _isInitialized, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _numberOfCells, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfCells, put = __cordl_internal_set__numberOfCells)) int32_t _numberOfCells;

  /// @brief Field _padding, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__padding, put = __cordl_internal_set__padding)) ::HMUI::FloatRectOffset* _padding;

  /// @brief Field _preallocatedCells, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__preallocatedCells, put = __cordl_internal_set__preallocatedCells)) ::ArrayW<::HMUI::TableView_CellsGroup*, ::Array<::HMUI::TableView_CellsGroup*>*>
      _preallocatedCells;

  /// @brief Field _prevMaxIdx, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMaxIdx, put = __cordl_internal_set__prevMaxIdx)) int32_t _prevMaxIdx;

  /// @brief Field _prevMinIdx, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMinIdx, put = __cordl_internal_set__prevMinIdx)) int32_t _prevMinIdx;

  /// @brief Field _refreshCellsOnEnable, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshCellsOnEnable, put = __cordl_internal_set__refreshCellsOnEnable)) bool _refreshCellsOnEnable;

  /// @brief Field _reusableCells, offset 0xa8, size 0x8
  __declspec(property(
      get = __cordl_internal_get__reusableCells,
      put = __cordl_internal_set__reusableCells)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* _reusableCells;

  /// @brief Field _scrollToTopOnEnable, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__scrollToTopOnEnable, put = __cordl_internal_set__scrollToTopOnEnable)) bool _scrollToTopOnEnable;

  /// @brief Field _scrollView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollView, put = __cordl_internal_set__scrollView)) ::UnityW<::HMUI::ScrollView> _scrollView;

  /// @brief Field _selectedCellIdxs, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedCellIdxs, put = __cordl_internal_set__selectedCellIdxs)) ::System::Collections::Generic::HashSet_1<int32_t>* _selectedCellIdxs;

  /// @brief Field _selectionType, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionType, put = __cordl_internal_set__selectionType)) ::HMUI::TableViewSelectionType _selectionType;

  /// @brief Field _spacing, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__spacing, put = __cordl_internal_set__spacing)) float_t _spacing;

  /// @brief Field _spawnCellsThatAreNotVisible, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__spawnCellsThatAreNotVisible, put = __cordl_internal_set__spawnCellsThatAreNotVisible)) bool _spawnCellsThatAreNotVisible;

  /// @brief Field _tableType, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__tableType, put = __cordl_internal_set__tableType)) ::HMUI::TableView_TableType _tableType;

  /// @brief Field _viewportTransform, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportTransform, put = __cordl_internal_set__viewportTransform)) ::UnityW<::UnityEngine::RectTransform> _viewportTransform;

  /// @brief Field _visibleCells, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__visibleCells, put = __cordl_internal_set__visibleCells)) ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* _visibleCells;

  __declspec(property(get = get_canSelectSelectedCell)) bool canSelectSelectedCell;

  __declspec(property(get = get_cellSize)) float_t cellSize;

  __declspec(property(get = get_contentSize)) float_t contentSize;

  __declspec(property(get = get_contentTransform)) ::UnityW<::UnityEngine::RectTransform> contentTransform;

  __declspec(property(get = get_dataSource)) ::HMUI::TableView_IDataSource* dataSource;

  /// @brief Field didChangeRectSizeEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeRectSizeEvent, put = __cordl_internal_set_didChangeRectSizeEvent)) ::System::Action_1<::UnityW<::HMUI::TableView>>* didChangeRectSizeEvent;

  /// @brief Field didDeleteCellsEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeleteCellsEvent, put = __cordl_internal_set_didDeleteCellsEvent)) ::System::Action_1<::UnityW<::HMUI::TableView>>* didDeleteCellsEvent;

  /// @brief Field didDeselectCellWithIdxEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeselectCellWithIdxEvent,
                      put = __cordl_internal_set_didDeselectCellWithIdxEvent)) ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* didDeselectCellWithIdxEvent;

  /// @brief Field didInsertCellsEvent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_didInsertCellsEvent, put = __cordl_internal_set_didInsertCellsEvent)) ::System::Action_1<::UnityW<::HMUI::TableView>>* didInsertCellsEvent;

  /// @brief Field didReloadDataEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_didReloadDataEvent, put = __cordl_internal_set_didReloadDataEvent)) ::System::Action_1<::UnityW<::HMUI::TableView>>* didReloadDataEvent;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent,
                      put = __cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* didSelectCellWithIdxEvent;

  __declspec(property(get = get_numberOfCells)) int32_t numberOfCells;

  __declspec(property(get = get_paddingEnd)) float_t paddingEnd;

  __declspec(property(get = get_paddingStart)) float_t paddingStart;

  __declspec(property(get = get_scrollView)) ::UnityW<::HMUI::ScrollView> scrollView;

  __declspec(property(get = get_selectionType, put = set_selectionType)) ::HMUI::TableViewSelectionType selectionType;

  __declspec(property(get = get_spacing)) float_t spacing;

  __declspec(property(get = get_tableType)) ::HMUI::TableView_TableType tableType;

  __declspec(property(get = get_totalPadding)) float_t totalPadding;

  __declspec(property(get = get_viewportTransform)) ::UnityW<::UnityEngine::RectTransform> viewportTransform;

  __declspec(property(get = get_visibleCells)) ::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* visibleCells;

  /// @brief Convert operator to "::HMUI::ITableCellOwner"
  constexpr operator ::HMUI::ITableCellOwner*() noexcept;

  /// @brief Method AddCellToReusableCells, addr 0x3a013cc, size 0x160, virtual false, abstract: false, final false
  inline void AddCellToReusableCells(::HMUI::TableCell* cell);

  /// @brief Method Awake, addr 0x3a003f0, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ChangeRectSize, addr 0x3a01f74, size 0xb0, virtual false, abstract: false, final false
  inline void ChangeRectSize(::UnityEngine::RectTransform_Axis axis, float_t size);

  /// @brief Method ClearHighlights, addr 0x3a00dd4, size 0x154, virtual false, abstract: false, final false
  inline void ClearHighlights();

  /// @brief Method ClearSelection, addr 0x3a01d7c, size 0x1ac, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method DeleteCells, addr 0x39ff290, size 0x318, virtual false, abstract: false, final false
  inline void DeleteCells(int32_t idx, int32_t count);

  /// @brief Method DequeueReusableCellForIdentifier, addr 0x39fd904, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> DequeueReusableCellForIdentifier(::StringW identifier);

  /// @brief Method DidSelectCellWithIdx, addr 0x3a01a5c, size 0x28, virtual true, abstract: false, final false
  inline void DidSelectCellWithIdx(int32_t idx);

  /// @brief Method GetCellAtIndex, addr 0x3a00fe0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> GetCellAtIndex(int32_t index);

  /// @brief Method GetCellPosition, addr 0x3a01384, size 0x48, virtual true, abstract: false, final false
  inline float_t GetCellPosition(int32_t idx);

  /// @brief Method GetCellSize, addr 0x3a0137c, size 0x8, virtual true, abstract: false, final false
  inline float_t GetCellSize(int32_t idx);

  /// @brief Method GetMaxVisibleIdx, addr 0x3a01254, size 0x128, virtual true, abstract: false, final false
  inline int32_t GetMaxVisibleIdx();

  /// @brief Method GetMinVisibleIdx, addr 0x3a01168, size 0xec, virtual true, abstract: false, final false
  inline int32_t GetMinVisibleIdx();

  /// @brief Method GetVisibleCellsIdRange, addr 0x3a01090, size 0xd8, virtual false, abstract: false, final false
  inline ::System::Tuple_2<int32_t, int32_t>* GetVisibleCellsIdRange();

  /// @brief Method HandleCellSelectionDidChange, addr 0x3a01778, size 0x2e4, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType, ::System::Object* changeOwner);

  /// @brief Method HandleScrollRectValueChanged, addr 0x3a0176c, size 0xc, virtual false, abstract: false, final false
  inline void HandleScrollRectValueChanged(float_t f);

  /// @brief Method Hide, addr 0x3a00f28, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method InsertCells, addr 0x39fee8c, size 0x35c, virtual false, abstract: false, final false
  inline void InsertCells(int32_t idx, int32_t count);

  /// @brief Method LayoutCellForIdx, addr 0x3a0152c, size 0x240, virtual false, abstract: false, final false
  inline void LayoutCellForIdx(::HMUI::TableCell* cell, int32_t idx, float_t offset);

  /// @brief Method LazyInit, addr 0x3a00400, size 0x348, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::HMUI::TableView* New_ctor();

  /// @brief Method OnDestroy, addr 0x3a00748, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x3a007d4, size 0x54, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshCells, addr 0x3a00828, size 0x5ac, virtual false, abstract: false, final false
  inline void RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh);

  /// @brief Method RefreshCellsContent, addr 0x3a00fd4, size 0xc, virtual false, abstract: false, final false
  inline void RefreshCellsContent();

  /// @brief Method RefreshContentSize, addr 0x3a00f70, size 0x64, virtual false, abstract: false, final false
  inline void RefreshContentSize();

  /// @brief Method ReloadData, addr 0x39fe920, size 0x2d8, virtual true, abstract: false, final false
  inline void ReloadData();

  /// @brief Method ReloadDataKeepingPosition, addr 0x3a01b30, size 0x4c, virtual false, abstract: false, final false
  inline void ReloadDataKeepingPosition();

  /// @brief Method ScrollToCellWithIdx, addr 0x39ff5ec, size 0xe4, virtual false, abstract: false, final false
  inline void ScrollToCellWithIdx(int32_t idx, ::HMUI::TableView_ScrollPositionType scrollPositionType, bool animated);

  /// @brief Method ScrollToPosition, addr 0x3a01f28, size 0x4c, virtual false, abstract: false, final false
  inline void ScrollToPosition(float_t position, bool animated);

  /// @brief Method SelectCellWithIdx, addr 0x3a01b98, size 0x1e4, virtual false, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx, bool callbackTable);

  /// @brief Method SetDataSource, addr 0x3a01b7c, size 0x1c, virtual true, abstract: false, final false
  inline void SetDataSource(::HMUI::TableView_IDataSource* newDataSource, bool reloadData);

  /// @brief Method Show, addr 0x3a00f4c, size 0x24, virtual false, abstract: false, final false
  inline void Show();

  /// @brief Method UpdateCachedData, addr 0x3a01a84, size 0xac, virtual true, abstract: false, final false
  inline void UpdateCachedData();

  constexpr bool const& __cordl_internal_get__alignToCenter() const;

  constexpr bool& __cordl_internal_get__alignToCenter();

  constexpr bool const& __cordl_internal_get__canSelectSelectedCell() const;

  constexpr bool& __cordl_internal_get__canSelectSelectedCell();

  constexpr float_t const& __cordl_internal_get__cellSize() const;

  constexpr float_t& __cordl_internal_get__cellSize();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentTransform();

  constexpr ::HMUI::TableView_IDataSource* const& __cordl_internal_get__dataSource() const;

  constexpr ::HMUI::TableView_IDataSource*& __cordl_internal_get__dataSource();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr int32_t const& __cordl_internal_get__numberOfCells() const;

  constexpr int32_t& __cordl_internal_get__numberOfCells();

  constexpr ::HMUI::FloatRectOffset* const& __cordl_internal_get__padding() const;

  constexpr ::HMUI::FloatRectOffset*& __cordl_internal_get__padding();

  constexpr ::ArrayW<::HMUI::TableView_CellsGroup*, ::Array<::HMUI::TableView_CellsGroup*>*> const& __cordl_internal_get__preallocatedCells() const;

  constexpr ::ArrayW<::HMUI::TableView_CellsGroup*, ::Array<::HMUI::TableView_CellsGroup*>*>& __cordl_internal_get__preallocatedCells();

  constexpr int32_t const& __cordl_internal_get__prevMaxIdx() const;

  constexpr int32_t& __cordl_internal_get__prevMaxIdx();

  constexpr int32_t const& __cordl_internal_get__prevMinIdx() const;

  constexpr int32_t& __cordl_internal_get__prevMinIdx();

  constexpr bool const& __cordl_internal_get__refreshCellsOnEnable() const;

  constexpr bool& __cordl_internal_get__refreshCellsOnEnable();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* const& __cordl_internal_get__reusableCells() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>*& __cordl_internal_get__reusableCells();

  constexpr bool const& __cordl_internal_get__scrollToTopOnEnable() const;

  constexpr bool& __cordl_internal_get__scrollToTopOnEnable();

  constexpr ::UnityW<::HMUI::ScrollView> const& __cordl_internal_get__scrollView() const;

  constexpr ::UnityW<::HMUI::ScrollView>& __cordl_internal_get__scrollView();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__selectedCellIdxs() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__selectedCellIdxs();

  constexpr ::HMUI::TableViewSelectionType const& __cordl_internal_get__selectionType() const;

  constexpr ::HMUI::TableViewSelectionType& __cordl_internal_get__selectionType();

  constexpr float_t const& __cordl_internal_get__spacing() const;

  constexpr float_t& __cordl_internal_get__spacing();

  constexpr bool const& __cordl_internal_get__spawnCellsThatAreNotVisible() const;

  constexpr bool& __cordl_internal_get__spawnCellsThatAreNotVisible();

  constexpr ::HMUI::TableView_TableType const& __cordl_internal_get__tableType() const;

  constexpr ::HMUI::TableView_TableType& __cordl_internal_get__tableType();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewportTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewportTransform();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* const& __cordl_internal_get__visibleCells() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& __cordl_internal_get__visibleCells();

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& __cordl_internal_get_didChangeRectSizeEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didChangeRectSizeEvent();

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& __cordl_internal_get_didDeleteCellsEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didDeleteCellsEvent();

  constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* const& __cordl_internal_get_didDeselectCellWithIdxEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*& __cordl_internal_get_didDeselectCellWithIdxEvent();

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& __cordl_internal_get_didInsertCellsEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didInsertCellsEvent();

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& __cordl_internal_get_didReloadDataEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didReloadDataEvent();

  constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr void __cordl_internal_set__alignToCenter(bool value);

  constexpr void __cordl_internal_set__canSelectSelectedCell(bool value);

  constexpr void __cordl_internal_set__cellSize(float_t value);

  constexpr void __cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__dataSource(::HMUI::TableView_IDataSource* value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__numberOfCells(int32_t value);

  constexpr void __cordl_internal_set__padding(::HMUI::FloatRectOffset* value);

  constexpr void __cordl_internal_set__preallocatedCells(::ArrayW<::HMUI::TableView_CellsGroup*, ::Array<::HMUI::TableView_CellsGroup*>*> value);

  constexpr void __cordl_internal_set__prevMaxIdx(int32_t value);

  constexpr void __cordl_internal_set__prevMinIdx(int32_t value);

  constexpr void __cordl_internal_set__refreshCellsOnEnable(bool value);

  constexpr void __cordl_internal_set__reusableCells(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* value);

  constexpr void __cordl_internal_set__scrollToTopOnEnable(bool value);

  constexpr void __cordl_internal_set__scrollView(::UnityW<::HMUI::ScrollView> value);

  constexpr void __cordl_internal_set__selectedCellIdxs(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__selectionType(::HMUI::TableViewSelectionType value);

  constexpr void __cordl_internal_set__spacing(float_t value);

  constexpr void __cordl_internal_set__spawnCellsThatAreNotVisible(bool value);

  constexpr void __cordl_internal_set__tableType(::HMUI::TableView_TableType value);

  constexpr void __cordl_internal_set__viewportTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__visibleCells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value);

  constexpr void __cordl_internal_set_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didDeselectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  constexpr void __cordl_internal_set_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method .ctor, addr 0x39ff6d4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeRectSizeEvent, addr 0x3a00164, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didDeleteCellsEvent, addr 0x3a00004, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didDeselectCellWithIdxEvent, addr 0x39ffbe4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDeselectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method add_didInsertCellsEvent, addr 0x39ffea4, size 0xb0, virtual false, abstract: false, final false
  inline void add_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didReloadDataEvent, addr 0x39ffd44, size 0xb0, virtual false, abstract: false, final false
  inline void add_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x39ffa84, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method get_canSelectSelectedCell, addr 0x39ffa7c, size 0x8, virtual true, abstract: false, final true
  inline bool get_canSelectSelectedCell();

  /// @brief Method get_cellSize, addr 0x3a002ec, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cellSize();

  /// @brief Method get_contentSize, addr 0x3a003b0, size 0x40, virtual true, abstract: false, final false
  inline float_t get_contentSize();

  /// @brief Method get_contentTransform, addr 0x3a002dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_contentTransform();

  /// @brief Method get_dataSource, addr 0x3a002c4, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::TableView_IDataSource* get_dataSource();

  /// @brief Method get_numberOfCells, addr 0x3a002e4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_numberOfCells();

  /// @brief Method get_paddingEnd, addr 0x3a00380, size 0x30, virtual false, abstract: false, final false
  inline float_t get_paddingEnd();

  /// @brief Method get_paddingStart, addr 0x3a00350, size 0x30, virtual false, abstract: false, final false
  inline float_t get_paddingStart();

  /// @brief Method get_scrollView, addr 0x3a00304, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ScrollView> get_scrollView();

  /// @brief Method get_selectionType, addr 0x39ffa6c, size 0x8, virtual true, abstract: false, final true
  inline ::HMUI::TableViewSelectionType get_selectionType();

  /// @brief Method get_spacing, addr 0x3a002f4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spacing();

  /// @brief Method get_tableType, addr 0x3a002fc, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::TableView_TableType get_tableType();

  /// @brief Method get_totalPadding, addr 0x3a0030c, size 0x44, virtual false, abstract: false, final false
  inline float_t get_totalPadding();

  /// @brief Method get_viewportTransform, addr 0x3a002d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_viewportTransform();

  /// @brief Method get_visibleCells, addr 0x3a002cc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* get_visibleCells();

  /// @brief Convert to "::HMUI::ITableCellOwner"
  constexpr ::HMUI::ITableCellOwner* i___HMUI__ITableCellOwner() noexcept;

  /// @brief Method remove_didChangeRectSizeEvent, addr 0x3a00214, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didDeleteCellsEvent, addr 0x3a000b4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didDeselectCellWithIdxEvent, addr 0x39ffc94, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDeselectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method remove_didInsertCellsEvent, addr 0x39fff54, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didReloadDataEvent, addr 0x39ffdf4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x39ffb34, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method set_selectionType, addr 0x39ffa74, size 0x8, virtual false, abstract: false, final false
  inline void set_selectionType(::HMUI::TableViewSelectionType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableView(TableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableView(TableView const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16124 };

  /// @brief Field kFixedCellSizeIndex offset 0xffffffff size 0x4
  static constexpr int32_t kFixedCellSizeIndex{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field _scrollView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::ScrollView> ____scrollView;

  /// @brief Field _scrollToTopOnEnable, offset: 0x28, size: 0x1, def value: None
  bool ____scrollToTopOnEnable;

  /// @brief Field _alignToCenter, offset: 0x29, size: 0x1, def value: None
  bool ____alignToCenter;

  /// @brief Field _spacing, offset: 0x2c, size: 0x4, def value: None
  float_t ____spacing;

  /// @brief Field _padding, offset: 0x30, size: 0x8, def value: None
  ::HMUI::FloatRectOffset* ____padding;

  /// @brief Field _tableType, offset: 0x38, size: 0x4, def value: None
  ::HMUI::TableView_TableType ____tableType;

  /// @brief Field _selectionType, offset: 0x3c, size: 0x4, def value: None
  ::HMUI::TableViewSelectionType ____selectionType;

  /// @brief Field _canSelectSelectedCell, offset: 0x40, size: 0x1, def value: None
  bool ____canSelectSelectedCell;

  /// @brief Field _spawnCellsThatAreNotVisible, offset: 0x41, size: 0x1, def value: None
  bool ____spawnCellsThatAreNotVisible;

  /// @brief Field _preallocatedCells, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::HMUI::TableView_CellsGroup*, ::Array<::HMUI::TableView_CellsGroup*>*> ____preallocatedCells;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field didDeselectCellWithIdxEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* ___didDeselectCellWithIdxEvent;

  /// @brief Field didReloadDataEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didReloadDataEvent;

  /// @brief Field didInsertCellsEvent, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didInsertCellsEvent;

  /// @brief Field didDeleteCellsEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didDeleteCellsEvent;

  /// @brief Field didChangeRectSizeEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didChangeRectSizeEvent;

  /// @brief Field _contentTransform, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentTransform;

  /// @brief Field _viewportTransform, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____viewportTransform;

  /// @brief Field _dataSource, offset: 0x90, size: 0x8, def value: None
  ::HMUI::TableView_IDataSource* ____dataSource;

  /// @brief Field _numberOfCells, offset: 0x98, size: 0x4, def value: None
  int32_t ____numberOfCells;

  /// @brief Field _cellSize, offset: 0x9c, size: 0x4, def value: None
  float_t ____cellSize;

  /// @brief Field _visibleCells, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* ____visibleCells;

  /// @brief Field _reusableCells, offset: 0xa8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* ____reusableCells;

  /// @brief Field _selectedCellIdxs, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____selectedCellIdxs;

  /// @brief Field _prevMinIdx, offset: 0xb8, size: 0x4, def value: None
  int32_t ____prevMinIdx;

  /// @brief Field _prevMaxIdx, offset: 0xbc, size: 0x4, def value: None
  int32_t ____prevMaxIdx;

  /// @brief Field _isInitialized, offset: 0xc0, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _refreshCellsOnEnable, offset: 0xc1, size: 0x1, def value: None
  bool ____refreshCellsOnEnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::TableView, ____scrollView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____scrollToTopOnEnable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____alignToCenter) == 0x29, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____spacing) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____padding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____tableType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____selectionType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____canSelectSelectedCell) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____spawnCellsThatAreNotVisible) == 0x41, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____preallocatedCells) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didSelectCellWithIdxEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didDeselectCellWithIdxEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didReloadDataEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didInsertCellsEvent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didDeleteCellsEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didChangeRectSizeEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____contentTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____viewportTransform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____dataSource) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____numberOfCells) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____cellSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____visibleCells) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____reusableCells) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____selectedCellIdxs) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____prevMinIdx) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____prevMaxIdx) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____isInitialized) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____refreshCellsOnEnable) == 0xc1, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::TableView, 0xc8>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView_ScrollPositionType, "HMUI", "TableView/ScrollPositionType");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView_TableType, "HMUI", "TableView/TableType");
NEED_NO_BOX(::HMUI::TableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView*, "HMUI", "TableView");
NEED_NO_BOX(::HMUI::TableView_CellsGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView_CellsGroup*, "HMUI", "TableView/CellsGroup");
NEED_NO_BOX(::HMUI::TableView_IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView_IDataSource*, "HMUI", "TableView/IDataSource");
