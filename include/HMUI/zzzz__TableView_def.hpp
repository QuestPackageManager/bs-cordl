#pragma once
// IWYU pragma private; include "HMUI/TableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TableView)
namespace HMUI {
class ITableCellOwner;
}
namespace HMUI {
class ScrollView;
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
struct __SelectableCell__TransitionType;
}
namespace HMUI {
class __TableView__CellsGroup;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
struct __TableView__ScrollPositionType;
}
namespace HMUI {
struct __TableView__TableType;
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
class RectTransform;
}
namespace UnityEngine {
struct __RectTransform__Axis;
}
// Forward declare root types
namespace HMUI {
struct __TableView__ScrollPositionType;
}
namespace HMUI {
struct __TableView__TableType;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class __TableView__CellsGroup;
}
namespace HMUI {
class __TableView__IDataSource;
}
// Write type traits
MARK_VAL_T(::HMUI::__TableView__ScrollPositionType);
MARK_VAL_T(::HMUI::__TableView__TableType);
MARK_REF_PTR_T(::HMUI::TableView);
MARK_REF_PTR_T(::HMUI::__TableView__CellsGroup);
MARK_REF_PTR_T(::HMUI::__TableView__IDataSource);
// Type: ::TableType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::TableView::TableType
struct CORDL_TYPE __TableView__TableType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TableView__TableType_Unwrapped
  enum struct ____TableView__TableType_Unwrapped : int32_t {
    __E_Vertical = static_cast<int32_t>(0x0),
    __E_Horizontal = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TableView__TableType_Unwrapped() const noexcept {
    return static_cast<____TableView__TableType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TableView__TableType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TableView__TableType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x1)
  static ::HMUI::__TableView__TableType const Horizontal;

  /// @brief Field Vertical value: static_cast<int32_t>(0x0)
  static ::HMUI::__TableView__TableType const Vertical;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TableView__TableType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__TableView__TableType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::ScrollPositionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::TableView::ScrollPositionType
struct CORDL_TYPE __TableView__ScrollPositionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TableView__ScrollPositionType_Unwrapped
  enum struct ____TableView__ScrollPositionType_Unwrapped : int32_t {
    __E_Beginning = static_cast<int32_t>(0x0),
    __E_Center = static_cast<int32_t>(0x1),
    __E_End = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TableView__ScrollPositionType_Unwrapped() const noexcept {
    return static_cast<____TableView__ScrollPositionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TableView__ScrollPositionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TableView__ScrollPositionType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Beginning value: static_cast<int32_t>(0x0)
  static ::HMUI::__TableView__ScrollPositionType const Beginning;

  /// @brief Field Center value: static_cast<int32_t>(0x1)
  static ::HMUI::__TableView__ScrollPositionType const Center;

  /// @brief Field End value: static_cast<int32_t>(0x2)
  static ::HMUI::__TableView__ScrollPositionType const End;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TableView__ScrollPositionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__TableView__ScrollPositionType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: ::CellsGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::TableView::CellsGroup*
class CORDL_TYPE __TableView__CellsGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cells, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cells, put = __cordl_internal_set__cells))::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* _cells;

  /// @brief Field _reuseIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__reuseIdentifier, put = __cordl_internal_set__reuseIdentifier))::StringW _reuseIdentifier;

  __declspec(property(get = get_cells))::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* cells;

  __declspec(property(get = get_reuseIdentifier))::StringW reuseIdentifier;

  static inline ::HMUI::__TableView__CellsGroup* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& __cordl_internal_get__cells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*> const& __cordl_internal_get__cells() const;

  constexpr ::StringW const& __cordl_internal_get__reuseIdentifier() const;

  constexpr ::StringW& __cordl_internal_get__reuseIdentifier();

  constexpr void __cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value);

  constexpr void __cordl_internal_set__reuseIdentifier(::StringW value);

  /// @brief Method .ctor, addr 0x2545860, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cells, addr 0x2545858, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* get_cells();

  /// @brief Method get_reuseIdentifier, addr 0x2545850, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_reuseIdentifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TableView__CellsGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__TableView__CellsGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TableView__CellsGroup(__TableView__CellsGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TableView__CellsGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TableView__CellsGroup(__TableView__CellsGroup const&) = delete;

  /// @brief Field _reuseIdentifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ____reuseIdentifier;

  /// @brief Field _cells, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* ____cells;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TableView__CellsGroup, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::__TableView__CellsGroup, ____reuseIdentifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__TableView__CellsGroup, ____cells) == 0x18, "Offset mismatch!");

} // namespace HMUI
// Type: ::IDataSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::TableView::IDataSource*
class CORDL_TYPE __TableView__IDataSource {
public:
  // Declarations
  /// @brief Method CellForIdx, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t idx);

