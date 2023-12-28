#pragma once
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
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace HMUI {
struct __TableView__TableType;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace HMUI {
class ITableCellOwner;
}
namespace HMUI {
class SelectableCell;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
struct TableViewSelectionType;
}
namespace HMUI {
struct __TableView__ScrollPositionType;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
template <typename T1, typename T2> class Tuple_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace HMUI {
class ScrollView;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct __RectTransform__Axis;
}
namespace HMUI {
class TableCell;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace HMUI {
class __TableView__CellsGroup;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13665))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TableView__TableType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TableView__TableType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Vertical value: static_cast<int32_t>(0x0)
  static ::HMUI::__TableView__TableType const Vertical;

  /// @brief Field Horizontal value: static_cast<int32_t>(0x1)
  static ::HMUI::__TableView__TableType const Horizontal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TableView__TableType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Type: ::ScrollPositionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13666))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TableView__ScrollPositionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TableView__ScrollPositionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Beginning value: static_cast<int32_t>(0x0)
  static ::HMUI::__TableView__ScrollPositionType const Beginning;

  /// @brief Field Center value: static_cast<int32_t>(0x1)
  static ::HMUI::__TableView__ScrollPositionType const Center;

  /// @brief Field End value: static_cast<int32_t>(0x2)
  static ::HMUI::__TableView__ScrollPositionType const End;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TableView__ScrollPositionType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Type: ::CellsGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13667))
// CS Name: ::TableView::CellsGroup*
class CORDL_TYPE __TableView__CellsGroup : public ::System::Object {
public:
  // Declarations
  /// @brief Field _reuseIdentifier, offset 0x10, size 0x8
  __declspec(property(get = __get__reuseIdentifier, put = __set__reuseIdentifier))::StringW _reuseIdentifier;

  /// @brief Field _cells, offset 0x18, size 0x8
  __declspec(property(get = __get__cells, put = __set__cells))::System::Collections::Generic::List_1<::HMUI::TableCell*>* _cells;

  __declspec(property(get = get_reuseIdentifier))::StringW reuseIdentifier;

  __declspec(property(get = get_cells))::System::Collections::Generic::List_1<::HMUI::TableCell*>* cells;

  constexpr ::StringW& __get__reuseIdentifier();

  constexpr ::StringW const& __get__reuseIdentifier() const;

  constexpr void __set__reuseIdentifier(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::HMUI::TableCell*>*& __get__cells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::TableCell*>*> const& __get__cells() const;

  constexpr void __set__cells(::System::Collections::Generic::List_1<::HMUI::TableCell*>* value);

  /// @brief Method get_reuseIdentifier addr 0x214aa14 size 0x8 virtual false final false
  inline ::StringW get_reuseIdentifier();

  /// @brief Method get_cells addr 0x214aa1c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::HMUI::TableCell*>* get_cells();

  static inline ::HMUI::__TableView__CellsGroup* New_ctor();

  /// @brief Method .ctor addr 0x214aa24 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TableView__CellsGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TableView__CellsGroup(__TableView__CellsGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TableView__CellsGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TableView__CellsGroup(__TableView__CellsGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TableView__CellsGroup();

public:
  /// @brief Field _reuseIdentifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ____reuseIdentifier;

  /// @brief Field _cells, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HMUI::TableCell*>* ____cells;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__TableView__CellsGroup, 0x20>, "Size mismatch!");

} // namespace HMUI
// Type: ::IDataSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13668))
// CS Name: ::TableView::IDataSource*
class CORDL_TYPE __TableView__IDataSource {
public:
  // Declarations
  /// @brief Method CellSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t CellSize();

