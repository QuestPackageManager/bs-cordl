#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicsTableView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicsTableView_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicTableCell_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.add_didSelectCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicsTableView::add_didSelectCharacteristic)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5968bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                             { "add_didSelectCharacteristic", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.remove_didSelectCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*)>(
    &::GlobalNamespace::BeatmapCharacteristicsTableView::remove_didSelectCharacteristic)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5968c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                             { "remove_didSelectCharacteristic", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&::GlobalNamespace::BeatmapCharacteristicsTableView::Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5968d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(::GlobalNamespace::BeatmapCharacteristicCollection*)>(
    &::GlobalNamespace::BeatmapCharacteristicsTableView::SetData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5968e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                                                           { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&::GlobalNamespace::BeatmapCharacteristicsTableView::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5968e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.CellSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(int32_t)>(&::GlobalNamespace::BeatmapCharacteristicsTableView::CellSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.NumberOfCells
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&::GlobalNamespace::BeatmapCharacteristicsTableView::NumberOfCells)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5968f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "NumberOfCells", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.CellForIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::TableCell> (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::BeatmapCharacteristicsTableView::CellForIdx)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5968fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                                                           { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.HandleDidSelectColumnEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(::HMUI::TableView*, int32_t)>(
    &::GlobalNamespace::BeatmapCharacteristicsTableView::HandleDidSelectColumnEvent)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x596918c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                                                           { "HandleDidSelectColumnEvent", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.HandleAdditionalContentModelDidInvalidateData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicsTableView::HandleAdditionalContentModelDidInvalidateData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5969278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView.SelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)(int32_t)>(&::GlobalNamespace::BeatmapCharacteristicsTableView::SelectCellWithIdx)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x596931c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "SelectCellWithIdx", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicsTableView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicsTableView::*)()>(&::GlobalNamespace::BeatmapCharacteristicsTableView::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5969338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::TableView>& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__tableView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr ::UnityW<::HMUI::TableView> const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__tableView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableView;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__tableView(::UnityW<::HMUI::TableView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableView = value;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell>& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::BeatmapCharacteristicTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__cellReuseIdentifier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellReuseIdentifier;
}
constexpr ::StringW const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__cellReuseIdentifier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellReuseIdentifier;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__cellReuseIdentifier(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellReuseIdentifier = value;
}
constexpr float_t& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__cellWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellWidth;
}
constexpr float_t const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__cellWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellWidth;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__cellWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellWidth = value;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get_didSelectCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCharacteristic;
}
constexpr ::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get_didSelectCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didSelectCharacteristic;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didSelectCharacteristic = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__beatmapCharacteristicCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__beatmapCharacteristicCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicCollection;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__beatmapCharacteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicCollection = value;
}
constexpr bool& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInitialized = value;
}
constexpr int32_t& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__selectedColumn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColumn;
}
constexpr int32_t const& GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_get__selectedColumn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedColumn;
}
constexpr void GlobalNamespace::BeatmapCharacteristicsTableView::__cordl_internal_set__selectedColumn(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedColumn = value;
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::add_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                           { "add_didSelectCharacteristic", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::remove_didSelectCharacteristic(::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                           { "remove_didSelectCharacteristic", {}, { ::i2c::type_of<::System::Action_1<::GlobalNamespace::BeatmapCharacteristic>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::SetData(::GlobalNamespace::BeatmapCharacteristicCollection* beatmapCharacteristicCollection) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                                                         { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicCollection*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristicCollection);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapCharacteristicsTableView::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
inline int32_t GlobalNamespace::BeatmapCharacteristicsTableView::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::HMUI::TableCell> GlobalNamespace::BeatmapCharacteristicsTableView::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                                                         { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::HandleDidSelectColumnEvent(::HMUI::TableView* tableView, int32_t column) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(),
                                                                                         { "HandleDidSelectColumnEvent", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tableView, column);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::HandleAdditionalContentModelDidInvalidateData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "HandleAdditionalContentModelDidInvalidateData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::SelectCellWithIdx(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { "SelectCellWithIdx", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx);
}
inline void GlobalNamespace::BeatmapCharacteristicsTableView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapCharacteristicsTableView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicsTableView* GlobalNamespace::BeatmapCharacteristicsTableView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapCharacteristicsTableView*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
constexpr GlobalNamespace::BeatmapCharacteristicsTableView::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::BeatmapCharacteristicsTableView::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicsTableView::BeatmapCharacteristicsTableView() {}
