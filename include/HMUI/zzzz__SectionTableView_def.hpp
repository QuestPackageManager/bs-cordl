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
struct __SectionTableView__Section;
}
namespace HMUI {
class __SectionTableView__IDataSource;
}
namespace HMUI {
class __TableView__IDataSource;
}
namespace HMUI {
class TableView;
}
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace HMUI {
struct __TableView__ScrollPositionType;
}
namespace HMUI {
class TableCell;
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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13661))
// CS Name: ::SectionTableView::IDataSource*
class CORDL_TYPE __SectionTableView__IDataSource {
public:
  // Declarations
  /// @brief Method RowHeight addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t RowHeight();

  /// @brief Method NumberOfSections addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t NumberOfSections();

  /// @brief Method NumberOfRowsInSection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t NumberOfRowsInSection(int32_t section);

  /// @brief Method CellForSectionHeader addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::HMUI::TableCell* CellForSectionHeader(int32_t section, bool unfolded);

  /// @brief Method CellForRowInSection addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::HMUI::TableCell* CellForRowInSection(int32_t section, int32_t row);

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
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13662))
// CS Name: ::SectionTableView::Section
struct CORDL_TYPE __SectionTableView__Section {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "unfolded", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "startBaseRow", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "numberOfBaseRows", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SectionTableView__Section(bool unfolded, int32_t startBaseRow, int32_t numberOfBaseRows) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SectionTableView__Section();

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

} // namespace HMUI
// Type: HMUI::SectionTableView
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13669))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13663))
// CS Name: ::HMUI::SectionTableView*
class CORDL_TYPE SectionTableView : public ::HMUI::TableView {
public:
  // Declarations
  using Section = ::HMUI::__SectionTableView__Section;

  using IDataSource = ::HMUI::__SectionTableView__IDataSource;

  /// @brief Field _unfoldSectionsByDefault, offset 0xa2, size 0x1
  __declspec(property(get = __get__unfoldSectionsByDefault, put = __set__unfoldSectionsByDefault)) bool _unfoldSectionsByDefault;

  /// @brief Field didSelectRowInSectionEvent, offset 0xa8, size 0x8
  __declspec(property(get = __get_didSelectRowInSectionEvent, put = __set_didSelectRowInSectionEvent))::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>* didSelectRowInSectionEvent;

  /// @brief Field didSelectHeaderEvent, offset 0xb0, size 0x8
  __declspec(property(get = __get_didSelectHeaderEvent, put = __set_didSelectHeaderEvent))::System::Action_2<::HMUI::SectionTableView*, int32_t>* didSelectHeaderEvent;

  /// @brief Field _dataSource, offset 0xb8, size 0x8
  __declspec(property(get = __get__dataSource, put = __set__dataSource))::HMUI::__SectionTableView__IDataSource* _dataSource;

  /// @brief Field _sections, offset 0xc0, size 0x8
  __declspec(property(get = __get__sections, put = __set__sections))::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> _sections;

  __declspec(property(get = get_dataSource, put = set_dataSource))::HMUI::__SectionTableView__IDataSource* dataSource;

  /// @brief Convert operator to "::HMUI::__TableView__IDataSource"
  constexpr operator ::HMUI::__TableView__IDataSource*() noexcept;

  constexpr bool& __get__unfoldSectionsByDefault();

  constexpr bool const& __get__unfoldSectionsByDefault() const;

  constexpr void __set__unfoldSectionsByDefault(bool value);

  constexpr ::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>*& __get_didSelectRowInSectionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>*> const& __get_didSelectRowInSectionEvent() const;

  constexpr void __set_didSelectRowInSectionEvent(::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>* value);

  constexpr ::System::Action_2<::HMUI::SectionTableView*, int32_t>*& __get_didSelectHeaderEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::SectionTableView*, int32_t>*> const& __get_didSelectHeaderEvent() const;

  constexpr void __set_didSelectHeaderEvent(::System::Action_2<::HMUI::SectionTableView*, int32_t>* value);

  constexpr ::HMUI::__SectionTableView__IDataSource*& __get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::__SectionTableView__IDataSource*> const& __get__dataSource() const;

  constexpr void __set__dataSource(::HMUI::__SectionTableView__IDataSource* value);

  constexpr ::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*>& __get__sections();

  constexpr ::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> const& __get__sections() const;

  constexpr void __set__sections(::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> value);

  /// @brief Method add_didSelectRowInSectionEvent addr 0x2146fdc size 0xb0 virtual false final false
  inline void add_didSelectRowInSectionEvent(::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>* value);