  /// @brief Method NumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t idx);

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13665)), TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(13659))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13669))
// CS Name: ::HMUI::TableView*
class CORDL_TYPE TableView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using IDataSource = ::HMUI::__TableView__IDataSource;

  using CellsGroup = ::HMUI::__TableView__CellsGroup;

  using ScrollPositionType = ::HMUI::__TableView__ScrollPositionType;

  using TableType = ::HMUI::__TableView__TableType;

  /// @brief Field _scrollView, offset 0x18, size 0x8
  __declspec(property(get = __get__scrollView, put = __set__scrollView))::HMUI::ScrollView* _scrollView;

  /// @brief Field _scrollToTopOnEnable, offset 0x20, size 0x1
  __declspec(property(get = __get__scrollToTopOnEnable, put = __set__scrollToTopOnEnable)) bool _scrollToTopOnEnable;

  /// @brief Field _alignToCenter, offset 0x21, size 0x1
  __declspec(property(get = __get__alignToCenter, put = __set__alignToCenter)) bool _alignToCenter;

  /// @brief Field _tableType, offset 0x24, size 0x4
  __declspec(property(get = __get__tableType, put = __set__tableType))::HMUI::__TableView__TableType _tableType;

  /// @brief Field _selectionType, offset 0x28, size 0x4
  __declspec(property(get = __get__selectionType, put = __set__selectionType))::HMUI::TableViewSelectionType _selectionType;

  /// @brief Field _canSelectSelectedCell, offset 0x2c, size 0x1
  __declspec(property(get = __get__canSelectSelectedCell, put = __set__canSelectSelectedCell)) bool _canSelectSelectedCell;

  /// @brief Field _preallocatedCells, offset 0x30, size 0x8
  __declspec(property(get = __get__preallocatedCells, put = __set__preallocatedCells))::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> _preallocatedCells;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_didSelectCellWithIdxEvent, put = __set_didSelectCellWithIdxEvent))::System::Action_2<::HMUI::TableView*, int32_t>* didSelectCellWithIdxEvent;

  /// @brief Field didReloadDataEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_didReloadDataEvent, put = __set_didReloadDataEvent))::System::Action_1<::HMUI::TableView*>* didReloadDataEvent;

  /// @brief Field didInsertCellsEvent, offset 0x48, size 0x8
  __declspec(property(get = __get_didInsertCellsEvent, put = __set_didInsertCellsEvent))::System::Action_1<::HMUI::TableView*>* didInsertCellsEvent;

  /// @brief Field didDeleteCellsEvent, offset 0x50, size 0x8
  __declspec(property(get = __get_didDeleteCellsEvent, put = __set_didDeleteCellsEvent))::System::Action_1<::HMUI::TableView*>* didDeleteCellsEvent;

  /// @brief Field didChangeRectSizeEvent, offset 0x58, size 0x8
  __declspec(property(get = __get_didChangeRectSizeEvent, put = __set_didChangeRectSizeEvent))::System::Action_1<::HMUI::TableView*>* didChangeRectSizeEvent;

  /// @brief Field _contentTransform, offset 0x60, size 0x8
  __declspec(property(get = __get__contentTransform, put = __set__contentTransform))::UnityEngine::RectTransform* _contentTransform;

  /// @brief Field _viewportTransform, offset 0x68, size 0x8
  __declspec(property(get = __get__viewportTransform, put = __set__viewportTransform))::UnityEngine::RectTransform* _viewportTransform;

  /// @brief Field _dataSource, offset 0x70, size 0x8
  __declspec(property(get = __get__dataSource, put = __set__dataSource))::HMUI::__TableView__IDataSource* _dataSource;

  /// @brief Field _numberOfCells, offset 0x78, size 0x4
  __declspec(property(get = __get__numberOfCells, put = __set__numberOfCells)) int32_t _numberOfCells;

  /// @brief Field _cellSize, offset 0x7c, size 0x4
  __declspec(property(get = __get__cellSize, put = __set__cellSize)) float_t _cellSize;

  /// @brief Field _visibleCells, offset 0x80, size 0x8
  __declspec(property(get = __get__visibleCells, put = __set__visibleCells))::System::Collections::Generic::List_1<::HMUI::TableCell*>* _visibleCells;

  /// @brief Field _reusableCells, offset 0x88, size 0x8
  __declspec(property(get = __get__reusableCells,
                      put = __set__reusableCells))::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HMUI::TableCell*>*>* _reusableCells;

  /// @brief Field _selectedCellIdxs, offset 0x90, size 0x8
  __declspec(property(get = __get__selectedCellIdxs, put = __set__selectedCellIdxs))::System::Collections::Generic::HashSet_1<int32_t>* _selectedCellIdxs;

  /// @brief Field _prevMinIdx, offset 0x98, size 0x4
  __declspec(property(get = __get__prevMinIdx, put = __set__prevMinIdx)) int32_t _prevMinIdx;

  /// @brief Field _prevMaxIdx, offset 0x9c, size 0x4
  __declspec(property(get = __get__prevMaxIdx, put = __set__prevMaxIdx)) int32_t _prevMaxIdx;

  /// @brief Field _isInitialized, offset 0xa0, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  /// @brief Field _refreshCellsOnEnable, offset 0xa1, size 0x1
  __declspec(property(get = __get__refreshCellsOnEnable, put = __set__refreshCellsOnEnable)) bool _refreshCellsOnEnable;

  __declspec(property(get = get_selectionType, put = set_selectionType))::HMUI::TableViewSelectionType selectionType;

  __declspec(property(get = get_canSelectSelectedCell)) bool canSelectSelectedCell;

  __declspec(property(get = get_dataSource))::HMUI::__TableView__IDataSource* dataSource;

  __declspec(property(get = get_visibleCells))::System::Collections::Generic::IEnumerable_1<::HMUI::TableCell*>* visibleCells;

  __declspec(property(get = get_viewportTransform))::UnityEngine::RectTransform* viewportTransform;

  __declspec(property(get = get_contentTransform))::UnityEngine::RectTransform* contentTransform;

  __declspec(property(get = get_numberOfCells)) int32_t numberOfCells;

  __declspec(property(get = get_cellSize)) float_t cellSize;

  __declspec(property(get = get_tableType))::HMUI::__TableView__TableType tableType;

  __declspec(property(get = get_scrollView))::HMUI::ScrollView* scrollView;

  /// @brief Convert operator to "::HMUI::ITableCellOwner"
  constexpr operator ::HMUI::ITableCellOwner*() noexcept;

  constexpr ::HMUI::ScrollView*& __get__scrollView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> const& __get__scrollView() const;

  constexpr void __set__scrollView(::HMUI::ScrollView* value);

  constexpr bool& __get__scrollToTopOnEnable();

  constexpr bool const& __get__scrollToTopOnEnable() const;

  constexpr void __set__scrollToTopOnEnable(bool value);

  constexpr bool& __get__alignToCenter();

  constexpr bool const& __get__alignToCenter() const;

  constexpr void __set__alignToCenter(bool value);

  constexpr ::HMUI::__TableView__TableType& __get__tableType();

  constexpr ::HMUI::__TableView__TableType const& __get__tableType() const;

  constexpr void __set__tableType(::HMUI::__TableView__TableType value);

  constexpr ::HMUI::TableViewSelectionType& __get__selectionType();

  constexpr ::HMUI::TableViewSelectionType const& __get__selectionType() const;

  constexpr void __set__selectionType(::HMUI::TableViewSelectionType value);

  constexpr bool& __get__canSelectSelectedCell();

  constexpr bool const& __get__canSelectSelectedCell() const;

  constexpr void __set__canSelectSelectedCell(bool value);

  constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*>& __get__preallocatedCells();

  constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> const& __get__preallocatedCells() const;

  constexpr void __set__preallocatedCells(::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> value);

  constexpr ::System::Action_2<::HMUI::TableView*, int32_t>*& __get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::TableView*, int32_t>*> const& __get_didSelectCellWithIdxEvent() const;

  constexpr void __set_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::TableView*, int32_t>* value);

  constexpr ::System::Action_1<::HMUI::TableView*>*& __get_didReloadDataEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> const& __get_didReloadDataEvent() const;

  constexpr void __set_didReloadDataEvent(::System::Action_1<::HMUI::TableView*>* value);

  constexpr ::System::Action_1<::HMUI::TableView*>*& __get_didInsertCellsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> const& __get_didInsertCellsEvent() const;

  constexpr void __set_didInsertCellsEvent(::System::Action_1<::HMUI::TableView*>* value);

  constexpr ::System::Action_1<::HMUI::TableView*>*& __get_didDeleteCellsEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> const& __get_didDeleteCellsEvent() const;

  constexpr void __set_didDeleteCellsEvent(::System::Action_1<::HMUI::TableView*>* value);

  constexpr ::System::Action_1<::HMUI::TableView*>*& __get_didChangeRectSizeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::TableView*>*> const& __get_didChangeRectSizeEvent() const;

  constexpr void __set_didChangeRectSizeEvent(::System::Action_1<::HMUI::TableView*>* value);

  constexpr ::UnityEngine::RectTransform*& __get__contentTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__contentTransform() const;

  constexpr void __set__contentTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::RectTransform*& __get__viewportTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__viewportTransform() const;

  constexpr void __set__viewportTransform(::UnityEngine::RectTransform* value);

  constexpr ::HMUI::__TableView__IDataSource*& __get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__TableView__IDataSource*> const& __get__dataSource() const;

  constexpr void __set__dataSource(::HMUI::__TableView__IDataSource* value);

  constexpr int32_t& __get__numberOfCells();

  constexpr int32_t const& __get__numberOfCells() const;

  constexpr void __set__numberOfCells(int32_t value);

  constexpr float_t& __get__cellSize();

  constexpr float_t const& __get__cellSize() const;

  constexpr void __set__cellSize(float_t value);

  constexpr ::System::Collections::Generic::List_1<::HMUI::TableCell*>*& __get__visibleCells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::TableCell*>*> const& __get__visibleCells() const;

  constexpr void __set__visibleCells(::System::Collections::Generic::List_1<::HMUI::TableCell*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*& __get__reusableCells();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HMUI::TableCell*>*>*> const&
  __get__reusableCells() const;

  constexpr void __set__reusableCells(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HMUI::TableCell*>*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __get__selectedCellIdxs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& __get__selectedCellIdxs() const;

  constexpr void __set__selectedCellIdxs(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr int32_t& __get__prevMinIdx();

  constexpr int32_t const& __get__prevMinIdx() const;

  constexpr void __set__prevMinIdx(int32_t value);

  constexpr int32_t& __get__prevMaxIdx();

  constexpr int32_t const& __get__prevMaxIdx() const;

  constexpr void __set__prevMaxIdx(int32_t value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  constexpr bool& __get__refreshCellsOnEnable();

  constexpr bool const& __get__refreshCellsOnEnable() const;

  constexpr void __set__refreshCellsOnEnable(bool value);

  /// @brief Method get_selectionType addr 0x2148a34 size 0x8 virtual true final true
  inline ::HMUI::TableViewSelectionType get_selectionType();

  /// @brief Method set_selectionType addr 0x2148a3c size 0x8 virtual false final false
  inline void set_selectionType(::HMUI::TableViewSelectionType value);

  /// @brief Method get_canSelectSelectedCell addr 0x2148a44 size 0x8 virtual true final true
  inline bool get_canSelectSelectedCell();

  /// @brief Method add_didSelectCellWithIdxEvent addr 0x2148a4c size 0xb0 virtual false final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::TableView*, int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent addr 0x2148afc size 0xb0 virtual false final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_2<::HMUI::TableView*, int32_t>* value);

  /// @brief Method add_didReloadDataEvent addr 0x2148bac size 0xb0 virtual false final false
  inline void add_didReloadDataEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method remove_didReloadDataEvent addr 0x2148c5c size 0xb0 virtual false final false
  inline void remove_didReloadDataEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method add_didInsertCellsEvent addr 0x2148d0c size 0xb0 virtual false final false
  inline void add_didInsertCellsEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method remove_didInsertCellsEvent addr 0x2148dbc size 0xb0 virtual false final false
  inline void remove_didInsertCellsEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method add_didDeleteCellsEvent addr 0x2148e6c size 0xb0 virtual false final false
  inline void add_didDeleteCellsEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method remove_didDeleteCellsEvent addr 0x2148f1c size 0xb0 virtual false final false
  inline void remove_didDeleteCellsEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method add_didChangeRectSizeEvent addr 0x2148fcc size 0xb0 virtual false final false
  inline void add_didChangeRectSizeEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method remove_didChangeRectSizeEvent addr 0x214907c size 0xb0 virtual false final false
  inline void remove_didChangeRectSizeEvent(::System::Action_1<::HMUI::TableView*>* value);

  /// @brief Method get_dataSource addr 0x214912c size 0x8 virtual false final false
  inline ::HMUI::__TableView__IDataSource* get_dataSource();

  /// @brief Method SetDataSource addr 0x2149134 size 0x18 virtual false final false
  inline void SetDataSource(::HMUI::__TableView__IDataSource* newDataSource, bool reloadData);

  /// @brief Method get_visibleCells addr 0x214914c size 0x8 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::HMUI::TableCell*>* get_visibleCells();

  /// @brief Method get_viewportTransform addr 0x2149154 size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_viewportTransform();

  /// @brief Method get_contentTransform addr 0x214915c size 0x8 virtual false final false
  inline ::UnityEngine::RectTransform* get_contentTransform();

  /// @brief Method get_numberOfCells addr 0x2149164 size 0x8 virtual true final true
  inline int32_t get_numberOfCells();

  /// @brief Method get_cellSize addr 0x214916c size 0x8 virtual false final false
  inline float_t get_cellSize();

  /// @brief Method get_tableType addr 0x2149174 size 0x8 virtual false final false
  inline ::HMUI::__TableView__TableType get_tableType();

  /// @brief Method get_scrollView addr 0x214917c size 0x8 virtual false final false
  inline ::HMUI::ScrollView* get_scrollView();

  /// @brief Method Awake addr 0x2149184 size 0x10 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x21494e4 size 0x88 virtual false final false
  inline void OnDestroy();

  /// @brief Method OnEnable addr 0x214956c size 0x54 virtual false final false
  inline void OnEnable();

  /// @brief Method LazyInit addr 0x2149194 size 0x350 virtual false final false
  inline void LazyInit();

  /// @brief Method Hide addr 0x2149d0c size 0x24 virtual false final false
  inline void Hide();

  /// @brief Method Show addr 0x2149d30 size 0x24 virtual false final false
  inline void Show();

  /// @brief Method RefreshContentSize addr 0x2149d54 size 0x54 virtual false final false
  inline void RefreshContentSize();

  /// @brief Method RefreshCellsContent addr 0x2149da8 size 0xc virtual false final false
  inline void RefreshCellsContent();

  /// @brief Method GetVisibleCellsIdRange addr 0x2149db4 size 0x1dc virtual false final false
  inline ::System::Tuple_2<int32_t, int32_t>* GetVisibleCellsIdRange();

  /// @brief Method RefreshCells addr 0x21495c0 size 0x5f8 virtual false final false
  inline void RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh);

  /// @brief Method LayoutCellForIdx addr 0x214a0f8 size 0x18c virtual false final false
  inline void LayoutCellForIdx(::HMUI::TableCell* cell, int32_t idx, float_t offset);

  /// @brief Method AddCellToReusableCells addr 0x2149f90 size 0x168 virtual false final false
  inline void AddCellToReusableCells(::HMUI::TableCell* cell);

  /// @brief Method HandleScrollRectValueChanged addr 0x214a284 size 0xc virtual false final false
  inline void HandleScrollRectValueChanged(float_t f);

  /// @brief Method HandleCellSelectionDidChange addr 0x214a290 size 0x2cc virtual false final false
  inline void HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* changeOwner);

  /// @brief Method DidSelectCellWithIdx addr 0x214a55c size 0x28 virtual true final false
  inline void DidSelectCellWithIdx(int32_t idx);

  /// @brief Method ReloadDataKeepingPosition addr 0x214a584 size 0x50 virtual false final false
  inline void ReloadDataKeepingPosition();

  /// @brief Method ReloadData addr 0x2147860 size 0x334 virtual true final false
  inline void ReloadData();

  /// @brief Method InsertCells addr 0x2147e28 size 0x3b0 virtual false final false
  inline void InsertCells(int32_t idx, int32_t count);

  /// @brief Method DeleteCells addr 0x2148280 size 0x36c virtual false final false
  inline void DeleteCells(int32_t idx, int32_t count);

  /// @brief Method DequeueReusableCellForIdentifier addr 0x2146834 size 0xec virtual false final false
  inline ::HMUI::TableCell* DequeueReusableCellForIdentifier(::StringW identifier);

  /// @brief Method SelectCellWithIdx addr 0x214a5d4 size 0x1e4 virtual false final false
  inline void SelectCellWithIdx(int32_t idx, bool callbackTable);

  /// @brief Method ClearSelection addr 0x214a7b8 size 0x1ac virtual false final false
  inline void ClearSelection();

  /// @brief Method ClearHighlights addr 0x2149bb8 size 0x154 virtual false final false
  inline void ClearHighlights();

  /// @brief Method ScrollToCellWithIdx addr 0x2148630 size 0xdc virtual false final false
  inline void ScrollToCellWithIdx(int32_t idx, ::HMUI::__TableView__ScrollPositionType scrollPositionType, bool animated);

  /// @brief Method ChangeRectSize addr 0x214a964 size 0xb0 virtual false final false
  inline void ChangeRectSize(::UnityEngine::__RectTransform__Axis axis, float_t size);

  static inline ::HMUI::TableView* New_ctor();

  /// @brief Method .ctor addr 0x2148710 size 0xd0 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TableView(TableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TableView(TableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TableView();

public:
  /// @brief Field _scrollView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::ScrollView* ____scrollView;

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
  ::System::Action_2<::HMUI::TableView*, int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field didReloadDataEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::HMUI::TableView*>* ___didReloadDataEvent;

  /// @brief Field didInsertCellsEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<::HMUI::TableView*>* ___didInsertCellsEvent;

  /// @brief Field didDeleteCellsEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_1<::HMUI::TableView*>* ___didDeleteCellsEvent;

  /// @brief Field didChangeRectSizeEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_1<::HMUI::TableView*>* ___didChangeRectSizeEvent;

  /// @brief Field _contentTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____contentTransform;

  /// @brief Field _viewportTransform, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____viewportTransform;

  /// @brief Field _dataSource, offset: 0x70, size: 0x8, def value: None
  ::HMUI::__TableView__IDataSource* ____dataSource;

  /// @brief Field _numberOfCells, offset: 0x78, size: 0x4, def value: None
  int32_t ____numberOfCells;

  /// @brief Field _cellSize, offset: 0x7c, size: 0x4, def value: None
  float_t ____cellSize;

  /// @brief Field _visibleCells, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HMUI::TableCell*>* ____visibleCells;

  /// @brief Field _reusableCells, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::HMUI::TableCell*>*>* ____reusableCells;

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

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__ScrollPositionType, "HMUI", "TableView/ScrollPositionType");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__TableType, "HMUI", "TableView/TableType");
NEED_NO_BOX(::HMUI::TableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableView*, "HMUI", "TableView");
NEED_NO_BOX(::HMUI::__TableView__CellsGroup);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__CellsGroup*, "HMUI", "TableView/CellsGroup");
NEED_NO_BOX(::HMUI::__TableView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__TableView__IDataSource*, "HMUI", "TableView/IDataSource");
