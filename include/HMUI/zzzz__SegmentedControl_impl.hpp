#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::HMUI::__SegmentedControl__IDataSource.NumberOfCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::__SegmentedControl__IDataSource::*)()>(&::HMUI::__SegmentedControl__IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__SegmentedControl__IDataSource.CellForCellNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::SegmentedControlCell* (::HMUI::__SegmentedControl__IDataSource::*)(int32_t)>(
    &::HMUI::__SegmentedControl__IDataSource::CellForCellNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(), 1));
    return ___internal_method;
  }
};
inline int32_t HMUI::__SegmentedControl__IDataSource::NumberOfCells() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HMUI::SegmentedControlCell* HMUI::__SegmentedControl__IDataSource::CellForCellNumber(int32_t cellNumber) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__SegmentedControl__IDataSource*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::HMUI::SegmentedControlCell*, false>(this, ___internal_method, cellNumber);
}
//  Writing Method size for method: ::HMUI::SegmentedControl.add_didSelectCellEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::HMUI::SegmentedControl*, int32_t>*)>(
    &::HMUI::SegmentedControl::add_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211f9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "add_didSelectCellEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.remove_didSelectCellEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::HMUI::SegmentedControl*, int32_t>*)>(
    &::HMUI::SegmentedControl::remove_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x211fa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "remove_didSelectCellEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_dataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__SegmentedControl__IDataSource* (::HMUI::SegmentedControl::*)()>(
    &::HMUI::SegmentedControl::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211fb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "get_dataSource",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.set_dataSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::__SegmentedControl__IDataSource*)>(
    &::HMUI::SegmentedControl::set_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211efbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "set_dataSource", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SegmentedControl__IDataSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_selectedCellNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211fb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "get_selectedCellNumber",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_cells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>* (::HMUI::SegmentedControl::*)()>(
    &::HMUI::SegmentedControl::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x211fb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "get_cells",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.CreateCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::CreateCells)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x211fb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "CreateCells",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.HandleCellSelectionDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SelectableCell*, ::HMUI::__SelectableCell__TransitionType, ::System::Object*)>(&::HMUI::SegmentedControl::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2120008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "HandleCellSelectionDidChange", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SetCallbackForCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t, ::System::Action_1<int32_t>*)>(
    &::HMUI::SegmentedControl::SetCallbackForCell)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2120158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "SetCallbackForCell", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.ReloadData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::ReloadData)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x211f004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "ReloadData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SelectCellWithNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t)>(&::HMUI::SegmentedControl::SelectCellWithNumber)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x21201c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "SelectCellWithNumber", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x211f844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Transform*& HMUI::SegmentedControl::__get__separatorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& HMUI::SegmentedControl::__get__separatorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorPrefab;
}
constexpr void HMUI::SegmentedControl::__set__separatorPrefab(::UnityEngine::Transform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____separatorPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::HMUI::SegmentedControl*, int32_t>*& HMUI::SegmentedControl::__get_didSelectCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::SegmentedControl*, int32_t>*> const& HMUI::SegmentedControl::__get_didSelectCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellEvent;
}
constexpr void HMUI::SegmentedControl::__set_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didSelectCellEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HMUI::SegmentedControl::__get__numberOfCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfCells;
}
constexpr int32_t const& HMUI::SegmentedControl::__get__numberOfCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfCells;
}
constexpr void HMUI::SegmentedControl::__set__numberOfCells(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfCells = value;
}
constexpr ::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*& HMUI::SegmentedControl::__get__cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>*> const& HMUI::SegmentedControl::__get__cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr void HMUI::SegmentedControl::__set__cells(::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cells)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& HMUI::SegmentedControl::__get__separators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separators;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& HMUI::SegmentedControl::__get__separators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separators;
}
constexpr void HMUI::SegmentedControl::__set__separators(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____separators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__SegmentedControl__IDataSource*& HMUI::SegmentedControl::__get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::__SegmentedControl__IDataSource*> const& HMUI::SegmentedControl::__get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void HMUI::SegmentedControl::__set__dataSource(::HMUI::__SegmentedControl__IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dataSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HMUI::SegmentedControl::__get__selectedCellNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellNumber;
}
constexpr int32_t const& HMUI::SegmentedControl::__get__selectedCellNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellNumber;
}
constexpr void HMUI::SegmentedControl::__set__selectedCellNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellNumber = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>*& HMUI::SegmentedControl::__get__callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>*> const& HMUI::SegmentedControl::__get__callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr void HMUI::SegmentedControl::__set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callbacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::SegmentedControl::add_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "add_didSelectCellEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::remove_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl*, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "remove_didSelectCellEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SegmentedControl*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::__SegmentedControl__IDataSource* HMUI::SegmentedControl::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "get_dataSource",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__SegmentedControl__IDataSource*, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::set_dataSource(::HMUI::__SegmentedControl__IDataSource* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "set_dataSource", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SegmentedControl__IDataSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HMUI::SegmentedControl::get_selectedCellNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "get_selectedCellNumber",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>* HMUI::SegmentedControl::get_cells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "get_cells",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell*>*, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::CreateCells() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "CreateCells",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::__SelectableCell__TransitionType transitionType, ::System::Object* changeOwner) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "HandleCellSelectionDidChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::SelectableCell*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::SegmentedControl::SetCallbackForCell(int32_t cellNumber, ::System::Action_1<int32_t>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "SetCallbackForCell", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cellNumber, callback);
}
inline void HMUI::SegmentedControl::ReloadData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "ReloadData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::SelectCellWithNumber(int32_t selectCellNumber) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), "SelectCellWithNumber", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectCellNumber);
}
inline ::HMUI::SegmentedControl* HMUI::SegmentedControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::SegmentedControl*>());
}
inline void HMUI::SegmentedControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SegmentedControl*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::SegmentedControl::SegmentedControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