  /// @brief Method remove_didSelectRowInSectionEvent addr 0x214708c size 0xb0 virtual false final false
  inline void remove_didSelectRowInSectionEvent(::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>* value);

  /// @brief Method add_didSelectHeaderEvent addr 0x214713c size 0xb0 virtual false final false
  inline void add_didSelectHeaderEvent(::System::Action_2<::HMUI::SectionTableView*, int32_t>* value);

  /// @brief Method remove_didSelectHeaderEvent addr 0x21471ec size 0xb0 virtual false final false
  inline void remove_didSelectHeaderEvent(::System::Action_2<::HMUI::SectionTableView*, int32_t>* value);

  /// @brief Method get_dataSource addr 0x214729c size 0x8 virtual false final false
  inline ::HMUI::__SectionTableView__IDataSource* get_dataSource();

  /// @brief Method set_dataSource addr 0x21472a4 size 0x24 virtual false final false
  inline void set_dataSource(::HMUI::__SectionTableView__IDataSource* value);

  /// @brief Method IsSectionUnfolded addr 0x21472c8 size 0x34 virtual false final false
  inline bool IsSectionUnfolded(int32_t section);

  /// @brief Method CellSize addr 0x21472fc size 0xa0 virtual true final true
  inline float_t CellSize();

  /// @brief Method NumberOfCells addr 0x214739c size 0x48 virtual true final true
  inline int32_t NumberOfCells();

  /// @brief Method CellForIdx addr 0x21473e4 size 0x184 virtual true final true
  inline ::HMUI::TableCell* CellForIdx(::HMUI::TableView* tableView, int32_t baseRow);

  /// @brief Method ReloadData addr 0x2147648 size 0x8 virtual true final false
  inline void ReloadData();

  /// @brief Method ReloadData addr 0x2147650 size 0x210 virtual false final false
  inline void ReloadData(bool resetFoldState);

  /// @brief Method DidSelectCellWithIdx addr 0x2147b94 size 0x7c virtual true final false
  inline void DidSelectCellWithIdx(int32_t baseRow);

  /// @brief Method UnfoldAllSections addr 0x2147c10 size 0x58 virtual false final false
  inline void UnfoldAllSections();

  /// @brief Method FoldAll addr 0x2147c68 size 0x54 virtual false final false
  inline void FoldAll();

  /// @brief Method UnfoldSection addr 0x2147cbc size 0x16c virtual false final false
  inline void UnfoldSection(int32_t section);

  /// @brief Method FoldSection addr 0x21481d8 size 0xa8 virtual false final false
  inline void FoldSection(int32_t section);

  /// @brief Method ScrollToRow addr 0x21485ec size 0x44 virtual false final false
  inline void ScrollToRow(int32_t section, int32_t row, ::HMUI::__TableView__ScrollPositionType scrollPositionType, bool animated);

  /// @brief Method SectionAndRowForBaseRow addr 0x2147568 size 0xe0 virtual false final false
  inline void SectionAndRowForBaseRow(int32_t baseRow, ByRef<int32_t> section, ByRef<int32_t> row, ByRef<bool> isSectionHeader);

  static inline ::HMUI::SectionTableView* New_ctor();

  /// @brief Method .ctor addr 0x214870c size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SectionTableView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SectionTableView(SectionTableView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SectionTableView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SectionTableView(SectionTableView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SectionTableView();

public:
  /// @brief Field _unfoldSectionsByDefault, offset: 0xa2, size: 0x1, def value: None
  bool ____unfoldSectionsByDefault;

  /// @brief Field didSelectRowInSectionEvent, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_3<::HMUI::SectionTableView*, int32_t, int32_t>* ___didSelectRowInSectionEvent;

  /// @brief Field didSelectHeaderEvent, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::HMUI::SectionTableView*, int32_t>* ___didSelectHeaderEvent;

  /// @brief Field _dataSource, offset: 0xb8, size: 0x8, def value: None
  ::HMUI::__SectionTableView__IDataSource* ____dataSource;

  /// @brief Field _sections, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::HMUI::__SectionTableView__Section, ::Array<::HMUI::__SectionTableView__Section>*> ____sections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SectionTableView, 0xc8>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::SectionTableView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SectionTableView*, "HMUI", "SectionTableView");
NEED_NO_BOX(::HMUI::__SectionTableView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SectionTableView__IDataSource*, "HMUI", "SectionTableView/IDataSource");
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SectionTableView__Section, "HMUI", "SectionTableView/Section");
