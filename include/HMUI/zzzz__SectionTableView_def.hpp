#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SectionTableView)
namespace HMUI {
class TableCell;
}
namespace HMUI {
class TableView;
}
namespace HMUI {
class __SectionTableView__IDataSource;
}
namespace HMUI {
struct __SectionTableView__Section;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
struct __TableView__ScrollPositionType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
// Forward declare root types
namespace HMUI {
class SectionTableView;
}
namespace HMUI {
class __SectionTableView__IDataSource;
}
namespace HMUI {
struct __SectionTableView__Section;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SectionTableView);
MARK_REF_PTR_T(::HMUI::__SectionTableView__IDataSource);
MARK_VAL_T(::HMUI::__SectionTableView__Section);
// Type: ::IDataSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::SectionTableView::IDataSource*
class CORDL_TYPE __SectionTableView__IDataSource {
public:
  // Declarations
  /// @brief Method CellForRowInSection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::HMUI::TableCell> CellForRowInSection(int32_t section, int32_t row);

  /// @brief Method CellForSectionHeader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::HMUI::TableCell> CellForSectionHeader(int32_t section, bool unfolded);

  /// @brief Method NumberOfRowsInSection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t NumberOfRowsInSection(int32_t section);

  /// @brief Method NumberOfSections, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t NumberOfSections();

  /// @brief Method RowHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t RowHeight();

  // Ctor Parameters [CppParam { name: "", ty: "__SectionTableView__IDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SectionTableView__IDataSource(__SectionTableView__IDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SectionTableView__IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SectionTableView__IDataSource(__SectionTableView__IDataSource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Type: ::Section
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::SectionTableView::Section
struct CORDL_TYPE __SectionTableView__Section {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SectionTableView__Section();

  // Ctor Parameters [CppParam { name: "unfolded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startBaseRow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "numberOfBaseRows", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SectionTableView__Section(bool unfolded, int32_t startBaseRow, int32_t numberOfBaseRows) noexcept;

  /// @brief Field unfolded, offset: 0x0, size: 0x1, def value: None
  bool unfolded;

  /// @brief Field startBaseRow, offset: 0x4, size: 0x4, def value: None
  int32_t startBaseRow;

  /// @brief Field numberOfBaseRows, offset: 0x8, size: 0x4, def value: None
  int32_t numberOfBaseRows;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__SectionTableView__Section, 0xc>, "Size mismatch!");

static_assert(offsetof(::HMUI::__SectionTableView__Section, unfolded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HMUI::__SectionTableView__Section, startBaseRow) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HMUI::__SectionTableView__Section, numberOfBaseRows) == 0x8, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::SectionTableView
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::SectionTableView*
class CORDL_TYPE SectionTableView : public ::HMUI::TableView {
public:
  // Declarations
  using IDataSource = ::HMUI::__SectionTableView__IDataSource;

  using Section = ::HMUI::__SectionTableView__Section;

  /// @brief Field _dataSource, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource))::HMUI::__SectionTableView__IDataSource* _dataSource;

  /// @brief Field _sections, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__sections,
                      put = __cordl_internal_set__sections))::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> _sections;

  /// @brief Field _unfoldSectionsByDefault, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get__unfoldSectionsByDefault, put = __cordl_internal_set__unfoldSectionsByDefault)) bool _unfoldSectionsByDefault;

  __declspec(property(get = get_dataSource, put = set_dataSource))::HMUI::__SectionTableView__IDataSource* dataSource;

