#pragma once
// IWYU pragma private; include "GlobalNamespace\FileBrowserTableView.hpp"
#include "GlobalNamespace/zzzz__FileBrowserItem_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FileBrowserTableView_def.hpp"
#include "GlobalNamespace/zzzz__FileBrowserItem_def.hpp"
#include "GlobalNamespace/zzzz__FileBrowserTableCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.add_didSelectRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*)>(&::GlobalNamespace::FileBrowserTableView::add_didSelectRow)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5924034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(),
                            { "add_didSelectRow", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.remove_didSelectRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(
    ::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*)>(&::GlobalNamespace::FileBrowserTableView::remove_didSelectRow)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59240f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(),
                            { "remove_didSelectRow", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(::ArrayW<::GlobalNamespace::FileBrowserItem*>)>(
    &::GlobalNamespace::FileBrowserTableView::Init)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x59241b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::FileBrowserItem*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.SetItems
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(::ArrayW<::GlobalNamespace::FileBrowserItem*>)>(
    &::GlobalNamespace::FileBrowserTableView::SetItems)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59242c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "SetItems", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::FileBrowserItem*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.SelectAndScrollRowToItemWithPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FileBrowserTableView::*)(::StringW)>(&::GlobalNamespace::FileBrowserTableView::SelectAndScrollRowToItemWithPath)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x592430c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "SelectAndScrollRowToItemWithPath", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::FileBrowserTableView::*)(int32_t)>(&::GlobalNamespace::FileBrowserTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59243dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::FileBrowserTableView::*)()>(&::GlobalNamespace::FileBrowserTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59243e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::FileBrowserTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::FileBrowserTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59243fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.HandleDidSelectRowEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::FileBrowserTableView::HandleDidSelectRowEvent)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5924584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(),
                                                                                           { "HandleDidSelectRowEvent", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.SelectAndScrollRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(int32_t)>(&::GlobalNamespace::FileBrowserTableView::SelectAndScrollRow)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5924390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "SelectAndScrollRow", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView.ClearSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)(bool, bool)>(&::GlobalNamespace::FileBrowserTableView::ClearSelection)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x59245d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "ClearSelection", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileBrowserTableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileBrowserTableView::*)()>(&::GlobalNamespace::FileBrowserTableView::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5924630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TableView>& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::UnityW<::HMUI::TableView> const& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::FileBrowserTableView::__cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableView = value;
}
constexpr ::UnityW<::GlobalNamespace::FileBrowserTableCell>& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::FileBrowserTableCell> const& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::FileBrowserTableView::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::FileBrowserTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
constexpr float_t& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__cellHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
constexpr float_t const& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__cellHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
constexpr void GlobalNamespace::FileBrowserTableView::__cordl_internal_set__cellHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellHeight = value;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*& GlobalNamespace::FileBrowserTableView::__cordl_internal_get_didSelectRow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRow;
}
constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* const&
GlobalNamespace::FileBrowserTableView::__cordl_internal_get_didSelectRow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectRow;
}
constexpr void
GlobalNamespace::FileBrowserTableView::__cordl_internal_set_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectRow = value;
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*>& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr ::ArrayW<::GlobalNamespace::FileBrowserItem*> const& GlobalNamespace::FileBrowserTableView::__cordl_internal_get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____items;
}
constexpr void GlobalNamespace::FileBrowserTableView::__cordl_internal_set__items(::ArrayW<::GlobalNamespace::FileBrowserItem*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____items = value;
}
inline void GlobalNamespace::FileBrowserTableView::add_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(),
                                       { "add_didSelectRow", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FileBrowserTableView::remove_didSelectRow(::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(),
                          { "remove_didSelectRow", {}, { ::i2c::type_of<::System::Action_2<::UnityW<::GlobalNamespace::FileBrowserTableView>, ::GlobalNamespace::FileBrowserItem*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::FileBrowserTableView::Init(::ArrayW<::GlobalNamespace::FileBrowserItem*> items) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "Init", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::FileBrowserItem*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
inline void GlobalNamespace::FileBrowserTableView::SetItems(::ArrayW<::GlobalNamespace::FileBrowserItem*> items) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "SetItems", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::FileBrowserItem*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
inline bool GlobalNamespace::FileBrowserTableView::SelectAndScrollRowToItemWithPath(::StringW folderPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "SelectAndScrollRowToItemWithPath", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, folderPath);
}
inline float_t GlobalNamespace::FileBrowserTableView::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::FileBrowserTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::FileBrowserTableView::CellForIdx(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::FileBrowserTableView::HandleDidSelectRowEvent(::HMUI::TableView* tableView, int32_t row) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(),
                                                                                         { "HandleDidSelectRowEvent", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableView, row);
}
inline void GlobalNamespace::FileBrowserTableView::SelectAndScrollRow(int32_t row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "SelectAndScrollRow", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, row);
}
inline void GlobalNamespace::FileBrowserTableView::ClearSelection(bool animated, bool scrollToRow0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { "ClearSelection", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated, scrollToRow0);
}
inline void GlobalNamespace::FileBrowserTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileBrowserTableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FileBrowserTableView* GlobalNamespace::FileBrowserTableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileBrowserTableView*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::FileBrowserTableView::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::FileBrowserTableView::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileBrowserTableView::FileBrowserTableView() {}