  /// @brief Method CellSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t CellSize();

  /// @brief Method NumberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t NumberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "__TableView__IDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TableView__IDataSource(__TableView__IDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TableView__IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TableView__IDataSource(__TableView__IDataSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Type: HMUI::TableView
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 162, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::TableView*
class CORDL_TYPE TableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CellsGroup = ::HMUI::__TableView__CellsGroup;

  using IDataSource = ::HMUI::__TableView__IDataSource;

  using ScrollPositionType = ::HMUI::__TableView__ScrollPositionType;

  using TableType = ::HMUI::__TableView__TableType;

  /// @brief Field _alignToCenter, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__alignToCenter, put = __cordl_internal_set__alignToCenter)) bool _alignToCenter;

  /// @brief Field _canSelectSelectedCell, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__canSelectSelectedCell, put = __cordl_internal_set__canSelectSelectedCell)) bool _canSelectSelectedCell;

  /// @brief Field _cellSize, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__cellSize, put = __cordl_internal_set__cellSize)) float_t _cellSize;

  /// @brief Field _contentTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__contentTransform, put = __cordl_internal_set__contentTransform))::UnityW<::UnityEngine::RectTransform> _contentTransform;

  /// @brief Field _dataSource, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource))::HMUI::__TableView__IDataSource* _dataSource;

  /// @brief Field _isInitialized, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _numberOfCells, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfCells, put = __cordl_internal_set__numberOfCells)) int32_t _numberOfCells;

