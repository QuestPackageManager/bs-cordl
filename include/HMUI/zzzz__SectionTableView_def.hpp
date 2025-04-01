#pragma once
// IWYU pragma private; include "HMUI/SectionTableView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableView_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SectionTableView)
namespace HMUI {
class SectionTableView_IDataSource;
}
namespace HMUI {
struct SectionTableView_Section;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
struct TableView_ScrollPositionType;
}
namespace HMUI {
class TableView;
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
class SectionTableView_IDataSource;
}
namespace HMUI {
struct SectionTableView_Section;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::SectionTableView);
MARK_REF_PTR_T(::HMUI::SectionTableView_IDataSource);
MARK_VAL_T(::HMUI::SectionTableView_Section);
// Dependencies
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SectionTableView/IDataSource
class CORDL_TYPE SectionTableView_IDataSource {
public:
  // Declarations
  /// @brief Method CellForRowInSection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> CellForRowInSection(int32_t section, int32_t row);

  /// @brief Method CellForSectionHeader, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::HMUI::TableCell> CellForSectionHeader(int32_t section, bool unfolded);

  /// @brief Method NumberOfRowsInSection, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t NumberOfRowsInSection(int32_t section);

  /// @brief Method NumberOfSections, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t NumberOfSections();

  /// @brief Method RowHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t RowHeight();

  // Ctor Parameters [CppParam { name: "", ty: "SectionTableView_IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SectionTableView_IDataSource(SectionTableView_IDataSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16114 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace HMUI
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.SectionTableView/Section
struct CORDL_TYPE SectionTableView_Section {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SectionTableView_Section();

  // Ctor Parameters [CppParam { name: "unfolded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startBaseRow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "numberOfBaseRows", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SectionTableView_Section(bool unfolded, int32_t startBaseRow, int32_t numberOfBaseRows) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16115 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field unfolded, offset: 0x0, size: 0x1, def value: None
  bool unfolded;

  /// @brief Field startBaseRow, offset: 0x4, size: 0x4, def value: None
  int32_t startBaseRow;

  /// @brief Field numberOfBaseRows, offset: 0x8, size: 0x4, def value: None
  int32_t numberOfBaseRows;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SectionTableView_Section, unfolded) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView_Section, startBaseRow) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView_Section, numberOfBaseRows) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SectionTableView_Section, 0xc>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.TableView, HMUI.TableView::IDataSource
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SectionTableView
class CORDL_TYPE SectionTableView : public ::HMUI::TableView {
public:
  // Declarations
  using IDataSource = ::HMUI::SectionTableView_IDataSource;

  using Section = ::HMUI::SectionTableView_Section;

  /// @brief Field _dataSource, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource)) ::HMUI::SectionTableView_IDataSource* _dataSource;

  /// @brief Field _sections, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__sections, put = __cordl_internal_set__sections)) ::ArrayW<::HMUI::SectionTableView_Section, ::Array<::HMUI::SectionTableView_Section>*> _sections;

  /// @brief Field _unfoldSectionsByDefault, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get__unfoldSectionsByDefault, put = __cordl_internal_set__unfoldSectionsByDefault)) bool _unfoldSectionsByDefault;

  __declspec(property(get = get_dataSource, put = set_dataSource)) ::HMUI::SectionTableView_IDataSource* dataSource;

