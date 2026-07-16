#pragma once
// IWYU pragma private; include "HMUI/SegmentedControl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__SegmentedControlCell_def.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::HMUI::SegmentedControl_IDataSource.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::SegmentedControl_IDataSource::*)()>(&::HMUI::SegmentedControl_IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl_IDataSource*>(), { ::i2c::class_of<::HMUI::SegmentedControl_IDataSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl_IDataSource.CellForCellNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::SegmentedControlCell> (::HMUI::SegmentedControl_IDataSource::*)(int32_t)>(
    &::HMUI::SegmentedControl_IDataSource::CellForCellNumber)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl_IDataSource*>(), { ::i2c::class_of<::HMUI::SegmentedControl_IDataSource*>(), 1 }));
    return ___internal_method;
  }
};
inline int32_t HMUI::SegmentedControl_IDataSource::NumberOfCells() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SegmentedControl_IDataSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::SegmentedControlCell> HMUI::SegmentedControl_IDataSource::CellForCellNumber(int32_t cellNumber) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::SegmentedControl_IDataSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::SegmentedControlCell>>(this, ___internal_method, cellNumber);
}
//  Writing Method size for method: ::HMUI::SegmentedControl.add_didSelectCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*)>(
    &::HMUI::SegmentedControl::add_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f50cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "add_didSelectCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.remove_didSelectCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*)>(
    &::HMUI::SegmentedControl::remove_didSelectCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f50d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(),
                                                             { "remove_didSelectCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.add_didPressNonInteractableCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*)>(
    &::HMUI::SegmentedControl::add_didPressNonInteractableCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f50e38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(),
                                                             { "add_didPressNonInteractableCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.remove_didPressNonInteractableCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*)>(
    &::HMUI::SegmentedControl::remove_didPressNonInteractableCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f50ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(),
                                                { "remove_didPressNonInteractableCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::SegmentedControl_IDataSource* (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f50fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.set_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SegmentedControl_IDataSource*)>(&::HMUI::SegmentedControl::set_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f4fca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "set_dataSource", {}, { ::i2c::type_of<::HMUI::SegmentedControl_IDataSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_selectedCellNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::get_selectedCellNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f50fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "get_selectedCellNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.get_cells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* (::HMUI::SegmentedControl::*)()>(
    &::HMUI::SegmentedControl::get_cells)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f50fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "get_cells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.CreateCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::CreateCells)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x5f50fd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "CreateCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.HandleCellSelectionDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType, ::System::Object*)>(
    &::HMUI::SegmentedControl::HandleCellSelectionDidChange)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f51620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::SegmentedControl*>(),
            { "HandleCellSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.HandleNonInteractableCellWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(::HMUI::SelectableCell*)>(&::HMUI::SegmentedControl::HandleNonInteractableCellWasPressed)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5f51794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "HandleNonInteractableCellWasPressed", {}, { ::i2c::type_of<::HMUI::SelectableCell*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SetCallbackForCell
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t, ::System::Action_1<int32_t>*)>(&::HMUI::SegmentedControl::SetCallbackForCell)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f5184c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "SetCallbackForCell", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::ReloadData)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x5f4fcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "ReloadData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl.SelectCellWithNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)(int32_t)>(&::HMUI::SegmentedControl::SelectCellWithNumber)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5f518c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "SelectCellWithNumber", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SegmentedControl._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SegmentedControl::*)()>(&::HMUI::SegmentedControl::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5f50654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& HMUI::SegmentedControl::__cordl_internal_get__separatorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorPrefab;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HMUI::SegmentedControl::__cordl_internal_get__separatorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separatorPrefab;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__separatorPrefab(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separatorPrefab = value;
}
constexpr ::Zenject::DiContainer*& HMUI::SegmentedControl::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr ::Zenject::DiContainer* const& HMUI::SegmentedControl::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*& HMUI::SegmentedControl::__cordl_internal_get_didSelectCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* const& HMUI::SegmentedControl::__cordl_internal_get_didSelectCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCellEvent;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCellEvent = value;
}
constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*& HMUI::SegmentedControl::__cordl_internal_get_didPressNonInteractableCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressNonInteractableCellEvent;
}
constexpr ::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* const& HMUI::SegmentedControl::__cordl_internal_get_didPressNonInteractableCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didPressNonInteractableCellEvent;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didPressNonInteractableCellEvent = value;
}
constexpr int32_t& HMUI::SegmentedControl::__cordl_internal_get__numberOfCells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfCells;
}
constexpr int32_t const& HMUI::SegmentedControl::__cordl_internal_get__numberOfCells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numberOfCells;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__numberOfCells(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numberOfCells = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>*& HMUI::SegmentedControl::__cordl_internal_get__cells() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* const& HMUI::SegmentedControl::__cordl_internal_get__cells() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cells;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__cells(::System::Collections::Generic::List_1<::UnityW<::HMUI::SegmentedControlCell>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cells = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& HMUI::SegmentedControl::__cordl_internal_get__separators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separators;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& HMUI::SegmentedControl::__cordl_internal_get__separators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____separators;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__separators(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____separators = value;
}
constexpr ::HMUI::SegmentedControl_IDataSource*& HMUI::SegmentedControl::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::HMUI::SegmentedControl_IDataSource* const& HMUI::SegmentedControl::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__dataSource(::HMUI::SegmentedControl_IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource = value;
}
constexpr int32_t& HMUI::SegmentedControl::__cordl_internal_get__selectedCellNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellNumber;
}
constexpr int32_t const& HMUI::SegmentedControl::__cordl_internal_get__selectedCellNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedCellNumber;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__selectedCellNumber(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedCellNumber = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>*& HMUI::SegmentedControl::__cordl_internal_get__callbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* const& HMUI::SegmentedControl::__cordl_internal_get__callbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callbacks;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t, ::System::Action_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____callbacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>*&
HMUI::SegmentedControl::__cordl_internal_get__reusableCellPools() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableCellPools;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* const&
HMUI::SegmentedControl::__cordl_internal_get__reusableCellPools() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reusableCellPools;
}
constexpr void HMUI::SegmentedControl::__cordl_internal_set__reusableCellPools(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Object>, ::System::Collections::Generic::Queue_1<::UnityW<::HMUI::SegmentedControlCell>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reusableCellPools = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>*& HMUI::SegmentedControl::__cordl_internal_get__cellToPrefabMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellToPrefabMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* const&
HMUI::SegmentedControl::__cordl_internal_get__cellToPrefabMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellToPrefabMap;
}
constexpr void
HMUI::SegmentedControl::__cordl_internal_set__cellToPrefabMap(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::SegmentedControlCell>, ::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellToPrefabMap = value;
}
inline void HMUI::SegmentedControl::add_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "add_didSelectCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::remove_didSelectCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "remove_didSelectCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::add_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(),
                                                           { "add_didPressNonInteractableCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SegmentedControl::remove_didPressNonInteractableCellEvent(::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(),
                                                           { "remove_didPressNonInteractableCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::HMUI::SegmentedControl>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::SegmentedControl_IDataSource* HMUI::SegmentedControl::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::SegmentedControl_IDataSource*>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::set_dataSource(::HMUI::SegmentedControl_IDataSource* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "set_dataSource", {}, { ::i2c::type_of<::HMUI::SegmentedControl_IDataSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t HMUI::SegmentedControl::get_selectedCellNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "get_selectedCellNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>* HMUI::SegmentedControl::get_cells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "get_cells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::HMUI::SegmentedControlCell>>*>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::CreateCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "CreateCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::HandleCellSelectionDidChange(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType, ::System::Object* changeOwner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::SegmentedControl*>(),
          { "HandleCellSelectionDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType, changeOwner);
}
inline void HMUI::SegmentedControl::HandleNonInteractableCellWasPressed(::HMUI::SelectableCell* selectableCell) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "HandleNonInteractableCellWasPressed", {}, { ::i2c::type_of<::HMUI::SelectableCell*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell);
}
inline void HMUI::SegmentedControl::SetCallbackForCell(int32_t cellNumber, ::System::Action_1<int32_t>* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "SetCallbackForCell", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cellNumber, callback);
}
inline void HMUI::SegmentedControl::ReloadData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "ReloadData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SegmentedControl::SelectCellWithNumber(int32_t selectCellNumber) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "SelectCellWithNumber", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectCellNumber);
}
template <typename T> inline T HMUI::SegmentedControl::GetReusableCell(::UnityEngine::Object* prefab) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { "GetReusableCell", { ::i2c::class_of<T>() }, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, prefab);
}
inline void HMUI::SegmentedControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SegmentedControl*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::SegmentedControl* HMUI::SegmentedControl::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::SegmentedControl*>());
}
// Ctor Parameters []
constexpr ::HMUI::SegmentedControl::SegmentedControl() {}