  /// @brief Field _preallocatedCells, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__preallocatedCells,
                      put = __cordl_internal_set__preallocatedCells))::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> _preallocatedCells;

  /// @brief Field _prevMaxIdx, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMaxIdx, put = __cordl_internal_set__prevMaxIdx)) int32_t _prevMaxIdx;

  /// @brief Field _prevMinIdx, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__prevMinIdx, put = __cordl_internal_set__prevMinIdx)) int32_t _prevMinIdx;

  /// @brief Field _refreshCellsOnEnable, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get__refreshCellsOnEnable, put = __cordl_internal_set__refreshCellsOnEnable)) bool _refreshCellsOnEnable;

  /// @brief Field _reusableCells, offset 0x88, size 0x8
  __declspec(
      property(get = __cordl_internal_get__reusableCells,
               put = __cordl_internal_set__reusableCells))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* _reusableCells;

  /// @brief Field _scrollToTopOnEnable, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__scrollToTopOnEnable, put = __cordl_internal_set__scrollToTopOnEnable)) bool _scrollToTopOnEnable;

  /// @brief Field _scrollView, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollView, put = __cordl_internal_set__scrollView))::UnityW<::HMUI::ScrollView> _scrollView;

  /// @brief Field _selectedCellIdxs, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedCellIdxs, put = __cordl_internal_set__selectedCellIdxs))::System::Collections::Generic::HashSet_1<int32_t>* _selectedCellIdxs;

  /// @brief Field _selectionType, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__selectionType, put = __cordl_internal_set__selectionType))::HMUI::TableViewSelectionType _selectionType;

  /// @brief Field _tableType, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__tableType, put = __cordl_internal_set__tableType))::HMUI::__TableView__TableType _tableType;

  /// @brief Field _viewportTransform, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__viewportTransform, put = __cordl_internal_set__viewportTransform))::UnityW<::UnityEngine::RectTransform> _viewportTransform;

  /// @brief Field _visibleCells, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__visibleCells, put = __cordl_internal_set__visibleCells))::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* _visibleCells;

  __declspec(property(get = get_canSelectSelectedCell)) bool canSelectSelectedCell;

  __declspec(property(get = get_cellSize)) float_t cellSize;

  __declspec(property(get = get_contentTransform))::UnityW<::UnityEngine::RectTransform> contentTransform;

  __declspec(property(get = get_dataSource))::HMUI::__TableView__IDataSource* dataSource;

  /// @brief Field didChangeRectSizeEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didChangeRectSizeEvent, put = __cordl_internal_set_didChangeRectSizeEvent))::System::Action_1<::UnityW<::HMUI::TableView>>* didChangeRectSizeEvent;

  /// @brief Field didDeleteCellsEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didDeleteCellsEvent, put = __cordl_internal_set_didDeleteCellsEvent))::System::Action_1<::UnityW<::HMUI::TableView>>* didDeleteCellsEvent;

  /// @brief Field didInsertCellsEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_didInsertCellsEvent, put = __cordl_internal_set_didInsertCellsEvent))::System::Action_1<::UnityW<::HMUI::TableView>>* didInsertCellsEvent;

  /// @brief Field didReloadDataEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_didReloadDataEvent, put = __cordl_internal_set_didReloadDataEvent))::System::Action_1<::UnityW<::HMUI::TableView>>* didReloadDataEvent;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent,
                      put = __cordl_internal_set_didSelectCellWithIdxEvent))::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* didSelectCellWithIdxEvent;

  __declspec(property(get = get_numberOfCells)) int32_t numberOfCells;

  __declspec(property(get = get_scrollView))::UnityW<::HMUI::ScrollView> scrollView;

  __declspec(property(get = get_selectionType, put = set_selectionType))::HMUI::TableViewSelectionType selectionType;

  __declspec(property(get = get_tableType))::HMUI::__TableView__TableType tableType;

  __declspec(property(get = get_viewportTransform))::UnityW<::UnityEngine::RectTransform> viewportTransform;

  __declspec(property(get = get_visibleCells))::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* visibleCells;

  /// @brief Convert operator to "::HMUI::ITableCellOwner"
  constexpr operator ::HMUI::ITableCellOwner*() noexcept;

  /// @brief Method AddCellToReusableCells, addr 0x2544dcc, size 0x168, virtual false, abstract: false, final false
  inline void AddCellToReusableCells(::HMUI::TableCell* cell);

  /// @brief Method Awake, addr 0x2543fc0, size 0x10, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ChangeRectSize, addr 0x25457a0, size 0xb0, virtual false, abstract: false, final false
  inline void ChangeRectSize(::UnityEngine::__RectTransform__Axis axis, float_t size);

  /// @brief Method ClearHighlights, addr 0x25449f4, size 0x154, virtual false, abstract: false, final false
  inline void ClearHighlights();

  /// @brief Method ClearSelection, addr 0x25455f4, size 0x1ac, virtual false, abstract: false, final false
  inline void ClearSelection();

  /// @brief Method DeleteCells, addr 0x25430bc, size 0x36c, virtual false, abstract: false, final false
  inline void DeleteCells(int32_t idx, int32_t count);

  /// @brief Method DequeueReusableCellForIdentifier, addr 0x2541670, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> DequeueReusableCellForIdentifier(::StringW identifier);

  /// @brief Method DidSelectCellWithIdx, addr 0x2545398, size 0x28, virtual true, abstract: false, final false
  inline void DidSelectCellWithIdx(int32_t idx);

  /// @brief Method GetVisibleCellsIdRange, addr 0x2544bf0, size 0x1dc, virtual false, abstract: false, final false
  inline ::System::Tuple_2<int32_t, int32_t>* GetVisibleCellsIdRange();

  /// @brief Method HandleCellSelectionDidChange, addr 0x25450cc, size 0x2cc, virtual false, abstract: false, final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* changeOwner);

  /// @brief Method HandleScrollRectValueChanged, addr 0x25450c0, size 0xc, virtual false, abstract: false, final false
  inline void HandleScrollRectValueChanged(float_t f);

  /// @brief Method Hide, addr 0x2544b48, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  /// @brief Method InsertCells, addr 0x2542c64, size 0x3b0, virtual false, abstract: false, final false
  inline void InsertCells(int32_t idx, int32_t count);

  /// @brief Method LayoutCellForIdx, addr 0x2544f34, size 0x18c, virtual false, abstract: false, final false
  inline void LayoutCellForIdx(::HMUI::TableCell* cell, int32_t idx, float_t offset);

  /// @brief Method LazyInit, addr 0x2543fd0, size 0x350, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::HMUI::TableView* New_ctor();

  /// @brief Method OnDestroy, addr 0x2544320, size 0x88, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x25443a8, size 0x54, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RefreshCells, addr 0x25443fc, size 0x5f8, virtual false, abstract: false, final false
  inline void RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh);

  /// @brief Method RefreshCellsContent, addr 0x2544be4, size 0xc, virtual false, abstract: false, final false
  inline void RefreshCellsContent();

  /// @brief Method RefreshContentSize, addr 0x2544b90, size 0x54, virtual false, abstract: false, final false
  inline void RefreshContentSize();

  /// @brief Method ReloadData, addr 0x254269c, size 0x334, virtual true, abstract: false, final false
  inline void ReloadData();

  /// @brief Method ReloadDataKeepingPosition, addr 0x25453c0, size 0x50, virtual false, abstract: false, final false
  inline void ReloadDataKeepingPosition();

  /// @brief Method ScrollToCellWithIdx, addr 0x254346c, size 0xdc, virtual false, abstract: false, final false
  inline void ScrollToCellWithIdx(int32_t idx, ::HMUI::__TableView__ScrollPositionType scrollPositionType, bool animated);

  /// @brief Method SelectCellWithIdx, addr 0x2545410, size 0x1e4, virtual false, abstract: false, final false
  inline void SelectCellWithIdx(int32_t idx, bool callbackTable);

  /// @brief Method SetDataSource, addr 0x2543f70, size 0x18, virtual false, abstract: false, final false
  inline void SetDataSource(::HMUI::__TableView__IDataSource* newDataSource, bool reloadData);

  /// @brief Method Show, addr 0x2544b6c, size 0x24, virtual false, abstract: false, final false
  inline void Show();

  constexpr bool const& __cordl_internal_get__alignToCenter() const;

  constexpr bool& __cordl_internal_get__alignToCenter();

  constexpr bool const& __cordl_internal_get__canSelectSelectedCell() const;

  constexpr bool& __cordl_internal_get__canSelectSelectedCell();

  constexpr float_t const& __cordl_internal_get__cellSize() const;

  constexpr float_t& __cordl_internal_get__cellSize();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentTransform();

  constexpr ::HMUI::__TableView__IDataSource*& __cordl_internal_get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__TableView__IDataSource*> const& __cordl_internal_get__dataSource() const;

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr int32_t const& __cordl_internal_get__numberOfCells() const;

  constexpr int32_t& __cordl_internal_get__numberOfCells();

  constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> const& __cordl_internal_get__preallocatedCells() const;

  constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*>& __cordl_internal_get__preallocatedCells();

  constexpr int32_t const& __cordl_internal_get__prevMaxIdx() const;

  constexpr int32_t& __cordl_internal_get__prevMaxIdx();

  constexpr int32_t const& __cordl_internal_get__prevMinIdx() const;

  constexpr int32_t& __cordl_internal_get__prevMinIdx();

  constexpr bool const& __cordl_internal_get__refreshCellsOnEnable() const;

  constexpr bool& __cordl_internal_get__refreshCellsOnEnable();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>*& __cordl_internal_get__reusableCells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>*> const&
  __cordl_internal_get__reusableCells() const;

  constexpr bool const& __cordl_internal_get__scrollToTopOnEnable() const;

  constexpr bool& __cordl_internal_get__scrollToTopOnEnable();

  constexpr ::UnityW<::HMUI::ScrollView> const& __cordl_internal_get__scrollView() const;

  constexpr ::UnityW<::HMUI::ScrollView>& __cordl_internal_get__scrollView();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__selectedCellIdxs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get__selectedCellIdxs() const;

  constexpr ::HMUI::TableViewSelectionType const& __cordl_internal_get__selectionType() const;

  constexpr ::HMUI::TableViewSelectionType& __cordl_internal_get__selectionType();

  constexpr ::HMUI::__TableView__TableType const& __cordl_internal_get__tableType() const;

  constexpr ::HMUI::__TableView__TableType& __cordl_internal_get__tableType();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__viewportTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__viewportTransform();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& __cordl_internal_get__visibleCells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*> const& __cordl_internal_get__visibleCells() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didChangeRectSizeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& __cordl_internal_get_didChangeRectSizeEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didDeleteCellsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& __cordl_internal_get_didDeleteCellsEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didInsertCellsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& __cordl_internal_get_didInsertCellsEvent() const;

  constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& __cordl_internal_get_didReloadDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& __cordl_internal_get_didReloadDataEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr void __cordl_internal_set__alignToCenter(bool value);

  constexpr void __cordl_internal_set__canSelectSelectedCell(bool value);

  constexpr void __cordl_internal_set__cellSize(float_t value);

  constexpr void __cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__dataSource(::HMUI::__TableView__IDataSource* value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__numberOfCells(int32_t value);

  constexpr void __cordl_internal_set__preallocatedCells(::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> value);

  constexpr void __cordl_internal_set__prevMaxIdx(int32_t value);

  constexpr void __cordl_internal_set__prevMinIdx(int32_t value);

  constexpr void __cordl_internal_set__refreshCellsOnEnable(bool value);

  constexpr void __cordl_internal_set__reusableCells(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* value);

  constexpr void __cordl_internal_set__scrollToTopOnEnable(bool value);

  constexpr void __cordl_internal_set__scrollView(::UnityW<::HMUI::ScrollView> value);

  constexpr void __cordl_internal_set__selectedCellIdxs(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__selectionType(::HMUI::TableViewSelectionType value);

  constexpr void __cordl_internal_set__tableType(::HMUI::__TableView__TableType value);

  constexpr void __cordl_internal_set__viewportTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__visibleCells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value);

  constexpr void __cordl_internal_set_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method .ctor, addr 0x254354c, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didChangeRectSizeEvent, addr 0x2543e08, size 0xb0, virtual false, abstract: false, final false
  inline void add_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didDeleteCellsEvent, addr 0x2543ca8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didInsertCellsEvent, addr 0x2543b48, size 0xb0, virtual false, abstract: false, final false
  inline void add_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didReloadDataEvent, addr 0x25439e8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x2543888, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method get_canSelectSelectedCell, addr 0x2543880, size 0x8, virtual true, abstract: false, final true
  inline bool get_canSelectSelectedCell();

  /// @brief Method get_cellSize, addr 0x2543fa8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_cellSize();

  /// @brief Method get_contentTransform, addr 0x2543f98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_contentTransform();

  /// @brief Method get_dataSource, addr 0x2543f68, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::__TableView__IDataSource* get_dataSource();

  /// @brief Method get_numberOfCells, addr 0x2543fa0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_numberOfCells();

  /// @brief Method get_scrollView, addr 0x2543fb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::HMUI::ScrollView> get_scrollView();

  /// @brief Method get_selectionType, addr 0x2543870, size 0x8, virtual true, abstract: false, final true
  inline ::HMUI::TableViewSelectionType get_selectionType();

  /// @brief Method get_tableType, addr 0x2543fb0, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::__TableView__TableType get_tableType();

  /// @brief Method get_viewportTransform, addr 0x2543f90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_viewportTransform();

  /// @brief Method get_visibleCells, addr 0x2543f88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* get_visibleCells();

  /// @brief Convert to "::HMUI::ITableCellOwner"
  constexpr ::HMUI::ITableCellOwner* i___HMUI__ITableCellOwner() noexcept;

  /// @brief Method remove_didChangeRectSizeEvent, addr 0x2543eb8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didDeleteCellsEvent, addr 0x2543d58, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didInsertCellsEvent, addr 0x2543bf8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didReloadDataEvent, addr 0x2543a98, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x2543938, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value);

  /// @brief Method set_selectionType, addr 0x2543878, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _scrollView, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::ScrollView> ____scrollView;

  /// @brief Field _scrollToTopOnEnable, offset: 0x20, size: 0x1, def value: None
  bool ____scrollToTopOnEnable;

  /// @brief Field _alignToCenter, offset: 0x21, size: 0x1, def value: None
  bool ____alignToCenter;

  /// @brief Field _tableType, offset: 0x24, size: 0x4, def value: None
  ::HMUI::__TableView__TableType ____tableType;

  /// @brief Field _selectionType, offset: 0x28, size: 0x4, def value: None
  ::HMUI::TableViewSelectionType ____selectionType;

  /// @brief Field _canSelectSelectedCell, offset: 0x2c, size: 0x1, def value: None
  bool ____canSelectSelectedCell;

  /// @brief Field _preallocatedCells, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> ____preallocatedCells;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field didReloadDataEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didReloadDataEvent;

  /// @brief Field didInsertCellsEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didInsertCellsEvent;

  /// @brief Field didDeleteCellsEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didDeleteCellsEvent;

  /// @brief Field didChangeRectSizeEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::HMUI::TableView>>* ___didChangeRectSizeEvent;

  /// @brief Field _contentTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentTransform;

  /// @brief Field _viewportTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____viewportTransform;

  /// @brief Field _dataSource, offset: 0x70, size: 0x8, def value: None
  ::HMUI::__TableView__IDataSource* ____dataSource;

  /// @brief Field _numberOfCells, offset: 0x78, size: 0x4, def value: None
  int32_t ____numberOfCells;

  /// @brief Field _cellSize, offset: 0x7c, size: 0x4, def value: None
  float_t ____cellSize;

  /// @brief Field _visibleCells, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* ____visibleCells;

  /// @brief Field _reusableCells, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* ____reusableCells;

  /// @brief Field _selectedCellIdxs, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____selectedCellIdxs;

  /// @brief Field _prevMinIdx, offset: 0x98, size: 0x4, def value: None
  int32_t ____prevMinIdx;

  /// @brief Field _prevMaxIdx, offset: 0x9c, size: 0x4, def value: None
  int32_t ____prevMaxIdx;

  /// @brief Field _isInitialized, offset: 0xa0, size: 0x1, def value: None
  bool ____isInitialized;

  /// @brief Field _refreshCellsOnEnable, offset: 0xa1, size: 0x1, def value: None
  bool ____refreshCellsOnEnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TableView, 0xa8>, "Size mismatch!");

static_assert(offsetof(::HMUI::TableView, ____scrollView) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____scrollToTopOnEnable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____alignToCenter) == 0x21, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____tableType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____selectionType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____canSelectSelectedCell) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____preallocatedCells) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didSelectCellWithIdxEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didReloadDataEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didInsertCellsEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didDeleteCellsEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ___didChangeRectSizeEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____contentTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____viewportTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____dataSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____numberOfCells) == 0x78, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____cellSize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____visibleCells) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____reusableCells) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____selectedCellIdxs) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____prevMinIdx) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____prevMaxIdx) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____isInitialized) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableView, ____refreshCellsOnEnable) == 0xa1, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__ScrollPositionType, "HMUI", "TableView/ScrollPositionType");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__TableType, "HMUI", "TableView/TableType");
NEED_NO_BOX(::HMUI::TableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView*, "HMUI", "TableView");
NEED_NO_BOX(::HMUI::__TableView__CellsGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__CellsGroup*, "HMUI", "TableView/CellsGroup");
NEED_NO_BOX(::HMUI::__TableView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__IDataSource*, "HMUI", "TableView/IDataSource");