  /// @brief Field didSelectHeaderEvent, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectHeaderEvent,
                      put = __cordl_internal_set_didSelectHeaderEvent))::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* didSelectHeaderEvent;

  /// @brief Field didSelectRowInSectionEvent, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectRowInSectionEvent,
                      put = __cordl_internal_set_didSelectRowInSectionEvent))::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* didSelectRowInSectionEvent;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x2430650, size 0x184, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t baseRow);

  /// @brief Method CellSize, addr 0x2430568, size 0xa0, virtual true, abstract: false, final true
  inline float_t CellSize();

  /// @brief Method DidSelectCellWithIdx, addr 0x2430e00, size 0x7c, virtual true, abstract: false, final false
  inline void DidSelectCellWithIdx(int32_t baseRow);

  /// @brief Method FoldAll, addr 0x2430ed4, size 0x54, virtual false, abstract: false, final false
  inline void FoldAll();

  /// @brief Method FoldSection, addr 0x2431444, size 0xa8, virtual false, abstract: false, final false
  inline void FoldSection(int32_t section);

  /// @brief Method IsSectionUnfolded, addr 0x2430534, size 0x34, virtual false, abstract: false, final false
  inline bool IsSectionUnfolded(int32_t section);

  static inline ::HMUI::SectionTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x2430608, size 0x48, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method ReloadData, addr 0x24308b4, size 0x8, virtual true, abstract: false, final false
  inline void ReloadData();

  /// @brief Method ReloadData, addr 0x24308bc, size 0x210, virtual false, abstract: false, final false
  inline void ReloadData(bool resetFoldState);

  /// @brief Method ScrollToRow, addr 0x2431858, size 0x44, virtual false, abstract: false, final false
  inline void ScrollToRow(int32_t section, int32_t row, ::HMUI::__TableView__ScrollPositionType scrollPositionType, bool animated);

  /// @brief Method SectionAndRowForBaseRow, addr 0x24307d4, size 0xe0, virtual false, abstract: false, final false
  inline void SectionAndRowForBaseRow(int32_t baseRow, ByRef<int32_t> section, ByRef<int32_t> row, ByRef<bool> isSectionHeader);

  /// @brief Method UnfoldAllSections, addr 0x2430e7c, size 0x58, virtual false, abstract: false, final false
  inline void UnfoldAllSections();

  /// @brief Method UnfoldSection, addr 0x2430f28, size 0x16c, virtual false, abstract: false, final false
  inline void UnfoldSection(int32_t section);

  constexpr ::HMUI::__SectionTableView__IDataSource*& __cordl_internal_get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__SectionTableView__IDataSource*> const& __cordl_internal_get__dataSource() const;

  constexpr ::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> const& __cordl_internal_get__sections() const;

  constexpr ::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*>& __cordl_internal_get__sections();

  constexpr bool const& __cordl_internal_get__unfoldSectionsByDefault() const;

  constexpr bool& __cordl_internal_get__unfoldSectionsByDefault();

  constexpr ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*& __cordl_internal_get_didSelectHeaderEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*> const& __cordl_internal_get_didSelectHeaderEvent() const;

  constexpr ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*& __cordl_internal_get_didSelectRowInSectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*> const& __cordl_internal_get_didSelectRowInSectionEvent() const;

  constexpr void __cordl_internal_set__dataSource(::HMUI::__SectionTableView__IDataSource* value);

  constexpr void __cordl_internal_set__sections(::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> value);

  constexpr void __cordl_internal_set__unfoldSectionsByDefault(bool value);

  constexpr void __cordl_internal_set_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value);

  constexpr void __cordl_internal_set_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x2431978, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectHeaderEvent, addr 0x24303a8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value);

  /// @brief Method add_didSelectRowInSectionEvent, addr 0x2430248, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value);

  /// @brief Method get_dataSource, addr 0x2430508, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::__SectionTableView__IDataSource* get_dataSource();

  /// @brief Convert to "::HMUI::__TableView__IDataSource"
  constexpr ::HMUI::__TableView__IDataSource* i___HMUI____TableView__IDataSource() noexcept;

  /// @brief Method remove_didSelectHeaderEvent, addr 0x2430458, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value);

  /// @brief Method remove_didSelectRowInSectionEvent, addr 0x24302f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value);

  /// @brief Method set_dataSource, addr 0x2430510, size 0x24, virtual false, abstract: false, final false
  inline void set_dataSource(::HMUI::__SectionTableView__IDataSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SectionTableView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SectionTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SectionTableView(SectionTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SectionTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SectionTableView(SectionTableView const&) = delete;

  /// @brief Field _unfoldSectionsByDefault, offset: 0xa2, size: 0x1, def value: None
  bool ____unfoldSectionsByDefault;

  /// @brief Field didSelectRowInSectionEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* ___didSelectRowInSectionEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* ___didSelectHeaderEvent;

  /// @brief Field _dataSource, offset: 0xb8, size: 0x8, def value: None
  ::HMUI::__SectionTableView__IDataSource* ____dataSource;

  /// @brief Field _sections, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> ____sections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SectionTableView, 0xc8>, "Size mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ____unfoldSectionsByDefault) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ___didSelectRowInSectionEvent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ___didSelectHeaderEvent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ____dataSource) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ____sections) == 0xc0, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView*, "HMUI", "SectionTableView");
NEED_NO_BOX(::HMUI::__SectionTableView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SectionTableView__IDataSource*, "HMUI", "SectionTableView/IDataSource");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SectionTableView__Section, "HMUI", "SectionTableView/Section");
