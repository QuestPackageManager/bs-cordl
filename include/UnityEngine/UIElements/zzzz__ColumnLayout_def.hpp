#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ColumnLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColumnLayout)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct ColumnDataType;
}
namespace UnityEngine::UIElements {
class ColumnLayout___c__DisplayClass53_0;
}
namespace UnityEngine::UIElements {
class ColumnLayout___c__DisplayClass54_0;
}
namespace UnityEngine::UIElements {
class Column;
}
namespace UnityEngine::UIElements {
class Columns;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ColumnLayout;
}
namespace UnityEngine::UIElements {
class ColumnLayout___c__DisplayClass53_0;
}
namespace UnityEngine::UIElements {
class ColumnLayout___c__DisplayClass54_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ColumnLayout);
MARK_REF_PTR_T(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0);
MARK_REF_PTR_T(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ColumnLayout/<>c__DisplayClass53_0
class CORDL_TYPE ColumnLayout___c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::ColumnLayout* __4__this;

  /// @brief Field totalColumnWidth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_totalColumnWidth, put = __cordl_internal_set_totalColumnWidth)) float_t totalColumnWidth;

  static inline ::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0* New_ctor();

  /// @brief Method <RecomputeToMaxWidthProportionally>b__1, addr 0x49f8e74, size 0x34, virtual false, abstract: false, final false
  inline void _RecomputeToMaxWidthProportionally_b__1(::UnityEngine::UIElements::Column* c);

  constexpr ::UnityEngine::UIElements::ColumnLayout* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::ColumnLayout*& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_totalColumnWidth() const;

  constexpr float_t& __cordl_internal_get_totalColumnWidth();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::ColumnLayout* value);

  constexpr void __cordl_internal_set_totalColumnWidth(float_t value);

  /// @brief Method .ctor, addr 0x49f7dfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnLayout___c__DisplayClass53_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColumnLayout___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColumnLayout___c__DisplayClass53_0(ColumnLayout___c__DisplayClass53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColumnLayout___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColumnLayout___c__DisplayClass53_0(ColumnLayout___c__DisplayClass53_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5638 };

  /// @brief Field totalColumnWidth, offset: 0x10, size: 0x4, def value: None
  float_t ___totalColumnWidth;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColumnLayout* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0, ___totalColumnWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ColumnLayout/<>c__DisplayClass54_0
class CORDL_TYPE ColumnLayout___c__DisplayClass54_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityEngine::UIElements::ColumnLayout* __4__this;

  /// @brief Field totalColumnsWidth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_totalColumnsWidth, put = __cordl_internal_set_totalColumnsWidth)) float_t totalColumnsWidth;

  static inline ::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0* New_ctor();

  /// @brief Method <RecomputeToMinWidthProportionally>b__1, addr 0x49f8ea8, size 0x34, virtual false, abstract: false, final false
  inline void _RecomputeToMinWidthProportionally_b__1(::UnityEngine::UIElements::Column* c);

  constexpr ::UnityEngine::UIElements::ColumnLayout* const& __cordl_internal_get___4__this() const;

  constexpr ::UnityEngine::UIElements::ColumnLayout*& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_totalColumnsWidth() const;

  constexpr float_t& __cordl_internal_get_totalColumnsWidth();

  constexpr void __cordl_internal_set___4__this(::UnityEngine::UIElements::ColumnLayout* value);

  constexpr void __cordl_internal_set_totalColumnsWidth(float_t value);

  /// @brief Method .ctor, addr 0x49f7f20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnLayout___c__DisplayClass54_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColumnLayout___c__DisplayClass54_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColumnLayout___c__DisplayClass54_0(ColumnLayout___c__DisplayClass54_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColumnLayout___c__DisplayClass54_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColumnLayout___c__DisplayClass54_0(ColumnLayout___c__DisplayClass54_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5639 };

  /// @brief Field totalColumnsWidth, offset: 0x10, size: 0x4, def value: None
  float_t ___totalColumnsWidth;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ColumnLayout* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0, ___totalColumnsWidth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ColumnLayout