  /// @brief Field didSelectHeaderEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectHeaderEvent,
                      put = __cordl_internal_set_didSelectHeaderEvent)) ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* didSelectHeaderEvent;

  /// @brief Field didSelectRowInSectionEvent, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectRowInSectionEvent,
                      put = __cordl_internal_set_didSelectRowInSectionEvent)) ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* didSelectRowInSectionEvent;

  /// @brief Convert operator to "::HMUI::TableView_IDataSource"
  constexpr operator ::HMUI::TableView_IDataSource*() noexcept;

  /// @brief Method CellForIdx, addr 0x39f9554, size 0x184, virtual true, abstract: false, final true
  inline ::UnityW<::HMUI::TableCell> CellForIdx(::HMUI::TableView* tableView, int32_t baseRow);

  /// @brief Method CellSize, addr 0x39f9474, size 0xa0, virtual true, abstract: false, final true
  inline float_t CellSize(int32_t idx);

  /// @brief Method DidSelectCellWithIdx, addr 0x39f9cac, size 0x7c, virtual true, abstract: false, final false
  inline void DidSelectCellWithIdx(int32_t baseRow);

  /// @brief Method FoldAll, addr 0x39f9d80, size 0x54, virtual false, abstract: false, final false
  inline void FoldAll();

  /// @brief Method FoldSection, addr 0x39fa29c, size 0xa8, virtual false, abstract: false, final false
  inline void FoldSection(int32_t section);

  /// @brief Method IsSectionUnfolded, addr 0x39f9440, size 0x34, virtual false, abstract: false, final false
  inline bool IsSectionUnfolded(int32_t section);

  static inline ::HMUI::SectionTableView* New_ctor();

  /// @brief Method NumberOfCells, addr 0x39f9514, size 0x40, virtual true, abstract: false, final true
  inline int32_t NumberOfCells();

  /// @brief Method ReloadData, addr 0x39f97b8, size 0x8, virtual true, abstract: false, final false
  inline void ReloadData();

  /// @brief Method ReloadData, addr 0x39f97c0, size 0x214, virtual false, abstract: false, final false
  inline void ReloadData(bool resetFoldState);

  /// @brief Method ScrollToRow, addr 0x39fa65c, size 0x44, virtual false, abstract: false, final false
  inline void ScrollToRow(int32_t section, int32_t row, ::HMUI::TableView_ScrollPositionType scrollPositionType, bool animated);

  /// @brief Method SectionAndRowForBaseRow, addr 0x39f96d8, size 0xe0, virtual false, abstract: false, final false
  inline void SectionAndRowForBaseRow(int32_t baseRow, ::ByRef<int32_t> section, ::ByRef<int32_t> row, ::ByRef<bool> isSectionHeader);

  /// @brief Method UnfoldAllSections, addr 0x39f9d28, size 0x58, virtual false, abstract: false, final false
  inline void UnfoldAllSections();

  /// @brief Method UnfoldSection, addr 0x39f9dd4, size 0x16c, virtual false, abstract: false, final false
  inline void UnfoldSection(int32_t section);

  constexpr ::HMUI::SectionTableView_IDataSource* const& __cordl_internal_get__dataSource() const;

  constexpr ::HMUI::SectionTableView_IDataSource*& __cordl_internal_get__dataSource();

  constexpr ::ArrayW<::HMUI::SectionTableView_Section, ::Array<::HMUI::SectionTableView_Section>*> const& __cordl_internal_get__sections() const;

  constexpr ::ArrayW<::HMUI::SectionTableView_Section, ::Array<::HMUI::SectionTableView_Section>*>& __cordl_internal_get__sections();

  constexpr bool const& __cordl_internal_get__unfoldSectionsByDefault() const;

  constexpr bool& __cordl_internal_get__unfoldSectionsByDefault();

  constexpr ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* const& __cordl_internal_get_didSelectHeaderEvent() const;

  constexpr ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*& __cordl_internal_get_didSelectHeaderEvent();

  constexpr ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* const& __cordl_internal_get_didSelectRowInSectionEvent() const;

  constexpr ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*& __cordl_internal_get_didSelectRowInSectionEvent();

  constexpr void __cordl_internal_set__dataSource(::HMUI::SectionTableView_IDataSource* value);

  constexpr void __cordl_internal_set__sections(::ArrayW<::HMUI::SectionTableView_Section, ::Array<::HMUI::SectionTableView_Section>*> value);

  constexpr void __cordl_internal_set__unfoldSectionsByDefault(bool value);

  constexpr void __cordl_internal_set_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value);

  constexpr void __cordl_internal_set_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value);

  /// @brief Method .ctor, addr 0x39fa784, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectHeaderEvent, addr 0x39f92b0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value);

  /// @brief Method add_didSelectRowInSectionEvent, addr 0x39f9150, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value);

  /// @brief Method get_dataSource, addr 0x39f9410, size 0x8, virtual false, abstract: false, final false
  inline ::HMUI::SectionTableView_IDataSource* get_dataSource();

  /// @brief Convert to "::HMUI::TableView_IDataSource"
  constexpr ::HMUI::TableView_IDataSource* i___HMUI__TableView_IDataSource() noexcept;

  /// @brief Method remove_didSelectHeaderEvent, addr 0x39f9360, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value);

  /// @brief Method remove_didSelectRowInSectionEvent, addr 0x39f9200, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value);

  /// @brief Method set_dataSource, addr 0x39f9418, size 0x28, virtual false, abstract: false, final false
  inline void set_dataSource(::HMUI::SectionTableView_IDataSource* value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16116 };

  /// @brief Field _unfoldSectionsByDefault, offset: 0xc2, size: 0x1, def value: None
  bool ____unfoldSectionsByDefault;

  /// @brief Field didSelectRowInSectionEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* ___didSelectRowInSectionEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* ___didSelectHeaderEvent;

  /// @brief Field _dataSource, offset: 0xd8, size: 0x8, def value: None
  ::HMUI::SectionTableView_IDataSource* ____dataSource;

  /// @brief Field _sections, offset: 0xe0, size: 0x8, def value: None
  ::ArrayW<::HMUI::SectionTableView_Section, ::Array<::HMUI::SectionTableView_Section>*> ____sections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SectionTableView, ____unfoldSectionsByDefault) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ___didSelectRowInSectionEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ___didSelectHeaderEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ____dataSource) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::HMUI::SectionTableView, ____sections) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SectionTableView, 0xe8>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView*, "HMUI", "SectionTableView");
NEED_NO_BOX(::HMUI::SectionTableView_IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView_IDataSource*, "HMUI", "SectionTableView/IDataSource");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView_Section, "HMUI", "SectionTableView/Section");
