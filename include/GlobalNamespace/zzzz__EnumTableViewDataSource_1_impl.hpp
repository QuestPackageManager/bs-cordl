#pragma once
// IWYU pragma private; include "GlobalNamespace/EnumTableViewDataSource_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnumTableViewDataSource_1_def.hpp"
#include "GlobalNamespace/zzzz__TextOnlyTableCell_def.hpp"
#include "HMUI/zzzz__TableCell_def.hpp"
#include "HMUI/zzzz__TableView_def.hpp"
template <typename T> constexpr ::UnityW<::GlobalNamespace::TextOnlyTableCell>& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__cellPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
template <typename T> constexpr ::UnityW<::GlobalNamespace::TextOnlyTableCell> const& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__cellPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellPrefab;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_set__cellPrefab(::UnityW<::GlobalNamespace::TextOnlyTableCell> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellPrefab = value;
}
template <typename T> constexpr float_t& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__cellHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
template <typename T> constexpr float_t const& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__cellHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cellHeight;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_set__cellHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cellHeight = value;
}
template <typename T> constexpr ::ArrayW<T>& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename T> constexpr ::ArrayW<T> const& GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
template <typename T> constexpr void GlobalNamespace::EnumTableViewDataSource_1<T>::__cordl_internal_set__values(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
template <typename T> inline float_t GlobalNamespace::EnumTableViewDataSource_1<T>::CellSize(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), { "CellSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, idx);
}
template <typename T> inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::NumberOfCells() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), { "NumberOfCells", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::UnityW<::HMUI::TableCell> GlobalNamespace::EnumTableViewDataSource_1<T>::CellForIdx(::HMUI::TableView* tableView, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(),
                                                                                         { "CellForIdx", {}, { ::i2c::type_of<::HMUI::TableView*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::TableCell>>(this, ___internal_method, tableView, idx);
}
template <typename T> inline int32_t GlobalNamespace::EnumTableViewDataSource_1<T>::GetIdForValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), { "GetIdForValue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), { "GetLabelForId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, id);
}
template <typename T> inline T GlobalNamespace::EnumTableViewDataSource_1<T>::GetValueForId(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), { "GetValueForId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, id);
}
template <typename T> inline ::StringW GlobalNamespace::EnumTableViewDataSource_1<T>::GetLabelForValue(T value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
template <typename T> inline void GlobalNamespace::EnumTableViewDataSource_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnumTableViewDataSource_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::EnumTableViewDataSource_1<T>* GlobalNamespace::EnumTableViewDataSource_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnumTableViewDataSource_1<T>*>());
}
/// @brief Convert operator to "::HMUI::TableView_IDataSource"
template <typename T> constexpr GlobalNamespace::EnumTableViewDataSource_1<T>::operator ::HMUI::TableView_IDataSource*() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::TableView_IDataSource"
template <typename T> constexpr ::HMUI::TableView_IDataSource* GlobalNamespace::EnumTableViewDataSource_1<T>::i___HMUI__TableView_IDataSource() noexcept {
  return static_cast<::HMUI::TableView_IDataSource*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::EnumTableViewDataSource_1<T>::EnumTableViewDataSource_1() {}
