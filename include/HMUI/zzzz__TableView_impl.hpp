#pragma once
// IWYU pragma private; include "HMUI/TableView.hpp"
#include "HMUI/zzzz__TableViewSelectionType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "HMUI/zzzz__FloatRectOffset_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableViewSelectionType_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::TableView_TableType::TableView_TableType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::TableView_TableType::TableView_TableType() {}
constexpr ::HMUI::TableView_TableType HMUI::TableView_TableType::Vertical{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::TableView_TableType HMUI::TableView_TableType::Horizontal{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::TableView_ScrollPositionType::TableView_ScrollPositionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::TableView_ScrollPositionType::TableView_ScrollPositionType() {}
constexpr ::HMUI::TableView_ScrollPositionType HMUI::TableView_ScrollPositionType::Beginning{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::TableView_ScrollPositionType HMUI::TableView_ScrollPositionType::Center{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::TableView_ScrollPositionType HMUI::TableView_ScrollPositionType::End{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::TableView_CellsGroup.get_reuseIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::TableView_CellsGroup::*)()>(&::HMUI::TableView_CellsGroup::get_reuseIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView_CellsGroup*>(), { "get_reuseIdentifier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView_CellsGroup.get_cells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* (::HMUI::TableView_CellsGroup::*)()>(
    &::HMUI::TableView_CellsGroup::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView_CellsGroup*>(), { "get_cells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView_CellsGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView_CellsGroup::*)()>(&::HMUI::TableView_CellsGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5892dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView_CellsGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& HMUI::TableView_CellsGroup::__cordl_internal_get__reuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reuseIdentifier;
}
constexpr ::StringW const& HMUI::TableView_CellsGroup::__cordl_internal_get__reuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reuseIdentifier;
}
constexpr void HMUI::TableView_CellsGroup::__cordl_internal_set__reuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reuseIdentifier = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& HMUI::TableView_CellsGroup::__cordl_internal_get__cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* const& HMUI::TableView_CellsGroup::__cordl_internal_get__cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr void HMUI::TableView_CellsGroup::__cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cells = value;
}
inline ::StringW HMUI::TableView_CellsGroup::get_reuseIdentifier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView_CellsGroup*>(), { "get_reuseIdentifier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* HMUI::TableView_CellsGroup::get_cells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView_CellsGroup*>(), { "get_cells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>(this, ___internal_method);
}
inline void HMUI::TableView_CellsGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView_CellsGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::TableView_CellsGroup* HMUI::TableView_CellsGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TableView_CellsGroup*>());
}
// Ctor Parameters []
constexpr ::HMUI::TableView_CellsGroup::TableView_CellsGroup() {}
//  Writing Method size for method: ::HMUI::TableView_IDataSource.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView_IDataSource::*)(int32_t)>(&::HMUI::TableView_IDataSource::CellSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView_IDataSource*>(), { ::i2c::class_of<::HMUI::TableView_IDataSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView_IDataSource.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableView_IDataSource::*)()>(&::HMUI::TableView_IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView_IDataSource*>(), { ::i2c::class_of<::HMUI::TableView_IDataSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView_IDataSource.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::TableView_IDataSource::*)(::HMUI::TableView*, int32_t)>(&::HMUI::TableView_IDataSource::CellForIdx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView_IDataSource*>(), { ::i2c::class_of<::HMUI::TableView_IDataSource*>(), 2 }));
    return ___internal_method;
  }
};
inline float_t HMUI::TableView_IDataSource::CellSize(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView_IDataSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t HMUI::TableView_IDataSource::NumberOfCells() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView_IDataSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> HMUI::TableView_IDataSource::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView_IDataSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
//  Writing Method size for method: ::HMUI::TableView.get_selectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::TableViewSelectionType (::HMUI::TableView::*)()>(&::HMUI::TableView::get_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5890744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_selectionType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.set_selectionType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableViewSelectionType)>(&::HMUI::TableView::set_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589074c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "set_selectionType", {}, { ::i2c::type_of<::HMUI::TableViewSelectionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_canSelectSelectedCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::TableView::*)()>(&::HMUI::TableView::get_canSelectSelectedCell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5890754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_canSelectSelectedCell", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*)>(&::HMUI::TableView::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x589075c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*)>(&::HMUI::TableView::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x589081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didDeselectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*)>(&::HMUI::TableView::add_didDeselectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58908dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didDeselectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didDeselectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*)>(
    &::HMUI::TableView::remove_didDeselectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x589099c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didDeselectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didReloadDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::add_didReloadDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didReloadDataEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didReloadDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::remove_didReloadDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didReloadDataEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didInsertCellsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::add_didInsertCellsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didInsertCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didInsertCellsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::remove_didInsertCellsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didInsertCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didDeleteCellsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::add_didDeleteCellsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890d5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didDeleteCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didDeleteCellsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::remove_didDeleteCellsEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didDeleteCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didChangeRectSizeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::add_didChangeRectSizeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didChangeRectSizeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didChangeRectSizeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(&::HMUI::TableView::remove_didChangeRectSizeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5890f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didChangeRectSizeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::TableView_IDataSource* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589105c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_visibleCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_visibleCells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_visibleCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_viewportTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::TableView::*)()>(&::HMUI::TableView::get_viewportTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589106c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_viewportTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_contentTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::TableView::*)()>(&::HMUI::TableView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_contentTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_numberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_numberOfCells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589107c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_numberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_cellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_cellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_cellSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_spacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_spacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589108c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_spacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_tableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::TableView_TableType (::HMUI::TableView::*)()>(&::HMUI::TableView::get_tableType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_tableType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_scrollView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ScrollView> (::HMUI::TableView::*)()>(&::HMUI::TableView::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589109c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_scrollView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_totalPadding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_totalPadding)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58910a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_totalPadding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_paddingStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_paddingStart)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58910ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_paddingStart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_paddingEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_paddingEnd)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5891124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_paddingEnd", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_contentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_contentSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x589115c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x589119c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x589153c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58915c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.LazyInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::LazyInit)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x58911ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "LazyInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Hide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5891d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "Hide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Show
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Show)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5891d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "Show", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshContentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::RefreshContentSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5891d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "RefreshContentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshCellsContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::RefreshCellsContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5891dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "RefreshCellsContent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetCellAtIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::TableView::*)(int32_t)>(&::HMUI::TableView::GetCellAtIndex)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5891dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "GetCellAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetVisibleCellsIdRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Tuple_2<int32_t, int32_t>* (::HMUI::TableView::*)()>(&::HMUI::TableView::GetVisibleCellsIdRange)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5891e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "GetVisibleCellsIdRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetMinVisibleIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableView::*)()>(&::HMUI::TableView::GetMinVisibleIdx)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5891f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetMaxVisibleIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::TableView::*)()>(&::HMUI::TableView::GetMaxVisibleIdx)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5892034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetCellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)(int32_t)>(&::HMUI::TableView::GetCellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetCellPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::TableView::*)(int32_t)>(&::HMUI::TableView::GetCellPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x589216c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(bool, bool)>(&::HMUI::TableView::RefreshCells)> {
  constexpr static std::size_t size = 0x5f0;
  constexpr static std::size_t addrs = 0x589161c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "RefreshCells", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.LayoutCellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableCell*, int32_t, float_t)>(&::HMUI::TableView::LayoutCellForIdx)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5892330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "LayoutCellForIdx", {}, { ::i2c::type_of<::HMUI::TableCell*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.AddCellToReusableCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableCell*)>(&::HMUI::TableView::AddCellToReusableCells)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x58921a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "AddCellToReusableCells", {}, { ::i2c::type_of<::HMUI::TableCell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.HandleScrollRectValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(float_t)>(&::HMUI::TableView::HandleScrollRectValueChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5892574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "HandleScrollRectValueChanged", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.HandleCellSelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType, ::System::Object*)>(
    &::HMUI::TableView::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5892580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::TableView*>(),
            { "HandleCellSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(int32_t)>(&::HMUI::TableView::DidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x589284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.UpdateCachedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::UpdateCachedData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5892874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ReloadDataKeepingPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ReloadDataKeepingPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5892924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ReloadDataKeepingPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.SetDataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableView_IDataSource*, bool)>(&::HMUI::TableView::SetDataSource)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5892970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ReloadData)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x588f66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ::i2c::class_of<::HMUI::TableView*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.InsertCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(int32_t, int32_t)>(&::HMUI::TableView::InsertCells)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x588fbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "InsertCells", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DeleteCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(int32_t, int32_t)>(&::HMUI::TableView::DeleteCells)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x588ff4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "DeleteCells", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DequeueReusableCellForIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::TableView::*)(::StringW)>(&::HMUI::TableView::DequeueReusableCellForIdentifier)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x588df20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "DequeueReusableCellForIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.SelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(int32_t, bool)>(&::HMUI::TableView::SelectCellWithIdx)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x589298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "SelectCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ClearSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ClearSelection)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5892b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ClearSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ClearHighlights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ClearHighlights)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5891c0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ClearHighlights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ScrollToPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(float_t, bool)>(&::HMUI::TableView::ScrollToPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5892ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ScrollToPosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ScrollToCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(int32_t, ::HMUI::TableView_ScrollPositionType, bool)>(&::HMUI::TableView::ScrollToCellWithIdx)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58902b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(),
                                                { "ScrollToCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::HMUI::TableView_ScrollPositionType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ChangeRectSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)(::UnityEngine::RectTransform_Axis, float_t)>(&::HMUI::TableView::ChangeRectSize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5892cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ChangeRectSize", {}, { ::i2c::type_of<::UnityEngine::RectTransform_Axis>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58903ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::ScrollView>& HMUI::TableView::__cordl_internal_get__scrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr ::UnityW<::HMUI::ScrollView> const& HMUI::TableView::__cordl_internal_get__scrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollView;
}
constexpr void HMUI::TableView::__cordl_internal_set__scrollView(::UnityW<::HMUI::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollView = value;
}
constexpr bool& HMUI::TableView::__cordl_internal_get__scrollToTopOnEnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollToTopOnEnable;
}
constexpr bool const& HMUI::TableView::__cordl_internal_get__scrollToTopOnEnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollToTopOnEnable;
}
constexpr void HMUI::TableView::__cordl_internal_set__scrollToTopOnEnable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollToTopOnEnable = value;
}
constexpr bool& HMUI::TableView::__cordl_internal_get__alignToCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignToCenter;
}
constexpr bool const& HMUI::TableView::__cordl_internal_get__alignToCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignToCenter;
}
constexpr void HMUI::TableView::__cordl_internal_set__alignToCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alignToCenter = value;
}
constexpr float_t& HMUI::TableView::__cordl_internal_get__spacing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spacing;
}
constexpr float_t const& HMUI::TableView::__cordl_internal_get__spacing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spacing;
}
constexpr void HMUI::TableView::__cordl_internal_set__spacing(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spacing = value;
}
constexpr ::HMUI::FloatRectOffset*& HMUI::TableView::__cordl_internal_get__padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr ::HMUI::FloatRectOffset* const& HMUI::TableView::__cordl_internal_get__padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____padding;
}
constexpr void HMUI::TableView::__cordl_internal_set__padding(::HMUI::FloatRectOffset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____padding = value;
}
constexpr ::HMUI::TableView_TableType& HMUI::TableView::__cordl_internal_get__tableType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableType;
}
constexpr ::HMUI::TableView_TableType const& HMUI::TableView::__cordl_internal_get__tableType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableType;
}
constexpr void HMUI::TableView::__cordl_internal_set__tableType(::HMUI::TableView_TableType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableType = value;
}
constexpr ::HMUI::TableViewSelectionType& HMUI::TableView::__cordl_internal_get__selectionType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionType;
}
constexpr ::HMUI::TableViewSelectionType const& HMUI::TableView::__cordl_internal_get__selectionType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionType;
}
constexpr void HMUI::TableView::__cordl_internal_set__selectionType(::HMUI::TableViewSelectionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionType = value;
}
constexpr bool& HMUI::TableView::__cordl_internal_get__canSelectSelectedCell() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canSelectSelectedCell;
}
constexpr bool const& HMUI::TableView::__cordl_internal_get__canSelectSelectedCell() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____canSelectSelectedCell;
}
constexpr void HMUI::TableView::__cordl_internal_set__canSelectSelectedCell(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____canSelectSelectedCell = value;
}
constexpr bool& HMUI::TableView::__cordl_internal_get__spawnCellsThatAreNotVisible() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCellsThatAreNotVisible;
}
constexpr bool const& HMUI::TableView::__cordl_internal_get__spawnCellsThatAreNotVisible() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCellsThatAreNotVisible;
}
constexpr void HMUI::TableView::__cordl_internal_set__spawnCellsThatAreNotVisible(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCellsThatAreNotVisible = value;
}
constexpr ::ArrayW<::HMUI::TableView_CellsGroup*>& HMUI::TableView::__cordl_internal_get__preallocatedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocatedCells;
}
constexpr ::ArrayW<::HMUI::TableView_CellsGroup*> const& HMUI::TableView::__cordl_internal_get__preallocatedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocatedCells;
}
constexpr void HMUI::TableView::__cordl_internal_set__preallocatedCells(::ArrayW<::HMUI::TableView_CellsGroup*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____preallocatedCells = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*& HMUI::TableView::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* const& HMUI::TableView::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellWithIdxEvent = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*& HMUI::TableView::__cordl_internal_get_didDeselectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeselectCellWithIdxEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* const& HMUI::TableView::__cordl_internal_get_didDeselectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeselectCellWithIdxEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didDeselectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didDeselectCellWithIdxEvent = value;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didReloadDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReloadDataEvent;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& HMUI::TableView::__cordl_internal_get_didReloadDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReloadDataEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didReloadDataEvent = value;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didInsertCellsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInsertCellsEvent;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& HMUI::TableView::__cordl_internal_get_didInsertCellsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInsertCellsEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didInsertCellsEvent = value;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didDeleteCellsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeleteCellsEvent;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& HMUI::TableView::__cordl_internal_get_didDeleteCellsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeleteCellsEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didDeleteCellsEvent = value;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didChangeRectSizeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeRectSizeEvent;
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>* const& HMUI::TableView::__cordl_internal_get_didChangeRectSizeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeRectSizeEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangeRectSizeEvent = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::TableView::__cordl_internal_get__contentTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::TableView::__cordl_internal_get__contentTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentTransform;
}
constexpr void HMUI::TableView::__cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentTransform = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::TableView::__cordl_internal_get__viewportTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewportTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::TableView::__cordl_internal_get__viewportTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewportTransform;
}
constexpr void HMUI::TableView::__cordl_internal_set__viewportTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewportTransform = value;
}
constexpr ::HMUI::TableView_IDataSource*& HMUI::TableView::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::HMUI::TableView_IDataSource* const& HMUI::TableView::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void HMUI::TableView::__cordl_internal_set__dataSource(::HMUI::TableView_IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource = value;
}
constexpr int32_t& HMUI::TableView::__cordl_internal_get__numberOfCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfCells;
}
constexpr int32_t const& HMUI::TableView::__cordl_internal_get__numberOfCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfCells;
}
constexpr void HMUI::TableView::__cordl_internal_set__numberOfCells(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfCells = value;
}
constexpr float_t& HMUI::TableView::__cordl_internal_get__cellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellSize;
}
constexpr float_t const& HMUI::TableView::__cordl_internal_get__cellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellSize;
}
constexpr void HMUI::TableView::__cordl_internal_set__cellSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellSize = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& HMUI::TableView::__cordl_internal_get__visibleCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleCells;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* const& HMUI::TableView::__cordl_internal_get__visibleCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleCells;
}
constexpr void HMUI::TableView::__cordl_internal_set__visibleCells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____visibleCells = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>*& HMUI::TableView::__cordl_internal_get__reusableCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableCells;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* const&
HMUI::TableView::__cordl_internal_get__reusableCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableCells;
}
constexpr void
HMUI::TableView::__cordl_internal_set__reusableCells(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableCells = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& HMUI::TableView::__cordl_internal_get__selectedCellIdxs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIdxs;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& HMUI::TableView::__cordl_internal_get__selectedCellIdxs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIdxs;
}
constexpr void HMUI::TableView::__cordl_internal_set__selectedCellIdxs(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellIdxs = value;
}
constexpr int32_t& HMUI::TableView::__cordl_internal_get__prevMinIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMinIdx;
}
constexpr int32_t const& HMUI::TableView::__cordl_internal_get__prevMinIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMinIdx;
}
constexpr void HMUI::TableView::__cordl_internal_set__prevMinIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMinIdx = value;
}
constexpr int32_t& HMUI::TableView::__cordl_internal_get__prevMaxIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMaxIdx;
}
constexpr int32_t const& HMUI::TableView::__cordl_internal_get__prevMaxIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevMaxIdx;
}
constexpr void HMUI::TableView::__cordl_internal_set__prevMaxIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevMaxIdx = value;
}
constexpr bool& HMUI::TableView::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& HMUI::TableView::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void HMUI::TableView::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr bool& HMUI::TableView::__cordl_internal_get__refreshCellsOnEnable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshCellsOnEnable;
}
constexpr bool const& HMUI::TableView::__cordl_internal_get__refreshCellsOnEnable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshCellsOnEnable;
}
constexpr void HMUI::TableView::__cordl_internal_set__refreshCellsOnEnable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshCellsOnEnable = value;
}
inline ::HMUI::TableViewSelectionType HMUI::TableView::get_selectionType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_selectionType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableViewSelectionType>(this, ___internal_method);
}
inline void HMUI::TableView::set_selectionType(::HMUI::TableViewSelectionType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "set_selectionType", {}, { ::i2c::type_of<::HMUI::TableViewSelectionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::TableView::get_canSelectSelectedCell() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_canSelectSelectedCell", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::TableView::add_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didSelectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didDeselectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didDeselectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didDeselectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didDeselectCellWithIdxEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didReloadDataEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didReloadDataEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didInsertCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didInsertCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didDeleteCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didDeleteCellsEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "add_didChangeRectSizeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "remove_didChangeRectSizeEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::HMUI::TableView>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::TableView_IDataSource* HMUI::TableView::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableView_IDataSource*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* HMUI::TableView::get_visibleCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_visibleCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::TableView::get_viewportTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_viewportTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::TableView::get_contentTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_contentTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline int32_t HMUI::TableView::get_numberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_numberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_cellSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_cellSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_spacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_spacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::HMUI::TableView_TableType HMUI::TableView::get_tableType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_tableType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableView_TableType>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ScrollView> HMUI::TableView::get_scrollView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_scrollView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ScrollView>>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_totalPadding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_totalPadding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_paddingStart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_paddingStart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_paddingEnd() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "get_paddingEnd", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_contentSize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::TableView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "LazyInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::Hide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "Hide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::Show() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "Show", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::RefreshContentSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "RefreshContentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::RefreshCellsContent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "RefreshCellsContent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> HMUI::TableView::GetCellAtIndex(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "GetCellAtIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, index);
}
inline ::System::Tuple_2<int32_t, int32_t>* HMUI::TableView::GetVisibleCellsIdRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "GetVisibleCellsIdRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<int32_t, int32_t>*>(this, ___internal_method);
}
inline int32_t HMUI::TableView::GetMinVisibleIdx() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t HMUI::TableView::GetMaxVisibleIdx() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t HMUI::TableView::GetCellSize(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline float_t HMUI::TableView::GetCellPosition(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline void HMUI::TableView::RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "RefreshCells", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forcedVisualsRefresh, forcedContentRefresh);
}
inline void HMUI::TableView::LayoutCellForIdx(::HMUI::TableCell* cell, int32_t idx, float_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "LayoutCellForIdx", {}, { ::i2c::type_of<::HMUI::TableCell*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell, idx, offset);
}
inline void HMUI::TableView::AddCellToReusableCells(::HMUI::TableCell* cell) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "AddCellToReusableCells", {}, { ::i2c::type_of<::HMUI::TableCell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cell);
}
inline void HMUI::TableView::HandleScrollRectValueChanged(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "HandleScrollRectValueChanged", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void HMUI::TableView::HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType, ::System::Object* changeOwner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::TableView*>(),
          { "HandleCellSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::TableView::DidSelectCellWithIdx(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void HMUI::TableView::UpdateCachedData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::ReloadDataKeepingPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ReloadDataKeepingPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::SetDataSource(::HMUI::TableView_IDataSource* newDataSource, bool reloadData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newDataSource, reloadData);
}
inline void HMUI::TableView::ReloadData() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::TableView*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::InsertCells(int32_t idx, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "InsertCells", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, count);
}
inline void HMUI::TableView::DeleteCells(int32_t idx, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "DeleteCells", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, count);
}
inline ::UnityW<::HMUI::TableCell> HMUI::TableView::DequeueReusableCellForIdentifier(::StringW identifier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "DequeueReusableCellForIdentifier", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, identifier);
}
inline void HMUI::TableView::SelectCellWithIdx(int32_t idx, bool callbackTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "SelectCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, callbackTable);
}
inline void HMUI::TableView::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ClearSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::ClearHighlights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ClearHighlights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::TableView::ScrollToPosition(float_t position, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ScrollToPosition", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, animated);
}
inline void HMUI::TableView::ScrollToCellWithIdx(int32_t idx, ::HMUI::TableView_ScrollPositionType scrollPositionType, bool animated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(),
                                              { "ScrollToCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::HMUI::TableView_ScrollPositionType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, scrollPositionType, animated);
}
inline void HMUI::TableView::ChangeRectSize(::UnityEngine::RectTransform_Axis axis, float_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { "ChangeRectSize", {}, { ::i2c::type_of<::UnityEngine::RectTransform_Axis>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, axis, size);
}
inline void HMUI::TableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::TableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::TableView* HMUI::TableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::TableView*>());
}
/// @brief Convert operator to "::HMUI::ITableCellOwner"
constexpr HMUI::TableView::operator ::HMUI::ITableCellOwner*() noexcept {
  return static_cast<::HMUI::ITableCellOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::ITableCellOwner"
constexpr ::HMUI::ITableCellOwner* HMUI::TableView::i___HMUI__ITableCellOwner() noexcept {
  return static_cast<::HMUI::ITableCellOwner*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::TableView::TableView() {}
