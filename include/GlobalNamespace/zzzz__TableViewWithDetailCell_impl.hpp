#pragma once
#include "HMUI/zzzz__TableView_impl.hpp"
#include "GlobalNamespace/zzzz__TableViewWithDetailCell_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "GlobalNamespace/zzzz__TableViewWithDetailCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TableViewWithDetailCell__IDataSource.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__TableViewWithDetailCell__IDataSource::*)()>(
    &::GlobalNamespace::__TableViewWithDetailCell__IDataSource::CellSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TableViewWithDetailCell__IDataSource.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__TableViewWithDetailCell__IDataSource::*)()>(
    &::GlobalNamespace::__TableViewWithDetailCell__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TableViewWithDetailCell__IDataSource.CellForContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::HMUI::TableCell* (::GlobalNamespace::__TableViewWithDetailCell__IDataSource::*)(::GlobalNamespace::TableViewWithDetailCell*, int32_t, bool)>(
        &::GlobalNamespace::__TableViewWithDetailCell__IDataSource::CellForContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TableViewWithDetailCell__IDataSource.CellForDetail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (
    ::GlobalNamespace::__TableViewWithDetailCell__IDataSource::*)(::GlobalNamespace::TableViewWithDetailCell*, int32_t)>(&::GlobalNamespace::__TableViewWithDetailCell__IDataSource::CellForDetail)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 3));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::__TableViewWithDetailCell__IDataSource::CellSize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__TableViewWithDetailCell__IDataSource::NumberOfCells() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::__TableViewWithDetailCell__IDataSource::CellForContent(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t idx, bool detailOpened) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, idx, detailOpened);
}
inline ::HMUI::TableCell* GlobalNamespace::__TableViewWithDetailCell__IDataSource::CellForDetail(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t contentIdx) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, contentIdx);
}
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.add_didSelectContentCellEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(
    ::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*)>(&::GlobalNamespace::TableViewWithDetailCell::add_didSelectContentCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2116360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "add_didSelectContentCellEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.remove_didSelectContentCellEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(
    ::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*)>(&::GlobalNamespace::TableViewWithDetailCell::remove_didSelectContentCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2116410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "remove_didSelectContentCellEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.add_didDeselectContentCellEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(
    ::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*)>(&::GlobalNamespace::TableViewWithDetailCell::add_didDeselectContentCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21164c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "add_didDeselectContentCellEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.remove_didDeselectContentCellEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(
    ::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*)>(&::GlobalNamespace::TableViewWithDetailCell::remove_didDeselectContentCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2116570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "remove_didDeselectContentCellEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.get_dataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__TableViewWithDetailCell__IDataSource* (::GlobalNamespace::TableViewWithDetailCell::*)()>(
    &::GlobalNamespace::TableViewWithDetailCell::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(),
                                                                               "get_dataSource", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.set_dataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(::GlobalNamespace::__TableViewWithDetailCell__IDataSource*)>(
    &::GlobalNamespace::TableViewWithDetailCell::set_dataSource)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2116628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "set_dataSource", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.CellSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::TableViewWithDetailCell::*)()>(&::GlobalNamespace::TableViewWithDetailCell::CellSize)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x211664c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "CellSize",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::TableViewWithDetailCell::*)()>(
    &::GlobalNamespace::TableViewWithDetailCell::NumberOfCells)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x21166ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(),
                                                                               "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.CellForIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::TableCell* (::GlobalNamespace::TableViewWithDetailCell::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::TableViewWithDetailCell::CellForIdx)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x21167a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.ReloadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)()>(&::GlobalNamespace::TableViewWithDetailCell::ReloadData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2116980;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.ReloadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(int32_t)>(
    &::GlobalNamespace::TableViewWithDetailCell::ReloadData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21169a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "ReloadData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.DidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(int32_t)>(
    &::GlobalNamespace::TableViewWithDetailCell::DidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x21169e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)()>(&::GlobalNamespace::TableViewWithDetailCell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2116b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HMUI::__TableView__IDataSource"
constexpr GlobalNamespace::TableViewWithDetailCell::operator ::HMUI::__TableView__IDataSource*() noexcept {
  return static_cast<::HMUI::__TableView__IDataSource*>(static_cast<void*>(this));
}
constexpr ::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*& GlobalNamespace::TableViewWithDetailCell::__get_didSelectContentCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectContentCellEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*> const&
GlobalNamespace::TableViewWithDetailCell::__get_didSelectContentCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectContentCellEvent;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__set_didSelectContentCellEvent(::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectContentCellEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*& GlobalNamespace::TableViewWithDetailCell::__get_didDeselectContentCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeselectContentCellEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*> const&
GlobalNamespace::TableViewWithDetailCell::__get_didDeselectContentCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeselectContentCellEvent;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__set_didDeselectContentCellEvent(::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didDeselectContentCellEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__TableViewWithDetailCell__IDataSource*& GlobalNamespace::TableViewWithDetailCell::__get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*> const& GlobalNamespace::TableViewWithDetailCell::__get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__set__dataSource(::GlobalNamespace::__TableViewWithDetailCell__IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::TableViewWithDetailCell::__get__selectedId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedId;
}
constexpr int32_t const& GlobalNamespace::TableViewWithDetailCell::__get__selectedId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedId;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__set__selectedId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedId = value;
}
inline void GlobalNamespace::TableViewWithDetailCell::add_didSelectContentCellEvent(::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "add_didSelectContentCellEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TableViewWithDetailCell::remove_didSelectContentCellEvent(::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "remove_didSelectContentCellEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TableViewWithDetailCell::add_didDeselectContentCellEvent(::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "add_didDeselectContentCellEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TableViewWithDetailCell::remove_didDeselectContentCellEvent(::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "remove_didDeselectContentCellEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::TableViewWithDetailCell*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__TableViewWithDetailCell__IDataSource* GlobalNamespace::TableViewWithDetailCell::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(),
                                                                             "get_dataSource", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*, false>(this, ___internal_method);
}
inline void GlobalNamespace::TableViewWithDetailCell::set_dataSource(::GlobalNamespace::__TableViewWithDetailCell__IDataSource* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "set_dataSource", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__TableViewWithDetailCell__IDataSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TableViewWithDetailCell::CellSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "CellSize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TableViewWithDetailCell::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(),
                                                                             "NumberOfCells", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HMUI::TableCell* GlobalNamespace::TableViewWithDetailCell::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "CellForIdx", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::TableView*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::TableCell*, false>(this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::TableViewWithDetailCell::ReloadData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "ReloadData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::TableViewWithDetailCell::ReloadData(int32_t currentNewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "ReloadData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentNewIndex);
}
inline void GlobalNamespace::TableViewWithDetailCell::DidSelectCellWithIdx(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), "DidSelectCellWithIdx",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::TableViewWithDetailCell* GlobalNamespace::TableViewWithDetailCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TableViewWithDetailCell*>());
}
inline void GlobalNamespace::TableViewWithDetailCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableViewWithDetailCell*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TableViewWithDetailCell::TableViewWithDetailCell() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