class CORDL_TYPE ColumnLayout : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass53_0 = ::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0;

  using __c__DisplayClass54_0 = ::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0;

  __declspec(property(get = get_columns)) ::UnityEngine::UIElements::Columns* columns;

  __declspec(property(get = get_columnsWidth)) float_t columnsWidth;

  __declspec(property(get = get_hasRelativeWidthColumns)) bool hasRelativeWidthColumns;

  __declspec(property(get = get_hasStretchableColumns)) bool hasStretchableColumns;

  /// @brief Field layoutRequested, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_layoutRequested, put = __cordl_internal_set_layoutRequested)) ::System::Action* layoutRequested;

  __declspec(property(get = get_layoutWidth)) float_t layoutWidth;

  /// @brief Field m_Columns, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Columns, put = __cordl_internal_set_m_Columns)) ::UnityEngine::UIElements::Columns* m_Columns;

  /// @brief Field m_ColumnsWidth, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColumnsWidth, put = __cordl_internal_set_m_ColumnsWidth)) float_t m_ColumnsWidth;

  /// @brief Field m_ColumnsWidthDirty, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ColumnsWidthDirty, put = __cordl_internal_set_m_ColumnsWidthDirty)) bool m_ColumnsWidthDirty;

  /// @brief Field m_DragFixedColumns, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragFixedColumns,
                      put = __cordl_internal_set_m_DragFixedColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_DragFixedColumns;

  /// @brief Field m_DragInitialColumnWidth, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragInitialColumnWidth, put = __cordl_internal_set_m_DragInitialColumnWidth)) float_t m_DragInitialColumnWidth;

  /// @brief Field m_DragLastPos, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragLastPos, put = __cordl_internal_set_m_DragLastPos)) float_t m_DragLastPos;

  /// @brief Field m_DragRelativeColumns, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragRelativeColumns,
                      put = __cordl_internal_set_m_DragRelativeColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_DragRelativeColumns;

  /// @brief Field m_DragResizeInPreviewMode, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DragResizeInPreviewMode, put = __cordl_internal_set_m_DragResizeInPreviewMode)) bool m_DragResizeInPreviewMode;

  /// @brief Field m_DragResizing, offset 0x55, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DragResizing, put = __cordl_internal_set_m_DragResizing)) bool m_DragResizing;

  /// @brief Field m_DragStartPos, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragStartPos, put = __cordl_internal_set_m_DragStartPos)) float_t m_DragStartPos;

  /// @brief Field m_DragStretchableColumns, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragStretchableColumns,
                      put = __cordl_internal_set_m_DragStretchableColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_DragStretchableColumns;

  /// @brief Field m_FixedColumns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FixedColumns, put = __cordl_internal_set_m_FixedColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_FixedColumns;

  /// @brief Field m_IsDirty, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDirty, put = __cordl_internal_set_m_IsDirty)) bool m_IsDirty;

  /// @brief Field m_LayoutWidth, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LayoutWidth, put = __cordl_internal_set_m_LayoutWidth)) float_t m_LayoutWidth;

  /// @brief Field m_MaxColumnsWidth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxColumnsWidth, put = __cordl_internal_set_m_MaxColumnsWidth)) float_t m_MaxColumnsWidth;

  /// @brief Field m_MinColumnsWidth, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinColumnsWidth, put = __cordl_internal_set_m_MinColumnsWidth)) float_t m_MinColumnsWidth;

  /// @brief Field m_MixedWidthColumns, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MixedWidthColumns,
                      put = __cordl_internal_set_m_MixedWidthColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_MixedWidthColumns;

  /// @brief Field m_PreviewDesiredWidths, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviewDesiredWidths,
                      put = __cordl_internal_set_m_PreviewDesiredWidths)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, float_t>* m_PreviewDesiredWidths;

  /// @brief Field m_PreviousWidth, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousWidth, put = __cordl_internal_set_m_PreviousWidth)) float_t m_PreviousWidth;

  /// @brief Field m_RelativeWidthColumns, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RelativeWidthColumns,
                      put = __cordl_internal_set_m_RelativeWidthColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_RelativeWidthColumns;

  /// @brief Field m_StretchableColumns, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StretchableColumns,
                      put = __cordl_internal_set_m_StretchableColumns)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* m_StretchableColumns;

  __declspec(property(get = get_maxColumnsWidth)) float_t maxColumnsWidth;

  __declspec(property(get = get_minColumnsWidth)) float_t minColumnsWidth;

  /// @brief Method BeginDragResize, addr 0x49f83f8, size 0x328, virtual false, abstract: false, final false
  inline void BeginDragResize(::UnityEngine::UIElements::Column* column, float_t pos, bool previewMode);

  /// @brief Method ClearCache, addr 0x49f5690, size 0xcc, virtual false, abstract: false, final false
  inline void ClearCache();

  /// @brief Method Dirty, addr 0x49f5650, size 0x40, virtual false, abstract: false, final false
  inline void Dirty();

  /// @brief Method DistributeExcess, addr 0x49f72d0, size 0x150, virtual false, abstract: false, final false
  inline void DistributeExcess(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* stretchableColumns,
                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* fixedColumns,
                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* relativeWidthColumns, ::ByRef<float_t> delta, bool resizeToFit, bool dragResize);

  /// @brief Method DistributeOverflow, addr 0x49f7158, size 0x178, virtual false, abstract: false, final false
  inline void DistributeOverflow(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* stretchableColumns,
                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* fixedColumns,
                                 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* relativeWidthColumns, ::ByRef<float_t> delta, bool resizeToFit, bool dragResize);

  /// @brief Method DoLayout, addr 0x49f58b8, size 0xdf8, virtual false, abstract: false, final false
  inline void DoLayout(float_t width);

  /// @brief Method DragResize, addr 0x49f8814, size 0x27c, virtual false, abstract: false, final false
  inline void DragResize(::UnityEngine::UIElements::Column* column, float_t pos);

  /// @brief Method EndDragResize, addr 0x49f8a90, size 0x254, virtual false, abstract: false, final false
  inline void EndDragResize(::UnityEngine::UIElements::Column* column, bool cancelled);

  /// @brief Method GetDesiredPosition, addr 0x49f8720, size 0xf4, virtual false, abstract: false, final false
  inline float_t GetDesiredPosition(::UnityEngine::UIElements::Column* column);

  /// @brief Method GetDesiredWidth, addr 0x49f6fd0, size 0xa0, virtual false, abstract: false, final false
  inline float_t GetDesiredWidth(::UnityEngine::UIElements::Column* c);

  /// @brief Method IsClamped, addr 0x49f58a0, size 0x18, virtual false, abstract: false, final false
  static inline bool IsClamped(float_t value, float_t min, float_t max);

  static inline ::UnityEngine::UIElements::ColumnLayout* New_ctor(::UnityEngine::UIElements::Columns* columns);

  /// @brief Method OnColumnAdded, addr 0x49f52bc, size 0xe4, virtual false, abstract: false, final false
  inline void OnColumnAdded(::UnityEngine::UIElements::Column* column, int32_t index);

  /// @brief Method OnColumnChanged, addr 0x49f5868, size 0x2c, virtual false, abstract: false, final false
  inline void OnColumnChanged(::UnityEngine::UIElements::Column* column, ::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method OnColumnRemoved, addr 0x49f575c, size 0xe4, virtual false, abstract: false, final false
  inline void OnColumnRemoved(::UnityEngine::UIElements::Column* column);

  /// @brief Method OnColumnReordered, addr 0x49f5840, size 0x4, virtual false, abstract: false, final false
  inline void OnColumnReordered(::UnityEngine::UIElements::Column* column, int32_t from, int32_t to);

  /// @brief Method OnColumnResized, addr 0x49f5894, size 0xc, virtual false, abstract: false, final false
  inline void OnColumnResized(::UnityEngine::UIElements::Column* column);

  /// @brief Method RecomputeToDesiredWidth, addr 0x49f7f28, size 0x1b4, virtual false, abstract: false, final false
  inline float_t RecomputeToDesiredWidth(::UnityEngine::UIElements::Column* column, float_t distributedDelta, bool setDesiredWidthOnly, bool distributeOverflow);

  /// @brief Method RecomputeToDesiredWidth, addr 0x49f7420, size 0x124, virtual false, abstract: false, final false
  inline float_t RecomputeToDesiredWidth(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* columns, float_t distributedDelta, bool setDesiredWidthOnly,
                                         bool distributeOverflow);

  /// @brief Method RecomputeToMaxWidth, addr 0x49f7c78, size 0x184, virtual false, abstract: false, final false
  inline float_t RecomputeToMaxWidth(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* columns, float_t distributedDelta, bool setDesiredWidthOnly);

  /// @brief Method RecomputeToMaxWidthProportionally, addr 0x49f79b4, size 0x2c4, virtual false, abstract: false, final false
  inline float_t RecomputeToMaxWidthProportionally(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* columns, float_t distributedDelta, bool setDesiredWidthOnly);

  /// @brief Method RecomputeToMinWidth, addr 0x49f7824, size 0x190, virtual false, abstract: false, final false
  inline float_t RecomputeToMinWidth(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* columns, float_t distributedDelta, bool setDesiredWidthOnly);

  /// @brief Method RecomputeToMinWidthProportionally, addr 0x49f7544, size 0x2e0, virtual false, abstract: false, final false
  inline float_t RecomputeToMinWidthProportionally(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* columns, float_t distributedDelta, bool setDesiredWidthOnly);

  /// @brief Method RequiresLayoutUpdate, addr 0x49f5844, size 0x24, virtual false, abstract: false, final false
  inline bool RequiresLayoutUpdate(::UnityEngine::UIElements::ColumnDataType type);

  /// @brief Method ResizeColumn, addr 0x49f7e04, size 0x11c, virtual false, abstract: false, final false
  inline void ResizeColumn(::UnityEngine::UIElements::Column* column, float_t width, bool setDesiredWidthOnly);

  /// @brief Method ResizeToFit, addr 0x49f80dc, size 0x31c, virtual false, abstract: false, final false
  inline void ResizeToFit(float_t width);

  /// @brief Method StretchResizeColumns, addr 0x49f7070, size 0xe8, virtual false, abstract: false, final false
  inline void StretchResizeColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* stretchableColumns,
                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* fixedColumns,
                                   ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* relativeWidthColumns, ::ByRef<float_t> delta, bool resizeToFit, bool dragResize);

  /// @brief Method UpdateCache, addr 0x49f66b0, size 0x54c, virtual false, abstract: false, final false
  inline void UpdateCache();

  /// @brief Method UpdateMinAndMaxColumnsWidth, addr 0x49f6bfc, size 0x334, virtual false, abstract: false, final false
  inline void UpdateMinAndMaxColumnsWidth();

  /// @brief Method <DoLayout>b__49_0, addr 0x49f8ce4, size 0x64, virtual false, abstract: false, final false
  inline int32_t _DoLayout_b__49_0(::UnityEngine::UIElements::Column* c1, ::UnityEngine::UIElements::Column* c2);

  /// @brief Method <DoLayout>b__49_1, addr 0x49f8d48, size 0x64, virtual false, abstract: false, final false
  inline int32_t _DoLayout_b__49_1(::UnityEngine::UIElements::Column* c1, ::UnityEngine::UIElements::Column* c2);

  /// @brief Method <RecomputeToMaxWidthProportionally>b__53_0, addr 0x49f8dac, size 0x64, virtual false, abstract: false, final false
  inline int32_t _RecomputeToMaxWidthProportionally_b__53_0(::UnityEngine::UIElements::Column* c1, ::UnityEngine::UIElements::Column* c2);

  /// @brief Method <RecomputeToMinWidthProportionally>b__54_0, addr 0x49f8e10, size 0x64, virtual false, abstract: false, final false
  inline int32_t _RecomputeToMinWidthProportionally_b__54_0(::UnityEngine::UIElements::Column* c1, ::UnityEngine::UIElements::Column* c2);

  constexpr ::System::Action* const& __cordl_internal_get_layoutRequested() const;

  constexpr ::System::Action*& __cordl_internal_get_layoutRequested();

  constexpr ::UnityEngine::UIElements::Columns* const& __cordl_internal_get_m_Columns() const;

  constexpr ::UnityEngine::UIElements::Columns*& __cordl_internal_get_m_Columns();

  constexpr float_t const& __cordl_internal_get_m_ColumnsWidth() const;

  constexpr float_t& __cordl_internal_get_m_ColumnsWidth();

  constexpr bool const& __cordl_internal_get_m_ColumnsWidthDirty() const;

  constexpr bool& __cordl_internal_get_m_ColumnsWidthDirty();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_DragFixedColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_DragFixedColumns();

  constexpr float_t const& __cordl_internal_get_m_DragInitialColumnWidth() const;

  constexpr float_t& __cordl_internal_get_m_DragInitialColumnWidth();

  constexpr float_t const& __cordl_internal_get_m_DragLastPos() const;

  constexpr float_t& __cordl_internal_get_m_DragLastPos();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_DragRelativeColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_DragRelativeColumns();

  constexpr bool const& __cordl_internal_get_m_DragResizeInPreviewMode() const;

  constexpr bool& __cordl_internal_get_m_DragResizeInPreviewMode();

  constexpr bool const& __cordl_internal_get_m_DragResizing() const;

  constexpr bool& __cordl_internal_get_m_DragResizing();

  constexpr float_t const& __cordl_internal_get_m_DragStartPos() const;

  constexpr float_t& __cordl_internal_get_m_DragStartPos();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_DragStretchableColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_DragStretchableColumns();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_FixedColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_FixedColumns();

  constexpr bool const& __cordl_internal_get_m_IsDirty() const;

  constexpr bool& __cordl_internal_get_m_IsDirty();

  constexpr float_t const& __cordl_internal_get_m_LayoutWidth() const;

  constexpr float_t& __cordl_internal_get_m_LayoutWidth();

  constexpr float_t const& __cordl_internal_get_m_MaxColumnsWidth() const;

  constexpr float_t& __cordl_internal_get_m_MaxColumnsWidth();

  constexpr float_t const& __cordl_internal_get_m_MinColumnsWidth() const;

  constexpr float_t& __cordl_internal_get_m_MinColumnsWidth();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_MixedWidthColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_MixedWidthColumns();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, float_t>* const& __cordl_internal_get_m_PreviewDesiredWidths() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, float_t>*& __cordl_internal_get_m_PreviewDesiredWidths();

  constexpr float_t const& __cordl_internal_get_m_PreviousWidth() const;

  constexpr float_t& __cordl_internal_get_m_PreviousWidth();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_RelativeWidthColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_RelativeWidthColumns();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* const& __cordl_internal_get_m_StretchableColumns() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>*& __cordl_internal_get_m_StretchableColumns();

  constexpr void __cordl_internal_set_layoutRequested(::System::Action* value);

  constexpr void __cordl_internal_set_m_Columns(::UnityEngine::UIElements::Columns* value);

  constexpr void __cordl_internal_set_m_ColumnsWidth(float_t value);

  constexpr void __cordl_internal_set_m_ColumnsWidthDirty(bool value);

  constexpr void __cordl_internal_set_m_DragFixedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_DragInitialColumnWidth(float_t value);

  constexpr void __cordl_internal_set_m_DragLastPos(float_t value);

  constexpr void __cordl_internal_set_m_DragRelativeColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_DragResizeInPreviewMode(bool value);

  constexpr void __cordl_internal_set_m_DragResizing(bool value);

  constexpr void __cordl_internal_set_m_DragStartPos(float_t value);

  constexpr void __cordl_internal_set_m_DragStretchableColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_FixedColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_IsDirty(bool value);

  constexpr void __cordl_internal_set_m_LayoutWidth(float_t value);

  constexpr void __cordl_internal_set_m_MaxColumnsWidth(float_t value);

  constexpr void __cordl_internal_set_m_MinColumnsWidth(float_t value);

  constexpr void __cordl_internal_set_m_MixedWidthColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_PreviewDesiredWidths(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, float_t>* value);

  constexpr void __cordl_internal_set_m_PreviousWidth(float_t value);

  constexpr void __cordl_internal_set_m_RelativeWidthColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  constexpr void __cordl_internal_set_m_StretchableColumns(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* value);

  /// @brief Method .ctor, addr 0x49f4f94, size 0x280, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::Columns* columns);

  /// @brief Method add_layoutRequested, addr 0x49f4e5c, size 0x9c, virtual false, abstract: false, final false
  inline void add_layoutRequested(::System::Action* value);

  /// @brief Method get_columns, addr 0x49f4a60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Columns* get_columns();

  /// @brief Method get_columnsWidth, addr 0x49f4a68, size 0x320, virtual false, abstract: false, final false
  inline float_t get_columnsWidth();

  /// @brief Method get_hasRelativeWidthColumns, addr 0x49f4df0, size 0x6c, virtual false, abstract: false, final false
  inline bool get_hasRelativeWidthColumns();

  /// @brief Method get_hasStretchableColumns, addr 0x49f4da0, size 0x50, virtual false, abstract: false, final false
  inline bool get_hasStretchableColumns();

  /// @brief Method get_layoutWidth, addr 0x49f4d88, size 0x8, virtual false, abstract: false, final false
  inline float_t get_layoutWidth();

  /// @brief Method get_maxColumnsWidth, addr 0x49f4d98, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxColumnsWidth();

  /// @brief Method get_minColumnsWidth, addr 0x49f4d90, size 0x8, virtual false, abstract: false, final false
  inline float_t get_minColumnsWidth();

  /// @brief Method remove_layoutRequested, addr 0x49f4ef8, size 0x9c, virtual false, abstract: false, final false
  inline void remove_layoutRequested(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColumnLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColumnLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColumnLayout(ColumnLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColumnLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColumnLayout(ColumnLayout const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5640 };

  /// @brief Field m_StretchableColumns, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_StretchableColumns;

  /// @brief Field m_FixedColumns, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_FixedColumns;

  /// @brief Field m_RelativeWidthColumns, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_RelativeWidthColumns;

  /// @brief Field m_MixedWidthColumns, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_MixedWidthColumns;

  /// @brief Field m_Columns, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::Columns* ___m_Columns;

  /// @brief Field m_ColumnsWidth, offset: 0x38, size: 0x4, def value: None
  float_t ___m_ColumnsWidth;

  /// @brief Field m_ColumnsWidthDirty, offset: 0x3c, size: 0x1, def value: None
  bool ___m_ColumnsWidthDirty;

  /// @brief Field m_MaxColumnsWidth, offset: 0x40, size: 0x4, def value: None
  float_t ___m_MaxColumnsWidth;

  /// @brief Field m_MinColumnsWidth, offset: 0x44, size: 0x4, def value: None
  float_t ___m_MinColumnsWidth;

  /// @brief Field m_IsDirty, offset: 0x48, size: 0x1, def value: None
  bool ___m_IsDirty;

  /// @brief Field m_PreviousWidth, offset: 0x4c, size: 0x4, def value: None
  float_t ___m_PreviousWidth;

  /// @brief Field m_LayoutWidth, offset: 0x50, size: 0x4, def value: None
  float_t ___m_LayoutWidth;

  /// @brief Field m_DragResizeInPreviewMode, offset: 0x54, size: 0x1, def value: None
  bool ___m_DragResizeInPreviewMode;

  /// @brief Field m_DragResizing, offset: 0x55, size: 0x1, def value: None
  bool ___m_DragResizing;

  /// @brief Field m_DragStartPos, offset: 0x58, size: 0x4, def value: None
  float_t ___m_DragStartPos;

  /// @brief Field m_DragLastPos, offset: 0x5c, size: 0x4, def value: None
  float_t ___m_DragLastPos;

  /// @brief Field m_DragInitialColumnWidth, offset: 0x60, size: 0x4, def value: None
  float_t ___m_DragInitialColumnWidth;

  /// @brief Field m_DragStretchableColumns, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_DragStretchableColumns;

  /// @brief Field m_DragRelativeColumns, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_DragRelativeColumns;

  /// @brief Field m_DragFixedColumns, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Column*>* ___m_DragFixedColumns;

  /// @brief Field m_PreviewDesiredWidths, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::Column*, float_t>* ___m_PreviewDesiredWidths;

  /// @brief Field layoutRequested, offset: 0x88, size: 0x8, def value: None
  ::System::Action* ___layoutRequested;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_StretchableColumns) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_FixedColumns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_RelativeWidthColumns) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_MixedWidthColumns) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_Columns) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_ColumnsWidth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_ColumnsWidthDirty) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_MaxColumnsWidth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_MinColumnsWidth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_IsDirty) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_PreviousWidth) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_LayoutWidth) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragResizeInPreviewMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragResizing) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragStartPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragLastPos) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragInitialColumnWidth) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragStretchableColumns) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragRelativeColumns) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_DragFixedColumns) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___m_PreviewDesiredWidths) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ColumnLayout, ___layoutRequested) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ColumnLayout, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ColumnLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnLayout*, "UnityEngine.UIElements", "ColumnLayout");
NEED_NO_BOX(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass53_0*, "UnityEngine.UIElements", "ColumnLayout/<>c__DisplayClass53_0");
NEED_NO_BOX(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ColumnLayout___c__DisplayClass54_0*, "UnityEngine.UIElements", "ColumnLayout/<>c__DisplayClass54_0");
