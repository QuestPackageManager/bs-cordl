#pragma once
// IWYU pragma private; include "GlobalNamespace/TableViewWithDetailCell.hpp"
#include "HMUI/zzzz__TableView_impl.hpp"
#include "GlobalNamespace/zzzz__TableViewWithDetailCell_def.hpp"
#include "GlobalNamespace/zzzz__TableViewWithDetailCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell_IDataSource.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TableViewWithDetailCell_IDataSource::*)()>(&::GlobalNamespace::TableViewWithDetailCell_IDataSource::CellSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell_IDataSource.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TableViewWithDetailCell_IDataSource::*)()>(&::GlobalNamespace::TableViewWithDetailCell_IDataSource::NumberOfCells)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell_IDataSource.CellForContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::TableViewWithDetailCell_IDataSource::*)(
    ::GlobalNamespace::TableViewWithDetailCell*, int32_t, bool)>(&::GlobalNamespace::TableViewWithDetailCell_IDataSource::CellForContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell_IDataSource.CellForDetail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::TableViewWithDetailCell_IDataSource::*)(::GlobalNamespace::TableViewWithDetailCell*, int32_t)>(
    &::GlobalNamespace::TableViewWithDetailCell_IDataSource::CellForDetail)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 3 }));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::TableViewWithDetailCell_IDataSource::CellSize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::TableViewWithDetailCell_IDataSource::NumberOfCells() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::TableViewWithDetailCell_IDataSource::CellForContent(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t idx, bool detailOpened) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx, detailOpened);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::TableViewWithDetailCell_IDataSource::CellForDetail(::GlobalNamespace::TableViewWithDetailCell* tableView, int32_t contentIdx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, contentIdx);
}
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.add_didSelectContentCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*)>(
    &::GlobalNamespace::TableViewWithDetailCell::add_didSelectContentCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5875dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                                { "add_didSelectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.remove_didSelectContentCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*)>(
    &::GlobalNamespace::TableViewWithDetailCell::remove_didSelectContentCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5875eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                                { "remove_didSelectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.add_didDeselectContentCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*)>(
    &::GlobalNamespace::TableViewWithDetailCell::add_didDeselectContentCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5875f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                                { "add_didDeselectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.remove_didDeselectContentCellEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*)>(
    &::GlobalNamespace::TableViewWithDetailCell::remove_didDeselectContentCellEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587602c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                         { "remove_didDeselectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.get_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TableViewWithDetailCell_IDataSource* (::GlobalNamespace::TableViewWithDetailCell::*)()>(
    &::GlobalNamespace::TableViewWithDetailCell::get_dataSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58760ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "get_dataSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.set_dataSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(::GlobalNamespace::TableViewWithDetailCell_IDataSource*)>(
    &::GlobalNamespace::TableViewWithDetailCell::set_dataSource)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58760f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                                                                           { "set_dataSource", {}, { ::i2c::type_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TableViewWithDetailCell::*)(int32_t)>(&::GlobalNamespace::TableViewWithDetailCell::CellSize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5876120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TableViewWithDetailCell::*)()>(&::GlobalNamespace::TableViewWithDetailCell::NumberOfCells)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58761c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::TableViewWithDetailCell::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::TableViewWithDetailCell::CellForIdx)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x587627c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)()>(&::GlobalNamespace::TableViewWithDetailCell::ReloadData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5876468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.ReloadData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(int32_t)>(&::GlobalNamespace::TableViewWithDetailCell::ReloadData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5876490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "ReloadData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell.DidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)(int32_t)>(&::GlobalNamespace::TableViewWithDetailCell::DidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x58764cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableViewWithDetailCell._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TableViewWithDetailCell::*)()>(&::GlobalNamespace::TableViewWithDetailCell::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x587660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get_didSelectContentCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectContentCellEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* const& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get_didSelectContentCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectContentCellEvent;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__cordl_internal_set_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectContentCellEvent = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get_didDeselectContentCellEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeselectContentCellEvent;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* const& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get_didDeselectContentCellEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDeselectContentCellEvent;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__cordl_internal_set_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didDeselectContentCellEvent = value;
}
constexpr ::GlobalNamespace::TableViewWithDetailCell_IDataSource*& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get__dataSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr ::GlobalNamespace::TableViewWithDetailCell_IDataSource* const& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get__dataSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dataSource;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__cordl_internal_set__dataSource(::GlobalNamespace::TableViewWithDetailCell_IDataSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dataSource = value;
}
constexpr int32_t& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get__selectedId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedId;
}
constexpr int32_t const& GlobalNamespace::TableViewWithDetailCell::__cordl_internal_get__selectedId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedId;
}
constexpr void GlobalNamespace::TableViewWithDetailCell::__cordl_internal_set__selectedId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedId = value;
}
inline void GlobalNamespace::TableViewWithDetailCell::add_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                              { "add_didSelectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TableViewWithDetailCell::remove_didSelectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                              { "remove_didSelectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TableViewWithDetailCell::add_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                              { "add_didDeselectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TableViewWithDetailCell::remove_didDeselectContentCellEvent(::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                              { "remove_didDeselectContentCellEvent", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::TableViewWithDetailCell>, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::TableViewWithDetailCell_IDataSource* GlobalNamespace::TableViewWithDetailCell::get_dataSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "get_dataSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>(this, ___internal_method);
}
inline void GlobalNamespace::TableViewWithDetailCell::set_dataSource(::GlobalNamespace::TableViewWithDetailCell_IDataSource* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(),
                                                                                         { "set_dataSource", {}, { ::i2c::type_of<::GlobalNamespace::TableViewWithDetailCell_IDataSource*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::TableViewWithDetailCell::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::TableViewWithDetailCell::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::TableViewWithDetailCell::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::TableViewWithDetailCell::ReloadData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TableViewWithDetailCell::ReloadData(int32_t currentNewIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { "ReloadData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentNewIndex);
}
inline void GlobalNamespace::TableViewWithDetailCell::DidSelectCellWithIdx(int32_t idx) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::TableViewWithDetailCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TableViewWithDetailCell*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TableViewWithDetailCell* GlobalNamespace::TableViewWithDetailCell::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TableViewWithDetailCell*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::TableViewWithDetailCell::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::TableViewWithDetailCell::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TableViewWithDetailCell::TableViewWithDetailCell() {}
