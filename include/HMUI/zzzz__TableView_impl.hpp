#pragma once
#include "HMUI/zzzz__TableViewSelectionType_impl.hpp"
#include "HMUI/zzzz__TableView_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
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
constexpr ::HMUI::__TableView__TableType::__TableView__TableType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__TableView__TableType::__TableView__TableType() {}
constexpr ::HMUI::__TableView__TableType HMUI::__TableView__TableType::Vertical{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__TableView__TableType HMUI::__TableView__TableType::Horizontal{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__TableView__ScrollPositionType::__TableView__ScrollPositionType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__TableView__ScrollPositionType::__TableView__ScrollPositionType() {}
constexpr ::HMUI::__TableView__ScrollPositionType HMUI::__TableView__ScrollPositionType::Beginning{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__TableView__ScrollPositionType HMUI::__TableView__ScrollPositionType::Center{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__TableView__ScrollPositionType HMUI::__TableView__ScrollPositionType::End{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::__TableView__CellsGroup.get_reuseIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::__TableView__CellsGroup::*)()>(&::HMUI::__TableView__CellsGroup::get_reuseIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21df2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(), "get_reuseIdentifier",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__CellsGroup.get_cells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* (::HMUI::__TableView__CellsGroup::*)()>(
    &::HMUI::__TableView__CellsGroup::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21df300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(), "get_cells",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__CellsGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__TableView__CellsGroup::*)()>(&::HMUI::__TableView__CellsGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21df308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HMUI::__TableView__CellsGroup::__cordl_internal_get__reuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reuseIdentifier;
}
constexpr ::StringW const& HMUI::__TableView__CellsGroup::__cordl_internal_get__reuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reuseIdentifier;
}
constexpr void HMUI::__TableView__CellsGroup::__cordl_internal_set__reuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reuseIdentifier)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*& HMUI::__TableView__CellsGroup::__cordl_internal_get__cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*> const& HMUI::__TableView__CellsGroup::__cordl_internal_get__cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr void HMUI::__TableView__CellsGroup::__cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW HMUI::__TableView__CellsGroup::get_reuseIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(), "get_reuseIdentifier",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* HMUI::__TableView__CellsGroup::get_cells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(), "get_cells",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*, false>(this, ___internal_method);
}
inline ::HMUI::__TableView__CellsGroup* HMUI::__TableView__CellsGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__TableView__CellsGroup*>());
}
inline void HMUI::__TableView__CellsGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__CellsGroup*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::__TableView__CellsGroup::__TableView__CellsGroup() {}
//  Writing Method size for method: ::HMUI::__TableView__IDataSource.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::__TableView__IDataSource::*)()>(&::HMUI::__TableView__IDataSource::CellSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__IDataSource.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::__TableView__IDataSource::*)()>(&::HMUI::__TableView__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__TableView__IDataSource.CellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::__TableView__IDataSource::*)(::HMUI::TableView*, int32_t)>(
    &::HMUI::__TableView__IDataSource::CellForIdx)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(), 2));
    return ___internal_method;
  }
};
inline float_t HMUI::__TableView__IDataSource::CellSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t HMUI::__TableView__IDataSource::NumberOfCells() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> HMUI::__TableView__IDataSource::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__TableView__IDataSource*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>, false>(this, ___internal_method, tableView, idx);
}
//  Writing Method size for method: ::HMUI::TableView.get_selectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableViewSelectionType (::HMUI::TableView::*)()>(&::HMUI::TableView::get_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dd318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_selectionType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.set_selectionType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableViewSelectionType)>(&::HMUI::TableView::set_selectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dd320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "set_selectionType", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableViewSelectionType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_canSelectSelectedCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::TableView::*)()>(&::HMUI::TableView::get_canSelectSelectedCell)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dd328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_canSelectSelectedCell",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*)>(
    &::HMUI::TableView::add_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd330;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didSelectCellWithIdxEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*)>(
    &::HMUI::TableView::remove_didSelectCellWithIdxEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didReloadDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::add_didReloadDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didReloadDataEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didReloadDataEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::remove_didReloadDataEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didReloadDataEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didInsertCellsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::add_didInsertCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didInsertCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didInsertCellsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::remove_didInsertCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didInsertCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didDeleteCellsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::add_didDeleteCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didDeleteCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didDeleteCellsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::remove_didDeleteCellsEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didDeleteCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.add_didChangeRectSizeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::add_didChangeRectSizeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didChangeRectSizeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.remove_didChangeRectSizeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::System::Action_1<::UnityW<::HMUI::TableView>>*)>(
    &::HMUI::TableView::remove_didChangeRectSizeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21dd960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didChangeRectSizeEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_dataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__TableView__IDataSource* (::HMUI::TableView::*)()>(&::HMUI::TableView::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_dataSource",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.SetDataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::__TableView__IDataSource*, bool)>(&::HMUI::TableView::SetDataSource)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21dda18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "SetDataSource", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__IDataSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_visibleCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* (::HMUI::TableView::*)()>(
    &::HMUI::TableView::get_visibleCells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_visibleCells",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_viewportTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::TableView::*)()>(&::HMUI::TableView::get_viewportTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_viewportTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_contentTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::TableView::*)()>(&::HMUI::TableView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_contentTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_numberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_numberOfCells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_numberOfCells",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_cellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::TableView::*)()>(&::HMUI::TableView::get_cellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_cellSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_tableType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__TableView__TableType (::HMUI::TableView::*)()>(&::HMUI::TableView::get_tableType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_tableType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.get_scrollView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ScrollView> (::HMUI::TableView::*)()>(&::HMUI::TableView::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21dda60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_scrollView",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Awake)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x21dda68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::OnDestroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21dddc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::OnEnable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21dde50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.LazyInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::LazyInit)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x21dda78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "LazyInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Hide)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21de5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "Hide",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.Show
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::Show)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21de614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "Show",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshContentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::RefreshContentSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21de638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "RefreshContentSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshCellsContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::RefreshCellsContent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21de68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "RefreshCellsContent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.GetVisibleCellsIdRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Tuple_2<int32_t, int32_t>* (::HMUI::TableView::*)()>(&::HMUI::TableView::GetVisibleCellsIdRange)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x21de698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "GetVisibleCellsIdRange",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.RefreshCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(bool, bool)>(&::HMUI::TableView::RefreshCells)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x21ddea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "RefreshCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.LayoutCellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableCell*, int32_t, float_t)>(&::HMUI::TableView::LayoutCellForIdx)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x21de9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "LayoutCellForIdx", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.AddCellToReusableCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::TableCell*)>(&::HMUI::TableView::AddCellToReusableCells)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x21de874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "AddCellToReusableCells", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.HandleScrollRectValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(float_t)>(&::HMUI::TableView::HandleScrollRectValueChanged)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21deb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "HandleScrollRectValueChanged", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.HandleCellSelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::HMUI::SelectableCell*, ::HMUI::__SelectableCell__TransitionType, ::System::Object*)>(
    &::HMUI::TableView::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x21deb74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "HandleCellSelectionDidChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t)>(&::HMUI::TableView::DidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21dee40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ReloadDataKeepingPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ReloadDataKeepingPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21dee68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ReloadDataKeepingPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ReloadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ReloadData)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x21dc144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.InsertCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, int32_t)>(&::HMUI::TableView::InsertCells)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x21dc70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "InsertCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DeleteCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, int32_t)>(&::HMUI::TableView::DeleteCells)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x21dcb64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "DeleteCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.DequeueReusableCellForIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::TableCell> (::HMUI::TableView::*)(::StringW)>(
    &::HMUI::TableView::DequeueReusableCellForIdentifier)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x21db118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "DequeueReusableCellForIdentifier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.SelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, bool)>(&::HMUI::TableView::SelectCellWithIdx)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x21deeb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "SelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ClearSelection)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x21df09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ClearSelection",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ClearHighlights
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::ClearHighlights)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x21de49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ClearHighlights",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ScrollToCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(int32_t, ::HMUI::__TableView__ScrollPositionType, bool)>(
    &::HMUI::TableView::ScrollToCellWithIdx)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21dcf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ScrollToCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__ScrollPositionType>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView.ChangeRectSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)(::UnityEngine::__RectTransform__Axis, float_t)>(&::HMUI::TableView::ChangeRectSize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21df248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ChangeRectSize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Axis>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::TableView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::TableView::*)()>(&::HMUI::TableView::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21dcff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::ITableCellOwner"
constexpr HMUI::TableView::operator ::HMUI::ITableCellOwner*() noexcept {
  return static_cast<::HMUI::ITableCellOwner*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::ITableCellOwner"
constexpr ::HMUI::ITableCellOwner* HMUI::TableView::i___HMUI__ITableCellOwner() noexcept {
  return static_cast<::HMUI::ITableCellOwner*>(static_cast<void*>(this));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::HMUI::__TableView__TableType& HMUI::TableView::__cordl_internal_get__tableType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableType;
}
constexpr ::HMUI::__TableView__TableType const& HMUI::TableView::__cordl_internal_get__tableType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableType;
}
constexpr void HMUI::TableView::__cordl_internal_set__tableType(::HMUI::__TableView__TableType value) {
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
constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*>& HMUI::TableView::__cordl_internal_get__preallocatedCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocatedCells;
}
constexpr ::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> const& HMUI::TableView::__cordl_internal_get__preallocatedCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____preallocatedCells;
}
constexpr void HMUI::TableView::__cordl_internal_set__preallocatedCells(::ArrayW<::HMUI::__TableView__CellsGroup*, ::Array<::HMUI::__TableView__CellsGroup*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____preallocatedCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*& HMUI::TableView::__cordl_internal_get_didSelectCellWithIdxEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*> const& HMUI::TableView::__cordl_internal_get_didSelectCellWithIdxEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellWithIdxEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectCellWithIdxEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didReloadDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReloadDataEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& HMUI::TableView::__cordl_internal_get_didReloadDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didReloadDataEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didReloadDataEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didInsertCellsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInsertCellsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& HMUI::TableView::__cordl_internal_get_didInsertCellsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didInsertCellsEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didInsertCellsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didDeleteCellsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeleteCellsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& HMUI::TableView::__cordl_internal_get_didDeleteCellsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeleteCellsEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didDeleteCellsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::HMUI::TableView>>*& HMUI::TableView::__cordl_internal_get_didChangeRectSizeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeRectSizeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::HMUI::TableView>>*> const& HMUI::TableView::__cordl_internal_get_didChangeRectSizeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangeRectSizeEvent;
}
constexpr void HMUI::TableView::__cordl_internal_set_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangeRectSizeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewportTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__TableView__IDataSource*& HMUI::TableView::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__TableView__IDataSource*> const& HMUI::TableView::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void HMUI::TableView::__cordl_internal_set__dataSource(::HMUI::__TableView__IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*> const& HMUI::TableView::__cordl_internal_get__visibleCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____visibleCells;
}
constexpr void HMUI::TableView::__cordl_internal_set__visibleCells(::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____visibleCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>*& HMUI::TableView::__cordl_internal_get__reusableCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableCells;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>*> const&
HMUI::TableView::__cordl_internal_get__reusableCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableCells;
}
constexpr void
HMUI::TableView::__cordl_internal_set__reusableCells(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::HMUI::TableCell>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reusableCells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& HMUI::TableView::__cordl_internal_get__selectedCellIdxs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIdxs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& HMUI::TableView::__cordl_internal_get__selectedCellIdxs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellIdxs;
}
constexpr void HMUI::TableView::__cordl_internal_set__selectedCellIdxs(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedCellIdxs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_selectionType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableViewSelectionType, false>(this, ___internal_method);
}
inline void HMUI::TableView::set_selectionType(::HMUI::TableViewSelectionType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "set_selectionType", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableViewSelectionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HMUI::TableView::get_canSelectSelectedCell() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_canSelectSelectedCell",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::TableView::add_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didSelectCellWithIdxEvent(::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didSelectCellWithIdxEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityW<::HMUI::TableView>, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didReloadDataEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didReloadDataEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didReloadDataEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didInsertCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didInsertCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didInsertCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didDeleteCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didDeleteCellsEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didDeleteCellsEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::add_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "add_didChangeRectSizeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::TableView::remove_didChangeRectSizeEvent(::System::Action_1<::UnityW<::HMUI::TableView>>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "remove_didChangeRectSizeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::HMUI::TableView>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::__TableView__IDataSource* HMUI::TableView::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_dataSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__TableView__IDataSource*, false>(this, ___internal_method);
}
inline void HMUI::TableView::SetDataSource(::HMUI::__TableView__IDataSource* newDataSource, bool reloadData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "SetDataSource", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__IDataSource*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newDataSource, reloadData);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>* HMUI::TableView::get_visibleCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_visibleCells",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::HMUI::TableCell>>*, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::TableView::get_viewportTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_viewportTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::TableView::get_contentTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_contentTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline int32_t HMUI::TableView::get_numberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_numberOfCells",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t HMUI::TableView::get_cellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_cellSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::HMUI::__TableView__TableType HMUI::TableView::get_tableType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_tableType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__TableView__TableType, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ScrollView> HMUI::TableView::get_scrollView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "get_scrollView",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ScrollView>, false>(this, ___internal_method);
}
inline void HMUI::TableView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::LazyInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "LazyInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::Hide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "Hide",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::Show() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "Show",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::RefreshContentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "RefreshContentSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::RefreshCellsContent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "RefreshCellsContent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Tuple_2<int32_t, int32_t>* HMUI::TableView::GetVisibleCellsIdRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "GetVisibleCellsIdRange",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<int32_t, int32_t>*, false>(this, ___internal_method);
}
inline void HMUI::TableView::RefreshCells(bool forcedVisualsRefresh, bool forcedContentRefresh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "RefreshCells", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forcedVisualsRefresh, forcedContentRefresh);
}
inline void HMUI::TableView::LayoutCellForIdx(::HMUI::TableCell* cell, int32_t idx, float_t offset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "LayoutCellForIdx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell, idx, offset);
}
inline void HMUI::TableView::AddCellToReusableCells(::HMUI::TableCell* cell) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "AddCellToReusableCells", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableCell*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cell);
}
inline void HMUI::TableView::HandleScrollRectValueChanged(float_t f) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "HandleScrollRectValueChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, f);
}
inline void HMUI::TableView::HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* changeOwner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "HandleCellSelectionDidChange", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::TableView::DidSelectCellWithIdx(int32_t idx) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline void HMUI::TableView::ReloadDataKeepingPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ReloadDataKeepingPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::ReloadData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::InsertCells(int32_t idx, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "InsertCells", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, count);
}
inline void HMUI::TableView::DeleteCells(int32_t idx, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "DeleteCells", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, count);
}
inline ::UnityW<::HMUI::TableCell> HMUI::TableView::DequeueReusableCellForIdentifier(::StringW identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "DequeueReusableCellForIdentifier", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>, false>(this, ___internal_method, identifier);
}
/// @param callbackTable: bool (default: false)
inline void HMUI::TableView::SelectCellWithIdx(int32_t idx, bool callbackTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "SelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, callbackTable);
}
inline void HMUI::TableView::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ClearSelection",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::ClearHighlights() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ClearHighlights",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::TableView::ScrollToCellWithIdx(int32_t idx, ::HMUI::__TableView__ScrollPositionType scrollPositionType, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ScrollToCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__TableView__ScrollPositionType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, scrollPositionType, animated);
}
inline void HMUI::TableView::ChangeRectSize(::UnityEngine::__RectTransform__Axis axis, float_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), "ChangeRectSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__RectTransform__Axis>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis, size);
}
inline ::HMUI::TableView* HMUI::TableView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::TableView*>());
}
inline void HMUI::TableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::TableView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::TableView::TableView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
