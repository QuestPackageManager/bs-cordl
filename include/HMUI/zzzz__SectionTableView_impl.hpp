#pragma once
// IWYU pragma private; include "HMUI\SectionTableView.hpp"
#include "HMUI/zzzz__TableView_impl.hpp"
#include "HMUI/zzzz__SectionTableView_def.hpp"
#include "HMUI/zzzz__SectionTableView_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
//  Writing Method size for method: ::HMUI::SectionTableView_IDataSource.RowHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::SectionTableView_IDataSource::*)()>(&::HMUI::SectionTableView_IDataSource::RowHeight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView_IDataSource.NumberOfSections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::SectionTableView_IDataSource::*)()>(&::HMUI::SectionTableView_IDataSource::NumberOfSections)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView_IDataSource.NumberOfRowsInSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::SectionTableView_IDataSource::*)(int32_t)>(&::HMUI::SectionTableView_IDataSource::NumberOfRowsInSection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView_IDataSource.CellForSectionHeader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::SectionTableView_IDataSource::*)(int32_t, bool)>(
    &::HMUI::SectionTableView_IDataSource::CellForSectionHeader)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView_IDataSource.CellForRowInSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::SectionTableView_IDataSource::*)(int32_t, int32_t)>(
    &::HMUI::SectionTableView_IDataSource::CellForRowInSection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 4 }));
    return ___internal_method;
  }
};
inline float_t HMUI::SectionTableView_IDataSource::RowHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t HMUI::SectionTableView_IDataSource::NumberOfSections() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t HMUI::SectionTableView_IDataSource::NumberOfRowsInSection(int32_t section) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, section);
}
inline ::UnityW<::HMUI::TableCell> HMUI::SectionTableView_IDataSource::CellForSectionHeader(int32_t section, bool unfolded) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, section, unfolded);
}
inline ::UnityW<::HMUI::TableCell> HMUI::SectionTableView_IDataSource::CellForRowInSection(int32_t section, int32_t row) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView_IDataSource*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, section, row);
}
// Ctor Parameters [CppParam { name: "unfolded", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "startBaseRow", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "numberOfBaseRows", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::SectionTableView_Section::SectionTableView_Section(bool unfolded, int32_t startBaseRow, int32_t numberOfBaseRows) noexcept {
  this->unfolded = unfolded;
  this->startBaseRow = startBaseRow;
  this->numberOfBaseRows = numberOfBaseRows;
}
// Ctor Parameters []
constexpr ::HMUI::SectionTableView_Section::SectionTableView_Section() {}
//  Writing Method size for method: ::HMUI::SectionTableView.add_didSelectRowInSectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*)>(
    &::HMUI::SectionTableView::add_didSelectRowInSectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588cc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                                                { "add_didSelectRowInSectionEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.remove_didSelectRowInSectionEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*)>(
    &::HMUI::SectionTableView::remove_didSelectRowInSectionEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588ccd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                                                { "remove_didSelectRowInSectionEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.add_didSelectHeaderEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*)>(
    &::HMUI::SectionTableView::add_didSelectHeaderEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588cd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "add_didSelectHeaderEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.remove_didSelectHeaderEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*)>(
    &::HMUI::SectionTableView::remove_didSelectHeaderEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588ce50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                                                             { "remove_didSelectHeaderEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::SectionTableView_IDataSource* (::HMUI::SectionTableView::*)()>(&::HMUI::SectionTableView::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588cf10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.set_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(::HMUI::SectionTableView_IDataSource*)>(&::HMUI::SectionTableView::set_dataSource)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x588cf18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "set_dataSource", {}, { ::i2c::type_of<::HMUI::SectionTableView_IDataSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.IsSectionUnfolded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::SectionTableView::*)(int32_t)>(&::HMUI::SectionTableView::IsSectionUnfolded)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x588cf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "IsSectionUnfolded", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::SectionTableView::*)(int32_t)>(&::HMUI::SectionTableView::CellSize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x588cf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::SectionTableView::*)()>(&::HMUI::SectionTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x588d01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::SectionTableView::*)(::HMUI::TableView*, int32_t)>(&::HMUI::SectionTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x588d058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)()>(&::HMUI::SectionTableView::ReloadData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588d2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { ::i2c::class_of<::HMUI::SectionTableView*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(bool)>(&::HMUI::SectionTableView::ReloadData)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x588d2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "ReloadData", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.DidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(int32_t)>(&::HMUI::SectionTableView::DidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x588d788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { ::i2c::class_of<::HMUI::SectionTableView*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.UnfoldAllSections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)()>(&::HMUI::SectionTableView::UnfoldAllSections)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x588d810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "UnfoldAllSections", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.FoldAll
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)()>(&::HMUI::SectionTableView::FoldAll)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x588d860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "FoldAll", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.UnfoldSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(int32_t)>(&::HMUI::SectionTableView::UnfoldSection)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x588d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "UnfoldSection", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.FoldSection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(int32_t)>(&::HMUI::SectionTableView::FoldSection)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x588dd14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "FoldSection", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.ScrollToRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(int32_t, int32_t, ::HMUI::TableView_ScrollPositionType, bool)>(&::HMUI::SectionTableView::ScrollToRow)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x588e0e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                            { "ScrollToRow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::HMUI::TableView_ScrollPositionType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView.SectionAndRowForBaseRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)(int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<bool>)>(
    &::HMUI::SectionTableView::SectionAndRowForBaseRow)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x588d1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::SectionTableView*>(),
            { "SectionAndRowForBaseRow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SectionTableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SectionTableView::*)()>(&::HMUI::SectionTableView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588e21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::SectionTableView::__cordl_internal_get__unfoldSectionsByDefault() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unfoldSectionsByDefault;
}
constexpr bool const& HMUI::SectionTableView::__cordl_internal_get__unfoldSectionsByDefault() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unfoldSectionsByDefault;
}
constexpr void HMUI::SectionTableView::__cordl_internal_set__unfoldSectionsByDefault(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unfoldSectionsByDefault = value;
}
constexpr ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*& HMUI::SectionTableView::__cordl_internal_get_didSelectRowInSectionEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRowInSectionEvent;
}
constexpr ::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* const& HMUI::SectionTableView::__cordl_internal_get_didSelectRowInSectionEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRowInSectionEvent;
}
constexpr void HMUI::SectionTableView::__cordl_internal_set_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectRowInSectionEvent = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*& HMUI::SectionTableView::__cordl_internal_get_didSelectHeaderEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHeaderEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* const& HMUI::SectionTableView::__cordl_internal_get_didSelectHeaderEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectHeaderEvent;
}
constexpr void HMUI::SectionTableView::__cordl_internal_set_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectHeaderEvent = value;
}
constexpr ::HMUI::SectionTableView_IDataSource*& HMUI::SectionTableView::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::HMUI::SectionTableView_IDataSource* const& HMUI::SectionTableView::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void HMUI::SectionTableView::__cordl_internal_set__dataSource(::HMUI::SectionTableView_IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource = value;
}
constexpr ::ArrayW<::HMUI::SectionTableView_Section>& HMUI::SectionTableView::__cordl_internal_get__sections() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sections;
}
constexpr ::ArrayW<::HMUI::SectionTableView_Section> const& HMUI::SectionTableView::__cordl_internal_get__sections() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sections;
}
constexpr void HMUI::SectionTableView::__cordl_internal_set__sections(::ArrayW<::HMUI::SectionTableView_Section> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sections = value;
}
inline void HMUI::SectionTableView::add_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                                                           { "add_didSelectRowInSectionEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SectionTableView::remove_didSelectRowInSectionEvent(::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                                              { "remove_didSelectRowInSectionEvent", {}, { ::i2c::type_of<::System::Action_3<::UnityW<::HMUI::SectionTableView>, int32_t, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SectionTableView::add_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "add_didSelectHeaderEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SectionTableView::remove_didSelectHeaderEvent(::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                                                           { "remove_didSelectHeaderEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SectionTableView>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::SectionTableView_IDataSource* HMUI::SectionTableView::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::SectionTableView_IDataSource*>(this, ___internal_method);
}
inline void HMUI::SectionTableView::set_dataSource(::HMUI::SectionTableView_IDataSource* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "set_dataSource", {}, { ::i2c::type_of<::HMUI::SectionTableView_IDataSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::SectionTableView::IsSectionUnfolded(int32_t section) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "IsSectionUnfolded", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, section);
}
inline float_t HMUI::SectionTableView::CellSize(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t HMUI::SectionTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> HMUI::SectionTableView::CellForIdx(::HMUI::TableView* tableView, int32_t baseRow) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, baseRow);
}
inline void HMUI::SectionTableView::ReloadData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SectionTableView::ReloadData(bool resetFoldState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "ReloadData", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resetFoldState);
}
inline void HMUI::SectionTableView::DidSelectCellWithIdx(int32_t baseRow) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SectionTableView*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseRow);
}
inline void HMUI::SectionTableView::UnfoldAllSections() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "UnfoldAllSections", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SectionTableView::FoldAll() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "FoldAll", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SectionTableView::UnfoldSection(int32_t section) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "UnfoldSection", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, section);
}
inline void HMUI::SectionTableView::FoldSection(int32_t section) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { "FoldSection", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, section);
}
inline void HMUI::SectionTableView::ScrollToRow(int32_t section, int32_t row, ::HMUI::TableView_ScrollPositionType scrollPositionType, bool animated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(),
                          { "ScrollToRow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::HMUI::TableView_ScrollPositionType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, section, row, scrollPositionType, animated);
}
inline void HMUI::SectionTableView::SectionAndRowForBaseRow(int32_t baseRow, ::by_ref<int32_t> section, ::by_ref<int32_t> row, ::by_ref<bool> isSectionHeader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::HMUI::SectionTableView*>(),
                       { "SectionAndRowForBaseRow", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseRow, section, row, isSectionHeader);
}
inline void HMUI::SectionTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SectionTableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::SectionTableView* HMUI::SectionTableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::SectionTableView*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr HMUI::SectionTableView::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* HMUI::SectionTableView::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::SectionTableView::SectionTableView() {}
